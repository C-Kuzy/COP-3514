#!/bin/bash

# Directions:
#
# The `exe` variable must be the same as your executable's name. Adjust if needed.
#
# On wsl, mac, linux
# In the terminal:
# $ chmod +x kayak_rental.sh
# $ ./kayak_rental.sh
#
#
# Powershell on Windows:
# Install Git https://gitforwindows.org/
# In powershell:
# > bash ./kayak_rental.sh
#

echo "Running tests..."

exe=Project1

# Test case inputs
test_inputs=(
  $'5\n'
  $'1\n0\n25\n'
  $'1\n0\n2\n'
  $'1\n0\n5\n'
  $'1\n0\n7\n'
  $'1\n5\n0\n'
  $'2\n0\n5\n'
  $'3\n0\n7\n'
  $'4\n7\n1\n'
  $'4\n7\n7\n'
)

# Expected outputs
expected_outputs=(
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Invalid selection. Select from 1 to 4.'
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Enter days: Enter hours: Invalid hours.'
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Enter days: Enter hours: Charge($): 25'
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Enter days: Enter hours: Charge($): 55'
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Enter days: Enter hours: Charge($): 60'
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Enter days: Enter hours: Charge($): 300'
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Enter days: Enter hours: Charge($): 71'
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Enter days: Enter hours: Charge($): 100'
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Enter days: Enter hours: Charge($): 858'
  $'Please select from four kayak types: 1, 2, 3, and 4\nEnter kayak selection: Enter days: Enter hours: Charge($): 960'
)

# Run tests
for i in ${!test_inputs[@]}; do
  input=${test_inputs[$i]}
  expected=${expected_outputs[$i]}

  # Run the program with input and capture output
  output=$(echo -e ${input} | ./${exe})

  if [[ $output == $expected ]]; then
    echo -e "✅ PASSED test $((i + 1))"
  else
    echo -e "❌ FAILED test $((i + 1))"
    echo "Expected:"
    echo -e $expected
    echo "Got:"
    echo -e $output
  fi
done
