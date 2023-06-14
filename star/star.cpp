#include <iostream>
using namespace std;
 
// Function to demonstrate printing pattern
int main()
{
    // Initialising starting number
    int num = 1;
 
    // Outer loop to handle number of rows
    // n in this case
    for (int i = 0; i < 5; i++) {
 
        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j <= i; j++) {
 
            // Printing number
            cout << num << " ";
 
            // Incrementing number at each column
            num = num + 1;
        }
 
        // Ending line after each row
        cout << endl;
    }
}