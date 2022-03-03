#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> stk;
    int input;
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        if(input == 0)
        {
            total -= stk.top();
            stk.pop();
        }
        else
        {
            stk.push(input);
            total += input;
        }
    }

    cout << total << endl;
    return 0;
}