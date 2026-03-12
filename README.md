# Algorithm Visualizer (C++)

A simple C++ program that visualizes how algorithms work step-by-step. The goal of this project is to make algorithm behavior easier to understand by displaying intermediate states of the array during execution.

Currently the project focuses on **Divide & Conquer algorithms**.

---

## Features

* Step-by-step visualization of algorithm execution
* Shows how arrays change during sorting
* Designed to be easily extendable with new algorithms
* Clean modular structure separating algorithm logic and visualization

---

## Implemented Algorithms

### Merge Sort

Merge Sort is a **Divide & Conquer** sorting algorithm that:

1. Divides the array into two halves
2. Recursively sorts each half
3. Merges the sorted halves

**Time Complexity**

* Best Case: O(n log n)
* Average Case: O(n log n)
* Worst Case: O(n log n)

**Space Complexity**

* O(n) (due to temporary arrays used during merging)

The visualizer shows:

* Array splits
* Merge operations
* Intermediate array states

---

## Planned Algorithms

The architecture is designed to easily support more algorithms in the future, such as:

### Divide & Conquer

* Quick Sort
* Binary Search
* Strassen Matrix Multiplication

### Dynamic Programming

* Longest Common Subsequence
* Knapsack

### Greedy Algorithms

* Activity Selection
* Huffman Coding

---

## Building the Project

This project uses **CMake**.

### Build

```
mkdir build
cd build
cmake ..
make
```

### Run

```
./algorithm_visualizer
```

---

## Future Improvements

* Add more algorithms
* Add graphical visualization
* Highlight comparisons and swaps
* Add speed control for visualization
* Support different input sizes
* Interactive UI
