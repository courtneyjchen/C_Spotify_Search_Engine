#include <iostream>
#include <string>
#include "functions.h"

using namespace std;
const int capacity = 100;

// Parses in top_songs_2019.csv, stores the strings in their respective arrays, and calls the menu function.

int main() {
    // Enables special characters
    setlocale(LC_ALL, "");

    ifstream inFS;
    string line;
    string dummyString;
    int i = 0;
    string songs[capacity], artists[capacity], albums[capacity], duration[capacity];

    inFS.open("../top_songs_2019.csv");
    if(!inFS.is_open()) {
        cout << "Could not open file top_songs_2019.csv" << endl;
        return 1;
    }

    // If quote qualifiers are found, uses the next quote as the delimiter
    // and puts excess text into dummy strings.
    // Else, uses the comma as the delimiter.
    
    getline(inFS, line);
    while(getline(inFS, line)){
        stringstream ss(line);
        if(ss.peek() == '"') {
            getline(ss,dummyString,'"');
            getline(ss,songs[i],'"');
            getline(ss, dummyString, ',');
        }
        else {
            getline(ss,songs[i],',');
        }

        if(ss.peek() == '"') {
            getline(ss,dummyString,'"');
            getline(ss,artists[i],'"');
            getline(ss, dummyString, ',');
        }
        else {
            getline(ss,artists[i],',');
        }

        if(ss.peek() == '"') {
            getline(ss,dummyString,'"');
            getline(ss,albums[i],'"');
            getline(ss, dummyString, ',');
        }
        else {
            getline(ss,albums[i],',');
        }
        getline(ss, duration[i], ',');

        i++;
    }
    int choice = menu(songs, artists, albums, duration);
    while(choice != 5){
        choice = menu(songs, artists, albums, duration);
    }

    return 0;
}
