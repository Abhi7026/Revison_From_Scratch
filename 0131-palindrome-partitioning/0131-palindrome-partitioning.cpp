class Solution {
public:

bool isPalin(string &str){
    int i=0,j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j])
        return false;
        i++;
        j--;
    }
    return true;
}
    vector<vector<string>>res;
    void solve(string &s,int start,vector<string>&ans){
        //base case
        if(start==s.size()){
            res.push_back(ans);
            return ;
        }
        string pal;
        for(int i=start;i<s.size();i++){
            pal+=s[i];
            if(isPalin(pal)){
            ans.push_back(pal);
            solve(s,i+1,ans);
            ans.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        vector<string>ans;
        solve(s,0,ans);
        return res;
    }
};