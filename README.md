# cpp-bootcamp

Self-directed path through modern C++ (C++20), using [learncpp.com](https://www.learncpp.com/)
and one build per week. It ends in phase 1 of a limit order book matching engine,
which lives in its own repo.

## Build

Requires CMake 3.20+ and a C++20 compiler (GCC 11+ or Clang 14+).

```bash
cmake -S . -B build
cmake --build build
```

Every target compiles with `-Wall -Wextra -Wpedantic -Werror`.

## Weeks

| Week | Topic | Run |
|------|-------|-----|
| 1 | Toolchain + C → C++ port | `./build/week1` |
| 2 | References, const, program structure | — |
| 3 | Classes and invariants | — |
| 4 | Memory ownership + unit tests | — |
| 5 | STL containers and algorithms | — |

## Standards

- Formatted with `clang-format` (see `.clang-format`)
- No raw `new`/`delete` outside Week 4's deliberate exercise
- Tests from Week 4 onward
