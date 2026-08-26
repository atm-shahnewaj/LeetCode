class Solution {
public:
    bool isValid(string s) {
        stack<char> St;
        bool ans=true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                St.push(s[i]);
            }
            else
            {
                if(!St.empty())
                {
                    if(s[i]==')'&&St.top()=='(')
                    {
                        St.pop();
                    }

                    else if(s[i]=='}'&&St.top()=='{')
                    {
                        St.pop();
                    }

                    else if(s[i]==']'&&St.top()=='[')
                    {
                        St.pop();
                    }

                    else
                  {
                    ans=false;
                  }
                }
                else
                {
                    ans=false;
                }
                
            }
        }

        if(!St.empty())
        {
            ans=false;
        }
        
        return ans;
    }
};