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
#include <iomanip>  //more cout options
#include <string> // for strings
#include <vector>  // for vectore "arrays with lots of fetures"
#include "Movie.h"
using namespace std;
//constants and globlas

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    cout << "The movie list Program" << endl << endl
        << "Enter a movie ..." << endl << endl;
    // Get movies from the user
//    Movie movies[10]; //array of 10 movies fixed to that size 10 spots
    vector<Movie> movies;  //define a vector of movies. Grow on demand
    char another = 'y';
    
    // Loop for entries
    while(tolower(another) == 'y')
    {
        Movie movie;
        string title;
        int year;
        //Get user input
        cout << "Title: ";  //get title
        getline(cin, title);
        movie.set_title(title);

        cout << "Year: ";  //get year
        cin >> year;
        movie.set_year(year);
        // Add it to the vector
        movies.push_back(movie);



        cout << endl << "Enter another movie? [y/n]: ";
        cin >> another;
        cin.ignore();  // ignore anything else in the buffer
        cout << endl;
    }// end of while looop
    //Display Movie
    
    const int w = 10;
    cout << left
        << setw(w*3) << "TITLE"
        << setw(w)<< "YEAR" << endl;
    for(Movie movie : movies)  // looping over vector
    {
    cout << setw(w*3) << movie.get_title()
        << setw(w) << movie.get_year() << endl;
    }
    cout << endl;


    return 0;
}
// Function Definitions


