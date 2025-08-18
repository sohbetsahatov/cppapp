#include <iostream>

using namespace std;

int SearchFunction(int search_item, int search_array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (search_array[i] == search_item)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int numbers[] = { 1, 0, 3, 4, 0, 6, 0, 8, 9, 10 };
    int x = SearchFunction(0, numbers, size(numbers));
    cout << x << endl;
    return 0;
}