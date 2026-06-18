class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       vector<int>ans;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
       }
       while(k--){
           int maxi =0;
           int  element=0;
           for(auto it:mp){
            if(it.second>maxi){
                maxi=it.second;
                element=it.first;
            }
           }
           ans.push_back(element);
           mp.erase(element);
       }
       return ans;
         
    }
};
