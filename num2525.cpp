#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;
    cin >> c;

    int d = b + c;
    int hour = d / 60;
    int min = d % 60;

    cout << a + hour << " " << min << "\n";

    return 0;
}