APPROCH 1 (using map)

class Solution {
public:
    int majorityElement(vector<int>& a) {
       unordered_map<int,int>m;
        int w=ceil(a.size()/2);
        for(auto i:a){
            m[i]++;
            if(w<m[i]){return i;}
        }
    return -1;
    
    }
};


APPROCH 2 (optimized)

class Solution {
public:
    int majorityElement(vector<int>& a) {
       sort(a.begin(),a.end());
        int n=a.size();
        return a[n/2];
    
    }
};