#include <bits/stdc++.h>
using namespace std;

/*
binary search, also known as half-interval search, logarithmic search, or binary chop, is a search algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array.
*/

// Binary Search logic
int binarySearch(int arr[], int x, int lb, int ub)
{
    if (lb <= ub)
    {
        int mid = (lb + ub) / 2;

        if (x == arr[mid])
            return mid; // center
        else if (x > arr[mid])
        {
            binarySearch(arr, x, mid + 1, ub); // Right side
        }
        else
            binarySearch(arr, x, lb, mid - 1); // left side
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int checkValue;
    cout << "Enter the value you want to search: ";
    cin >> checkValue;

    int indexNumber = binarySearch(arr, checkValue, 0, size - 1);

    if (indexNumber != -1)
    {
        cout << "Index No: " << indexNumber << " Position No: " << indexNumber + 1 << endl;
    }
    else
    {
        cout << "NOTE FOUNT";
    }

    return 0;
}