# Pattern Programs in C++

This repository contains a structured collection of C++ programs that generate a wide range of classical console-based patterns. These patterns are frequently used in foundational programming practice, interview preparation, and competitive programming to develop an understanding of nested loops, spacing logic, and formatted console output.

Each file corresponds to a single pattern, with embedded sample outputs included in the source code for clarity.

---

## Contents

The patterns are organized into three main categories:  
1. Star / Asterisk Patterns  
2. Number Patterns  
3. Alphabet Patterns  

---

## 1. Star / Asterisk Patterns

| File | Pattern Name | Description |
|------|--------------|-------------|
| `pattern1.cpp` | Solid Rectangle | Prints a fixed-width, fixed-height block of stars. |
| `pattern2.cpp` | Left-Aligned Increasing Triangle | Rows increase by one star per line. |
| `pattern5.cpp` | Inverted Left-Aligned Triangle | Rows decrease by one star per line. |
| `pattern7.cpp` | Centered Star Pyramid | Classic symmetric pyramid of stars. |
| `pattern8.cpp` | Centered Inverted Pyramid | Inverted version of the centered pyramid. |
| `pattern9.cpp` | Centered Odd-Star Pyramid | Variant of pattern7 with a different spacing strategy. |
| `pattern10.cpp` | Diamond-like Triangle (with spacing) | Increasing then decreasing star triangle. |
| `pattern10_2.cpp` | Solid Diamond-like Pattern | Increasing then decreasing triangle with no internal spacing. |
| `pattern19.cpp` | Sandglass / Hourglass Pattern | Stars shrink and then expand forming a sandglass. |
| `pattern20.cpp` | Symmetric Staircase Star Pattern | Mirrored star growth on left and right. |
| `pattern21.cpp` | Hollow Square | Prints only border stars forming a hollow square. |

---

## 2. Number Patterns

| File | Pattern Name | Description |
|------|--------------|-------------|
| `pattern3.cpp` | Left-Aligned Number Triangle | Prints 1, 1 2, 1 2 3, etc. |
| `pattern4.cpp` | Repeated-Number Triangle | Each row prints the same number repeatedly (e.g., 2 2, 3 3 3). |
| `pattern6.cpp` | Inverted Number Sequence Triangle | Prints decreasing-length numeric rows. |
| `pattern11.cpp` | Binary Alternating Triangle | Alternates 0 and 1 in a triangular shape. |
| `pattern12.cpp` | Symmetric Numeric Palindrome | Left-increasing and right-decreasing sequences. |
| `pattern13.cpp` | Continuous Number Triangle | Numbers increase continuously across rows without reset. |
| `pattern22.cpp` | Concentric Number Square | Square made of layers of decreasing numbers. |

---

## 3. Alphabet Patterns

| File | Pattern Name | Description |
|------|--------------|-------------|
| `pattern14.cpp` | Alphabet Triangle | A; A B; A B C; etc. |
| `pattern15.cpp` | Inverted Alphabet Triangle | Reverse of the alphabetical triangle. |
| `pattern16.cpp` | Repeated-Letter Triangle | A; BB; CCC; etc. |
| `pattern17.cpp` | Alphabet Palindrome Pyramid | A; ABA; ABCBA; etc. |
| `pattern18.cpp` | Reverse Alphabet Triangle | E; D E; C D E; etc. |

---

## Purpose of This Repository

This repository serves as a learning and reference resource for:

- Students practicing loop constructs in C++  
- Candidates preparing for technical interviews  
- Programmers improving logic around nested loops and spacing  
- Competitive programmers practicing pattern generation problems  

Each program is self-contained and easy to extend.

---

## How to Use

1. Select any desired `.cpp` file from the repository.
2. Compile using a C++ compiler such as `g++`:
   ```bash
   g++ patternX.cpp -o patternX
   ./patternX

