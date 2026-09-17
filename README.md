# C++ Programs Collection 🚀

A beginner-friendly guide to **32 complete programs**: your original 24 exercises, explained and corrected, plus 8 related array and string exercises.

## How to use this guide

- Copy a program's complete C++ code block into the filename shown beside its title.
- Each program is independent and has its own `main()`. Compile one file at a time; do not paste all programs into one source file.
- Every section separates the purpose, code, step-by-step explanation, reason for the approach, and complexity.
- The original filenames are preserved. `even_odd.cpp` simulates a bank withdrawal, `rot.cpp` displays a matrix, and `sum.cpp` reverses digits.

## Compile and run

Use a C++11-or-newer compiler. For example:

```bash
g++ -std=c++11 -Wall -Wextra -pedantic an.cpp -o an
```

Windows PowerShell:

```powershell
.\an.exe
```

Linux / macOS:

```bash
./an
```

Replace `an.cpp` and `an` with the selected program's filename and executable name.

## Common C++ building blocks

| Syntax | Meaning |
|---|---|
| `#include <iostream>` | Makes console input/output available. |
| `#include <string>` | Provides `string` and related operations. |
| `#include <vector>` | Provides a dynamically sized sequence. |
| `using namespace std;` | Allows names such as `cout` without the `std::` prefix; retained here for beginner familiarity. |
| `int main()` | The entry point of each program. |
| `cin >> value` | Reads a whitespace-separated value. |
| `getline(cin, text)` | Reads a whole line, preserving spaces. |
| `cout << value` | Prints a value; `endl` ends the line and flushes output. |
| `for` / `while` | Repeat a block while a condition holds. |
| `if` / `else` | Select a branch based on a condition. |
| `==`, `&&`, `\|\|`, `!` | Equal to, logical AND, logical OR, logical NOT. |
| `%` | Integer remainder; useful for divisibility and digit extraction. |
| `++` / `--` | Increase/decrease a value by one. |
| `break` / `continue` | Exit the loop or switch / skip to the next loop iteration. |
| `return 0;` / `return 1;` | Finish successfully / signal an input error in these examples. |
| `size_t` | An unsigned size/index type, used with string lengths. |

### Input conventions and corrections

These are small console exercises. Enter whole numbers at integer prompts. Numeric checks detect extraction failures and out-of-range values; they are not strict whole-line parsers (for example, numeric extraction can read the numeric prefix of `5abc`). Limits are visible in the code: most one-dimensional sizes and loop bounds allow up to 10,000, star patterns and square matrices up to 100, number patterns up to 9, and factorial up to 20. These are practical teaching limits, not mathematical restrictions.

Runtime-sized arrays use `vector<int>` because declarations such as `int arr[n]` are not standard C++. Empty arrays are supported where meaningful; maximum/minimum requires at least one value. The bank example preserves the balance after a rejected withdrawal. Larger integer types protect the bounded sum, factorial, and digit-reversal calculations. Strings are treated as ASCII/English text, not general Unicode.

**Complexity notation:** `n` is the input size or numeric loop bound, `L` is the text length, and `d` is the number of digits. Extra space excludes the stored input. Pattern runtimes include printing their output.

## Index

| # | File | Program |
|---:|---|---|
| 1 | `an.cpp` | Sum of First N Natural Numbers |
| 2 | `arr.cpp` | Array Input and Display |
| 3 | `btr.cpp` | Butterfly Star Pattern |
| 4 | `count.cpp` | Count Character Types in a String |
| 5 | `even_odd.cpp` | Bank Login Simulation with Withdrawal |
| 6 | `fact.cpp` | Factorial of a Number |
| 7 | `factor.cpp` | Factors of a Number |
| 8 | `firstnorepch.cpp` | First Non-Repeating Character in a String |
| 9 | `firstrepeatingstr.cpp` | First Repeating Character in a String |
| 10 | `grade.cpp` | Grade Calculator (if-else ladder) |
| 11 | `grade1.cpp` | Grade Calculator (switch-case) |
| 12 | `hprmd.cpp` | Hollow Diamond Star Pattern |
| 13 | `htri.cpp` | Hollow Number Triangle Pattern |
| 14 | `loop.cpp` | Print Even Numbers from 1 to N |
| 15 | `mnmx.cpp` | Maximum and Minimum in an Array |
| 16 | `mv0.cpp` | Move Zeros to the End of an Array |
| 17 | `nestdfor.cpp` | Right-Aligned Star Triangle |
| 18 | `palindrome.cpp` | Palindrome Number Check |
| 19 | `pd.cpp` | Palindromic Number Pyramid Pattern |
| 20 | `prmd.cpp` | Diamond Star Pattern |
| 21 | `rep.cpp` | Count Occurrences of Each Array Element |
| 22 | `revarr.cpp` | Reverse an Array (Two-Pointer Method) |
| 23 | `rot.cpp` | Matrix Input and Display |
| 24 | `sum.cpp` | Reverse the Digits of a Number |
| 25 | `linear_search.cpp` | Linear Search in an Array |
| 26 | `second_largest.cpp` | Second-Largest Distinct Array Value |
| 27 | `remove_duplicates.cpp` | Remove Duplicate Array Values |
| 28 | `rotate_left.cpp` | Rotate an Array Left by One Position |
| 29 | `string_palindrome.cpp` | Check a String Palindrome |
| 30 | `vowels_consonants.cpp` | Count Vowels and Consonants |
| 31 | `reverse_string.cpp` | Reverse a String In Place |
| 32 | `letter_frequency.cpp` | Count English Letter Frequencies |

