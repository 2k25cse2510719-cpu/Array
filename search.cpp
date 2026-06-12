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
   cout<<"Enter element to be searched : "<<endl;
   int c;
   cin>>c;
for (int i=0;i<size;i++)
{
if(arr[i]==c)
{
    cout<<"Element found at : "<<endl<<i+1<<endl;
}
}
}