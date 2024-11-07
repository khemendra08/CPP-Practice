//hollow rectangle 




#include<iostream>
using namespace std;
int main() {
    int rowcount, colcount;
    
    // Input number of rows and columns
    cin >> rowcount;
    cin >> colcount;

    // Outer loop for rows
    for (int row = 0; row < rowcount; row++) {
        // First and last row (filled with stars)
        if (row == 0 || row == rowcount - 1) {
            for (int col = 0; col < colcount; col++) {
                cout << "* ";
            }
        } 
        // Middle rows (hollow with stars at the start and end)
        else {
            cout << "* ";  // First star
            for (int col = 0; col < colcount - 2; col++) {
                cout << "  ";  // Space in between
            }
            cout << "* ";  // Last star
        }
        cout << endl;  // Move to the next line after each row
    }
    return 0;
}






























}
