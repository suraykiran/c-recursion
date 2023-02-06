#include<bits/stdc++.h>
using namespace std;
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
}