---

## 1. Sum of First N Natural Numbers — `an.cpp`

### Purpose

Add every integer from 1 through n.

**Sample run:** for `n = 5` → `Sum of first 5 numbers is : 15`

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;
    cout << "Enter n Numbers : " << endl;
    if (!(cin >> n) || n < 0 || n > 10000) {
        cout << "Enter an integer from 0 to 10000." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "Sum of first " << n << " numbers is : " << sum << endl;
    return 0;
}
```

### Step-by-step explanation

1. n is the upper limit; sum starts at 0 because nothing has been added yet.
2. The for loop starts i at 1, runs while i <= n, and increases i after each pass.
3. sum = sum + i adds the current number to the running total.
4. For n = 5, the total changes 0 → 1 → 3 → 6 → 10 → 15. For n = 0, the loop is skipped and the result is 0.

### Why this approach?

A running total is useful whenever many values must be combined.

**Complexity:** O(n) time; O(1) extra space.

---

## 2. Array Input and Display — `arr.cpp`

### Purpose

Store values and display them in their original order.

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter Array Size: " << endl;
    if (!(cin >> n) || n < 0 || n > 10000) {
        cout << "Enter an integer from 0 to 10000." << endl;
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid element." << endl;
            return 1;
        }
    }
    cout << "Array Elements are: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

### Step-by-step explanation

1. n tells the program how many elements to store.
2. vector<int> arr(n) creates n integer elements. It replaces int arr[n], which is not standard C++ when n is entered at runtime.
3. The first loop reads arr[0] through arr[n - 1]. C++ indexing starts at 0.
4. The second loop prints those same positions without changing them.

### Why this approach?

Separate input and output loops demonstrate how indexed storage can be reused.

**Complexity:** O(n) time; O(n) storage.

---

## 3. Butterfly Star Pattern — `btr.cpp`

### Purpose

Print two wings that expand and then shrink.

**Sample Output (n = 4):**

```
*      *
**    **
***  ***
********
***  ***
**    **
*      *
```

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a Number : " << endl;
    if (!(cin >> x) || x < 1 || x > 100) {
        cout << "Enter an integer from 1 to 100." << endl;
        return 1;
    }
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (x - i); k++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = x - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int k = 1; k <= 2 * (x - i); k++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. x controls the widest half of the butterfly.
2. For upper row i, the first loop prints i stars, the middle loop prints 2 * (x - i) spaces, and the last loop prints i stars.
3. Every row has 2 * x visible character positions before its newline.
4. The lower half starts at x - 1 so the widest row appears only once.

### Why this approach?

Nested loops let each row contain several independently sized regions.

**Complexity:** O(x²) time; O(1) extra space.

---

## 4. Count Character Types in a String — `count.cpp`

### Purpose

Count letters, digits, whitespace, and other characters.

**Sample run:** input `Hello World 123!` → `Alphabets: 10`, `Digits: 3`, `Spaces: 2`, `Special Characters: 1`

### Complete code

```cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int alphabets = 0, digits = 0, spaces = 0, special = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (size_t i = 0; i < str.length(); i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabets++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch == ' ' || ch == '\t' || ch == '\n') {
            spaces++;
        }
        else {
            special++;
        }
    }
    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Special Characters: " << special << endl;
    return 0;
}
```

### Step-by-step explanation

1. getline reads a complete line, including spaces; cin >> str would stop at the first whitespace.
2. The loop examines one character ch at a time.
3. The if-else ladder checks ASCII letters, then digits, then space/tab/newline; anything else increments special.
4. Only one counter changes per character. getline removes the terminating newline, so it is not counted.
5. Hello World 123! contains 10 letters, 3 digits, 2 spaces, and 1 special character.

### Why this approach?

Mutually exclusive conditions make classification straightforward. This example is for ASCII text, not Unicode character classification.

**Complexity:** O(L) time; O(L) input storage and O(1) extra space.

---

## 5. Bank Login Simulation with Withdrawal — `even_odd.cpp`

### Purpose

Simulate login and a withdrawal using whole-number amounts.

### Complete code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;
    if (username == "SRM123" && password == "srm@123") {
        cout << "Login Successful" << endl;
        long long balance, withdrawal;
        cout << "Bank Balance: ";
        if (!(cin >> balance) || balance < 0) {
            cout << "Invalid balance." << endl;
            return 1;
        }
        cout << "Withdraw Amount: ";
        if (!(cin >> withdrawal) || withdrawal <= 0) {
            cout << "Invalid withdrawal." << endl;
            return 1;
        }
        if (withdrawal <= balance) {
            balance -= withdrawal;
            cout << "Withdrawal successful" << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
        cout << "Remaining Balance: " << balance << endl;
    } else {
        cout << "Invalid Credentials" << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. cin reads the username and password as words.
2. && requires both comparisons to be true before the balance prompts appear.
3. Balance must be nonnegative and the withdrawal must be positive.
4. The balance decreases only when the requested amount is available. An unsuccessful withdrawal leaves it unchanged.
5. For balance 1000 and withdrawal 1200, the result is Insufficient Balance and remaining balance 1000.

### Why this approach?

Nested conditions represent a sequence of decisions. Hardcoded credentials are only for this learning exercise, not real authentication.

**Complexity:** O(L) time for credential input/comparison; O(L) credential storage.

---

## 6. Factorial of a Number — `fact.cpp`

### Purpose

Multiply the integers from 1 through n.

**Sample run:** for `n = 5` → `Factorial of 5 is: 120`

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number : " << endl;
    if (!(cin >> n) || n < 0 || n > 20) {
        cout << "Enter an integer from 0 to 20." << endl;
        return 1;
    }
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}
```

