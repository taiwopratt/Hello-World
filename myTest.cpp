#include <iostream>
#include <string>

using namespace std;

struct contact
{
    string firstname;
    string lastname;
    string address;
    string number;

};

int main()
{
    contact details;
    details.firstname = "Taiwo";
    details.lastname = " Pratt";
    details.address = "coventry";
    details.number = "07087864282";

    cout<< "My name is " <<details.firstname<< details.lastname<<" i live in "<<details.address<<" my phone number is "<<details.number;

    return 0;
}
