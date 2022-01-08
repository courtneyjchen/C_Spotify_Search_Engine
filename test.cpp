#include <iostream>
#include <cassert>
using namespace std;

void testTitles(string songs[]){
    int size = songs->size();
    assert(size > 0);
}


void testArtists(string artists[]){
    int size = artists->size();
    assert(size == 100);
}

void testAlbums(string albums[]){
    int size = albums->size();
    assert(size == 100);
}

void testDuration(string duration[]){
    int size = duration->size();
    assert(size == 100);
}

void testChoice(int choice){
    assert(choice < 100);
}


void testChoiceNotNegative(int choice){
    assert(choice > 0);
}
void testChoiceLessThanMaximum(int choice){
    assert(choice < 6);
}

void testTitlesNotNull(string songs[]){
    assert(songs != NULL);
}
void testArtistsNotNull(string artists[]){
    assert(artists != NULL);
}
void testAlbumsNotNull(string albums[]){
    assert(albums != NULL);
}