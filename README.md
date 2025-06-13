# Program: Asterisk Triangle Output in C++

## Overview

This repository contains a simple C++ program that prints a triangle shape made of asterisks (`*`) to the console. The program prompts the user to enter the number of rows for the triangle and displays a left-aligned triangle using asterisks.

## Features

- User can specify the height (number of rows) of the triangle.
- Outputs a visually appealing left-aligned triangle pattern using asterisks.
- Simple and easy to understand code, suitable for C++ beginners.

## Example Output

If the user enters 5, the output will be:

```
*
**
***
****
*****
```

## Getting Started

### Prerequisites

- C++ compiler (e.g., `g++`, `clang++`)

### How to Run

1. Clone this repository or download the source file.

2. Compile the program:

   ```bash
   g++ -o asterisk_triangle main.cpp
   ```

3. Run the executable:

   ```bash
   ./asterisk_triangle
   ```

4. Enter the number of rows when prompted.

## Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

## License

This project is open source and available under the [MIT License](LICENSE).

## Author

- [maureen]

---

Feel free to contribute or suggest improvements!
