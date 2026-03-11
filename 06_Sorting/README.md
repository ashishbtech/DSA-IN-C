# 06_Sorting

## Overview

This folder contains implementations of **Sorting Algorithms in C**.

Sorting is the process of **arranging data in a specific order**, usually:

* Ascending order
* Descending order

Sorting algorithms are essential in computer science because many other algorithms (like searching and data processing) become more efficient when the data is sorted.

---

## Problems

1. `bubble_sort.c`
   Repeatedly compares adjacent elements and swaps them if they are in the wrong order.

2. `selection_sort.c`
   Finds the smallest element in the unsorted part and places it at the correct position.

3. `insertion_sort.c`
   Builds the sorted array one element at a time by inserting elements in the correct position.

4. `merge_sort.c`
   A divide-and-conquer algorithm that splits the array into halves and merges them after sorting.

---

## Concepts Covered

* Comparison-based sorting
* Swapping elements
* Divide and Conquer
* Algorithm efficiency

---

## Time Complexity

| Algorithm      | Best       | Average    | Worst      |
| -------------- | ---------- | ---------- | ---------- |
| Bubble Sort    | O(n)       | O(n²)      | O(n²)      |
| Selection Sort | O(n²)      | O(n²)      | O(n²)      |
| Insertion Sort | O(n)       | O(n²)      | O(n²)      |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) |

---

Author: **Ashish Kushwaha**
