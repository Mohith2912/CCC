# C++ Programs Collection 🚀

A collection of **24 beginner-friendly C++ practice programs** covering loops, patterns, arrays, strings, matrices, conditional statements, and number manipulation. Each program is listed below with its title, a short description, and the corrected form of its code.

---

## How to Compile and Run

```bash
g++ <filename>.cpp -o <filename>
```

Then run the executable:

- **Windows:** `<filename>.exe`
- **Linux / macOS:** `./<filename>`

---

## Index of Programs

| # | File | Program Title | Concept Used |
|:---:|-------|---------------|--------------|
| 1 | `an.cpp` | Sum of First N Natural Numbers | `for` loop |
| 2 | `arr.cpp` | Array Input and Display | Arrays |
| 3 | `btr.cpp` | Butterfly Star Pattern | Nested loops |
| 4 | `count.cpp` | Count Character Types in a String | Strings, `if-else` |
| 5 | `even_odd.cpp` | Bank Login Simulation with Withdrawal | `if-else`, strings |
| 6 | `fact.cpp` | Factorial of a Number | `for` loop |
| 7 | `factor.cpp` | Factors of a Number | `for` loop, `%` operator |
| 8 | `firstnorepch.cpp` | First Non-Repeating Character in a String | Strings, nested loops |
| 9 | `firstrepeatingstr.cpp` | First Repeating Character in a String | Strings, nested loops |
| 10 | `grade.cpp` | Grade Calculator (if-else ladder) | `if-else` |
| 11 | `grade1.cpp` | Grade Calculator (switch-case) | `switch` |
| 12 | `hprmd.cpp` | Hollow Diamond Star Pattern | Nested loops |
| 13 | `htri.cpp` | Hollow Number Triangle Pattern | Nested loops |
| 14 | `loop.cpp` | Print Even Numbers from 1 to N | `for` loop |
| 15 | `mnmx.cpp` | Maximum and Minimum in an Array | Arrays |
| 16 | `mv0.cpp` | Move Zeros to the End of an Array | Arrays |
| 17 | `nestdfor.cpp` | Right-Aligned Star Triangle | Nested loops |
| 18 | `palindrome.cpp` | Palindrome Number Check | `while` loop |
| 19 | `pd.cpp` | Palindromic Number Pyramid Pattern | Nested loops |
| 20 | `prmd.cpp` | Diamond Star Pattern | Nested loops |
| 21 | `rep.cpp` | Count Occurrences of Each Array Element | Arrays |
| 22 | `revarr.cpp` | Reverse an Array (Two-Pointer) | Arrays |
| 23 | `rot.cpp` | Matrix Input and Display | 2D `vector` |
| 24 | `sum.cpp` | Reverse the Digits of a Number | `while` loop |

---

## 1. Sum of First N Natural Numbers — `an.cpp`

Reads a number `n` and calculates the sum `1 + 2 + 3 + ... + n` using a `for` loop.

