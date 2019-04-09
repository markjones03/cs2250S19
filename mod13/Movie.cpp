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
#include <iomanip>
#include "Movie.h"
using namespace std;

//Default Constructor
//Movie::Movie()
//{
//    title = "Nada";
//    year = 1888;
//    stars = 0;
//}
Movie::Movie(string title, int year, int stars)
{
    set_title(title);
    set_year(year);
    set_stars(stars);
}

//Destructor

Movie::~Movie()
{
//    cout << "Destorying Object" << endl;
}
//Print info
void Movie::info()const
{
    int w = 10;
    cout << left
        << setw(w*3) << "TITLE"
        << setw(w) << "YEAR" << endl;
    cout << setw(w*3) << get_title()
        << setw(w) << get_year() << endl;
}
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
void Movie::set_stars(int stars)
{
    //this-> refers to yourself
    this->stars = stars;
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

int Movie::get_stars() const
{
    return stars;
}
