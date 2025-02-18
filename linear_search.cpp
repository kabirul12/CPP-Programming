#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int value, position = -1;
    // Initialization of array...
    cout << "Enter the elements of array: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    // Display the array
    cout << "Array Elements: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the value that we search: ";
    cin >> value;

    for (int i = 0; i < 10; i++)
    {
        if (value == arr[i])
        {
            position = i + 1;
            break;
        }
    }
    if (position == -1)
    {
        cout << "The value is not found in the array..";
    }
    else
    {
        cout << "The position of the value is " << position;
    }

    return 0;
}