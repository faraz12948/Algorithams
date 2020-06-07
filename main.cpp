#include <iostream>

using namespace std;
void swap(int *pt1 , int *pt2)
{
    int temp=*pt1;
    *pt1=*pt2;
    *pt2=temp;
}
void printarray(int arr[], int x)
{
    int i;
    for(i=0; i<x;i++)
    {
        cout<<arr[i]<< endl;
    }
}
void bubblesort(int arr[],int x)
{
    int i,j;
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

}

int main()
{
    int arr[]= {2,7,4,3,5,3};
    int n;

    n= sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    printarray(arr,n);



}
