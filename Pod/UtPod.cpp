#include <iostream>
#include <string>
#include <time.h>
#include "UtPod.h"
#include "Song.h"

using namespace std;

UtPod::UtPod() {
    songs=nullptr;
    podMemSize = MAX_MEMORY;
}

UtPod::UtPod(int sngsize){
    songs = nullptr;
    if((sngsize>MAX_MEMORY)||(sngsize<=0)){
        podMemSize = MAX_MEMORY;

    }
    else{
        podMemSize = sngsize;
    }
}

int UtPod::addSong(const Song &s) {
    if((getRemainingMemory() - s.getSize()) <= 0) {
        return -2;
    }
    else {
        SongNode *temp = new SongNode ;
        temp->s = s ;
        temp->next = songs;
        songs = temp;
        return 0;
    }
}

int UtPod::removeSong(const Song &s) {
    SongNode  *temp = songs;


    if (temp == nullptr){
        songs = nullptr;
    }

    else{
        SongNode *previous = nullptr;
        while((temp != nullptr) && (temp->s != s)){
            previous = temp;
            temp = temp->next;
        }

        if(previous == nullptr){
            songs = temp->next;
            delete temp;
        }

        else if (temp == nullptr){
            return -1;
        }

        else if (temp->s == s){
            previous->next = temp->next;
            delete temp;
        }

        return 0;

    }

    return -1;

}

void UtPod::showSongList(){
    SongNode *temp = songs;

    while(temp != nullptr){
        cout << temp->s.getTitle()<< ", "<< temp->s.getArtist() << ", " << temp->s.getSize() << endl;
        temp = temp->next;
    }

}

void UtPod::clearMemory() {

    SongNode *temp = songs;
    SongNode *p = songs;

    while(temp!=nullptr) {
        p = temp->next ;
        delete (temp);
        temp = p;
    }

    songs = nullptr;
}

int UtPod::getRemainingMemory() {

    SongNode *temp = songs;
    int remaining = 0;
    while (temp !=nullptr){

        remaining = remaining + temp->s.getSize();
        temp = temp->next;
    }

    remaining = podMemSize - remaining;
    return remaining;

}






void UtPod::sortSongList() {
    SongNode *p = songs;
    SongNode *p2 = p;
    SongNode *small = p;
    while (p != nullptr){
        while(p2 != nullptr){
            if(small->s.operator>(p2->s) ){
                small = p2;
            }
            p2 = p2->next;
        }
        swap (small->s, p->s);
        p = p->next;
    }





}

int UtPod::getNumSongs() {
    int size = 0;
    SongNode *temp = songs;

    while(temp!=nullptr){
        size++;
        temp=temp->next;
    }
    return size;
}

void UtPod::swap(Song &s1, Song &s2){
    Song temp = s1;
    s1 = s2;
    s2 = temp;
}

void UtPod::shuffle(){
    srand(time(NULL));
    for(int i = 0 ; i<getNumSongs();i++){
        SongNode *temp1 = songs;
        SongNode *temp2 = songs;
        int p1 = rand()%getNumSongs();
        int p2 = rand()%getNumSongs();
        for(int a=1; a<= p1 ; a++ ){
            temp1 = temp1->next;
        }
        for(int a=1; a<= p2 ; a++ ){
            temp2 = temp2->next;

        }
        swap(temp1->s, temp2->s);

    }
}

UtPod::~UtPod(){
    clearMemory();
}

