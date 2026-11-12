#!/bin/bash
# uso: ./run.sh 01-basics/cses_missing_number.cpp

if [ -z "$1" ]; then
    echo "uso: ./run.sh caminho/do/arquivo.cpp"
    exit 1
fi

mkdir -p bin
g++ -std=c++17 -O2 -Wall -Wextra -o bin/sol "$1" || exit 1
./bin/sol
