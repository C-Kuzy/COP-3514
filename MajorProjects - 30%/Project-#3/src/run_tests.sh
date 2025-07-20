#!/bin/bash

# Local testing script
# Make sure you're in the P2_t2_tests directory

echo "=== COMPILING ==="
./run_compile.sh project2_task2.c
echo

if [[ ! -f ./a.out ]]; then
    echo "COMPILATION FAILED!"
    exit 1
fi

echo "COMPILATION SUCCESSFUL!"
echo

# Run tests
correct=0
total=0
if [[ -f ./a.out ]]; then
    compstatus="passed"
    i=1
    while [[ -f ./test_cases/${i}.in ]]; do
        total=$((total+1))
        # Copy the input file to input.txt for the program to read
        cp ./test_cases/${i}.in ./input.txt
        ./a.out > ${i}.log 2> ${i}.log
        
        echo "----------------------------------------"
        echo "CASE #${i}"
        echo "==="
        echo "Input:"
        cat ./test_cases/${i}.in
        echo "==="
        echo "Your Output:"
        cat -n ${i}.log
        echo "==="
        echo "Expected:"
        cat -n ./test_cases/${i}.out
        echo "==="
        
        # Compare outputs and show result
        if [[ $(diff -w ${i}.log ./test_cases/${i}.out) == "" ]]; then
            echo "✓ PASSED"
            correct=$((correct+1))
        else
            echo "✗ FAILED"
            echo "Difference:"
            diff -w ${i}.log ./test_cases/${i}.out
        fi
        
        i=$((i+1))
    done
else
    compstatus="failed"
fi

echo "----------------------------------------"
echo "=== SUMMARY ==="
echo "Passed: ${correct}/${total}"
if (( ${total} > 0 )); then
    percentage=$(echo "scale=2; 100*${correct}/${total}" | bc -l)
    echo "Score: ${percentage}%"
fi

# Clean up
rm -f *.log input.txt