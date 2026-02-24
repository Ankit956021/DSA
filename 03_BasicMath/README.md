# 🔢 Basic Math Operations

Fundamental **mathematical operations** essential for DSA problem solving.

## 📋 Topics Covered

| Topic | Approach | Time Complexity |
|-------|----------|-----------------|
| Count Digits | Loop / `log10` | O(log n) |
| Reverse Number | Modulo + Build | O(log n) |
| Armstrong Number | Digit power sum | O(log n) |
| Palindrome Check | Reverse & compare | O(log n) |
| All Divisors (Brute) | Loop 1 to n | O(n) |
| All Divisors (Optimized) | Loop 1 to √n | O(√n) |
| Prime Check | Loop 1 to n | O(n) |
| GCD | Euclidean Algorithm | O(log(min(a,b))) |

## 🚀 How to Run

```bash
cd 03_BasicMath
g++-15 maths.cpp -o maths
./maths
```

## 💡 Key Algorithm: Euclidean GCD

```cpp
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
// gcd(36, 24) → gcd(24, 12) → gcd(12, 0) → 12
```

---

**Completed:** Feb 21, 2026