### Step-by-step explanation

1. fact starts at 1, the identity for multiplication; starting at 0 would make every result 0.
2. The loop multiplies the running product by i.
3. For n = 5, fact changes 1 → 1 → 2 → 6 → 24 → 120.
4. For n = 0, the loop does not run, giving 0! = 1.
5. long long stores the result. Input is restricted to 0–20 so factorial fits in a signed 64-bit integer.

### Why this approach?

This is the multiplicative version of a running total.

**Complexity:** O(n) time; O(1) extra space.

---

## 7. Factors of a Number — `factor.cpp`

### Purpose

List all positive divisors of a positive integer.

**Sample run:** for `n = 12` → `1 2 3 4 6 12`

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    if (!(cin >> n) || n < 1 || n > 10000) {
        cout << "Enter an integer from 1 to 10000." << endl;
        return 1;
    }
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << n << endl;
    return 0;
}
```

### Step-by-step explanation

1. n % i is the remainder after dividing n by i.
2. A remainder of 0 means i is a factor.
3. Every proper positive divisor is at most n / 2, so the loop checks only that range.
4. The program prints n separately because every positive integer divides itself. For n = 1, only 1 is printed.

### Why this approach?

The modulo operator is the standard test for exact divisibility.

**Complexity:** O(n) time; O(1) extra space.

---

## 8. First Non-Repeating Character in a String — `firstnorepch.cpp`

### Purpose

Find the earliest character that occurs exactly once.

**Sample run:** input `swiss` → `First Non-Repeating Char: w`

### Complete code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string:";
    cin >> str;
    int flag = 0;
    for (size_t i = 0; i < str.length(); i++) {
        int count = 0;
        for (size_t j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << "First Non-Repeating Char: " << str[i] << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "No non-repeating char" << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. cin >> str reads one word; uppercase and lowercase letters are distinct.
2. The outer loop chooses a candidate at position i.
3. count resets to 0 for each candidate. The inner loop compares it with every character in the word.
4. When count == 1, the program prints that character, sets flag to 1, and stops with break.
5. If no candidate succeeds, flag remains 0 and the fallback message appears. In swiss, s repeats but w occurs once.

### Why this approach?

Counting all occurrences avoids mistaking a later repeat for a unique character.

**Complexity:** O(L²) time; O(L) input storage and O(1) extra space.

---

## 9. First Repeating Character in a String — `firstrepeatingstr.cpp`

### Purpose

Find the earliest-positioned character that appears again later.

**Sample run:** input `hello` → `First Repeating Character is : l`

### Complete code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a String : " ;
    cin >> str;
    int flag = 0;
    for (size_t i = 0; i < str.length(); i++) {
        int count = 0;
        for (size_t j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > 0) {
            cout << "First Repeating Character is : " << str[i] << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << "No Repeating Character " << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. The outer loop visits candidate positions from left to right.
2. The inner loop starts at i + 1, so the candidate is never compared with itself.
3. count > 0 means a later match exists; the program prints the candidate and stops.
4. flag controls the no-match message.
5. This means earliest first occurrence among repeated characters. For abba, the answer is a, although b is the first character to repeat during a left-to-right scan.

### Why this approach?

Define “first repeating” precisely: different definitions can produce different answers.

**Complexity:** O(L²) time; O(L) input storage and O(1) extra space.

---

## 10. Grade Calculator (if-else ladder) — `grade.cpp`

### Purpose

Convert a mark from 0 to 100 into a letter grade.

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter Marks : ";
    if (!(cin >> marks) || marks < 0 || marks > 100) {
        cout << "Enter an integer from 0 to 100." << endl;
        return 1;
    }
    if (marks >= 90) {
        cout << "Grade : A" << endl;
    }
    else if (marks >= 80) {
        cout << "Grade : B" << endl;
    }
    else if (marks >= 70) {
        cout << "Grade : C" << endl;
    }
    else if (marks >= 60) {
        cout << "Grade : D" << endl;
    }
    else {
        cout << "Grade : F" << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. Input validation rejects marks outside 0–100.
2. Conditions are checked from the highest threshold downward.
3. Only the first matching branch runs. A mark of 85 fails >= 90 but passes >= 80, producing B.
4. The final else handles all valid marks below 60.

### Why this approach?

Descending thresholds avoid needing separate upper bounds for every grade.

**Complexity:** O(1) time and extra space.

---

## 11. Grade Calculator (switch-case) — `grade1.cpp`

### Purpose

Calculate the same grades using switch.

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter Ur Mark : ";
    if (!(cin >> a) || a < 0 || a > 100) {
        cout << "Enter an integer from 0 to 100." << endl;
        return 1;
    }

    switch (a / 10) {
        case 10:
        case 9:
            cout << "Grade : A" << endl;
            break;
        case 8:
            cout << "Grade : B" << endl;
            break;
        case 7:
            cout << "Grade : C" << endl;
            break;
        case 6:
            cout << "Grade : D" << endl;
            break;
        default:
            cout << "Grade : F" << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. Integer division a / 10 groups marks into bands: 85 / 10 equals 8.
2. case 10 and case 9 share the A output, handling 100 and 90–99.
3. break exits the switch after a matching grade, preventing execution from falling into the next case.
4. default assigns F to valid marks below 60. Input validation prevents out-of-range marks from being graded.

### Why this approach?

switch is useful when a value can be mapped into a small set of discrete categories.

**Complexity:** O(1) time and extra space.

---

## 12. Hollow Diamond Star Pattern — `hprmd.cpp`

### Purpose

Print only the outline of a diamond.

**Sample Output (n = 4):**

```
      *
    *   *
  *       *
