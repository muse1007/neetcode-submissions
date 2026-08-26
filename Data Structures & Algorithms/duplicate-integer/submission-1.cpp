class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
       unordered_set<int> alrseen;
       for(int num: nums)
       {
        if(alrseen.count(num))
        {
            return true;
        }
        alrseen.insert(num);
       }
       return false;
    }
};