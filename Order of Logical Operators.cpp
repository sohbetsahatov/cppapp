#include <iostream>

using namespace std;

int main(){

    bool is_citizen = true;
    bool have_bachelor_degree = false;
    short work_experience = 1;
    bool is_eligible = is_citizen && (have_bachelor_degree || work_experience >= 2);
    
    cout << boolalpha << is_eligible;
    
    system("PAUSE");
    return 0;
}