**Sample run:** for `n = 5` → `Sum of first 5 numbers is : 15`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout << "Sum of first " << n << " numbers is : " << sum << endl;
    return 0;
}
```

---

## 2. Array Input and Display — `arr.cpp`

Reads `n` elements into an array, then prints them back.

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Array Size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array Elements are: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

---

## 3. Butterfly Star Pattern — `btr.cpp`

Prints a butterfly shape — stars on both edges of each row with spaces in the middle, first expanding (rows 1 → n), then shrinking (rows n-1 → 1).

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

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a Number : " << endl;
    cin >> x;
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

---

## 4. Count Character Types in a String — `count.cpp`

Reads a full line of text using `getline` and counts how many alphabets, digits, spaces, and special characters it contains.

**Sample run:** input `Hello World 123!` → `Alphabets: 10`, `Digits: 3`, `Spaces: 2`, `Special Characters: 1`

```cpp
#include <iostream>
using namespace std;
int main() {
    string str;
    int alphabets = 0, digits = 0, spaces = 0, special = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
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

---

## 5. Bank Login Simulation with Withdrawal — `even_odd.cpp`

Checks the username and password; on successful login it lets the user withdraw an amount from the bank balance (if sufficient) and shows the remaining balance.

> **Note:** Despite the file name `even_odd.cpp`, this program is a login + bank-balance simulation.

```cpp
#include <iostream>
using namespace std;

int main() {
    string username = "SRM123", password = "srm@123";
    cout << "Enter Username : ";
    cin >> username;
    cout << "Enter Password : ";
    cin >> password;
    if (username == "SRM123" && password == "srm@123") {
        cout << "Login Successful" << endl;
        int a, b, c;
        cout << "Bank Balance : ";
        cin >> a;
        cout << "Withdraw Amount : ";
        cin >> b;
        if (a >= b) {
            cout << "You can Withdraw the amount" << endl;
        }
        else {
            cout << "Insufficient Balance" << endl;
        }
        c = a - b;
        cout << "Remaining Balance : " << c << endl;
    }
    else {
        cout << "Invalid Credentials" << endl;
    }
    return 0;
}
```

---

## 6. Factorial of a Number — `fact.cpp`

Reads a number `n` and computes its factorial (`1 * 2 * 3 * ... * n`) using a `for` loop. A negative input is rejected.

**Sample run:** for `n = 5` → `Factorial of 5 is: 120`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number : " << endl;
    cin >> n;
    if (n < 0) {
        cout << "Negative value not possible : ";
        return 0;
    }
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}
```

---

## 7. Factors of a Number — `factor.cpp`

Prints all factors (divisors) of the given number — every `i` from `1` to `n/2` that divides `n` evenly, followed by `n` itself.

**Sample run:** for `n = 12` → `1 2 3 4 6 12`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << n << endl;
    return 0;
}
```

---

## 8. First Non-Repeating Character in a String — `firstnorepch.cpp`

Reads a word and finds the first character that occurs exactly once in it. For every character, an inner loop counts its total occurrences in the string; the first one with a count of `1` is printed. If every character repeats, it prints `No non-repeating char`.

