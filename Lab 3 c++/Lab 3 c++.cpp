#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main()
{
   string str("fg (fg gh (gh gh ) gh gh( bn bn( nm(,)))) kk (hj hj(jk m(jk m))) mm");
   stack<char> stk;
    for (int i = 0; i < str.size(); ++i)
    {
        if ('(' == str[i])
        {
            stk.push(i);
        }
        else if (')' == str[i])
        {
            int ind = stk.top();
            stk.pop();
            str.erase(ind, i - ind + 1);
            i = ind - 1;
        }
    }
   cout << str << std::endl;
}
 

