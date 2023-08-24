#ifndef STORESHELF_H
#define STORESHELF_H

#include "MusicBox.h" 

class StoreShelf {
public:
    StoreShelf();
    StoreShelf(int width);

    int get_width() const;
    int get_num_music_boxes() const;
    MusicBox *get_contents() const;

    bool add_music_box(const MusicBox &a_music_box);

    ~StoreShelf();

private:
    int width_;
    int num_music_boxes_;
    MusicBox *contents_;
};

#endif 