**Sample run:** input `swiss` → `First Non-Repeating Char: w`

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string:";
    cin >> str;
    int flag = 0;
    for (int i = 0; i < str.length(); i++) {
        int count = 0;
        for (int j = 0; j < str.length(); j++) {
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

---

## 9. First Repeating Character in a String — `firstrepeatingstr.cpp`

Reads a word and finds the first character that appears again later in the string. For every position `i`, an inner loop scans the rest of the string (`j > i`) for a match; the first character found this way is printed, otherwise `No Repeating Character`.

**Sample run:** input `hello` → `First Repeating Character is : l`

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a String : " ;
    cin >> str;
    int flag = 0;
    for (int i = 0; i < str.length(); i++) {
        int count = 0;
        for (int j = i + 1; j < str.length(); j++) {
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

---

## 10. Grade Calculator (if-else ladder) — `grade.cpp`

Assigns a grade based on the marks entered: A (≥ 90), B (≥ 80), C (≥ 70), D (≥ 60), otherwise F.

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter Marks : ";
    cin >> marks;
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

---

## 11. Grade Calculator (switch-case) — `grade1.cpp`

Same grading logic as above, implemented with a `switch` statement on `marks / 10` (so 90–100 → A, 80–89 → B, and so on).

```cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter Ur Mark : ";
    cin >> a;

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

---

## 12. Hollow Diamond Star Pattern — `hprmd.cpp`

Prints a hollow diamond — only the left and right edges of each row are stars, the inside is filled with spaces. The pattern grows (rows 1 → n) and then shrinks (rows n-1 → 1).

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

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
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

---

## 13. Hollow Number Triangle Pattern — `htri.cpp`

Prints a hollow right-angled triangle of numbers — only the first column, the diagonal (i == j) and the last row (i == n) are printed.

**Sample Output (n = 5):**

```
1
1 2
1   3
1     4
1 2 3 4 5
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
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

---

## 14. Print Even Numbers from 1 to N — `loop.cpp`

Prints every even number from 1 to `n`, one per line, using a `for` loop with the `%` (modulo) operator.

**Sample run:** for `n = 10` → `2 4 6 8 10` (each on its own line)

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << " " << i << endl;
        }
    }
    return 0;
}
```

---

## 15. Maximum and Minimum in an Array — `mnmx.cpp`

Reads `n` array elements and finds the largest (`max`) and smallest (`min`) values.

**Sample run:** elements `3 9 1 7` → `Max Val = 9`, `Min Val = 1`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Array Size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
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

---

## 16. Move Zeros to the End of an Array — `mv0.cpp`

Reads `n` array elements and shifts every `0` to the end of the array while keeping the relative order of the non-zero elements.

> **Note:** The original file was incomplete — it only read the array, and it checked `n == 0` **before** `n` was read from the user (an uninitialized variable). The complete, corrected version is shown below.

**Sample run:** elements `1 0 2 0 0 3 5` → `1 2 3 5 0 0 0`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size ";
    cin >> n;
    if (n == 0) {
        cout << "Array is empty" << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
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

---

## 17. Right-Aligned Star Triangle — `nestdfor.cpp`

Prints a right-aligned triangle of stars using nested `for` loops (leading spaces, then stars).

**Sample Output (n = 5):**

```
         *
       * *
     * * *
   * * * *
 * * * * *
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter a Number : " << endl;
    cin >> x;
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

---

## 18. Palindrome Number Check — `palindrome.cpp`

Reverses the digits of the number and checks whether the reversed value equals the original (i.e., whether the number is a palindrome).

**Sample run:** `n = 121` → `Reverse of digits is : 121` → `The number is a palindrome`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
    int original = n;
    int r = 0;
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

---

## 19. Palindromic Number Pyramid Pattern — `pd.cpp`

Prints a pyramid in which every row is a palindrome of numbers — `1`, then `1 2 1`, then `1 2 3 2 1`, and so on.

**Sample Output (n = 4):**

```
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
```

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;

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

---

## 20. Diamond Star Pattern — `prmd.cpp`

Prints a full diamond of stars — an upward pyramid (rows 1 → n) followed by a downward pyramid (rows n-1 → 1).

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

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
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

---

## 21. Count Occurrences of Each Array Element — `rep.cpp`

Reads `n` array elements and prints how many times each distinct element occurs in the array.

> **Note:** In the original file, the empty-array check `if (n == 0)` ran **before** `n` was read (using an uninitialized variable). Below is the corrected order.

**Sample run:** elements `1 2 2 3 3 3` → `1 occurs 1 times`, `2 occurs 2 times`, `3 occurs 3 times`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size ";
    cin >> n;
    if (n == 0) {
        cout << "Array is empty" << endl;
        return 0;
    }
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int temp[n];                              // marks elements already counted
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

---

## 22. Reverse an Array (Two-Pointer Method) — `revarr.cpp`

Reads `n` array elements, reverses them in place using two indices (`left` and `right`) that swap elements while moving towards the centre, then prints the reversed array.

**Sample run:** elements `10 20 30 40 50` → `50 40 30 20 10`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Array Size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
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

---

## 23. Matrix Input and Display — `rot.cpp`

Reads an `n x n` square matrix into a 2D `vector` and prints it back row by row. A non-positive size is rejected with `Invalid size!`.

> **Note:** Despite the file name `rot.cpp`, this program does not rotate the matrix — it only reads and displays it.

**Sample run:** size `2`, elements `1 2 3 4` →

```
Matrix is :
1 2
3 4
```

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    // Create n x n matrix using vector
    vector<vector<int>> arr(n, vector<int>(n));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
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

---

## 24. Reverse the Digits of a Number — `sum.cpp`

Reverses the digits of a number using arithmetic (`% 10` and `/ 10`) inside a `while` loop.

> **Note:** Despite the file name `sum.cpp`, this program reverses digits — it does not calculate any sum.

**Sample run:** `n = 1234` → `Reverse of digits is : 4321`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n Numbers : " << endl;
    cin >> n;
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    cout << "Reverse of digits is : " << r << endl;
    return 0;
}
```

---
 




