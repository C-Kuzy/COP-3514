#!/bin/bash

# Local testing script
# Make sure you're in the P2_t1_tests directory

echo "=== COMPILING ==="
./run_compile.sh project2_task1.c
echo

if [[ ! -f ./a.out ]]; then
    echo "COMPILATION FAILED!"
    exit 1
fi

echo "COMPILATION SUCCESSFUL!"
echo

# Run test_cases
correct=0
total=0
i=1

echo "=== RUNNING TESTS ==="
while [[ -f ./test_cases/${i}.in ]]; do
    total=$((total+1))
    
    echo "CASE #${i}"
    echo "==="
    echo "Input:"
    cat ./test_cases/${i}.in
    echo "==="
    
    # Run the program and capture output
    ./a.out < ./test_cases/${i}.in > ${i}.log 2>&1
    
    echo "Your Output:"
    cat -n ${i}.log
    echo "==="
    echo "Expected:"
    cat -n ./test_cases/${i}.out
    echo "==="
    
    # Compare outputs
    if [[ $(diff -w ${i}.log ./test_cases/${i}.out) == "" ]]; then
        echo "✓ PASSED"
        correct=$((correct+1))
    else
        echo "✗ FAILED"
        echo "Difference:"
        diff -w ${i}.log ./test_cases/${i}.out
    fi
    
    echo
    echo "----------------------------------------"
    echo
    
    i=$((i+1))
done

# Summary
echo "=== SUMMARY ==="
echo "Passed: ${correct}/${total}"
if (( ${total} > 0 )); then
    percentage=$(echo "scale=2; 100*${correct}/${total}" | bc -l)
    echo "Score: ${percentage}%"
fi

# Clean up log files
rm -f *.log