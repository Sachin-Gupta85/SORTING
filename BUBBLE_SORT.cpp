#include<iostream>
using namespace std;
void bubble_sort(int a[], int size)
{
    int flag=0;
    for(int i=0; i<size-1; i++) // DONE FOR N-1 PASS (SIZE-1)
    {
        for(int j=0; j<size-1-i; j++) // EVERY PASS THAT PASS(i) HIGHEST ELEMENT IS SETTELE (SIZE-1-i)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
            }
        }

        if(flag==0)
        {
            break;
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
    int arr[10]={9,7,8,6,5,4,2,1,3,0};
     bubble_sort(arr,10);
     print_arr(arr,10);
    return 0;
}