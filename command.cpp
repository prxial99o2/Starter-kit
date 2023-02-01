#include <iostream>
#include <string>
using namespace std;

int main()//command
{
    int x = 0;
    int j = 100;
    for (int x = 0; x <= j; ++x)
    {
        std::string input = "up"
                            "down"
                            "left"
                            "right"
                            "help";

        std::cout << "Enter a command (up, down, left, right, help): ";
        std::cin >> input;

        if (input == "up")
        {
            cout << "Alien move up.\n";
            cout << "Press enter for continue\n";
        }

        if (input == "down")
        {
            cout << "Alien move down.\n";
            cout << "Press enter for continue\n";
        }

        if (input == "left")
        {

            cout << "Alien move left.\n";
            cout << "Press enter for continue\n";
        }

        if (input == "right")
        {

            cout << "Alien move right.\n";
            cout << "Press enter for continue\n";
        }

        if (input == "help")
        {
            cout << "1.up--> move up\n";
            cout << "2.down-->move down\n";
            cout << "3.left-->move left\n";
            cout << "4.right-->move right\n";
            cout << "5.help-->display these user command\n";
            cout << "6.save-->save the game\n";
            cout << "7.load-->load the game\n";
            cout << "8.quit-->quit the game\n";
            cout << "9.arrow-->change the direction\n"
                 << endl;
        }
    }
}
