// ********************************************************* 
// Course: TCP1101 PROGRAMMING FUNDAMENTALS 
// Year: Trimester 1, 2022/23 (T2215) 
// Lab: TT9L 
// Names: Tan Xin Thong | Lee Jia Ying 
// IDs: 1211104274 | 1221303972 
// Emails: 1211104274@student.mmu.edu.my | 1221303972@student.mmu.edu.my 
// Phones: 016-3862008 | 011-26418191 
// *********************************************************

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> 
#include <ctime>   
#include <iomanip> 
using namespace std;

class Gameboard
{
private:
    vector<vector<char>> map_; 
    int dimX_, dimY_;          
public:
    Gameboard(int dimX , int dimY );
    //Gameboard(int dimX = 15, int dimY = 5);
    void init(int dimX, int dimY);
    void display()const;
};

Gameboard::Gameboard(int dimX, int dimY)
{
    init(dimX, dimY);
}
void Gameboard::init(int dimX, int dimY)
{
    dimX_ = dimX;
    dimY_ = dimY;
    char objects[] = {' ', ' ', ' ', ' ', ' ', ' ', 'A', 'P', 'R', '.'};  //still no fuction
    int noOfObjects = 10; // number of objects in the objects array
    map_.resize(dimY_); 
    for (int i = 0; i < dimY_; ++i)
    {
        map_[i].resize(dimX_); 
    }
    for (int i = 0; i < dimY_; ++i)
    {
        for (int j = 0; j < dimX_; ++j)
        {
            int objNo = rand() % noOfObjects;
            map_[i][j] = objects[objNo];
        }
    }
}

void Gameboard::display() const
{
    // cout << " --__--__--__--__--__--__--__--_" << endl;
    // cout << " =     Welcome To Alien Path!   =" << endl;
    // cout << " __--__--__--__--__--__--__--__-" << endl;
    for (int i = 0; i < dimY_; ++i)
    {
        // display upper border of the row
        cout << " ";
        for (int j = 0; j < dimX_; ++j)
        {
            cout << "+-";
        }
        cout << "+" << endl;
        // display row number
        cout << setw(2) << (dimY_ - i);
        // display cell content and border of each column
        for (int j = 0; j < dimX_; ++j)
        {
            cout << "|" << map_[i][j];
        }
        cout << "|" << endl;
    }
    // display lower border of the last row
    cout << " ";
    for (int j = 0; j < dimX_; ++j)
    {
        cout << "+-";
    }
    cout << "+" << endl;
    // display column number
    cout << " ";
    for (int j = 0; j < dimX_; ++j)
    {
        int digit = (j + 1) / 10;
        cout << " ";
        if (digit == 0)
            cout << " ";
        else
            cout << digit;
    }
    cout << endl;
    cout << " ";
    for (int j = 0; j < dimX_; ++j)
    {
        cout << " " << (j + 1) % 10;
    }
    cout << endl
         << endl;
}



void test1_1(int dimX, int dimY)
{
    Gameboard gameboard(dimX, dimY);
    gameboard.display();
}



int main()
{
    int dimX;
    int dimY;
    cout << "Let's Get Started!" << endl;
    cout << " --__--__--__--__--__--__--__--_" << endl;
    cout << " =     Welcome To Alien Path!   =" << endl;
    cout << " __--__--__--__--__--__--__--__-" << endl; 
    // std::cout << "Press enter to continue...." << std::endl;
    // std::cin.ignore();
    // std::system("pause");
    //return 0;
    cout << "Enter row:";
    cin>> dimY;
    cout <<"Enter column:";
    cin>>dimX;
    srand(time(NULL));;
    test1_1(dimX,dimY);
}
