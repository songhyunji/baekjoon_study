#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> vec;
    stack<int> stk;

    int max = 0;
    int input;
    for(int i = 0; i < n; i++)
    {
        cin >> input;

        if (stk.empty() || (!stk.empty() && input > stk.top()))
        {
            for (int j = max + 1; j < input + 1; j++)
            {
                stk.push(j);
                vec.push_back('+');
            }
            max = input;

            stk.pop();
            vec.push_back('-');
        }
        else if(!stk.empty() && input == stk.top())
        {
            stk.pop();
            vec.push_back('-');
        }
        else // !stk.empty() && input < stk.top()
        {
            cout << "NO\n";
            return 0;
        }
    }

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\n"; // endl make fxxking overtime
    }

    return 0;
}