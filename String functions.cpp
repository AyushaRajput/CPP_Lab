// // Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
   string str = "Ayusha";
    
    // concatenation ;
string text =str + ",Rajput! ";
cout << "concatenation:" << text<<endl;
    
    // Substring 
    string part = text.substr(7,6); //Extract "Rajput"
cout << "substring:"<<part<< endl;

// Find
size_t pos = text.find("Rajput");
cout<<"Find:'Rajput' found at position."<< pos<< endl;

// Replace
string replaced = text;
replaced.replace(pos,8,"Brave");
cout << "Replace:"<<replaced<< endl;

// Insert
string inserted = text;
inserted.insert(7,"Satpalsingh");
cout<<"insert:"<<inserted<<endl;

//Erase
string erased = text;
erased.erase(7,6); // Removes "Brave "
cout<<"erase:"<< erased<<endl;

// To uppercase 
string uppercase = text;
for (char &c : uppercase) c = toupper(c);
cout << "toupper:"<< uppercase<< endl;

// To lowercase
string lowercase = text;
for(char &c : lowercase) c = tolower(c);
cout << "tolower:"<< lowercase<< endl;
    return 0;
}
