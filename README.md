# 🧮 42 C++ Module 02 – Fixed-Point Arithmetic & Operator Overloading

This module introduces:
- Fixed-point numbers
- Ad-hoc polymorphism (via operator overloading)
- The Orthodox Canonical Form in C++

All exercises are written in C++98 and follow 42’s standards.

---

## 📂 Contents

| Exercise | Directory | Concepts Covered |
|----------|-----------|------------------|
| ex00     | `Fixed`   | Orthodox Canonical Form, raw accessors |
| ex01     | `Fixed`   | Int & float constructors, conversion methods, `<<` overload |
| ex02     | `Fixed`   | Comparison, arithmetic, increment/decrement operators, `min`/`max` |
| ex03     | `Point`, `Fixed` | BSP algorithm (point-in-triangle) |

---

## ⚙️ Compilation

Use this command:

```bash
c++ -Wall -Wextra -Werror -std=c++98 main.cpp Fixed.cpp -o fixed
```

Or simply run:

```bash
make
```

---

## 🔬 Exercise Summary

### ✅ ex00 – Canonical Class

- Create a `Fixed` class
- Implement:
  - Default constructor
  - Copy constructor
  - Copy assignment operator
  - Destructor
  - `getRawBits()` and `setRawBits()`

### ✅ ex01 – Useful Fixed-Point

Add to `Fixed`:

- `Fixed(int)`
- `Fixed(float)`
- `toFloat()`, `toInt()`
- Overload `<<` for stream output

### ✅ ex02 – Operator Overload

Overload in `Fixed`:

- `+ - * /`
- `== != > < >= <=`
- `++ --` (prefix & postfix)
- `min`/`max` (const and non-const)

### ✅ ex03 – BSP

- Create a `Point` class using `Fixed`
- Implement `bsp()`:
  ```cpp
  bool bsp(Point const a, Point const b, Point const c, Point const point);
  ```
- Returns `true` if point is inside triangle `abc`

---

## 🧪 Example Output

```
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
```

---

## 🚫 Restrictions

- ✅ STL is **not allowed**
- ✅ No `printf`, `malloc`, or `free`
- ✅ No `using namespace`
- ✅ No `friend` keyword

---

## 🧠 Notes

- Ensure all classes follow the **Orthodox Canonical Form**
- Prevent memory leaks when using `new`
- Implement all member functions in `.cpp`, not in `.hpp`

---

## 🙏 Credits

Made with ❤️ by [`ghwa`](mailto:ghwa@student.42.fr)
