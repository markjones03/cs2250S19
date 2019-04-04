/*
 * =====================================================================================
 *
 *       Filename:  first_real_class.cpp
 *
 *    Description:  lets change the structure to a class
 *
 *        Version:  1.0
 *        Created:  04/04/2019 08:55:07 AM
 *       Revision:  none
 *       Compiler:  gcc first_real_class.cpp -o first_real_class.out -lm
            Usage: ./first_real_class.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;
//constants and globlas
class Movie
{
// only the member has access to
 private:
     string title = "";  //data members are private
     int year = 0;

     //anyone has access to it
     //member functions are public
 public:
     // "setters"
     void set_title(string set_title);
     void set_year(int set_year);
     // "getters"
     string get_title();
     int get_year();

}; // end of Movie class

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    //create and "object"
    Movie movie;  // create an "instance" of this class movie
    //set your values
   // movie.title = "Batman";  // illegal - no direct access becuase its private
   movie.set_title("Batman");
   movie.set_year(2009);

   cout << "MOVIE DATA" << endl
       << "Title " << movie.get_title() << endl
       << "Year " << movie.get_year() << endl;
    


    return 0;
}
// Function Definitions

void Movie::set_title(string set_title)
{
    title = set_title;
    return;
}


void Movie::set_year(int set_year)
{
    if (set_year < 1888)
    {
        throw invalid_argument("Year must be 1888 or later.");
    }
    year = set_year;
    return;
}
// Define Getters
string Movie::get_title()
{
    return title;
}

int Movie::get_year()
{
    return year;
}
