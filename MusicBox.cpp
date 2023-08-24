

#include "MusicBox.h"

MusicBox::MusicBox() : width_(0), songname_("Unknown") {} // Default constructor

MusicBox::MusicBox(const std::string& songname, int width) : width_(width), songname_(songname) {}

std::string MusicBox::get_song() {
    return songname_;
}

int MusicBox::get_width() const {
    return width_;
}
