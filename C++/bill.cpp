#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string first_name, last_name, mob_no;
    ofstream out("bill.txt");
    cout << "Customer\'s name: ";
    cin >> first_name >> last_name;
    cout << "Customer\'s mobile number: " ;
    cin >> mob_no;
    out << "Name : " << first_name << " "<< last_name << endl;
    out << "Mobile number : " << mob_no <<"\n"<< endl;
    int pricePerItem, quantity, price, total, items;
    cout << "Enter total no of items: ";
    cin >> items;
    total = 0;
    cout << "\nNow enter price per unit and quantity: " << endl;
    for (int i = 1; i <= items; i++)
    {
        cout << "Item no. " << i << endl;
        cout << "(price_per_unit and quantity): ";
        cin >> pricePerItem >> quantity ;
        price = pricePerItem*quantity;
        total += price;
        cout << pricePerItem <<" X "<< quantity << " = "<< price << endl;
        out << pricePerItem <<" X "<< quantity << " = "<< price << endl;
    }
    cout << "You have to pay "<< total << endl;
    out << "\n\nYou have to pay "<< total << "\nThanks for visiting."<< endl;
    return 0;
}
