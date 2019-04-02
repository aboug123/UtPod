//
// Created by Yussef on 4/1/2019.
//

#include "Song.h"
#include <iostream>
#include <string>

using namespace std;

Song::Song() {
    artist = "";
    title = "";
    size = 0;
}

Song::Song(string  const title) {
    this->title = title;
}

Song::Song(string const artist, string const title, int  const size) {
    this->artist =artist;
    this->title =title;
    this->size = size;
}



bool Song::operator ==(Song const &rhs){

    return (title == rhs.title && artist == rhs.artist && size == rhs.size);
}

bool Song::operator > (Song const &rhs){
    if (artist>rhs.getArtist()) {
        return true;
    }
    else if (artist<rhs.getArtist()) {
        return false;
    }
    else {
        if (title > rhs.getTitle()) {
            return true;
        }
        else if (title < rhs.getTitle()) {
            return false;
        }
        else {
            if (size > rhs.getSize()) {
                return true;
            }
            else  {
                return false;
            }
        }
    }
}



bool Song::operator != (Song const &rhs){

    return ((title != rhs.title) || (artist != rhs.artist) || (size != rhs.size));

}