*           *
  *       *
    *   *
      *
```

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    if (!(cin >> n) || n < 1 || n > 100) {
        cout << "Enter an integer from 1 to 100." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. The leading-space loop prints n - i two-space cells to center each row.
2. The row has 2 * i - 1 cells. Only the first and last contain a star.
3. Interior cells contain two spaces; star cells contain a star and one space.
4. The second half begins at n - 1 and shrinks to 1, avoiding a duplicated center.

### Why this approach?

Border conditions separate hollow patterns from filled patterns.

**Complexity:** O(n²) time; O(1) extra space.

---

## 13. Hollow Number Triangle Pattern — `htri.cpp`

### Purpose

Print a number triangle with an empty interior.

**Sample Output (n = 5):**

```
1
1 2
1   3
1     4
1 2 3 4 5
```

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    if (!(cin >> n) || n < 1 || n > 9) {
        cout << "Enter an integer from 1 to 9." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == n || j == 1 || i == j) {
                cout << j << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. The outer loop selects row i; the inner loop visits columns 1 through i.
2. i == n prints the entire bottom row; j == 1 prints the left edge; i == j prints the diagonal.
3. The 
4. 
5.  operator means any one of these conditions is enough.
6. Other positions print spaces. Rows are limited to 1–9 so every number occupies one digit and alignment stays consistent.

### Why this approach?

A hollow shape can be described as the union of its borders.

**Complexity:** O(n²) time; O(1) extra space.

---

## 14. Print Even Numbers from 1 to N — `loop.cpp`

### Purpose

Display even integers from 1 through n.

**Sample run:** for `n = 10` → `2 4 6 8 10` (each on its own line)

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    if (!(cin >> n) || n < 1 || n > 10000) {
        cout << "Enter an integer from 1 to 10000." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << " " << i << endl;
        }
    }
    return 0;
}
```

### Step-by-step explanation

1. The loop checks each integer i in the interval.
2. i % 2 == 0 identifies even numbers because division by 2 leaves no remainder.
3. Each matching number is printed on its own line.
4. For n = 1, nothing follows the prompt because the interval has no even numbers.

### Why this approach?

This demonstrates filtering a sequence with a condition.

**Complexity:** O(n) time; O(1) extra space.

---

## 15. Maximum and Minimum in an Array — `mnmx.cpp`

### Purpose

Find the largest and smallest values in a nonempty array.

