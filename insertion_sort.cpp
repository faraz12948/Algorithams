#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int insertionsort(int arr[],int n)
{

    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;


    }

}
void print(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}



int main()
{
    int arr[]={5,4,3,2,1};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    print(arr,n);

}
