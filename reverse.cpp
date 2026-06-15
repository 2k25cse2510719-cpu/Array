#include<iostream>
using namespace std;
int main ()
{
    int size;
    cout<<"Enter Size : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter Elements : "<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl;
    cout<<"Reversed Array : "<<endl;
    for(int i =size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}