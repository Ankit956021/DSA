# 🔁 Recursion

Master **recursion** — the foundation for Trees, Graphs & Dynamic Programming.

## 📋 Topics Covered

| Problem | Approach | Type |
|---------|----------|------|
| Print 0 to N | Global variable counter | Basic |
| Print using static | Static variable in function | Basic |
| Print N to 1 | Decrement recursion | Basic |
| Sum of N numbers | Parameterized recursion | Math |
| Factorial | Multiplication recursion | Math |
| Array Reverse/Swap | Two pointer recursion | Array |
| Palindrome Check | Compare from both ends | String |
| Fibonacci Series | Two parameter recursion | Series |

## 🚀 How to Run

```bash
cd 04_Recursion
g++-15 recursion.cpp -o recursion
./recursion
```

## 💡 Key Concepts

### Base Case (Stopping Condition)
```cpp
void print(int n) {
    if (n == 0) return;  // Base case: STOP here
    cout << n << " ";
    print(n - 1);        // Recursive call
}
```

### Fibonacci (Two Parameters)
```cpp
void fibonacci(int n, int a = 0, int b = 1) {
    if (n == 0) return;
    cout << a << " ";
    fibonacci(n - 1, b, a + b);
}
// Output: 0 1 1 2 3 5 8 13...
```

---

**Completed:** Feb 24, 2026
