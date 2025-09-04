#include <iostream>

using namespace std;

int main(){
    cout << "Enter length: " ;
    int length;
    cin >> length;
    cout << "Enter metric units in number between 1-5: ";
    int metricUnits;
    cin >> metricUnits;
    if(metricUnits == 1){
        cout << 10 / length << " metre " << endl;
    }else if( metricUnits == 2 ){
        cout << length * 1000 << " metres " << endl;
    }else if( metricUnits == 3 ){
        cout << length << " metres " << endl;
    }else if( metricUnits == 4 ){
        cout << length / 1000 << " metres " << endl;
    }else if( metricUnits == 5 ){
        cout << length / 100 << " metres " << endl;
    }else{
        cout << "Error" << endl;
    }



    system("PAUSE");
    return 0;
}