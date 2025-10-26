class Solution {
public:
    void subset(string digits,string& empty,unordered_map<char,string> table,vector<string>& result,int idx){
        if(empty.length() == digits.length()){
            result.push_back(empty);
            return;
        }
        string letters = table[digits[idx]];
        for(int i=0;i<letters.size();i++){
            empty.push_back(letters[i]);
            subset(digits,empty,table,result,idx+1);
            empty.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> table;
        if(digits.size()==0){
            return {};
        }
        table['2']="abc";
        table['3']="def";
        table['4']="ghi";
        table['5']="jkl";
        table['6']="mno";
        table['7']="pqrs";
        table['8']="tuv";
        table['9']="wxyz";
        vector<string> result;
        string empty="";
        subset(digits,empty,table,result,0);
        return result;
    }
};