#include <iostream>
#include <fstream>

using namespace std;
int main(){
    string date, file_name, line, expected_answer, msg;
    string daily_habits[]={"meditation", "pushups"};
    int flag, no_of_elements = 2;
    cout << "Date: ";
    cin >> date;
    file_name = date + ".txt";
    ofstream out(file_name);
    cin.ignore(256,'\n');
    cout << "\n\nGood Morning! Your_name" << endl ;
    getline(cin, line);
    expected_answer="Good Morning";
    if (line == expected_answer){
        cout << "\n\nIt's very nice day. I think you and me can together make it great." << endl ;
        getline(cin, line);
        expected_answer="Yeah! We can do it.";
        if (line == expected_answer){
            cout << "\n\nLet's quickly go through the checklist before starting." << endl ;
            for (int i = 0; i < no_of_elements; i++){
            cout << daily_habits[i] << ": "; 
            getline(cin, line);
            expected_answer = "done";
            if (line == expected_answer){
                flag++;
                if (flag==no_of_elements){
                    msg = "Good Job. You are getting better everyday.";
                }
            }
            else {
                out << "***" << daily_habits[i] <<" "<< line << endl << endl;
                msg = "You have not done some of the things. Nevermind, I'm sure that you will do better next time.";
            }
            }
            cout << "\n***" << msg << endl;
        }
    }
    cout << "\n\nNow, Let's quickly make a to-do list. Put only top 3 works to be done by tonight." << endl ;
    out << "To-do list: ";
    for (int i = 0; i <= 2; i++){
        cout << i+1 << ": "; 
        getline(cin, line);
        out << endl << i+1 <<". "<< line;
    }
    cout << "\nAll the best. Have a great day.\nBye.\n";
    return 0;
}
