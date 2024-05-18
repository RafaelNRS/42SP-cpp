#!/bin/bash

# Test cases
declare -a files=("test1.txt" "test2.txt")
declare -a s1=("hello" "the")
declare -a s2=("hi" "a")

# Run the tests
for i in ${!files[@]}; do
    input_file=./tests/${files[$i]}
    string1=${s1[$i]}
    string2=${s2[$i]}
    output_file="${input_file}.replace"

    echo "##### FILE: ${input_file} #####"
    echo "============================================================="
    echo "Content before replace:"
    echo "============================================================="
    cat ${input_file}
    echo ""

    echo "Testing ${input_file} replacing '${string1}' with '${string2}'"
    ./bin/replace ${input_file} ${string1} ${string2}

    # Check if the output file is created
    if [ -f ${output_file} ]; then
        echo "Output file ${output_file} created successfully"
    else
        echo "Failed to create output file ${output_file}"
    fi

    echo "============================================================="
    echo "Content of ${output_file}:"
    echo "============================================================="
    cat ${output_file}
    echo ""
done

