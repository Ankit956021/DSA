# 🚀 DSA Learning Journey# 🚀 DSA Learning Journey



Welcome to my **Data Structures & Algorithms** learning repository! This is my personal DSA practice space where I'm building fundamentals and solving problems step by step.Welcome to my **Data Structures & Algorithms** learning repository! This is my personal DSA practice space where I'm building fundamentals and solving problems step by step.



> *"Mastering DSA is not a sprint, it's a marathon. One topic at a time!"*> **Organized Learning**: Topics are structured in numbered folders for easy navigation and progressive difficulty.



------



## 📂 Quick Navigation## 📚 What's Inside?



| # | Topic | Folder | Status | Date |### 1. **📂 01_Patterns** - Pattern Programming (20 Problems)

|---|-------|--------|--------|------|Classic pattern printing problems to master nested loops and logic building.

| 1 | 🎨 Pattern Programming | [`01_Patterns/`](01_Patterns/) | ✅ Complete | Feb 8, 2026 |

| 2 | 📦 STL Containers | [`02_STL/`](02_STL/) | ✅ Complete | Feb 15, 2026 |Location: [`01_Patterns/dsa_patterns.cpp`](01_Patterns/dsa_patterns.cpp)

| 3 | 🔢 Basic Math | [`03_BasicMath/`](03_BasicMath/) | ✅ Complete | Feb 21, 2026 |

| 4 | 🔁 Recursion | [`04_Recursion/`](04_Recursion/) | ✅ Complete | Feb 24, 2026 |#### Patterns Covered:

| 5 | #️⃣ Hashing | [`05_Hashing/`](05_Hashing/) | ✅ Complete | Feb 24, 2026 |- ✅ **Pattern 1-10**: Basic square, triangle, and diamond patterns

| 6 | 📊 Arrays & Strings | Coming Soon | 🔲 Not Started | - |- ✅ **Pattern 11**: Number palindrome pattern

| 7 | 🔗 Linked Lists | Coming Soon | 🔲 Not Started | - |- ✅ **Pattern 12**: Sequential number triangle

| 8 | 🌳 Trees & Graphs | Coming Soon | 🔲 Not Started | - |- ✅ **Pattern 13-17**: Alphabet patterns (ascending, descending, reverse)

| 9 | 🔄 Sorting & Searching | Coming Soon | 🔲 Not Started | - |- ✅ **Pattern 18**: Beautiful palindrome alphabet diamond

| 10 | 💡 Dynamic Programming | Coming Soon | 🔲 Not Started | - |  ```

        A

---      A B A

    A B C B A

## 📚 What's Inside?  A B C D C B A

  ```

### 1. 🎨 [Pattern Programming](01_Patterns/) — 20 Problems- ✅ **Pattern 19**: Full diamond with varying spaces

Master **nested loops** and **logical thinking** through pattern problems.- ✅ **Pattern 20**: Hollow diamond pattern



```**How to run:**

      A                    * * * * *```bash

    A B A                  *       *cd 01_Patterns

  A B C B A                * * * * *g++-15 dsa_patterns.cpp -o dsa_patterns

A B C D C B A./dsa_patterns

``````



**Key Concepts:** Nested loops, space manipulation, mathematical patterns---



---### 2. **📦 02_STL** - Standard Template Library (6 Containers)

Understanding C++ STL containers and their operations with real-world examples.

### 2. 📦 [STL Containers](02_STL/) — 7 Containers

Complete guide to **C++ Standard Template Library**.Location: [`02_STL/stl.cpp`](02_STL/stl.cpp)



| Container | Type | Time Complexity |#### Containers Covered:

|-----------|------|-----------------|- 📦 **Vector**: Dynamic arrays with push_back, insert, erase, emplace_back

| **Vector** | Dynamic Array | O(1) push_back |- 📋 **List**: Doubly linked lists with front/back operations

| **List** | Doubly Linked List | O(1) insert/delete |- 📚 **Stack**: LIFO (Last In First Out) - push, pop, top

| **Stack** | LIFO | O(1) push/pop |- 🔄 **Queue**: FIFO (First In First Out) - push, pop, front, back

| **Queue** | FIFO | O(1) push/pop |- ⚡ **Priority Queue**: Max Heap & Min Heap with priority ordering

| **Priority Queue** | Heap | O(log n) push/pop |- 🎯 **Set**: Sorted unique elements with O(log n) operations

| **Set** | Balanced BST | O(log n) operations |

| **Map** | Key-Value BST | O(log n) operations |**How to run:**

```bash

---cd 02_STL

g++-15 stl.cpp -o stl

### 3. 🔢 [Basic Math](03_BasicMath/) — Essential Math Operations./stl

Fundamental **mathematical operations** for DSA.```



**Topics Covered:**#### STL Code Examples:

