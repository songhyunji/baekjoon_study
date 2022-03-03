#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> q;

    for(int i = 0; i < n; i++)
    {
        string op;
        cin >> op;

        if(op == "push")
        {
            int k;
            cin >> k;

            q.push(k);
        }
        else if(op == "pop")
        {
            if(q.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(op == "size")
        {
            cout << q.size() << "\n";
        }
        else if(op == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if(op == "front")
        {
            if(q.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q.front() << "\n";
            }
        }
        else if(op == "back")
        {
            if (q.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << q.back() << "\n";
            }
        }
    }

    return 0;
}