**Sample run:** elements `3 9 1 7` → `Max Val = 9`, `Min Val = 1`

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter Array Size: " << endl;
    if (!(cin >> n) || n < 1 || n > 10000) {
        cout << "Enter an integer from 1 to 10000." << endl;
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid element." << endl;
            return 1;
        }
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Max Val = " << max << endl;
    cout << "Min Val = " << min << endl;
    return 0;
}
```

### Step-by-step explanation

1. Validation ensures n is positive before accessing arr[0].
2. Both max and min start at the first actual element, so negative-only arrays also work.
3. The loop starts at index 1 because index 0 already initialized the answers.
4. Each new value may replace max or min. After the final iteration, both describe the entire array.

### Why this approach?

Starting from real data is safer than assuming an initial maximum of 0.

**Complexity:** O(n) time; O(n) input storage and O(1) extra space.

---

## 16. Move Zeros to the End of an Array — `mv0.cpp`

### Purpose

Move zeros to the end while preserving other elements’ order.

**Sample run:** elements `1 0 2 0 0 3 5` → `1 2 3 5 0 0 0`

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size ";
    if (!(cin >> n) || n < 0 || n > 10000) {
        cout << "Enter an integer from 0 to 10000." << endl;
        return 1;
    }
    if (n == 0) {
        cout << "Array is empty" << endl;
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid element." << endl;
            return 1;
        }
    }

    // Move all non-zero elements to the front (keeping their order)
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos] = arr[i];
            pos++;
        }
    }
    // Fill the remaining positions with zeros
    while (pos < n) {
        arr[pos] = 0;
        pos++;
    }

    cout << "Array after moving zeros: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

### Step-by-step explanation

1. An empty input size prints Array is empty and exits.
2. pos is the index where the next nonzero value belongs.
3. The scan copies each nonzero value to arr[pos], then increments pos. Because pos never exceeds i, unread values are not overwritten.
4. After the scan, positions 0 through pos - 1 contain the nonzero values in order.
5. The while loop fills the remaining positions with zeros. For 1 0 2 0 3, the result is 1 2 3 0 0.

### Why this approach?

A read position and write position allow stable rearrangement without another array.

**Complexity:** O(n) time; O(n) input storage and O(1) extra space.

---

## 17. Right-Aligned Star Triangle — `nestdfor.cpp`

### Purpose

Print a triangle whose right edge stays aligned.

**Sample Output (n = 5):**

```
         *
       * *
     * * *
   * * * *
 * * * * *
```

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a Number : " << endl;
    if (!(cin >> x) || x < 1 || x > 100) {
        cout << "Enter an integer from 1 to 100." << endl;
        return 1;
    }
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= x - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. For row i, print x - i cells of two spaces.
2. Then print i cells containing a space followed by a star.
3. As the star count increases, the leading-space count decreases.
4. Each complete row occupies the same width, which aligns the right edge.

### Why this approach?

Leading padding controls horizontal alignment in console patterns.

**Complexity:** O(x²) time; O(1) extra space.

---

## 18. Palindrome Number Check — `palindrome.cpp`

### Purpose

Check whether a nonnegative integer reads the same backward.

**Sample run:** `n = 121` → `Reverse of digits is : 121` → `The number is a palindrome`

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter n Numbers : " << endl;
    if (!(cin >> n) || n < 0 || n > 2147483647) {
        cout << "Enter an integer from 0 to 2147483647." << endl;
        return 1;
    }
    long long original = n;
    long long r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    cout << "Reverse of digits is : " << r << endl;
    if (r == original) {
        cout << "The number is a palindrome" << endl;
    }
    else {
        cout << "The number is not a palindrome" << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. original saves the input because the loop will modify n.
2. n % 10 extracts the last digit; r * 10 makes room before appending that digit.
3. n /= 10 removes the last digit from n.
4. The program compares the completed reverse with original. Input 121 matches; input 120 reverses to 21 and does not.
5. Zero is a palindrome. Inputs are limited to 0–2147483647; long long safely stores their reversed digits.

### Why this approach?

Saving the original value lets a destructive digit-processing loop still perform a final comparison.

**Complexity:** O(d) time for d digits; O(1) extra space.

---

## 19. Palindromic Number Pyramid Pattern — `pd.cpp`

### Purpose

Print rows that read the same in both directions.

**Sample Output (n = 4):**

```
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
```

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    if (!(cin >> n) || n < 1 || n > 9) {
        cout << "Enter an integer from 1 to 9." << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
```

### Step-by-step explanation

1. The first inner loop prints leading padding.
2. The next loop prints 1 through i in increasing order.
3. The last loop prints i - 1 down to 1, so the center value appears only once.
4. For row 4, the sequence is 1 2 3 4 3 2 1. Rows are limited to 1–9 to preserve single-digit alignment.

### Why this approach?

Build a symmetric row from an ascending sequence and its descending counterpart.

**Complexity:** O(n²) time; O(1) extra space.

---

## 20. Diamond Star Pattern — `prmd.cpp`

### Purpose

Print a filled diamond of stars.

