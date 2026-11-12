# Competitive Programming in C++

Solutions and study notes from the *Competitive Programmer's Handbook* (Antti Laaksonen) and the CSES Problem Set.

## Structure

```
01-basics/                  Basics
02-sorting-and-search/      Sorting and searching
03-complete-search/         Complete search
04-greedy/                  Greedy algorithms
05-dynamic-programming/     Dynamic programming
06-data-structures/         Data structures
07-graphs/                  Graphs
notes/                      Study notes
template.cpp                Starter template
run.sh                      Compile and run a solution
```

## Running

```bash
./run.sh 01-basics/cses_weird_algorithm.cpp
```

The script compiles the file with `g++ -std=c++17 -O2 -Wall -Wextra` into `bin/sol` and runs it.

## Conventions

- One file per problem, named `platform_problem_name.cpp` in snake_case.
- Platform prefixes: `cses_`, `cf_`, `atcoder_`, `leetcode_`.
- Folders are numbered in study order. When a problem fits two categories, use its main technique.
- Every solution starts with a short header (problem, link, topic, idea, complexity).
