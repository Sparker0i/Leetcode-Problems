#include <iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s.at(i) == 'I')
            {
                if (i + 1 != s.size())
                {
                    if (s.at(i + 1) == 'X')
                    {
                        sum += 9;
                        i++;
                    }
                    else if (s.at(i + 1) == 'V')
                    {
                        sum += 4;
                        i++;
                    }
                    else
                    {
                        while (i < s.size())
                        {
                            if (s.at(i) == 'I')
                            {
                                i++;
                                sum++;
                            }
                            else break;
                        }
                    }
                }
                else
                    sum += 1;
            }
            else if (s.at(i) == 'X')
            {
                if (i + 1 != s.size())
                {
                    if (s.at(i + 1) == 'L')
                    {
                        sum += 40;
                        i++;
                    }
                    else if (s.at(i + 1) == 'C')
                    {
                        sum += 90;
                        i++;
                    }
                    else
                    {
                        while (i < s.size())
                        {
                            if (s.at(i) == 'X')
                            {
                                sum += 10;
                                if (i + 1 < s.size() && s.at(i + 1) == 'X')
                                    i++;
                                else break;
                            }
                            else break;
                        }
                    }
                }
                else
                    sum += 10;
            }
            else if (s.at(i) == 'C')
            {
                if (i + 1 != s.size())
                {
                    if (s.at(i + 1) == 'D')
                    {
                        sum += 400;
                        i++;
                    }
                    else if (s.at(i + 1) == 'M')
                    {
                        sum += 900;
                        i++;
                    }
                    else
                    {
                        while (i < s.size())
                        {
                            if (s.at(i) == 'C')
                            {
                                sum += 100;
                                if (i + 1 < s.size() && s.at(i + 1) == 'C')
                                    i++;
                                else break;
                            }
                            else break;
                        }
                    }
                }
                else
                    sum += 100;
            }
            else if (s.at(i) == 'V')
            {
                sum += 5;
            }
            else if (s.at(i) == 'L')
            {
                sum += 50;
            }
            else if (s.at(i) == 'D')
            {
                sum += 500;
            }
            else if (s.at(i) == 'M')
            {
                sum += 1000;
            }
        }
        return sum;
    }
};

int main()
{
    Solution nw;
    cout << nw.romanToInt("DCXXI") << endl;
    return 0;
}