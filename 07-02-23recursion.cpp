//using recursion
#include<bits/stdc++.h>
using namespace std;
void printsubsets(int ind,int a[],int n,vector<int>v)
{
     if(ind == n){
        for(auto x:v)
            cout<<x;
      cout<<endl;
     return;}

     v.push_back(a[ind]);
     printsubsets(ind+1,a,n,v);
     v.pop_back();
     printsubsets(ind+1,a,n,v); 
}

int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(int);
    vector<int>d;
    printsubsets(0,arr,n,d);

}
//subsets using powerset
