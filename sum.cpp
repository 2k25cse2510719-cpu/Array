#include<iostream>
using namespace std;
int main ()
{
    int size,sum=0;
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
  for(int i =0;i<size;i++)
  {
      sum=arr[i]+sum;
  }
  cout<<"Sum = "<<sum<<endl;
}
