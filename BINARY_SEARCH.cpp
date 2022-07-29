#include <iostream>
using namespace std;
int binary_search(int a[], int size, int number)
{
    int s = 0;
    int e = size - 1;
    
    while (s<=e)
    {
        int mid = (s) + ((e - s) / 2);
         if (number == a[mid])
        {
            return mid;
        }
        else if (number > a[mid])
        {
            s = mid + 1;
        }
        else 
        {
            e = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 6;
    cout << binary_search(arr, 7, k);
    return 0;
}