#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    
    double first;
    double second;
    cin >> first >> second;
    double another = (first > second) ? first : second;

    cout << another;

    
      
    system("PAUSE");
    return 0;
}