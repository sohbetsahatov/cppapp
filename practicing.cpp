#include <iostream>

using namespace std;

int kilobyteSize = 1024;
int main() {
    cout << "Enter byte: ";
    int byte;
    cin >> byte;
    int kilobyte = byte / kilobyteSize;
    cout << kilobyte << " Kilobyte" << endl;
    


    system("PAUSE");
    return 0;
}
