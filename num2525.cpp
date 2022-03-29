#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    cin >> c;

    int d = b + c;
    int hour = d / 60 + a;
    while(hour >= 24)
    {
        hour -= 24;
    }
    int min = d % 60;

    cout << hour << " " << min << "\n";

    return 0;
}