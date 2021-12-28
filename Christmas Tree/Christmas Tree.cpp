//Importing all libraries that we are going to use
#include <iostream>
#include <stdlib.h>
#include<time.h>
#include<Windows.h>

//Importing an external library to be able to change characters colors
#include "../rlutil/rlutil.h" //I will provide the link in description

using namespace std;
using namespace rlutil;

int main()
{
    srand(time(NULL)); //Initialize random number generators
    for (;;) //Infinity loop
    {
        //Let's start drawing our christmas tree
        for (int x = 0; x < 20; x++) {
            for (int y = 0; y < 22 - x; y++)
                cout << " "; //The spaces before the characters

            for (int i = 0; i <= x * 2; i++) {
                int randm = rand() % 40; //Random number between 0 - 39
                if (randm ==i)
                {
                    setColor(WHITE); //Set the white color
                    cout << "O";
                }
                else if (randm + i % 2 == 0) {
                    setColor(RED); //Change color to Red
                    cout << "@";
                }
                else {
                    setColor(GREEN); //Change color to Green
                    cout << "*";
                }
            }
            cout << endl;
        }

        //Drawing the stand of the tree
        setColor(GREY); //Change color to Grey
        for (int t = 0; t < 3; t++) {
            for (int o = 0; o < 19; o++) {
                cout << " ";
            }
            cout << "|  |" << endl;
        }
        Sleep(400); //Waiting for 400 milliseconds
        system("CLS"); //Clear the whole console window
    }
}
