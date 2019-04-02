//
// Created by Yussef on 4/1/2019.
//

#include <cstdlib>
#include <iostream>
#ifndef UNTITLED3_SONG_H
#define UNTITLED3_SONG_H

using namespace std;


class Song {

private:
    string title;
    string artist;
    int size;

public:

    Song();
    Song(string title);
    Song(string title, string artist, int size);

    string getTitle() const
    {
        return title;
    }

    string getArtist() const
    {
        return artist;
    }

    int getSize() const
    {
        return size;
    }

    void setTitle(string const t)
    {
        title = t;
    }

    void setArtist(string const a)
    {
        artist = a;
    }

    void setSize(int const s)
    {
        size = s;
    }


    bool operator > (Song const &rhs);


    bool operator ==(Song const &rhs);

    bool operator != (Song const &rhs);




};


#endif //UNTITLED3_SONG_H

