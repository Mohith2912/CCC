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
