#include<iostream>
using namespace std;
int main()
{
    int n, i,j, temp;
    cin>>n;
    int a[10], b[10];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)    //sorting
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int left=0, right=n-1, flag=1;
    for(i=n-1;i>=0;i--)     //assingning values to a pendulum
    {
        if(flag==1)
        {
            b[right--]=a[i];
            flag=0;
        }
        else
        {
            b[left++]=a[i];
            flag=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}


