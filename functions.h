#ifndef PROGRAM2_FUNCTIONS_H
#define PROGRAM2_FUNCTIONS_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
void iterativeTitle(string query, string songs[], string artists[], string albums[], string duration[]);
void iterativeArtist(string query, string songs[], string artists[], string albums[], string duration[]);
void recursiveTitle(int i, string query, string songs[], string artists[], string albums[], string duration[]);
void recursiveArtist(int i, string query, string songs[], string artists[], string albums[], string duration[]);
int menu(string songs[], string artists[], string albums[], string duration[]);

#endif
