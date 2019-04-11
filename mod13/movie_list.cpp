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
void add_movie(vector<Movie>& movies);
Movie get_movie();
// Main Function
int main(int argc, char* argv[])
{
    cout << "The Movie List Program\n" << endl;
    vector<Movie> movies = read_movies_from_file();
    char command = 'v';
    while(command != 'x')
    {
        display_menu();
        cout << "Command: ";
        cin >> command;
        switch(command)
        {
            case 'v':
                view_movies(movies);
                break;
            case 'a':
                add_movie(movies);
                break;
            case 'd':
                // add delete_movie(movies);
                break;
            case 'x':
                cout << "Bye!" << endl << endl;
                break;
            default:
                cout << "Not a valid command. Please try again." << endl;
        } // end of switch( command)
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
                    string title, temp;
                    int year, stars;
                    getline(ss, title, ',');  //read title until you get to coma

                    getline(ss, temp, ','); //read temp until you get a coma
                    year = stoi(temp); // convert string to integer

                    getline(ss, temp, ',');
                    stars = stoi(temp);
                    //ss >> year >> stars;       // get year and stars
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


Movie get_movie()
{
    string title;
    cout << "Title: ";
    cin.ignore(1000, '\n');
    getline(cin, title);

    int year;
    cout << "Year: ";
    cin >> year;

    int stars;
    cout << "Stars (1-5): ";
    cin >> stars;

    Movie movie(title, year, stars);
    return movie;
}


void add_movie(vector<Movie>& movies)
{
    Movie movie = get_movie();

    // check if movie already exists
    bool already_exists = false;
    for (Movie& m : movies)
    {
        // Check if movie record already exists
        if (m.iequals(movie))
        {
            already_exists = true;
            // Updating the star number
            m.set_stars(movie.get_stars());
            break;
        }
    }

    if (already_exists)
    {

        cout << movie.get_title() << " was updated.\n\n";
        
    }
    else
    {
        movies.push_back(movie); // add it to list
        cout << movie.get_title() << " was added.\n\n";
    }
}