**Sample Output (n = 4):**

```
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
```

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    if (!(cin >> n) || n < 1 || n > 100) {
        cout << "Enter an integer from 1 to 100." << endl;
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. Upper row i begins with n - i two-space cells.
2. It then prints 2 * i - 1 star cells, giving odd row widths 1, 3, 5, and so on.
3. The lower half repeats the same row logic with decreasing i.
4. Starting the lower half at n - 1 produces exactly 2 * n - 1 rows.

### Why this approach?

Combining increasing and decreasing pyramids produces a diamond.

**Complexity:** O(n²) time; O(1) extra space.

---

## 21. Count Occurrences of Each Array Element — `rep.cpp`

### Purpose

Count each distinct array value once.

**Sample run:** elements `1 2 2 3 3 3` → `1 occurs 1 times`, `2 occurs 2 times`, `3 occurs 3 times`

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size ";
    if (!(cin >> n) || n < 0 || n > 10000) {
        cout << "Enter an integer from 0 to 10000." << endl;
        return 1;
    }
    if (n == 0) {
        cout << "Array is empty" << endl;
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid element." << endl;
            return 1;
        }
    }

    vector<int> temp(n);                              // marks elements already counted
    for (int i = 0; i < n; i++) temp[i] = 0;

    for (int i = 0; i < n; i++) {
        if (temp[i] == 1) continue;
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                temp[j] = 1;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}
```

### Step-by-step explanation

1. temp is a parallel marker vector: 0 means not counted and 1 means already included in a frequency.
2. If temp[i] is 1, continue skips that outer iteration.
3. Otherwise, the inner loop counts every value equal to arr[i] and marks each matching position.
4. The program prints the count once. Results follow first-appearance order, not sorted order.
5. For 2 1 2, the output lists 2 with count 2, then 1 with count 1.

### Why this approach?

Markers prevent duplicate reports while keeping the algorithm accessible through nested loops.

**Complexity:** O(n²) time; O(n) input storage and O(n) extra space.

---

## 22. Reverse an Array (Two-Pointer Method) — `revarr.cpp`

### Purpose

Reverse an array in place.

**Sample run:** elements `10 20 30 40 50` → `50 40 30 20 10`

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter Array Size: " << endl;
    if (!(cin >> n) || n < 0 || n > 10000) {
        cout << "Enter an integer from 0 to 10000." << endl;
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid element." << endl;
            return 1;
        }
    }
    int left = 0;
    int right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
    cout << "Array Elements are: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

### Step-by-step explanation

1. left begins at 0; right begins at n - 1.
2. A temporary variable saves the left value while the two endpoints are swapped.
3. left increases and right decreases, bringing the pointers toward the center.
4. The loop stops when they meet or cross. An odd-length array leaves its middle element in place.
5. For an empty array, right is -1 and the loop is skipped safely.

### Why this approach?

Each swap puts two values into their final positions, avoiding a second array.

**Complexity:** O(n) time; O(n) input storage and O(1) extra space.

---

## 23. Matrix Input and Display — `rot.cpp`

### Purpose

Read and print a square matrix.

**Sample run:** size `2`, elements `1 2 3 4` →

```
Matrix is :
1 2
3 4
```

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n < 1 || n > 100) {
        cout << "Enter an integer from 1 to 100." << endl;
        return 1;
    }


    // Create n x n matrix using vector
    vector<vector<int>> arr(n, vector<int>(n));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!(cin >> arr[i][j])) {
                cout << "Invalid element." << endl;
                return 1;
            }
        }
    }

    // Output matrix
    cout << "Matrix is : " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

### Step-by-step explanation

1. vector<vector<int>> creates n rows, each containing n integers.
2. arr[i][j] accesses row i and column j using zero-based indices.
3. Nested loops read the matrix row by row.
4. A second pair of loops prints each row, with a newline after every row.
5. The program only displays the matrix; it does not rotate it.

### Why this approach?

Two indices model data arranged in rows and columns.

**Complexity:** O(n²) time and storage; O(1) extra space beyond the matrix.

---

## 24. Reverse the Digits of a Number — `sum.cpp`

### Purpose

Reverse the decimal digits of a nonnegative integer.

**Sample run:** `n = 1234` → `Reverse of digits is : 4321`

### Complete code

```cpp
#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter n Numbers : " << endl;
    if (!(cin >> n) || n < 0 || n > 2147483647) {
        cout << "Enter an integer from 0 to 2147483647." << endl;
        return 1;
    }
    long long r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    cout << "Reverse of digits is : " << r << endl;
    return 0;
}
```

### Step-by-step explanation

1. r starts at 0.
2. n % 10 extracts the rightmost digit and r = r * 10 + n % 10 appends it to the reverse.
3. n /= 10 discards the digit just processed.
4. For 1234, r becomes 4, 43, 432, then 4321.
5. Input 1200 produces 21 because integers do not preserve leading zeros. Input 0 produces 0. Input is limited to 0–2147483647 and the result uses long long.

### Why this approach?

Remainder and integer division let you process digits without converting to a string.

**Complexity:** O(d) time for d digits; O(1) extra space.

---

## 25. Linear Search in an Array — `linear_search.cpp`

### Purpose

Find the first position containing a target value.

**Example:** Array `8 3 8 1`, target `8` → `First matching index: 0`.

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size (0-10000): ";
    if (!(cin >> n) || n < 0 || n > 10000) {
        cout << "Invalid size." << endl;
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid element." << endl;
            return 1;
        }
    }
    int target;
    cout << "Enter target: ";
    if (!(cin >> target)) return 1;
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }
    if (found == -1) cout << "Not found" << endl;
    else cout << "First matching index: " << found << endl;
    return 0;
}
```

