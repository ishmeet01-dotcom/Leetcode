class Solution {
public:
    string reverseWords(string s) {
       int i = 0 , j=0;
       while(i<s.size()){
           while(i<s.size()&& s[i]==' ') i++;
           while(i<s.size() && s[i]!=' ') s[j++]=s[i++];
           while(i<s.size() && s[i] == ' ') i++;
           if(i<s.size()) s[j++] = ' ';
       }
       s.resize(j);
       reverse(s.begin(), s.end());
       int start = 0;
       for (int end = 0; end <= s.size(); end++) {
            if (end == s.size() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }

        return s;
    

    }
};