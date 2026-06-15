#include<iostream>
using namespace std;
int main ()
{
    int size,countO=0,countE=0;
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
        if(arr[i]%2==0)
        {
            countO++;
        }
        else{
            countE++;
        }
    }
    cout<<"Even Elements : "<<countO<<endl;
    cout<<"Odd Elements : "<<countE;
}