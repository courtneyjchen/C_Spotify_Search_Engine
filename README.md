# C_Spotify_Search_Engine

*Dislaimer: The data used in the following project is for non-commercial educational and personal use.*

Project Overview

In my personalized search engine project, I developed a Spotify search engine in C++ that parses comma-delimited, quote-qualified data from my 2019 Spotify Top 100, 
stores the information into string arrays, compares the user-inputted query to elements in the array (iteratively or recursively depending on the user's input),
and outputs details to the user about the song or artist depending on the query. 

To obtain the data, I extracted my Spotify Top 100 data as a CSV File. I then manipulated the data in Excel by converting it to UTF8 format, deleting unwanted columns, converting milliseconds to minutes for song duration, and renaming headers. 
