#include <iostream>

using namespace std;

int main(){
    cout << "Enter starting day between 1-7: ";
    int startingDay;
    cin >> startingDay;
    cout << "Enter a day between 1-365: ";
    int k;
    cin >> k;
    if(startingDay > 0 && startingDay < 8){
            if(k > 0 && k < 366){
            int day = (startingDay + (k - 1)) % 7;
    
                if (day == 1){
                    cout << "It's Monday. " << endl;
                }else if(day == 2){
                    cout << "It's Tuesday. " << endl;
                }else if(day == 3){
                    cout << "It's Wednesday. " << endl;
                }else if(day == 4){
                    cout << "It's Thursday. " << endl;
                }else if(day == 5){
                    cout << "It's Friday. " << endl;
                }else if(day == 6){
                    cout << "It's Saturday. " << endl;
                }else if(day == 7){
                    cout << "It's Sunday. " << endl;
                }
        }else{
            cout << "It's not between 1-365." << endl;
        }
    }else {
        cout << "Starting day is not between 1-7." << endl;
    }
    
    
    system("PAUSE");
    return 0;
}
