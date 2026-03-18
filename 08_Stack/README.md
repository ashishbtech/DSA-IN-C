# 📚 Stack – Data Structure (README)

## 📌 What is a Stack?

A **Stack** is a linear data structure that follows:

```
LIFO → Last In First Out
```

👉 The last element inserted is the first one to be removed.

---

## 📦 Real Life Example

* Stack of plates 🍽️
* Undo/Redo in editors
* Browser history

---

## ⚙️ Basic Operations

### 1. Push (Insert element)

```c
top++;
stack[top] = value;
```

---

### 2. Pop (Remove element)

```c
top--;
```

---

### 3. Peek (Top element)

```c
stack[top];
```

---

### 4. Display

Traverse from top to bottom.

---

## 🧠 Stack Representation

### Using Array

```c
int stack[SIZE];
int top = -1;
```

---

### Using Linked List

```c
struct Node {
    int data;
    struct Node* next;
};
```

Top points to the head node.

---

## ⚠️ Conditions

### Overflow

```c
if(top == SIZE - 1)
```

Stack is full.

---

### Underflow

```c
if(top == -1)
```

Stack is empty.

---

## ⏱ Time Complexity

| Operation | Time |
| --------- | ---- |
| Push      | O(1) |
| Pop       | O(1) |
| Peek      | O(1) |

---

## 💾 Space Complexity

* Array → O(n)
* Linked List → O(n)

---

## 🔑 Key Concepts

* LIFO principle
* Top pointer
* Overflow & Underflow
* Static vs Dynamic implementation

---

## 📁 Folder Structure

```
08_Stack
│
├── stack_array.c
├── stack_linked_list.c
├── README.md
```

---

## ❌ Common Mistakes

* Not checking overflow/underflow
* Wrong update of `top`
* Accessing empty stack
* Memory leak (in linked list)

---

## 🚀 Applications of Stack

* Expression evaluation
* Parenthesis checking
* Function calls (Call Stack)
* Backtracking
* Undo/Redo operations

---

## 🧠 Summary

```
Stack = LIFO structure
Fast operations (O(1))
Used everywhere in real-world systems
```
