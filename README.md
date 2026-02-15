# 🚀 DSA Learning Journey

Welcome to my **Data Structures & Algorithms** learning repository! This is my personal DSA practice space where I'm building fundamentals and solving problems step by step.

> **Organized Learning**: Topics are structured in numbered folders for easy navigation and progressive difficulty.

---

## 📚 What's Inside?

### 1. **📂 01_Patterns** - Pattern Programming (20 Problems)
Classic pattern printing problems to master nested loops and logic building.

Location: [`01_Patterns/dsa_patterns.cpp`](01_Patterns/dsa_patterns.cpp)

#### Patterns Covered:
- ✅ **Pattern 1-10**: Basic square, triangle, and diamond patterns
- ✅ **Pattern 11**: Number palindrome pattern
- ✅ **Pattern 12**: Sequential number triangle
- ✅ **Pattern 13-17**: Alphabet patterns (ascending, descending, reverse)
- ✅ **Pattern 18**: Beautiful palindrome alphabet diamond
  ```
        A
      A B A
    A B C B A
  A B C D C B A
  ```
- ✅ **Pattern 19**: Full diamond with varying spaces
- ✅ **Pattern 20**: Hollow diamond pattern

**How to run:**
```bash
cd 01_Patterns
g++-15 dsa_patterns.cpp -o dsa_patterns
./dsa_patterns
```

---

### 2. **📦 02_STL** - Standard Template Library (6 Containers)
Understanding C++ STL containers and their operations with real-world examples.

Location: [`02_STL/stl.cpp`](02_STL/stl.cpp)

#### Containers Covered:
- 📦 **Vector**: Dynamic arrays with push_back, insert, erase, emplace_back
- 📋 **List**: Doubly linked lists with front/back operations
- 📚 **Stack**: LIFO (Last In First Out) - push, pop, top
- 🔄 **Queue**: FIFO (First In First Out) - push, pop, front, back
- ⚡ **Priority Queue**: Max Heap & Min Heap with priority ordering
- 🎯 **Set**: Sorted unique elements with O(log n) operations

**How to run:**
```bash
cd 02_STL
g++-15 stl.cpp -o stl
./stl
```

#### STL Code Examples:
```cpp
// Vector
vector<int> v;
v.push_back(1);
v.insert(v.begin() + 1, 20);  // Insert at position

// Stack (LIFO)
stack<int> st;
st.push(10);
cout << st.top();  // Output: 10

// Queue (FIFO)
queue<int> q;
q.push(1);
q.push(2);
cout << q.front();  // Output: 1

// Priority Queue (Max Heap by default)
priority_queue<int> pq;
pq.push(5);
pq.push(10);
cout << pq.top();  // Output: 10

// Min Heap
priority_queue<int, vector<int>, greater<int>> minHeap;
minHeap.push(5);
cout << minHeap.top();  // Output: 5

// Set (Sorted & Unique)
set<int> s;
s.insert(3);
s.insert(1);
auto it = s.find(1);  // O(log n) search
```

### 3. **Utility Programs**
- `new.cpp` - Basic input/output programs
- `cc.cpp` - Various C++ practice examples

---

## 🎯 Learning Path

```
Phase 1: Pattern Programming ✅
├── Basic Loops (1-5)
├── Number Patterns (6-12)
└── Alphabet & Diamond Patterns (13-20)

Phase 2: STL Containers 🔄
├── Vectors
├── Lists
├── Stack & Queue
└── Advanced Operations

Phase 3: Core DSA (Coming Soon) 🚀
├── Arrays & Strings
├── Linked Lists
├── Trees & Graphs
├── Sorting & Searching
└── Dynamic Programming
```

---

## � Quick Navigation

- 📂 **[01_Patterns](01_Patterns/)** - Pattern printing (20 problems)
- 📦 **[02_STL](02_STL/)** - STL containers guide
- 📊 **[03_Arrays](03_Arrays/)** - Array operations (Coming Soon)
- 🔗 **[04_LinkedLists](04_LinkedLists/)** - Linked lists (Coming Soon)

## �💻 How to Run

### Prerequisites:
```bash
# Install g++ compiler
# macOS: brew install gcc
# Linux: sudo apt-get install g++
```

### Run Pattern Programs:
```bash
cd 01_Patterns
g++-15 dsa_patterns.cpp -o dsa_patterns
./dsa_patterns
# Enter n value (e.g., 5) to see the pattern
```

### Run STL Examples:
```bash
cd 02_STL
g++-15 stl.cpp -o stl
./stl
```

---

## 📊 File Structure

