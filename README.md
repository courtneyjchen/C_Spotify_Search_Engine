# C_Spotify_Search_Engine

*Dislaimer: The data used in the following project is for non-commercial educational and personal use.*

Introduction

"The best way to avoid copyright claims is to use your own data." - Me, trying to think of data I could use for a personal project. While I wished my past self had the foresight to track every meal she ate or outfit she wore in a tidy Excel pivot table, I realized I could just turn to the musical hub of data, the application that-judging by the way One Direction still appeared in my Top Artists despite my claims that it was strictly a phase-knew me better than I knew myself: Spotify.

Project Overview

To obtain the data, I extracted my Spotify Top 100 data as a CSV File. I then cleaned the data in Excel by converting it to UTF8 format, deleting unwanted columns, converting milliseconds to minutes for song duration, and renaming headers. When I was finished, I was left with four columns of information: Song, Artist(s), Album, and Song Duration(min.).

I then developed a search engine in C++ that reads in my Spotify 2019 Top 100 CSV file, parses the comma-delimited, quote-qualified data, 
stores the information into string arrays, compares the user-inputted query to elements in the array (iteratively or recursively depending on the user's input),
and outputs details to the user about the song or artist depending on the query. 
