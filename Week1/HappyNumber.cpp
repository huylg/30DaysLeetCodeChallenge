class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> dict;
        int loop = n;
        while(loop!=1){
            int temp = 0;
            while(loop !=0) {
                temp += (loop%10)*(loop%10);
                loop /= 10;
            }
            loop = temp;
            if(dict.find(loop)!=dict.end())
                return false;
            dict.insert(loop);
        }
        return true;
    }
};
