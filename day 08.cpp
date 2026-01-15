#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    cout << "Enter marks:\n";
    for(int i = 0; i < n; i++)
        cin >> marks[i];

    int max = marks[0];
    int min = marks[0];

    for(int i = 1; i < n; i++)
    {
        if(marks[i] > max)
            max = marks[i];
        if(marks[i] < min)
            min = marks[i];
    }

    cout << "\n--- CLASS REPORT ---\n";
    cout << "Topper Score: " << max << endl;
    cout << "Lowest Score: " << min << endl;

    int key;
    cout << "\n--- SEARCH ---\n";
    cout << "Enter score to find: ";
    cin >> key;

    bool found = false;
    for(int i = 0; i < n; i++)
    {
        if(marks[i] == key)
        {
            cout << "Student with " << key
                 << " found at Index " << i
                 << " (Roll No " << i + 1 << ").\n";
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Score Not Found\n";

  
    cout << "\n--- REVERSE LIST ---\n";
    for(int i = n - 1; i >= 0; i--)
        cout << marks[i] << " ";

    return 0;
}

