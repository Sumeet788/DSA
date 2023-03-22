#include <iostream>
using namespace std;

int Binary_search(int arr[], int n, int element)
{
    int flag=0;
    int low, mid, high;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            cout<<"The element "<<element<<" was found at index "<<endl;
            flag=1;
            break;
        }

        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if(flag==0)
    {
        cout<<"Search Unsuccessfull"<<endl;
    }
    return 0;
}

int main()
{
    int arr[50];
    int n, element;

    cout << "Enter the elements of the array: ";
    cin >> n;
    if(n==0)
    {
        cout<<"Array is empty"<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Enter the element you want to search: ";
    cin >> element;
    cout << endl;

    Binary_search(arr,n,element);
    
    return 0;

}