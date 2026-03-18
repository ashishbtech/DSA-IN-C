# Linked List – Quick Revision Sheet

## Structure

```c
struct Node {
    int data;
    struct Node* next;
};
```

---

## 1. Traversal (Most Important Pattern)

```c
struct Node* temp = head;

while(temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
}
```

---

## 2. Insert at Beginning

```c
newNode->next = head;
head = newNode;
```

⏱ Time: O(1)

---

## 3. Insert at End

```c
while(temp->next != NULL)
    temp = temp->next;

temp->next = newNode;
```

⏱ Time: O(n)

---

## 4. Delete Node

```c
prev->next = temp->next;
free(temp);
```

⚠️ Special case: deleting head

---

## 5. Reverse Linked List (VERY IMPORTANT)

```c
prev = NULL;
curr = head;

while(curr != NULL) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}

head = prev;
```

---

## Key Patterns

* Traversal → `while(temp != NULL)`
* Insertion → pointer change
* Deletion → skip node
* Reverse → `prev, curr, next`

---

## Common Mistakes

* Forgetting `NULL`
* Losing next node
* Not updating head
* Memory leaks (not using `free`)

---

## Complexity

| Operation        | Time |
| ---------------- | ---- |
| Traversal        | O(n) |
| Insert Beginning | O(1) |
| Insert End       | O(n) |
| Delete           | O(n) |
| Reverse          | O(n) |
