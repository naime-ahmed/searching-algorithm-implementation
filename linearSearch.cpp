#include <bits/stdc++.h>
using namespace std;

/*Linear search is a very simple search algorithm. In this type of search, a sequential search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection.*/

int main()
{

    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    char ask;

    do
    {
        int searchNum;
        cout << "Which value do you want to search: ";
        cin >> searchNum;

        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == searchNum)
            {
                flag++;
                cout << "Index No: " << i << " position: " << i + 1 << endl;
            }
        }

        if (flag == 0)
        {
            cout << "NOT FOUND" << endl;
        }

        cout << "Do you want to continue searching? (Y/N) ";
        cin >> ask;
    } while (toupper(ask) != 'N');

    return 0;
}