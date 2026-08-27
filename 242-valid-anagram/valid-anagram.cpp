class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        int sizes=s.length();
        int sizet=t.length();

        bool ans=true;

        if(s!=t)
        {
            ans=false;
            goto end;
        }

        for(int i=0;i<sizes;i++)
        {
            if(s[i]!=t[i])
            {
                ans=false;
                break;
            }
        }

        end:
        return ans;
    }
};