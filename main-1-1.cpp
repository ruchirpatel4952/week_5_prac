#include <iostream>
#include "MusicBox.h"

int main() {
    MusicBox defaultBox;
    std::cout << "Default Music Box - Song: " << defaultBox.get_song() << ", Width: " << defaultBox.get_width() << " cm" << std::endl;
    MusicBox customBox("Canon in D", 10);
    std::cout << "Custom Music Box - Song: " << customBox.get_song() << ", Width: " << customBox.get_width() << " cm" << std::endl;
    return 0;
}
