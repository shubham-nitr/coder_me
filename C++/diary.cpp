#include <iostream>
#include <fstream>

using namespace std;
int main(){
    string date, time, file_name, line;
    cout << "Date: ";
    cin >> date;
    file_name = date + ".txt";
    ofstream out(file_name);
    out << date << endl;
    cout << "Time: ";
    cin >> time;
    out << time << endl << endl;

    cout << "*************write \"exit\" to stop writing and save the file***************" << endl << endl ;
    out << "*****************************************************************************" << endl << endl ;

    cin.ignore(256,'\n');

    for (int i = 1; i <= 30; i++)
    {
        cout << "line" << i << ": "; 
        getline(cin, line);
        if(line=="exit"){
            break;
        }
        out << line << endl;
    }
    return 0;
}