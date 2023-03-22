#include <iostream>
using namespace std;

class MyArray
{
    int totalsize;
    int usedsize;
    int *ptr;

    public:
        MyArray(int tsize,int usize)
        {
            totalsize = tsize;
            usedsize = usize;
            ptr = new int(tsize);
        }

        void setVal()
        {
            for (int i = 0; i < usedsize; i++)
            {
                cout<<"Enter the value "<<i<<" : "<<endl;
                cin>>ptr[i];
            }    
        }

        void showVal()
        {
            for (int i = 0; i < usedsize; i++)
            {
                cout<<"The value is: "<<ptr[i]<<endl;
            }
        }
        
};

int main()
{
    MyArray marks(10,2);
    marks.setVal();
    marks.showVal();
    return 0;
}