- ✅ Count Digits```cpp

- ✅ Reverse a Number// Vector

- ✅ Armstrong Number Checkvector<int> v;

- ✅ Palindrome Checkv.push_back(1);

- ✅ Print All Divisors (Brute Force + Optimized)v.insert(v.begin() + 1, 20);  // Insert at position

- ✅ Prime Number Check

- ✅ GCD using Euclidean Algorithm (Recursion)// Stack (LIFO)

stack<int> st;

---st.push(10);

cout << st.top();  // Output: 10

### 4. 🔁 [Recursion](04_Recursion/) — Recursive Problem Solving

Master **recursion** — the foundation for Trees, Graphs & DP.// Queue (FIFO)

queue<int> q;

**Topics Covered:**q.push(1);

- ✅ Print 0 to N (using global variable)q.push(2);

- ✅ Print using static variablecout << q.front();  // Output: 1

- ✅ Print N to 1 (reverse recursion)

- ✅ Sum of N numbers// Priority Queue (Max Heap by default)

- ✅ Factorial (multiplication)priority_queue<int> pq;

- ✅ Array Swap / Reversepq.push(5);

- ✅ Palindrome Check (recursive)pq.push(10);

- ✅ Fibonacci Seriescout << pq.top();  // Output: 10



---// Min Heap

priority_queue<int, vector<int>, greater<int>> minHeap;

### 5. #️⃣ [Hashing](05_Hashing/) — Frequency CountingminHeap.push(5);

Learn **hashing** to count frequencies efficiently.cout << minHeap.top();  // Output: 5



**Topics Covered:**// Set (Sorted & Unique)

- ✅ Number Hashing (frequency array)set<int> s;

- ✅ Character Hashing (ASCII-based)s.insert(3);

- ✅ Query-based frequency lookups.insert(1);

auto it = s.find(1);  // O(log n) search

---```



## 📊 Project Structure### 3. **Utility Programs**

- `new.cpp` - Basic input/output programs

```- `cc.cpp` - Various C++ practice examples

dsa/

├── README.md                          # 📖 Main documentation (this file)---

│

├── 01_Patterns/                       # 🎨 Pattern Programming## 🎯 Learning Path

│   ├── README.md

│   └── dsa_patterns.cpp               # 20 pattern solutions```

│Phase 1: Pattern Programming ✅

├── 02_STL/                            # 📦 Standard Template Library├── Basic Loops (1-5)

│   ├── README.md├── Number Patterns (6-12)

│   └── stl.cpp                        # Vector, Stack, Queue, Set, Map└── Alphabet & Diamond Patterns (13-20)

│

├── 03_BasicMath/                      # 🔢 Basic MathematicsPhase 2: STL Containers 🔄

│   └── maths.cpp                      # Digits, Palindrome, GCD, Prime├── Vectors

│├── Lists

├── 04_Recursion/                      # 🔁 Recursion├── Stack & Queue

│   └── recursion.cpp                  # Sum, Fibonacci, Palindrome└── Advanced Operations

│

├── 05_Hashing/                        # #️⃣ HashingPhase 3: Core DSA (Coming Soon) 🚀

│   └── hashing.cpp                    # Number & Character hashing├── Arrays & Strings

│├── Linked Lists

└── .gitignore├── Trees & Graphs

```├── Sorting & Searching

└── Dynamic Programming

---```



## 💻 How to Run---



### Prerequisites## � Quick Navigation

```bash

# macOS- 📂 **[01_Patterns](01_Patterns/)** - Pattern printing (20 problems)

brew install gcc- 📦 **[02_STL](02_STL/)** - STL containers guide

- 📊 **[03_Arrays](03_Arrays/)** - Array operations (Coming Soon)

# Linux- 🔗 **[04_LinkedLists](04_LinkedLists/)** - Linked lists (Coming Soon)

sudo apt-get install g++

```## �💻 How to Run



### Run Any File### Prerequisites:

```bash```bash

cd <folder-name># Install g++ compiler

g++-15 <filename>.cpp -o <output-name># macOS: brew install gcc

./<output-name># Linux: sudo apt-get install g++

``````



### Examples### Run Pattern Programs:

```bash```bash

# Run Pattern Programscd 01_Patterns

cd 01_Patterns && g++-15 dsa_patterns.cpp -o patterns && ./patternsg++-15 dsa_patterns.cpp -o dsa_patterns

./dsa_patterns

# Run STL Examples# Enter n value (e.g., 5) to see the pattern

cd 02_STL && g++-15 stl.cpp -o stl && ./stl```



# Run Math Programs### Run STL Examples:

cd 03_BasicMath && g++-15 maths.cpp -o maths && ./maths```bash

cd 02_STL

# Run Recursiong++-15 stl.cpp -o stl

