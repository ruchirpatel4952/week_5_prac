#include <iostream>
#include "StoreShelf.h"

int main() {
    StoreShelf shelf(50);
    MusicBox box1("Song A", 20); 
    MusicBox box2("Song B", 30);

    shelf.add_music_box(box1);
    shelf.add_music_box(box2);
    

    std::cout << "Shelf width: " << shelf.get_width() << " cm" << std::endl;
    std::cout << "Number of music boxes: " << shelf.get_num_music_boxes() << std::endl;

    MusicBox* contents = shelf.get_contents();
    for (int i = 0; i < shelf.get_num_music_boxes(); i++) {
        std::cout << "Music Box " << i + 1 << " song: " << contents[i].get_song() << ", width: " << contents[i].get_width() << " cm" << std::endl;
    }

    return 0;
}
