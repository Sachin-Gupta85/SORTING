#include<iostream>
using namespace std;

void insertion_sort(int a[], int size)
{
    for(int i=1; i<size; i++)
    {
        int x=a[i];
        int j=i-1;

        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;

    }
}
void print_arr(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
    int arr[10]={9,7,8,6,5,4,2,1,3,0};
     insertion_sort(arr,10);
     print_arr(arr,10);
    return 0;
}