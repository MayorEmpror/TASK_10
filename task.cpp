#include <iostream>
using namespace std;

class LibraryBook {
private:
    int availableCopies; 
public:
    string title;       
    string author;      
    long ISBN;          

   
    void set_data(string title, string author, long ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

   
    void setCopies(int copies) {
        availableCopies = copies;
    }

   
    int getCopies() {
        return availableCopies;
    }

   
    void displayDetails() {
        cout << "Title   : " << title << endl;
        cout << "Author  : " << author << endl;
        cout << "ISBN    : " << ISBN << endl;
        cout << "Copies  : " << availableCopies << endl;
    }
};

int main() {
    string title, author;
    long ISBN;

    LibraryBook newInstance_Library;

    
    cout << "Enter the details of the book:" << endl;

    cout << "Title: ";
    getline(cin, title); 

    cout << "Author: ";
    getline(cin, author); 

    cout << "ISBN: ";
    cin >> ISBN; 

    cout << "Available Copies: ";
    int copies;
    cin >> copies; 

  
    newInstance_Library.set_data(title, author, ISBN);
    newInstance_Library.setCopies(copies);

  
    cout << "\nBook Details:" << endl;
    newInstance_Library.displayDetails();

    return 0;
}
