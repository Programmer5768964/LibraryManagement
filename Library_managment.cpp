#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Library
{
public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price, pages;
};
int main()
{
    Library lib[20];
    int input = 0;
    int count = 0;

    while (input != 3)
    {
        cout << "Press 1 to enter details like id, name, aothor, student, price, pages: " << endl;
        cout << "Press 2 to Display details: " << endl;
        cout << "Press 3 to Exit: " << endl;
        cin >> input;

        switch (input)
        {
        
        case 1:
        start:
        
            cout << "Enter Book Id: " << endl;
            cin >> lib[count].id;
            cout << "Enter Book Name: " << endl;
            // cin>>lib[count].id;
            cin.getline(lib[count].name, 100,'$');
            cout << "Enter Book Author: " << endl;
            // cin>>lib[count].id;
            cin.getline(lib[count].author, 100,'$');
            cout << "Enter Student Name: " << endl;
            cin.getline(lib[count].student, 100, '$');
            cout << "Enter Book Price: " << endl;
            cin >> lib[count].price;
            cout << "Enter Book Pages: " << endl;
            cin >> lib[count].pages;
            count++;
            break;
       
        case 2:
        if(input==0){
            goto start;
        }
            for (int i = 0; i < count; i++)
            {   
                cout<<"------------------------------------------\n\n";
                cout<<"Student No. : "<<i+1<<endl;
                cout << "Book Id: " << lib[i].id << endl;
                cout << "Book name: " << lib[i].name << endl;
                cout << "Book Author name: " << lib[i].author << endl;
                cout << "Student Name: " << lib[i].student << endl;
                cout << "Book Price: " << lib[i].price << endl;
                cout << "Book Pages: " << lib[i].pages << endl;
            }
            break;

        case 3:
            exit(0);
            break;
        default:
            cout << "You have entered wrong number..Enter the correct one: " << endl;
            goto start;
            
        }
    }
}