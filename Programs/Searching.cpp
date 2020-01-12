#include<iostream>
using namespace std;
int main()
{
        int arr[10], i, num, n, cnt=0, pos;
        cout<<"Enter Array Size : ";
        cin>>n;
        cout<<"Enter Array Elements : \n";
        for(i=0; i<n; i++)
        {
                cout<<" ";
                cin>>arr[i];
        }
        cout<<"Enter Element to be Searched : ";
        cin>>num;
        for(i=0; i<n; i++)
        {
                if(arr[i]==num)
                {
                        cnt=1;
                        pos=i+1;
                        break;
                }
        }
        if(cnt==0)
        {
                cout<<"Element Not Found..!!";
        }
        else
        {
                cout<<"Element "<<num<<" Found At Position "<<pos;
        }
        return 0;
}
