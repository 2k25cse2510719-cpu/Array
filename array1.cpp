#include<iostream>
using namespace std;
int main ()
{
    int size;
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
    cout<<"Enter Position to be deleted : "<<endl;
    int a;
    cin>>a;
    for(int i = a-1;i<size;i++)
    {
arr[i]=arr[i+1];
    }
    size--;
     for(int i =0;i<size;i++)
    {
   cout<<arr[i]<<" "<<endl;
    }
}