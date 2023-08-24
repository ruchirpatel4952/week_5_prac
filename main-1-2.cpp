#include <iostream>
#include "StoreShelf.h"
#include "MusicBox.h" // Assuming you have a MusicBox class

int main() {
    StoreShelf shelf(100); // Create a shelf with a width of 100 centimeters

    MusicBox box1('1',20); 
    MusicBox box2('1',30); 

    if (shelf.add_music_box(box1)) {
        std::cout << "Added box1 to the shelf." << std::endl;
    } else {
        std::cout << "Unable to add box1 to the shelf." << std::endl;
    }

    if (shelf.add_music_box(box2)) {
        std::cout << "Added box2 to the shelf." << std::endl;
    } else {
        std::cout << "Unable to add box2 to the shelf." << std::endl;
    }

    std::cout << "Shelf width: " << shelf.get_width() << " centimeters." << std::endl;
    std::cout << "Number of music boxes on the shelf: " << shelf.get_num_music_boxes() << std::endl;

    return 0;
}
