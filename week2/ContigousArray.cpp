class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int result = 0;
        
        unordered_map<int,int> dict;
        dict[0] = 0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            sum += (nums[i]) ? 1 : -1;
            if(dict.find(sum) == dict.end()){
                dict[sum] = i+1;
            }else{
                result = max(result,i-dict[sum]+1);
            }
        }
        
        return result;
    }
};