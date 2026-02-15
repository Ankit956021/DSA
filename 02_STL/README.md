# 📦 STL (Standard Template Library)

Master **C++ containers** and **data structure operations**.

## 📚 Containers Covered

### Linear Containers
| Container | Type | Use Case | Time Complexity |
|-----------|------|----------|-----------------|
| **Vector** | Dynamic Array | General purpose | O(1) push, O(n) insert |
| **List** | Linked List | Frequent insertions | O(1) insert, O(n) access |
| **Deque** | Double Ended Queue | Both ends access | O(1) push front/back |

### Adapter Containers
| Container | Type | Use Case | Order |
|-----------|------|----------|-------|
| **Stack** | LIFO | Browser back button | Last added first |
| **Queue** | FIFO | Printer jobs | First added first |
| **Priority Queue** | Heap | Task scheduler | By priority |

### Associative Containers
| Container | Type | Properties | Time Complexity |
|-----------|------|-----------|-----------------|
| **Set** | BST | Sorted, Unique | O(log n) |
| **Map** | BST | Key-Value pairs | O(log n) |
| **Unordered Set** | Hash | Unique only | O(1) average |

## 🚀 How to Run

```bash
cd 02_STL
g++-15 stl.cpp -o stl
./stl
```

## 💻 Quick Reference

### Vector
```cpp
vector<int> v;
v.push_back(1);           // Add to end
v.insert(v.begin(), 0);   // Insert at start
v.erase(v.begin() + 1);   // Remove element
```

### Stack (LIFO)
```cpp
stack<int> st;
st.push(10);
cout << st.top();   // 10
st.pop();
```

### Queue (FIFO)
```cpp
queue<int> q;
q.push(1);
cout << q.front();  // 1
q.pop();
```

### Priority Queue
```cpp
priority_queue<int> pq;          // Max Heap
priority_queue<int, vector<int>, greater<int>> minHeap;  // Min Heap
```

### Set
```cpp
set<int> s;
s.insert(3);
auto it = s.find(1);
if (it != s.end()) { /* Found */ }
```

## 🔑 Iterator Operations

```cpp
auto it = container.begin();    // Start
while (it != container.end()) {
    cout << *it;                // Dereference
    ++it;                       // Move next
}
```

---

**Next**: Arrays & Strings operations! 📊
