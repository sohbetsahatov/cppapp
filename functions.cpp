#include <iostream>

using namespace std;

    int max(int first, int second) {
        return first > second ? first : second;
    }

int main() {

    int x = max(23, 5);
        cout << x << endl;

    return 0;
}