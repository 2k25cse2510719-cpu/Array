#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter Size : ";
    cin>>size;

    int arr[size];

    cout<<"Enter Elements : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element to be searched : ";
    cin>>key;

    int low=0, high=size-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(arr[mid]==key)
        {
            cout<<"Element found at index "<<mid;
            return 0;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    cout<<"Element not found";
    return 0;
}