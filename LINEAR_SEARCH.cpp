#include<iostream>
using namespace std;

int linear_search(int a[], int size, int number)
{
    for(int i=0; i<size; i++)
    {
        if(number==a[i])
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int arr[7]= {1,2,3,4,5,6,7};
    int k=2;
    cout<<linear_search(arr,7,k);
    return 0;
}