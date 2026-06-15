#include<iostream>
using namespace std;
int main ()
{
    int size,ele,count=0;
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
    cout<<"Enter an element for occurrance = "<<endl;
    cin>>ele;
    cout<<"Element occured at ";
  for(int i =0;i<size;i++)
  {
    if (arr[i]==ele)
    {
count ++;
cout<<i+1<<" ";
    }
  }
  cout<<" & occured "<<count<<" times ";
}
