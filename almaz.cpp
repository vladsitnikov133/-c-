#include <iostream>
using namespace std;
int ize = 10;
int main() {
   for (int i = 0; i < ize / 2;i++)
    {
    for (int j = 0; j < ize / 2;j++)
    {
        if (j < ize / 2 - i)
        {
            cout << " ";
        }
        else
        {
            cout << "* ";
        }
    }
    cout << endl;
    }
    for (int i = 0; i < ize / 2;i++)
    {
       for (int j = 0; j < ize / 2;j++)
       {
           if(j <i)
               cout << " ";
           else
               cout << "* ";

       }
        cout << endl;
    }
    return 0;
}
