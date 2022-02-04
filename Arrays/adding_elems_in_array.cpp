#include <bits/stdc++.h>
using namespace std;

void insertBegin(int arr[], int n)
{
    int num;
    cout << "Enter number to put in the beginning : ";
    cin >> num;

    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = num;

    cout << "After inserting in the beginning : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void insertEnd(int arr[], int n)
{
    int num;
    cout << "Enter number to put in the end : ";
    cin >> num;

    arr[n - 1] = num;

    cout << "After inserting in the end : ";
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertPos(int arr[], int n)
{
    int num, pos;
    cout << "Enter position to put the number : ";
    cin >> pos;
    cout << "Enter number to put in the required position : ";
    cin >> num;

    for (int i = n ; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = num;

    cout << "After inserting in the required position : ";
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n;
    cout << "Enter size of the array : ";
    cin >> n;
    int arr[n + 1];
    cout << "Enter the elements in the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertBegin(arr, n + 1);
    insertEnd(arr, n + 1);
    insertPos(arr, n + 1);

    return 0;
}