#include <iostream> // Include necessary header for cout
using namespace std;

void nForest(int n)
{
    for (int i = 0; i < n; i++)
    { // outer loop for rows
        for (int j = 0; j < n; j++)
        {                 // inner loop for columns
            cout << "* "; // Print star and space
        }
        cout << "\n";
    }
}

int main()
{
    int n = 3;
    nForest(n); // Function call
    return 0;
}