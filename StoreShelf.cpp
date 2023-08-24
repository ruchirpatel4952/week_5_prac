#include "StoreShelf.h"

StoreShelf::StoreShelf() : width_(0), num_music_boxes_(0), contents_(nullptr) {}

StoreShelf::StoreShelf(int width) : width_(width), num_music_boxes_(0), contents_(nullptr) {}

int StoreShelf::get_width() const {
    return width_;
}

int StoreShelf::get_num_music_boxes() const {
    return num_music_boxes_;
}

MusicBox *StoreShelf::get_contents() const {
    return contents_;
}

bool StoreShelf::add_music_box(const MusicBox &a_music_box) {
    if (num_music_boxes_ == 0) {
        contents_ = new MusicBox[1];
        contents_[0] = a_music_box;
        num_music_boxes_ = 1;
        return true;
    } else if (num_music_boxes_ > 0 && num_music_boxes_ * a_music_box.get_width() <= width_) {
        MusicBox *new_contents = new MusicBox[num_music_boxes_ + 1];
        for (int i = 0; i < num_music_boxes_; ++i) {
            new_contents[i] = contents_[i];
        }
        new_contents[num_music_boxes_] = a_music_box;
        delete[] contents_;
        contents_ = new_contents;
        ++num_music_boxes_;
        return true;
    }
    return false;
}

StoreShelf::~StoreShelf() {
    delete[] contents_;
}

