#include <iostream>
using namespace std;
class studentManagementSystem // creating class for student management
{
    string name[100], course[100], classs[100], contactNo[100]; // variable initilization
    int rollNo[100];

    int records = 0;

public:
    void enter() // function to enter datas
    {
        int n;
        cout << "How many students do you want to enter :";
        cin >> n;

        if (records == 0)
        {
            records += n;
            for (int i = 0; i < n; i++)
            {
                cout << "Enter data of student " << i + 1 << " --->" << endl;
                cout << "Enter name of the student :" << endl;
                cin >> name[i];
                cout << "Enter roll no of the student :" << endl;
                cin >> rollNo[i];
                cout << "Enter class of the student :" << endl;
                cin >> classs[i];
                cout << "Enter course of the student :" << endl;
                cin >> course[i];
                cout << "Enter contact no of the student :" << endl;
                cin >> contactNo[i];
            }
            cout << "DATAS ADDED" << endl;
        }
        else
        {
            for (int i = records; i < records + n; i++)
            {
                cout << "Enter data of student " << i + 1 << " --->" << endl;
                cout << "Enter name of the student :" << endl;
                cin >> name[i];
                cout << "Enter roll no of the student :" << endl;
                cin >> rollNo[i];
                cout << "Enter class of the student :" << endl;
                cin >> classs[i];
                cout << "Enter course of the student :" << endl;
                cin >> course[i];
                cout << "Enter contact no of the student :" << endl;
                cin >> contactNo[i];
            }
            cout << "DATAS ADDED" << endl;
            records += n;
        }
    }

    void show() // function to display datas
    {
        if (records == 0)
        {
            cout << "Please enter data first.";
        }
        else
        {
            for (int i = 0; i < records; i++)
            {
                cout << "Data of student " << i + 1 << " --->" << endl;
                cout << "\nName of the student is : " << name[i] << endl;
                cout << "Roll no of the student is : " << rollNo[i] << endl;
                cout << "Class of the student is : " << classs[i] << endl;
                cout << "Course of the student is : " << course[i] << endl;
                cout << "Contact no of the student is : " << contactNo[i] << endl
                     << endl;
            }
        }
    }
    void search() // function to search for student datas by roll number
    {
        if (records == 0)
        {
            cout << "Please enter data first.";
        }
        else
        {
            int rollno;
            bool notFound = false;
            cout << "Enter the roll no of the student : ";
            cin >> rollno;
            for (int i = 0; i < records; i++)
            {
                if (rollno == rollNo[i])
                {

                    cout << "\nName of the student is : " << name[i] << endl;
                    cout << "Class of the student is : " << classs[i] << endl;
                    cout << "Course of the student is : " << course[i] << endl;
                    cout << "Contact no of the student is : " << contactNo[i] << endl;
                    notFound = false;
                    break;
                }
                else
                {
                    notFound = true;
                }
            }
            if (notFound)
            {
                cout << "Student not found !!!" << endl;
            }
        }
    }

    void update() // function to update datas
    {
        if (records == 0)
        {
            cout << "Please enter data first.";
        }
        else
        {
            int rollno;
            bool notFound = false;
            cout << "Enter the roll no of the student : ";
            cin >> rollno;
            for (int i = 0; i < records; i++)
            {
                if (rollno == rollNo[i])
                {
                    cout << "Previous data : " << endl
                         << endl;
                    cout << "\nName of the student is : " << name[i] << endl;
                    cout << "Class of the student is : " << classs[i] << endl;
                    cout << "Course of the student is : " << course[i] << endl;
                    cout << "Contact no of the student is : " << contactNo[i] << endl;
                    notFound = false;
                    cout << "Enter new data for the student:  " << endl
                         << endl;
                    cout << "Enter name of the student :" << endl;
                    cin >> name[i];
                    cout << "Enter roll no of the student :" << endl;
                    cin >> rollNo[i];
                    cout << "Enter class of the student :" << endl;
                    cin >> classs[i];
                    cout << "Enter course of the student :" << endl;
                    cin >> course[i];
                    cout << "Enter contact no of the student :" << endl;
                    cin >> contactNo[i];
                    cout << "DATA UPDATED!!!" << endl;
                    break;
                }
                else
                {
                    notFound = true;
                }
            }
            if (notFound)
            {
                cout << "Student not found !!!" << endl;
            }
        }
    }
    void deletee() // function to delete
    {
        if (records == 0)
        {
            cout << "Please enter data first.";
        }
        else
        {
            int c;
            cout << "Press 1 to delete all records." << endl
                 << "Press 2 to delete specific records." << endl;
            cin >> c;
            if (c == 1)
            {
                records = 0;
                cout << "All records have been deleted" << endl;
            }
            else if (c == 2)
            {
                int rollno;
                bool notFound = false;
                cout << "Enter the roll no of the student : ";
                cin >> rollno;
                for (int i = 0; i < records; i++)
                {
                    if (rollno == rollNo[i])
                    {
                        notFound = false;
                        for (int j = i; j < records; j++)
                        {
                            name[j] = name[j + 1];
                            classs[j] = classs[j + 1];
                            rollNo[j] = rollNo[j + 1];
                            course[j] = course[j + 1];
                            contactNo[j] = contactNo[j + 1];
                        }
                        records--;
                        cout << "DATA DELETED!!!" << endl;
                        break;
                    }
                    else
                    {
                        notFound = true;
                    }
                }
                if (notFound)
                {
                    cout << "Student not found !!!" << endl;
                }
            }
            else
            {
                cout << "Invalid option." << endl;
            }
        }
    }
};

int main()
{
    studentManagementSystem sms;
    while (true)
    { // menu
        cout << endl
             << "\nPress 1 to Enter data " << endl;
        cout << "Press 2 to Show data " << endl;
        cout << "Press 3 to search data " << endl;
        cout << "Press 4 to Update data " << endl;
        cout << "Press 5 to Delete data " << endl;
        cout << "Press 6 to Exit " << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            sms.enter(); // calling enter function
            break;

        case 2:
            sms.show(); // calling show function
            break;

        case 3:
            sms.search(); // calling search function
            break;

        case 4:
            sms.update(); // calling update function
            break;

        case 5:
            sms.deletee(); // calling delete function
            break;

        case 6:
            exit(0); // exit program
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}
// Devroop 😉