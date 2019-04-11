/*
 * =====================================================================================
 *
 *       Filename:  Movie.h
 *
 *    Description:  Movie class declaration
 *
 *        Version:  1.0
 *        Created:  04/04/2019 09:39:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  MOVIE__INC__
#define  MOVIE__INC__

#include <iostream>
#include <string.h>
using namespace std;

class Movie
{
// only the member has access to
 private:
     string title;  //data members are private
     int year;
     int stars;
     string to_upper(string);

     //anyone has access to it
     //member functions are public
 public:
     // Consturctor
    // Movie();   //Default
     //another constructor
     Movie(string title = "", int year = 1988, int stars = 0);
     // Destructor
     ~Movie();
     // "setters"
     void set_title(string set_title);
     void set_year(int year);
     void set_stars(int stars);
     // "getters"
     string get_title() const;
     int get_year() const;
     int get_stars() const;
     // Others
     void info()const;
     bool iequals(const Movie&);
}; // end of Movie class


#endif /* ----- #ifndef MOVIE__INC__ ----- */

