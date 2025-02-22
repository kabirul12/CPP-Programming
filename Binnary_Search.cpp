#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements you want: ";
    cin >>n;
    int arr[n];
    int start = 0;
    int end =n-1;
    int mid;
    int found = -1;
    int pos = 0;
    int target;
    cout << "Enter arrray elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Display arrray elements: " <<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    cout <<endl;

    cout << "Enter the target number: ";
    cin >> target;

    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            found = mid;
            pos = mid + 1;
            break;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (found == 0)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found index at : " << found << "\nPosition at " << pos << endl;
    }

    return 0;
}
