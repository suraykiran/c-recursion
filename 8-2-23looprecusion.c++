class Solution {
public:
void check(int ind,vector<int>&can,int n,vector<int>&v, vector<vector<int>>&ans,int t)
{
    
        if(t==0){
        ans.push_back(v);
        return;}
    
    for(int i=ind;i<n;i++)
    {
       
        if(can[i]>t)continue;
        if(i>ind and can[i]==can[i-1]) continue;
        v.push_back(can[i]);
        check(i+1,can,n,v,ans,t-can[i]);
        v.pop_back();
    }
  
  
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
      
        vector<vector<int>>ans;
        vector<int>v;
        int n=candidates.size();
        check(0,candidates,n,v,ans,target);
        return ans;
        
    }
};
