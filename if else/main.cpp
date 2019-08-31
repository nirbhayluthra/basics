#include <iostream>

using namespace std;

int main()
{
    cout <<"1 . \tadd new record." << endl;
    cout <<"2 . \tdelete record." << endl;
    cout <<"3 . \tview record." << endl;
    cout <<"4 . \tsearch record." << endl;
    cout <<"5 . \tquit." << endl;

    cout <<"enter a number > " <<flush;

    int value;
    cin >>value;

    if (value==1)
    {
        cout <<"adding new ";
    }
    else if (value==2)
    {
        cout << "deleting";
    }
    else if (value==3)
    {
        cout << "viewing";
    }
    else if (value==4)
    {
        cout << "searching";
    }
    else if (value==5)
    {
        cout << "quitting";
    }
    else
    {
        cout << "please choose correct option";
    }
    return 0;
}
