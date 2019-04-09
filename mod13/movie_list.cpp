/*
 * =====================================================================================
 *
 *       Filename:  movie_list.cpp
 *
 *    Description:  create a movie list program. loads info from txt file
 *                  then, it presents the user with a menu to interact with the data
 *
 *        Version:  1.0
 *        Created:  04/09/2019 09:41:41 AM
 *       Revision:  none
 *       Compiler:  g++ movie_list.cpp Movie.cpp -o movie_list.out -lm
            Usage: ./movie_list.out
 *
 *         Author:  Mark Jones (), markjones7@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip> //pretty output
#include <vector> // for vectors
#include <string> //for strings
#include <fstream> //for file stream
#include <sstream> //to read strings with spaces
#include "Movie.h"
using namespace std;

// Constants & Globals
const string movie_file = "movies.txt";
// Function Prototypes
void display_menu();
vector<Movie> read_movies_from_file();
void view_movies(const vector<Movie>& movies);
// Main Function
int main(int argc, char* argv[])
{
    cout << "The Movie List Program\n" << endl;
    display_menu();
    vector<Movie> movies = read_movies_from_file();
    char command = 'v';
    while(command != 'x')
    {
        view_movies(movies);

        command = 'x';
    } // end of while loop
    return 0;
}
// Function Definitions

void display_menu()
{
    cout << "COMMANDS" << endl
        << "v - View movie list" << endl
        << "a - Add a movie" << endl
        << "d - Delete a movie" << endl
        << "x - Exit" << endl << endl;
}


vector<Movie> read_movies_from_file()
{
    vector<Movie> movies;
    // Read File
    ifstream input_file(movie_file);
    if(input_file) // if file opened succssfully
    {
        string line;
        while(getline(input_file, line))
                {
                    stringstream ss(line);  // read the line and cast it as string
                    // Now ready to parse the line
                    string title;
                    int year, stars;
                    getline(ss, title, ',');  //read title until you get a tab "\t"
                    ss >> year >> stars;       // get year and stars
//                cout << title << " " << year " " << stars << "extra" << endl;
//                create and add movie object to vector
                    movies.push_back(Movie(title, year, stars));
                } //end of loop over file
        input_file.close();  //close file
    } // end of if statment

    return movies;
}

void view_movies(const vector<Movie>& movies)
{
    int width = 8 ;
    cout << left
        << setw(width / 2) << " "
        << setw(width * 4) << "TITLE"
        << setw(width) << "YEAR"
        << setw(width) << "STARS" << endl;
    // Loop over vector and get info using your getters
    int number = 1;
    for(Movie movie : movies)
    {
        cout << setw(width / 2) << number
            << setw(width*4) << movie.get_title()
            << setw(width) << movie.get_year()
            << setw(width) << movie.get_stars() << endl;
        number++;
    }
    cout << endl;
}
