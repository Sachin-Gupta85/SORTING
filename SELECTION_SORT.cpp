#include<iostream>
using namespace std;
void selection_sort(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        int k=i;
        for(int j=i+1; j<size; j++)
        {
           if(arr[j]<arr[k])
           {
              k=j;
              swap(arr[i],arr[k]);
           }
        }
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
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    selection_sort(arr,10);
     print_arr(arr,10);
     return 0;
}