cd 04_Recursion && g++-15 recursion.cpp -o recursion && ./recursion./stl

```

# Run Hashing

cd 05_Hashing && g++-15 hashing.cpp -o hashing && ./hashing---

```

## 📊 File Structure

---

```

## 🎯 Learning Path & Roadmapdsa/

├── README.md                          # Main documentation

```├── 01_Patterns/                       # Pattern programming

✅ COMPLETED                          🔲 UPCOMING│   ├── README.md                      # Pattern guide

─────────────                         ─────────────│   └── dsa_patterns.cpp               # 20+ patterns

Phase 1: Basics                       Phase 3: Advanced├── 02_STL/                            # Standard Template Library

├── ✅ Patterns (20 problems)         ├── 🔲 Arrays & Strings│   ├── README.md                      # STL container guide

├── ✅ STL (7 containers)             ├── 🔲 Linked Lists│   └── stl.cpp                        # Vector, Stack, Queue, Set, etc.

├── ✅ Basic Math (7 topics)          ├── 🔲 Trees & Graphs├── 03_Arrays/                         # Arrays & Strings (Coming Soon)

├── ✅ Recursion (8 problems)         ├── 🔲 Sorting & Searching│   └── README.md                      # Array operations guide

└── ✅ Hashing (3 topics)             └── 🔲 Dynamic Programming├── 04_LinkedLists/                    # Linked Lists (Coming Soon)

```│   └── README.md                      # Linked list guide

└── .gitignore                         # Git ignore rules

---```



## 🔧 Key Concepts Learned---



### Pattern Programming## 🔧 Key Concepts Learned

- ✨ Nested loop control & space manipulation

- ✨ Mathematical relationships in patterns### Pattern Programming

- ✨ Nested loops mastery

### STL- ✨ Space & character manipulation

- 📦 Iterators (`.begin()`, `.end()`, `->` vs `.`)- ✨ Mathematical relationships in patterns

- 📦 Time complexity of each container- ✨ Problem decomposition

- 📦 `count()` vs `find()` in maps

### STL

### Basic Math- 📦 Dynamic memory & containers

- 🔢 Euclidean GCD Algorithm (recursive)- 📦 Iterator usage & traversal

- 🔢 Optimized divisor printing using √n- 📦 Container operations (push, pop, insert, erase)

- 📦 Time complexity considerations:

### Recursion  - **Vector**: O(1) push_back, O(n) insert

- 🔁 Base case & recursive calls  - **List**: O(1) insert/delete, O(n) search

- 🔁 Static vs global variables in recursion  - **Stack/Queue**: O(1) push/pop

- 🔁 Array manipulation using recursion  - **Priority Queue**: O(log n) push/pop

  - **Set**: O(log n) insert/search/delete

### Hashing

- #️⃣ Frequency arrays for numbers & characters### Iterator Concepts

- #️⃣ Query-based lookups- **`.begin()`** - Points to first element

- **`.end()`** - Points after last element (boundary marker)

---- **`*it`** - Dereference to get value

- **`++it`** - Move to next element

## 💡 Common Mistakes & Fixes

---

| Mistake | Fix |

|---------|-----|## 📝 Example Problems Solved

| `bits/stdc++.h` not found on macOS | Use specific headers (`<iostream>`, `<vector>`, etc.) |

| Space in filename breaks compiler | Rename files without spaces |### Pattern 18 - Alphabet Diamond

| `sort` not declared | Add `#include<algorithm>` |```

| `int` function without `return` | Add `return 0;` or use `void` |Input: n = 4

| `cout` is ambiguous | Don't mix `using namespace std` with `using std::cout` |Output:

       A

---     A B A

   A B C B A

## 🤝 Contributing A B C D C B A

```

If you're learning DSA and found this repo helpful:

- ⭐ **Star it** — Show support**Logic:**

- 🍴 **Fork it** — Use as reference- Build ascending sequence: A → B → C → D

- 💬 **Suggest improvements** — Open issues- Mirror back (excluding peak): C → B → A

- Add proper spacing for alignment

---

### Pattern 20 - Hollow Diamond

## 📞 Connect```

Input: n = 3

- **GitHub**: [@Ankit956021](https://github.com/Ankit956021)Output:

- **Goal**: Master DSA & prepare for interviews* * * * * *

- **Language**: C++* *     * *

*         *

---*         *

* *     * *

## 📄 License* * * * * *

```

This repository is open for educational purposes. Feel free to use, modify, and learn!

---

---

## 🚀 What's Next?

**Happy Learning! 🎉**

- [ ] Array operations & searching

---- [ ] Linked lists implementation

- [ ] Binary trees & traversals

Last Updated: **24 February 2026** | Topics: 5 | Files: 5 | Commits: Growing 🌱- [ ] Graph algorithms (DFS, BFS)

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
