#include <iostream>
using namespace std;

class Linear_Search
{
    public:
    void linearsearch(int arr[],int n,int element)
    {   
        int flag=0;
        int i;
        for(i=0; i<=arr[i]; i++)
        {
            if(arr[i] == element)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Search Unsuccessfully"<<endl;
        }
        else{
            cout<<"The element "<<element<<" was found at index: "<<i<<endl;
        }
    }
};

int main()
{
    int arr[50];
    int n;
    int element;

    cout<<"Enter the elements of the array: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Enter the element you want to search: ";
    cin>>element;
    cout<<endl;

    Linear_Search search;
    search.linearsearch(arr,n,element);

    return 0;
}