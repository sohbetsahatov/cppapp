#include <iostream>

using namespace std;
void greet(string& name);
int main()
{
    string name;
    cin >> name;
    greet(name);
    return 0;
}
void greet(string& name)
{
    cout << "Hello " << name << endl;
}