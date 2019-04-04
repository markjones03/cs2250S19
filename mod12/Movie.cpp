/*
 * =====================================================================================
 *
 *       Filename:  Movie.cpp
 *
 *    Description:  movie class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 09:38:44 AM
 *       Revision:  none
 *       Compiler:  gcc Movie.cpp -o Movie.out -lm
            Usage: ./Movie.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
#include "Movie.h"
using namespace std;

// Function Definitions

void Movie::set_title(string set_title)
{
    // this->title = set_title, this-> is optional becuase no name clash
    title = set_title;
}


void Movie::set_year(int year)
{
    if (year < 1888)
    {
        throw invalid_argument("Year must be 1888 or later.");
    }
    //this-> refers to yourself
    this->year = year;
}

// Define Getters
string Movie::get_title() const
{
    return title;
}

int Movie::get_year() const
{
    return year;
}
