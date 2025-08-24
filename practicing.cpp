#include <iostream>

using namespace std;

    int main(){
    cout << "Enter three-digit number: ";
    int threeDigitnumber;
    cin >> threeDigitnumber;
    
    if(threeDigitnumber > 99 && threeDigitnumber < 1000){
        int firstdigit = threeDigitnumber / 100;
        int takingSecondDigit = threeDigitnumber % 100;
        int secondDigit = takingSecondDigit / 10;
        int thirdDigit = takingSecondDigit % 10;
    
        cout << "Sum of digits = " << firstdigit + secondDigit + thirdDigit << endl;
    }else{
        cout << "This number is not three-digit" << endl;
    }
    

    system("PAUSE");
    return 0;
}
