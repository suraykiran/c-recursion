#include<bits/stdc++.h>
using namespace std;
int lastoccrance(int *a,int n,int k)
{
    if(n==0) return -1;
    int ind= lastoccrance(a+1,n-1,k);
    if(ind == -1)
    {
        if(a[0]==k)
            return 0;
        else 
        return -1;
    }
    return ind+1;
}
int firstoccrance(int *a,int n,int k)
{
    if(n==0)
        return -1;
    if(a[0]==k)
        return 0;
    int ind =firstoccrance(a+1,n-1,k);
    if(ind== -1)
        return -1;
    return ind+1;
}
int isarysortednotexatraspace(int *a,int n)
{
    if(n==1) return 1;
    if(a[0]<a[1])
        return isarysortednotexatraspace(a+1,n-1);
    else
        return -1;
}
int isarysorted(int *a,int n,int i)
{
    if(i==n-1) return 1;
    if(a[i]<a[i+1])
     return isarysorted(a,n,i+1);
    else
     return -1;
}
int issorted(int *a,int n,int k,int out[],int i,int j)
{
    if(i>=n) return j;
    if(a[i]==k)
    {
        out[j]=i;
        return issorted(a,n,k,out,i+1,j+1);
    }
    return issorted(a,n,k,out,i+1,j);
}
int main()
{
    int i=0;

    int arr[]={1,2,5,3,4,5};
    int out[100]={0};
    int n= sizeof(arr)/sizeof(int);
    int key=5;
    int size=issorted(arr,n,key,out,0,0);
    for(int i=0;i<size;i++)
    {
        cout<<out[i]<<" ";
    }
    cout<<isarysorted(arr,n,0);
    cout<<isarysortednotexatraspace(arr,n);
    cout<<firstoccrance(arr,n,key);
    cout<<lastoccrance(arr,n,key);
}
