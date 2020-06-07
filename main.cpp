#include <iostream>

using namespace std;
int linear_search(int arr[], int n , int x)
{
        for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
            return i;

    }

        return -1;
}

int main()
{
    int arr[]= {1,4,5,5,8,4};
    int i,n,x;
    n= sizeof(arr)/sizeof(arr[0]);
    cin>>x;
    int r =linear_search(arr,n,x);
    if(r!= -1)
    {
        cout<<r<<endl;
    }
    else
        cout<<"not found"<<endl;




}



