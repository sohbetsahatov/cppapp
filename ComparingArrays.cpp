#include <iostream>

using namespace std;

int main()
{
    int first[] = {20, 30, 50};
    int second[] = {20, 20, 50};

    bool areEqual = true;
    for (int i = 0; i < size(first); i++)
    {
        if (first[i] != second[i])
        {
            areEqual = false;
            break;
        }
    }
    cout << boolalpha << areEqual;
    return 0;
}