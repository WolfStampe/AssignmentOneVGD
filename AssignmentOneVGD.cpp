// AssignmentOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_ITEMS = 10;
    string Item_Name[MAX_ITEMS] = {"Sword", "Armor", "Shield"};
    const int Item_Price[MAX_ITEMS] = {50, 100, 150};
    int MQuantity[MAX_ITEMS] = { 1, 3, 1 };
    int PQuantity[MAX_ITEMS] = { 0 ,0 , 0 };
    char mmenu_choice;

    cout << "Welcome to the Store.\n"; 
    
    while (true)
    {
        cout << "What would you like to do? " << endl;
        cout << "(B)uy , (S)ell, (L)eave?: ";
        cin >> mmenu_choice; 

        if (mmenu_choice == 'L' || mmenu_choice == 'l')
        {
            break;
        }
        if (mmenu_choice == 'B' || mmenu_choice == 'b')
        {
            cout << "Shop is Currently Not Open.\n";
         
        }
        if (mmenu_choice == 'S' || mmenu_choice == 's')
        {
            cout << "Shop still not open.\n";
   
        }
        
    }
    return 0;
}