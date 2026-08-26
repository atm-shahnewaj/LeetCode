class Solution {
public:
    int romanToInt(string s) {
      
        map<char,int> V;
        V['I']=1;
        V['V']=5;
        V['X']=10;
        V['L']=50;
        V['C']=100;
        V['D']=500;
        V['M']=1000;

        int ans=0;

        for(int i=0;i<s.length();i++)
        {
            if(i==0)
            {
                ans+=V[s[i]];
            }
            else if(s[i-1]=='I'&&s[i]=='V')
            {
                ans+=3;
            }
            else if(s[i-1]=='I'&&s[i]=='X')
            {
                ans+=8;
            }
            else if(s[i-1]=='X'&&s[i]=='L')
            {
                ans+=30;
            }
            else if(s[i-1]=='X'&&s[i]=='C')
            {
                ans+=80;
            }
            else if(s[i-1]=='C'&&s[i]=='D')
            {
                ans+=300;
            }
            else if(s[i-1]=='C'&&s[i]=='M')
            {
                ans+=800;
            }
            else
            {
                ans+=V[s[i]];
            }

        }



        return ans;
    }
};