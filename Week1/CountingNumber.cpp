class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_map<int ,int> dict;
        int n = arr.size();
        int result=0;
        for (int i=0;i<n;i++) dict[arr[i]]++;
        for(unordered_map<int ,int>::iterator i = dict.begin();i != dict.end();i++){
            if(dict.find(i->first-1)!=dict.end())
                result += dict[i->first-1];
        }
     
        
        return result;
    }
};