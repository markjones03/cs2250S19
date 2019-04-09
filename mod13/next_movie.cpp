/*
 * =====================================================================================
 *
 *       Filename:  next_movie.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2019 08:52:48 AM
 *       Revision:  none
 *       Compiler:  gcc next_movie.cpp -o next_movie.out -lm
            Usage: ./next_movie.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include "Movie.h"

using namespace std;

// Main Function
int main(int argc, char* argv[])
{
    //create object with defualt values
    Movie m1;
    m1.info();
    //create object with some values
    Movie m2("Rambo", 1991, 5);
    m2.info();
    
    Movie m3("SuperMan",1987, 3);
    m3.info();

    return 0;
}
// Function Definitions


