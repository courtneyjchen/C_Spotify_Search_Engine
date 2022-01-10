# C_Spotify_Search_Engine

*Dislaimer: The data used in the following project is for non-commercial educational and personal use.*

Project Overview

In my personalized Spotify Search Engine project, I developed a search engine in C++ that reads in my Spotify 2019 Top 100 CSV file, parses the comma-delimited, quote-qualified data, stores the information into string arrays, compares the user-inputted query to elements in the array (iteratively or recursively depending on the user's input),
and outputs details to the user about the song or artist depending on the query. 

To obtain the data, I downloaded my Spotify Top 100 data as a CSV File. I then cleaned the data in Excel by converting it to UTF8 format, deleting unwanted columns, converting units, and renaming headers. When I was finished, I was left with four columns of information: Song, Artist(s), Album, and Song Duration(min.). These would become my four arrays during parsing.
