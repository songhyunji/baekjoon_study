#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int> deq;

    for(int i = 0; i < n; i++)
    {
        string op;
        cin >> op;

        int k;
        if(op == "push_front")
        {
            cin >> k;
            deq.push_front(k);
        }
        else if(op == "push_back")
        {
            cin >> k;
            deq.push_back(k);
        }
        else if(op == "pop_front")
        {
            if(deq.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << deq.front() << "\n";
                deq.pop_front();
            }
        }
        else if (op == "pop_back")
        {
            if (deq.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << deq.back() << "\n";
                deq.pop_back();
            }
        }
        else if(op == "size")
        {
            cout << deq.size() << "\n";
        }
        else if(op == "empty")
        {
            cout << deq.empty() << "\n";
        }
        else if(op == "front")
        {
            if (deq.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << deq.front() << "\n";
            }
        }
        else if(op == "back")
        {
            if (deq.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << deq.back() << "\n";
            }
        }
    }

    return 0;
}