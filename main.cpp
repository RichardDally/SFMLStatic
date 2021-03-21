#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Minimal, complete and verifiable example");

    sf::Texture texture;
    texture.loadFromFile("logo.png");

    // openal32.dll must be shipped.
    sf::SoundBuffer soundBuffer;
    soundBuffer.loadFromFile("sound.ogg");

    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
            {
                window.close();
            }
            else if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.display();
    }
}
