#ifndef MUSICBOX_H
#define MUSICBOX_H

#include <string>

class MusicBox {
public:
    MusicBox();
    MusicBox(std::string songname, int width);
    std::string get_song();
    int get_width();
    ~MusicBox();

private:
    std::string song;
    int width;
};

#endif 
