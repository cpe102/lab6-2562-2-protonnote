#include <iostream>
#include <string>
using namespace std;

int main(){
    int id;
    string name,movie,day,word;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????:";
    getline(cin,name) ;
    cout << "Fahsai: Wow!!! " << name << " that is a really cool name.\n";
    cout << "Fahsai: I think you are Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << id/10000000 - 12 <<". I have a free movie tickets for you.\n"; 
    cout << "Fahsai: Let's go to cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << " :";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day <<"....that is OK!!! I'm looking forward to watch " << movie <<" with you.\n";
    cout << name <<": ";
    getline(cin,word);
    cout << "Fahsai: 555+ see you "<< "day"<<". Bye Bye " << "\\(^ ^)/" << endl;
    return 0;
}
