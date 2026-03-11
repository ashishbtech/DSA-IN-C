# 05_Searching

## Overview

This folder contains basic **Searching Algorithms implemented in C**.

Searching algorithms are used to **find the position of a target element in a collection of data** such as an array or list.

They are fundamental in Data Structures and Algorithms and are widely used in real-world applications like databases, search engines, and software systems.

This section focuses on understanding **how different searching techniques work and how their efficiency differs**.

---

## Problems

1. `linear_search.c`
   Search an element in an array by checking **each element one by one**.

2. `binary_search.c`
   Search an element in a **sorted array** by repeatedly dividing the search space into half.

---

## Concepts Covered

* Linear Search
* Binary Search
* Iterative Searching
* Time Complexity Comparison

---

## Time Complexity

### Linear Search

Time Complexity:

```text
O(n)
```

Worst case: element is at the **last position** or **not present**.

---

### Binary Search

Time Complexity:

```text
O(log n)
```

Binary search is faster because it **divides the search space in half at each step**.

⚠️ Binary search works **only on sorted arrays**.

---


Author: **Ashish Kushwaha**
