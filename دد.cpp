






#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    int inNum, flg=1;
    //int x=1;
    cout << "Enter A number:\t";
    cin >> inNum;
    for (int i=2; i <= (sqrt(inNum+1)); i++){
        if(inNum%i == 0) {
            flg = 0;
            break;
        }
        //x++;
    }
    if (flg==1 && inNum>=2) {
        cout << "\t Yeeesss!";
    } else if (flg!=1 || inNum<2) {
        cout << "\t Oh No!";
    }
    //if(inNum>2) cout << "\n\t Number of times the loop runs:\t" << x;
    return 0;
}





















