#include <iostream>

using namespace std;

    int integers(int first, int second)
    {
        if (first > second)
        {
            return first;
        }else
        {
            return second;
        }

    }
int main()
{
    int x, y;
    cin >> x >> y;
        cout << integers(x, y) << endl;

    return 0;
}