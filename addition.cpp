#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   
   cout << left << setw(15) << "Product" << setw(15) << "Price" << setw(15) << "Discount" << setw(15) << "In Stock" << setw(15) << "Final Price" << endl
        << fixed << setw(15) <<"Laptop"<< setw(15) << "1500.00" << setw(15) << "10" << setw(15) << "Yes" << setw(15) << "1350.00" <<endl
        << setw(15) << "Keyboard" << setw(15) << "80.00" << setw(15) << "5" << setw(15) << "No" << setw(15) << "76.00" <<endl
        << setw(15) << "Monitor" << setw(15) << "300.00" << setw(15) << "15" << setw(15) << "Yes" << setw(15) << "255.00" << endl;
        system("PAUSE");


    return 0; 
}