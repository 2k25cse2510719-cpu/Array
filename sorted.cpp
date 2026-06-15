#include<iostream>
using namespace std;
int main ()
{
    int size;bool sorted=true;
    cout<<"Enter Size : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter Elements :"<<endl; 
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i =0;i<size;i++)
    {
   cout<<arr[i]<<" "<<endl;
    }
    for (int i=0;i<size-1;i++)
    {
        if (arr[i]>arr[i+1])
{
sorted=false;
break;
}
    }
    if(sorted)
    {
        cout<<"Sorted";
    }
    else
    {
        cout<<"UnSorted";
    }
}