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
  vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        
        for(int i=0;i<(1<<nums.size());i++)//we can use pow(nums.size(),2) instead of (1<<nums.size()).
        {
            vector<int>v;
            for(int j=0;j<nums.size();j++)
            {
                if((1<<j)&i)
                v.push_back(nums[j]);

            }
            ans.push_back(v);
        }
       return ans; 
        
    }
};
