APPROCH 1  :: by sorting the strings
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++){
            if(t[i]!=s[i]) return t[i];
        }
        return 0;
    }
};


--------------------------------------------------------------
APPROCH 2 :: using hashmap
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<t.size();i++){
            if(t[i]!=s[i]) return t[i];
        }
        return 0;
    }
};