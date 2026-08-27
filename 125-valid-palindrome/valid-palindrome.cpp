class Solution
{
public:
    bool isPalindrome(string s)
    {

        int i = 0, j = s.size() - 1;

        bool ans = true;

        while (i < j)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 'a' - 'A';
            }

            while (i < j && (s[i] < 'a' || s[i] > 'z'))
            {
                if ((s[i] >= '0' && s[i] <= '9'))
                {
                    break;
                }
                else
                {
                    i++;
                }

                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] += 'a' - 'A';
                }
            }

            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                s[j] += 'a' - 'A';
            }

            while (i < j && (s[j] < 'a' || s[j] > 'z'))
            {
                if ((s[j] >= '0' && s[j] <= '9'))
                {
                    break;
                }
                else
                {
                    j--;
                }
                if (s[j] >= 'A' && s[j] <= 'Z')
                {
                    s[j] += 'a' - 'A';
                }
            }

            if (i <= j && s[i] != s[j])
            {
                ans = false;
                break;
            }

            i++;
            j--;
        }

        return ans;
    }
};