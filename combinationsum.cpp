#include<bits/stdc++.h>
using namespace std;
void printsubsets(int ind,int a[],int n,vector<int>v,int t)
{
     if(ind==n){
        if(t==0){
            for(auto x:v)
                cout<<x;
            cout<<"\n";
        }
        return;
     }
     if(t>=a[ind])
     {
        v.push_back(a[ind]);
        printsubsets(ind,a,n,v,t-a[ind]);
        v.pop_back();
     }
     printsubsets(ind+1,a,n,v,t);
}

int main()
{
    int arr[]={2,3,6,7};
    int t=7;
    int n=sizeof(arr)/sizeof(int);
    vector<int>d;
    printsubsets(0,arr,n,d,t);

}
