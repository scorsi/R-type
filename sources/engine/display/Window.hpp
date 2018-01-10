#ifndef WINDOW_HPP
# define WINDOW_HPP

# include <SFML/Window/Window.hpp>


class Window {
private:
    sf::Window window;

public:
    Window(unsigned int width, unsigned int height, std::string const &name) : window{sf::VideoMode(width, height), name} {}
    ~Window() = default;

public:
    const sf::Window &Window::getWindow() const {return window;}

public:
    bool isOpen() {return window.isOpen();}
    bool pollEvent(sf::Event& event) {return window.pollEvent(event);}
    void close() {window.close();}

public:
    Window() = delete;
};


#endif //  !WINDOW_HPP
