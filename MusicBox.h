#ifndef MUSICBOX_H
#define MUSICBOX_H

#include <string>

class MusicBox {
public:
    MusicBox();
    MusicBox(const std::string& songname, int width); // Changed the constructor parameter
    int get_width() const;
    std::string get_song();

private:
    int width_;
    std::string songname_; // Added a member for songname
};

#endif // MUSICBOX_H
