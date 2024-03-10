class Solution {
public:
    string removeDuplicates(string str) {
        unordered_set<char> st;
        string out;
        for(auto i : str){
            if(st.find(i) == st.end()){
                out += i;
                st.insert(i);
            }
        }
        return out;
    }
};
