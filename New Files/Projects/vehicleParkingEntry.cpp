#include <iostream>
using namespace std;

class parking
{
    int car = 0, bike = 0, threeWheeler = 0; // variable initilization
public:
    void entry()
    { // funtion for entry
        int o;
        cout << "Press 1 to enter a car" << endl
             << "Press 2 to enter a bike" << endl
             << "Press 3 to enter a three wheeler" << endl;
        cin >> o;
        switch (o)
        {
        case 1:
            car++;
            cout << "One car added!" << endl;
            break;
        case 2:
            bike++;
            cout << "One bike added!" << endl;
            break;
        case 3:
            threeWheeler++;
            cout << "One three wheeler added!" << endl;
            break;
        default:
            cout << "Invalid option!" << endl;
            break;
        }
    }

    void remove()
    { // funtion for remove

        int o;
        cout << "Press 1 to remove a car" << endl
             << "Press 2 to remove a bike" << endl
             << "Press 3 to remove a three wheeler" << endl;
        cin >> o;
        switch (o)
        {
        case 1:
            if (car == 0)
            {
                cout << "No car present!" << endl;
                break;
            }
            else
            {
                car--;
                cout << "One car removed!" << endl;
                break;
            }

        case 2:
            if (bike == 0)
            {
                cout << "No bike present!" << endl;
                break;
            }
            else
            {
                bike--;
                cout << "One bike removed!" << endl;
                break;
            }

        case 3:
            if (threeWheeler == 0)
            {
                cout << "No three wheeler present!" << endl;
                break;
            }
            else
            {
                threeWheeler--;
                cout << "One three wheeler removed!" << endl;
                break;
            }

        default:
            cout << "Invalid option!" << endl;
            break;
        }
    }
    void show()
    {
        // function to show data

        cout << "Cars: " << car << endl
             << "Bikes: " << bike << endl
             << "Three wheelers: " << threeWheeler << endl;
    }
};

int main()
{
    parking pk; // object creation
    while (true)
    {
        int c; 
        cout << "\nPress 1 for entry." << endl       // menu
             << "Press 2 for remove." << endl
             << "Press 3 to show the entry." << endl
             << "Press 4 to exit." << endl;
        cin >> c;
        switch (c)
        {
        case 1:
            pk.entry(); // calling entry function
            break;
        case 2:
            pk.remove(); // calling remove function
            break;
        case 3:
            pk.show(); // calling show function
            break;
        case 4:
            exit(0); // exit program
            break;
        default:
            cout << "Invalid option." << endl;
            break;
        }
    }
}
// Devroop 😎