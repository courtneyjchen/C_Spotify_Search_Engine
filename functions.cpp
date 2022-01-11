#include <iostream>
#include <string>
#include "functions.h"

using namespace std;
const int capacity = 100;

// Compares the user input to songs in each line and displays the song information when there's a match.
void iterativeTitle(string query, string songs[], string artists[], string publishers[], string duration[]) {
    bool found = false;
    for (int i = 0; i <= capacity; i++) {
        if (songs[i] == query) {
            cout << "1 Song Found!" << endl;
            cout << songs[i] << endl;
            cout << artists[i] << endl;
            cout << publishers[i] << endl;
            cout << duration[i] << endl;
            found = true;
            break;
        }
    }
    if (found == false) {
        cout << "0 Song Found!" << endl;
    }
}

// Compares the user input to artists in each line and displays the book information when there's a match.
void iterativeArtist(string query, string songs[], string artists[], string publishers[], string duration[]) {
    bool found = false;
    for (int i = 0; i <= capacity; i++) {
        if (artists[i] == query) {
            cout << "1 Song Found!" << endl;
            cout << songs[i] << endl;
            cout << artists[i] << endl;
            cout << publishers[i] << endl;
            cout << duration[i] << endl;
            found = true;
            break;
        }
    }
    if (found == false) {
        cout << "0 Songs Found!" << endl;
    }
}

// Establishes a match between the query and a title as the base case and
// prints song information if there's a match.
// If not, i is incremented and the recursive function is called again.
void recursiveTitle(int i, string query, string songs[], string artists[], string albums[], string duration[]){
    if(songs[i] == query) {
        cout << "1 Song Found!" << endl;
        cout << songs[i] << endl;
        cout << artists[i] << endl;
        cout << albums[i] << endl;
        cout << duration[i] << endl;
    } else{
        i++;
        recursiveTitle(i, query, songs, artists, albums,duration);
    }
}

// Establishes a match between the query and an artist as the base case
// and prints song information if there's a match.
// If not, i is incremented and the recursive function is called again.
void recursiveArtist(int i, string query, string songs[], string artists[], string albums[], string duration[]){
    if(artists[i] == query) {
        cout << "1 Song Found!" << endl;
        cout << songs[i] << endl;
        cout << artists[i] << endl;
        cout << albums[i] << endl;
        cout << duration[i] << endl;
    } else{
        i++;
        recursiveArtist(i, query, songs, artists, albums, duration);
    }
}

// Displays a menu to the user and calls function or quits depending on the user's choice
int menu(string songs[], string artists[], string albums[], string duration[]){
    int choice;
    string query;
    int i = 0;

    cout << "Welcome to Courtney's 2019 Spotify Top 100!" << endl << endl;
    cout << "Please select an option for searching:" << endl;
    cout << "1. Search for Song (Iterative)" << endl;
    cout << "2. Search for Artist (Iterative)" << endl;
    cout << "3. Search for Song (Recursive)" << endl;
    cout << "4. Search for Artist (Recursive)" << endl;
    cout << "5. Quit" << endl;
    cout << "Enter your selection: ";
    cin >> choice;

    if(choice >= 1 && choice <= 5){
        switch(choice) {
            case 1:
                cout << endl << "Enter your search query: ";
                getline(cin >> ws, query);
                iterativeTitle(query, songs, artists, albums, duration);
                break;
            case 2:
                cout << endl << "Enter your search query: ";
                getline(cin >> ws, query);
                iterativeArtist(query, songs, artists, albums, duration);
                break;
            case 3:
                cout << endl << "Enter your search query: ";
                getline(cin >> ws, query);
                recursiveTitle(i, query, songs, artists, albums, duration);
                break;
            case 4:
                cout << endl << "Enter your search query: ";
                getline(cin >> ws, query);
                recursiveArtist(i, query, songs, artists, albums, duration);
                break;
            case 5:
                break;
        }
        return choice;
    }else{
        cout << "Selection out of range! Please select an option 1-5." << endl;
    }
    return 0;
}