### Step-by-step explanation

1. found starts at -1, which is not a valid array index.
2. Visit each element and compare it with target.
3. On a match, save the zero-based index and break.
4. If the array is empty or no element matches, found stays -1.

### Why this approach?

Linear search works even when the array is unsorted. The same scan-and-condition structure appears in the even-number exercise.

**Complexity:** O(n) time; O(n) input storage and O(1) extra space.

---

## 26. Second-Largest Distinct Array Value — `second_largest.cpp`

### Purpose

Find the largest value that is strictly smaller than the maximum.

**Example:** Array `9 9 4 7` → `Second largest: 7`; array `5 5` → no second-largest distinct value.

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size (0-10000): ";
    if (!(cin >> n) || n < 0 || n > 10000) {
        cout << "Invalid size." << endl;
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid element." << endl;
            return 1;
        }
    }
    if (n == 0) {
        cout << "No second-largest distinct value" << endl;
        return 0;
    }
    int largest = arr[0], second = 0;
    bool hasSecond = false;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
            hasSecond = true;
        } else if (arr[i] < largest && (!hasSecond || arr[i] > second)) {
            second = arr[i];
            hasSecond = true;
        }
    }
    if (hasSecond) cout << "Second largest: " << second << endl;
    else cout << "No second-largest distinct value" << endl;
    return 0;
}
```

### Step-by-step explanation

1. largest starts at the first element; hasSecond records whether a distinct runner-up exists.
2. When a new largest value appears, the old largest becomes second.
3. Otherwise, a value below largest can improve second.
4. Equal copies of largest are ignored. The flag allows negative numbers without relying on a sentinel value.
5. Empty, single-element, and all-equal arrays have no second-largest distinct value.

### Why this approach?

This extends maximum/minimum tracking to two candidates in one pass.

**Complexity:** O(n) time; O(n) input storage and O(1) extra space.

---

## 27. Remove Duplicate Array Values — `remove_duplicates.cpp`

### Purpose

Keep only the first occurrence of each array value.

**Example:** Array `3 1 3 2 1` → `Unique values: 3 1 2`.

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size (0-10000): ";
    if (!(cin >> n) || n < 0 || n > 10000) {
        cout << "Invalid size." << endl;
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid element." << endl;
            return 1;
        }
    }
    vector<int> uniqueValues;
    for (int value : arr) {
        bool exists = false;
        for (int saved : uniqueValues) {
            if (value == saved) {
                exists = true;
                break;
            }
        }
        if (!exists) uniqueValues.push_back(value);
    }
    cout << "Unique values: ";
    for (int value : uniqueValues) cout << value << " ";
    cout << endl;
    return 0;
}
```

### Step-by-step explanation

1. uniqueValues begins empty.
2. A range-based for loop takes each value from arr.
3. The inner loop checks whether the value has already been saved.
4. If exists is false, push_back appends the value.
5. The original array remains unchanged, and output preserves first-appearance order.

### Why this approach?

This builds on occurrence counting: instead of reporting a count, retain one copy.

**Complexity:** O(n²) time in the worst case; O(n) input storage and O(n) extra space.

---

## 28. Rotate an Array Left by One Position — `rotate_left.cpp`

### Purpose

Move the first value to the end and shift the others left.

**Example:** Array `10 20 30 40` → `Rotated array: 20 30 40 10`.

### Complete code

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size (0-10000): ";
    if (!(cin >> n) || n < 0 || n > 10000) {
        cout << "Invalid size." << endl;
        return 1;
    }
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid element." << endl;
            return 1;
        }
    }
    if (n > 0) {
        int first = arr[0];
        for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
        arr[n - 1] = first;
    }
    cout << "Rotated array: ";
    for (int value : arr) cout << value << " ";
    cout << endl;
    return 0;
}
```

### Step-by-step explanation

1. The n > 0 guard prevents accessing an empty array.
2. Save arr[0] before shifting, or its value would be lost.
3. Copy each following element into the preceding position.
4. Place the saved first value at index n - 1. A single-element array is unchanged.

### Why this approach?

This complements reversal and moving zeros: it is another in-place rearrangement.

**Complexity:** O(n) time; O(n) input storage and O(1) extra space.

---

## 29. Check a String Palindrome — `string_palindrome.cpp`

### Purpose

Check whether the text is identical when read backward.

**Example:** `level` → `Palindrome`; `Level` → `Not a palindrome`.

### Complete code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    size_t left = 0, right = text.size();
    bool palindrome = true;
    while (left < right) {
        right--;
        if (text[left] != text[right]) {
            palindrome = false;
            break;
        }
        left++;
    }
    cout << (palindrome ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
```

