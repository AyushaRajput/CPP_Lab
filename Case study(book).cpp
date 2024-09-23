#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize variables
    string title = "Book introduction ";
    string author = "Helen Keller";
    int yearOfPublication = 2023;
    float price = 299.99;
    bool isAvailable = true;

    // Display the information
    cout << "Book Information: The Story Of My Life" << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year of Publication: " << yearOfPublication << endl;
    cout << "Price: $" << price << endl;
    cout << "Available in library: " << (isAvailable ? "Yes" : "No") << endl;

    return 0;
}