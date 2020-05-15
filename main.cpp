#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main()
{
    // init
    std::string input;
    // create vector of random characters
    std::vector<char> rchar = {'x','y','z','a','u','i','x','y','k'};
    std::vector<char> result;
    std::cout << "----------------------------\n" << \
    "The Zenoil translator is your program for operational syntax in the Oiulon \nRegion. Wise use only.\n----------------------------\n";
    std:cin.ignore();
    std::cout << "Begin by adding a human-readable string: ";
    std::cin >> input;



    std::cout << "----------------------------\n";
    std::cout << "Result: ";


    for( int z=0;z<input.size();z++ )
    {
         //random
        srand(time(0));
    int secret = rand() % input[z] + 1;
        for(int y=0;y<rchar.size();y++)
        {
            if(input[z] == rchar[y])
            {
                result.push_back(z);
                result.push_back(input[y]);
            }

        }
         std::cout <<  input[secret] + input[z] << rchar[z];

    }
std::cout << "\n";




}