### Step-by-step explanation

1. left starts at the first character; right starts one past the final character.
2. Decrement right before accessing it, then compare the two ends.
3. A mismatch makes palindrome false and stops the loop.
4. Moving inward checks the whole string. The empty string counts as a palindrome.
5. Comparison is exact and case-sensitive; spaces and punctuation matter. This beginner example assumes ASCII text.

### Why this approach?

This transfers the two-pointer idea from array reversal to string comparison.

**Complexity:** O(L) time; O(L) input storage and O(1) extra space.

---

## 30. Count Vowels and Consonants — `vowels_consonants.cpp`

### Purpose

Count English vowels and consonants, ignoring nonletters.

**Example:** `Hello 123!` → `Vowels: 2`, `Consonants: 3`.

### Complete code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    int vowels = 0, consonants = 0;
    for (char ch : text) {
        if (ch >= 'A' && ch <= 'Z') ch = char(ch - 'A' + 'a');
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}
```

### Step-by-step explanation

1. The loop copies each character into ch.
2. ASCII uppercase letters are converted to lowercase in that local copy.
3. Only characters a through z are classified.
4. a, e, i, o, and u increase vowels; other English letters, including y, increase consonants.
5. Spaces, digits, and punctuation do not change either counter.

### Why this approach?

This refines the character-classification exercise by splitting letters into two groups.

**Complexity:** O(L) time; O(L) input storage and O(1) extra space.

---

## 31. Reverse a String In Place — `reverse_string.cpp`

### Purpose

Reverse all characters, including spaces and punctuation.

**Example:** `C++ code` → `Reversed text: edoc ++C`.

### Complete code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    size_t left = 0, right = text.size();
    while (left < right) {
        right--;
        if (left >= right) break;
        char temp = text[left];
        text[left] = text[right];
        text[right] = temp;
        left++;
    }
    cout << "Reversed text: " << text << endl;
    return 0;
}
```

### Step-by-step explanation

1. right starts one past the end, avoiding size() - 1 underflow for empty strings.
2. The loop moves right onto a valid character and stops if the pointers meet or cross.
3. A temporary character lets the program exchange the left and right characters.
4. Incrementing left continues inward until every pair has been swapped.
5. This works on ASCII text; reversing UTF-8 bytes does not correctly reverse general Unicode characters.

### Why this approach?

Strings support indexed access just like arrays, so the same swapping technique applies.

**Complexity:** O(L) time; O(L) input storage and O(1) extra space.

---

## 32. Count English Letter Frequencies — `letter_frequency.cpp`

### Purpose

Count each English letter without distinguishing uppercase from lowercase.

**Example:** `Banana!` → `a: 3`, `b: 1`, `n: 2` on separate lines.

### Complete code

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);
    int frequency[26] = {0};
    for (char ch : text) {
        if (ch >= 'A' && ch <= 'Z') ch = char(ch - 'A' + 'a');
        if (ch >= 'a' && ch <= 'z') frequency[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0)
            cout << char('a' + i) << ": " << frequency[i] << endl;
    }
    return 0;
}
```

### Step-by-step explanation

1. frequency[26] is a standard fixed-size array. {0} initializes every entry to 0.
2. ASCII uppercase letters are converted to lowercase.
3. ch - 'a' maps a to index 0, b to 1, and z to 25.
4. Only letters are used as indices, so digits and punctuation cannot index outside the array.
5. The final loop prints nonzero counts alphabetically. This differs from the first-appearance order in the array occurrence exercise.

### Why this approach?

A frequency array avoids repeatedly scanning the entire string for each letter.

**Complexity:** O(L + 26) time, which is O(L); O(L) input storage and O(1) extra space.

---

## Suggested practice order

1. Start with sums, factorial, factors, even numbers, and grades.
2. Practice filled patterns before hollow patterns.
3. Learn array input/output, minimum/maximum, linear search, and reversal.
4. Continue with moving zeros, rotation, duplicate removal, frequencies, and second-largest values.
5. Practice character classification, vowels/consonants, string reversal, palindromes, and repeating characters.
6. Finish with matrix input/output and try extending it to a rectangular matrix.

For each exercise, predict the output first. Then try an ordinary example, the smallest allowed input, and a case with repeated or zero values where applicable.
