#include <SFML/Audio.hpp>
#include <iostream>

int main() {
        sf::Music music;
        music.openFromFile("music.ogg");
        music.play();
        std::cin.get();
}