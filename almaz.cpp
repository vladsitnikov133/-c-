#include <iostream>
#include <iostream>
using namespace std;
int ize = 10; // высота алмаза 
int col = 2;
int space = 10/2;
int main() {
    for(int c = 0;c < ize /2; c++) //1 половина
    {
        for(int r = 0;r<ize /2;r++)
        {
            if(r<ize /2-c-1)
            {
                cout << " ";
            }
            else
                cout << "* ";
        }
        cout << endl;
    }
    for(int c = 0;c < ize/2-1; c++) // 2 половина
    {
        for(int r = 0;r<ize/2;r++)
        {
            if(r<ize/2-1+c-ize /2/2-1)
            {
                cout << " ";
            }
            else
                cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
