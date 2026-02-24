# #️⃣ Hashing

Learn **hashing** to count frequencies and answer queries efficiently.

## 📋 Topics Covered

| Topic | Approach | Time Complexity |
|-------|----------|-----------------|
| Number Hashing | Frequency array | O(n) precompute, O(1) query |
| Character Hashing | ASCII index array (size 256) | O(n) precompute, O(1) query |
| Query Lookup | Pre-computed hash lookup | O(1) per query |

## 🚀 How to Run

```bash
cd 05_Hashing
g++-15 hashing.cpp -o hashing
./hashing
```

## 💡 Key Concepts

### Number Hashing
```cpp
int hash[13] = {0};
for (int i = 0; i < n; i++) {
    hash[arr[i]] += 1;  // Count frequency
}
// Query: hash[x] gives frequency of x
```

### Character Hashing
```cpp
int hash[256] = {0};       // ASCII has 256 characters
for (int i = 0; i < str.length(); i++) {
    hash[str[i]]++;        // str[i] is ASCII value (auto index)
}
// Query: hash['a'] gives frequency of 'a'
```

---

**Completed:** Feb 24, 2026
