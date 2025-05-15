# String Utilities Without Standard Library Functions

This is a reference for implementing common string operations in C **without using `<string.h>`**. Useful for mastering C fundamentals, preparing for low-level coding rounds, and understanding what the standard library actually does under the hood.

---

## 1. `strcpy(dest, src)` – Copy a String

### What It Does:
- Copies every character from `src` into `dest`, including the null terminator `\0`.
- Returns a pointer to `dest`.

### Gotchas:
- **No bounds checking** — `dest` must be large enough.
- **Do not use with string literals** as destination (they're read-only).

### Manual Implementation:
```c
int i = 0;
while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
}
dest[i] = '\0';
```

---

## 2. `strcmp(str1, str2)` – Compare Two Strings

### What It Does:
- Compares two strings character by character.
- Returns:
  - `0` if they are equal
  - `<0` if `str1` < `str2`
  - `>0` if `str1` > `str2`

### Gotchas:
- Comparison is **case-sensitive** (`'A'` ≠ `'a'`)
- Checks ASCII values

### Manual Implementation:
```c
int i = 0;
while (str1[i] == str2[i]) {
    if (str1[i] == '\0') return 0;
    i++;
}
return str1[i] - str2[i];
```

---

## 3. `strlen(str)` – Get Length of a String

### What It Does:
- Counts the number of characters before the null terminator `\0`

### Manual Implementation:
```c
int length = 0;
while (str[length] != '\0') {
    length++;
}
```

---

## 4. `strrev(str)` – Reverse a String

### What It Does:
- Reverses the string **in-place**

### Manual Implementation:
```c
int len = 0;
while (str[len] != '\0') len++;

for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
}
```

---

## 5. `strcat(dest, src)` – Concatenate Strings

### What It Does:
- Appends `src` to the end of `dest`.

### Manual Implementation:
```c
int i = 0;
while (dest[i] != '\0') i++;

int j = 0;
while (src[j] != '\0') {
    dest[i] = src[j];
    i++;
    j++;
}
dest[i] = '\0';
```

---

## 6. `strcpy`-style safety notes:
- Always make sure destination strings have **enough space**.
- Avoid writing into string literals (e.g., `char *str = "text";`) — they’re read-only.
- Always null-terminate manually if you're copying yourself.

---

## Coming Soon (Optional Implementations):
- `strchr()` – Find a character in a string
- `strstr()` – Find a substring
- Palindrome check
- Count vowels/consonants
- Case conversions (lower ↔ upper)

---

This doc is part of the `zoho-prep-daily` streak — pushing core logic, not just syntax memorization. Add to it as you implement and master each function manually. 💪
