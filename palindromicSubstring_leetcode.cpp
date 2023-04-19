class Solution {
public:
      int expandAroundIndex(string s, int left, int right) {
        int count = 0;
        while(left >= 0 && right <s.length() && s[left] == s[right] ) {
            count++;
            left--;
            right++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        int n=s.length();
        
        for(int centre=0;centre<n;centre++){
           //odd
           int oddAns=expandAroundIndex(s,centre,centre);
           count=count+oddAns;
           //even
           int evenAns=expandAroundIndex(s,centre,centre+1);
           count=count+evenAns;

        }
     return count;
    }
};
