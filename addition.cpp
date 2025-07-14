#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   
    cout << left << setw(15) << "Course" <<setw(10) << "Students" <<endl;
    cout << left << setw(15) << "C++";
    cout << right << setw(10) << "100" << endl;
    cout << left << setw(15) << "JavaScript";
    cout << right << setw(10) << "50" << endl;

    system("PAUSE");

    return 0; 
}