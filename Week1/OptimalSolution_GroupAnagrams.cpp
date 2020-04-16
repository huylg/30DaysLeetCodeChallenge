class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<int> prime({2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101});

        unordered_map<unsigned long long,vector<string>> dict;
        for(string s : strs){
            unsigned long long index = 1;
            for(char c : s) {
                long temp = (int)(c-'a');
                index *= prime[temp];
            }
            
        
            dict[index].push_back(s);
        }
        
        vector<vector<string>> result;
        
        for(auto i : dict){
            result.push_back(i.second);
        }
        return result;
        
    }
};