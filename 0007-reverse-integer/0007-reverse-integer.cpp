class Solution {
public:
    int reverse(int x) {
        if (x == 0) return 0;
        long long val = x;
        bool neg = val<0;
        string s = to_string(abs(val));
        std::reverse(s.begin(),s.end());

        long long ans = stoll(s);
        if (neg){
            ans = - ans;
            
        }
        if(INT_MAX < ans || INT_MIN > ans) return 0;
        return (int)ans;
    }
};