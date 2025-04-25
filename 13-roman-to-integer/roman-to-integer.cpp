class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int ans=0;
        vector<int> p;
        map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        for(int i=0;i<n;i++)
        {
            p.push_back(mp[s[i]]);
        }
        ans+=p[n-1];
        int num=ans;
        for(int i=n-2;i>=0;i--)
        {
            if(num >p[i])ans-=p[i];
            else ans+=p[i];

            //cout<<ans<<endl;
            num=p[i];
        }
        return ans;
    }
};