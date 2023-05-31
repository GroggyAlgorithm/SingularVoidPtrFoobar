/**
* \brief FooBar, but it's with a single void pointer for any variables, including the FooBar string. \n
*
* If the program counter is divisible by 3, print Foo. If it's divisible by 5, Bar. If 15, FooBar. \n
*
*
* used CodeBlocks and mingw32 \n
*
* \author Tim Robbins
*
* \date 05/31/2023
*
*/
#include <iostream>
#include <iomanip>

int main()
{
    ///The programs singular usable variable
    void *programData;

    std::cout << "Hello world!" << std::endl;
    std::cout << "Allocating singular void pointer program memory..." << std::endl;

    //Allocate the programs memory(1 counter, 1 data) and the string "FooBar"
    (programData) = (void *)calloc(8, sizeof(unsigned char *));

    //Print explanation string
    std::cout << "Allocated memory!\nNow storing FooBar string..." << std::endl;

    //Store the display string
    (* ((unsigned char*)(programData) + 1) )  = 'F';
    (* ((unsigned char*)(programData) + 2 ) ) = 'o';
    (* ((unsigned char*)(programData) + 3 ) ) = 'o';
    (* ((unsigned char*)(programData) + 4 ) ) = 'B';
    (* ((unsigned char*)(programData) + 5 ) ) = 'a';
    (* ((unsigned char*)(programData) + 6 ) ) = 'r';

    std::cout << "String Stored!\nRunning foo bar up to 100..." << std::endl << std::endl;

    //Run foo bar. if divisible by 3, print Foo. if divisible by 5, print Bar. Divisible by 15? FooBar
    do
    {
        //if our program counter has no leftover from mod 3...
        if(((*((unsigned char *)(programData)+0))+1) % 3 == 0)
        {
            //Print Foo
            for
            (
                (* ((unsigned char*)(programData) + 7 ) ) = 0;
                (* ((unsigned char*)(programData) + 7 ) ) < 3;
                (* ((unsigned char*)(programData) + 7 ) ) ++
            )
            {
                std::cout << (* ((unsigned char*)(programData) + 1 + (* ((unsigned char*)(programData) + 7 ) ) ) );
            }
        }


        //if our program counter has no leftover from mod 5...
        if(((*((unsigned char *)(programData)+0))+1) % 5 == 0)
        {
            //Print Bar
            for
                (
                    (* ((unsigned char*)(programData) + 7 ) ) = 0;
                    (* ((unsigned char*)(programData) + 7 ) ) < 3;
                    (* ((unsigned char*)(programData) + 7 ) ) ++
                )
            {
                std::cout << (* ((unsigned char*)(programData) + 4 + (* ((unsigned char*)(programData) + 7 ) ) ) );

            }

        }

        //If 3 or 5...
        if(((*((unsigned char *)(programData)+0))+1) % 5 == 0 || (((*((unsigned char *)(programData)+0))+1) % 3 == 0))
        {
            //On the next line, print the current number we're on and go to the next line
            std::cout << std::endl << std::setw(10) << '#' << ((*((unsigned char *)(programData)+0) + 1)) << std::endl << std::endl;
        }

    }
    //While our programs counter is less than 100
    while(++((*((unsigned char *)(programData)+0))) < 100);

    //Free any space
    free((programData));

    //Press enter to continue
    std::cout << "\nPress Enter to Close" << std::endl;
    getchar();

    std::cout << "\nGoodbye!" << std::endl;

    //return 0, no errors
    return 0;

}











