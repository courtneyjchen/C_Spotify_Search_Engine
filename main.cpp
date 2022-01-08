#include <iostream>
#include <string>
#include "functions.h"

using namespace std;
const int capacity = 100;

// Parses in top_songs_2019.csv using commas as the delimiter,
// stores the strings in their respective arrays, calls the menu function
int main() {
    // Enables special characters
    setlocale(LC_ALL, "");

    ifstream inFS;
    string line;
    string quoteDummy;
    string commaDummy;
    int i = 0;
    string songs[capacity], artists[capacity], albums[capacity], duration[capacity];

    inFS.open("../top_songs_2019.csv");
    if(!inFS.is_open()) {
        cout << "Could not open file top_songs_2019.csv" << endl;
        return 1;
    }

    getline(inFS, line);
    while(getline(inFS, line)){
        stringstream ss(line);
        // If quote qualifiers are found, uses the next quote as the delimiter
        // and puts excess text into dummy strings.
        // Else, uses the comma as the delimiter.
        if(ss.peek() == '"') {
            getline(ss,quoteDummy,'"');
            getline(ss,songs[i],'"');
            getline(ss, commaDummy, ',');
        }
        else {
            getline(ss,songs[i],',');
        }

        if(ss.peek() == '"') {
            getline(ss,quoteDummy,'"');
            getline(ss,artists[i],'"');
            getline(ss, commaDummy, ',');
        }
        else {
            getline(ss,artists[i],',');
        }

        if(ss.peek() == '"') {
            getline(ss,quoteDummy,'"');
            getline(ss,albums[i],'"');
            getline(ss, commaDummy, ',');
        }
        else {
            getline(ss,albums[i],',');
        }
        getline(ss, duration[i], ',');

        i++;
    }
    cout << "size is " << sizeof(songs)/sizeof(songs[0]) << endl;

    int choice = menu(songs, artists, albums, duration);
    while(choice != 5){
        choice = menu(songs, artists, albums, duration);
    }

    return 0;
}