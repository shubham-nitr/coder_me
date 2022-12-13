#include <iostream>
using namespace std;
int main(){
    char momIsHome ;
    cout << "Is Mom at home?\n(y/n):"<< endl;
    cin >> momIsHome ;
    if (momIsHome=='y'){
        cout << "I am sorry. We can't meet now." << endl;
    }
    else{
        cout << "Let's meet and spend some time together." << endl;
    }

    return 0;
}
