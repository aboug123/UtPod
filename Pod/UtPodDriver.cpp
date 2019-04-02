/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{
    UtPod t;

    Song s1("Beatles", "Hey Jude1", 4);
    int result = t.addSong(s1);
    cout << "result = " << result << endl;

    t.showSongList();

    Song s2("Beatles", "Hey Jude1", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;

    t.showSongList();

    Song s3("Beatles", "Hey Jude1", 3);
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    Song s4("Beatles", "Hey Jude3", 6);
    result = t.addSong(s4);
    cout << "result = " << result << endl;


    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;


    Song s6("Beatles", "Hey Jude7", 300);
    result = t.addSong(s6);
    cout << "result = " << result << endl;

    Song s7("Afrojack", "Replica", 8);
    result = t.addSong(s7);
    cout << "result = " << result << endl;

    Song s8("Lane8", "Little by Little", 7);
    result = t.addSong(s8);
    cout << "result = " << result << endl;

    Song s9("Zypher", "Money", 2);
    result = t.addSong(s9);
    cout << "result = " << result << endl;


    Song s10("Avoure", "Aura", 7);
    result = t.addSong(s10);
    cout << "result = " << result << endl;

    Song s11("Avoure", "Born", 5);
    result = t.addSong(s11);
    cout << "result = " << result << endl;

    t.showSongList();
    cout << "\n "  << endl;
    t.sortSongList();
    cout << "after sorting..." << endl;
    t.showSongList();
    cout << "\n "  << endl;
    t.shuffle();
    cout << "after shuffling..." << endl;
    t.showSongList();

    cout << "\n "  << endl;

    t.sortSongList();
    cout << "after sorting again... " << endl;
    t.showSongList();
    cout << "\n "  << endl;
    t.shuffle();
    cout << "after shuffling again to ensure random shuffle..." << endl;
    t.showSongList();


    cout << "\n "  << endl;



    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    t.showSongList();

    cout << "\n "  << endl;

    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;
    cout << "song was already removed " << endl;

    cout << "\n "  << endl;

    t.showSongList();

    cout << "\n "  << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;
    cout << "song was already removed " << endl;

    cout << "\n "  << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;
    cout << "song was already removed " << endl;

    cout << "\n "  << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;
    cout << "song was already removed " << endl;

    cout << "\n "  << endl;


    t.showSongList();

    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    cout << "\n " << endl;


    t.showSongList();
    cout << "remaining memory = " << t.getRemainingMemory() << endl;
    cout << "total memory = " << t.getTotalMemory() << endl;

    cout << "\n " <<  endl;

    t.clearMemory();

    cout << "memory cleared! " <<  endl;

    cout << "\n " << endl;

    cout << "remaining memory = " << t.getRemainingMemory() << endl;

    cout << "\n " <<  endl;



    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;
    cout << "no songs " << endl;

    UtPod t1;
    cout << "t1 total memory = " << t1.getTotalMemory() << endl;

    UtPod t2(512);
    cout << "t2 total memory = " << t2.getTotalMemory() << endl;

    UtPod t3(0);
    cout << "t3 total memory = " << t3.getTotalMemory() << endl;

    UtPod t4(326);
    cout << "t3 total memory = " << t4.getTotalMemory() << endl;



}