```
dsa/
├── README.md                          # Main documentation
├── 01_Patterns/                       # Pattern programming
│   ├── README.md                      # Pattern guide
│   └── dsa_patterns.cpp               # 20+ patterns
├── 02_STL/                            # Standard Template Library
│   ├── README.md                      # STL container guide
│   └── stl.cpp                        # Vector, Stack, Queue, Set, etc.
├── 03_Arrays/                         # Arrays & Strings (Coming Soon)
│   └── README.md                      # Array operations guide
├── 04_LinkedLists/                    # Linked Lists (Coming Soon)
│   └── README.md                      # Linked list guide
└── .gitignore                         # Git ignore rules
```

---

## 🔧 Key Concepts Learned

### Pattern Programming
- ✨ Nested loops mastery
- ✨ Space & character manipulation
- ✨ Mathematical relationships in patterns
- ✨ Problem decomposition

### STL
- 📦 Dynamic memory & containers
- 📦 Iterator usage & traversal
- 📦 Container operations (push, pop, insert, erase)
- 📦 Time complexity considerations:
  - **Vector**: O(1) push_back, O(n) insert
  - **List**: O(1) insert/delete, O(n) search
  - **Stack/Queue**: O(1) push/pop
  - **Priority Queue**: O(log n) push/pop
  - **Set**: O(log n) insert/search/delete

### Iterator Concepts
- **`.begin()`** - Points to first element
- **`.end()`** - Points after last element (boundary marker)
- **`*it`** - Dereference to get value
- **`++it`** - Move to next element

---

## 📝 Example Problems Solved

### Pattern 18 - Alphabet Diamond
```
Input: n = 4
Output:
       A
     A B A
   A B C B A
 A B C D C B A
```

**Logic:**
- Build ascending sequence: A → B → C → D
- Mirror back (excluding peak): C → B → A
- Add proper spacing for alignment

### Pattern 20 - Hollow Diamond
```
Input: n = 3
Output:
* * * * * *
* *     * *
*         *
*         *
* *     * *
* * * * * *
```

---

## 🚀 What's Next?

- [ ] Array operations & searching
- [ ] Linked lists implementation
- [ ] Binary trees & traversals
- [ ] Graph algorithms (DFS, BFS)
- [ ] Sorting algorithms (Merge, Quick, Heap)
- [ ] Dynamic Programming problems
- [ ] Competitive programming

---

## 💡 Learning Notes

### Mistakes Fixed:
1. **File naming**: Avoided spaces in filenames (causes compiler issues)
2. **Header files**: Replaced `bits/stdc++.h` with specific headers (macOS compatibility)
3. **Pattern spacing**: Calculated correct space increments for diamond patterns
4. **Git workflow**: Proper staging, committing, and pushing

### Key Insights:
- Pattern problems teach algorithmic thinking
- STL containers are powerful but require understanding complexity
- Consistent practice builds intuition
- Clean code and documentation matter

---

## 🤝 Contributing

If you're learning DSA and found this repo helpful:
- **Fork it** - Use as reference
- **Star it** - Show support
- **Suggest improvements** - Open issues

---

## 📈 Progress Tracker

| Topic | Status | Files | Date |
|-------|--------|-------|------|
| **Patterns 1-10** | ✅ Complete | `dsa_patterns.cpp` | Feb 2026 |
| **Patterns 11-20** | ✅ Complete | `dsa_patterns.cpp` | Feb 2026 |
| **Vector** | ✅ Complete | `stl.cpp` | Feb 2026 |
| **List** | ✅ Complete | `stl.cpp` | Feb 2026 |
| **Stack** | ✅ Complete | `stl.cpp` | Feb 2026 |
| **Queue** | ✅ Complete | `stl.cpp` | Feb 2026 |
| **Priority Queue** | ✅ Complete | `stl.cpp` | Feb 15, 2026 |
| **Set** | ✅ Complete | `stl.cpp` | Feb 15, 2026 |
| **Arrays & Strings** | 🔄 In Progress | - | - |
| **Linked Lists** | 🔲 Not Started | - | - |
| **Trees** | 🔲 Not Started | - | - |

---

## 📞 Contact & Connect

- **GitHub**: [@Ankit956021](https://github.com/Ankit956021)
- **Learning Goal**: Master DSA and prepare for interviews
- **Timezone**: IST (Indian Standard Time)

---

## 📄 License

This repository is open for educational purposes. Feel free to use, modify, and learn!

---

## ✨ Special Thanks

- Inspired by competitive programming communities
- Gratitude to everyone who shares DSA knowledge
- Thanks to the open-source community

---

**Happy Learning! 🎉**

*"Mastering DSA is not a sprint, it's a marathon. One pattern at a time!"*

---

Last Updated: **14 February 2026**
