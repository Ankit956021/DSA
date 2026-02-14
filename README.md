# 🚀 DSA Learning Journey

Welcome to my **Data Structures & Algorithms** learning repository! This is my personal DSA practice space where I'm building fundamentals and solving problems step by step.

---

## 📚 What's Inside?

### 1. **Pattern Programs** (`dsa_patterns.cpp`)
Classic pattern printing problems to master nested loops and logic building.

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
  ```
  * * * * * * * *
  * *     * *
  *         *
  ```

### 2. **STL (Standard Template Library)** (`stl.cpp`)
Understanding C++ STL containers and their operations.

#### Topics Covered:
- 📦 **Vector**: Dynamic arrays with push_back, insert, erase
- 📋 **List**: Doubly linked lists with front/back operations
- 📚 **Stack**: LIFO (Last In First Out) data structure
- 🔄 **Queue**: FIFO (First In First Out) operations

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

## 💻 How to Run

### Prerequisites:
```bash
# Install g++ compiler
# macOS: brew install gcc
# Linux: sudo apt-get install g++
```

### Run Pattern Programs:
```bash
cd /path/to/dsa
g++-15 dsa_patterns.cpp -o dsa_patterns
./dsa_patterns
# Enter n value (e.g., 5) to see the pattern
```

### Run STL Examples:
```bash
g++-15 stl.cpp -o stl
./stl
```

---

## 📊 File Structure

```
dsa/
├── README.md                 # This file
├── dsa_patterns.cpp          # 20+ Pattern programs
├── stl.cpp                   # STL containers demo
├── new.cpp                   # Basic I/O programs
├── cc.cpp                    # C++ practice
└── .gitignore               # Git ignore rules
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
- 📦 Iterator usage
- 📦 Container operations (push, pop, insert, erase)
- 📦 Time complexity considerations

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

| Topic | Status | Date |
|-------|--------|------|
| Patterns 1-10 | ✅ Complete | Feb 2026 |
| Patterns 11-20 | ✅ Complete | Feb 2026 |
| STL Basics | ✅ Complete | Feb 2026 |
| Arrays & Strings | 🔄 In Progress | - |
| Linked Lists | 🔲 Not Started | - |
| Trees | 🔲 Not Started | - |

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
