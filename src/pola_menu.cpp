#include "pola_menu.h"

pola_menu::pola_menu() {
    this->p1.loadFromFile("../data/mp.as/przycisk1.png");
    this->p2.loadFromFile("../data/mp.as/pionki.png");
    this->lgw.loadFromFile("../data/mp.as/lgw.png");
    this->lg.loadFromFile("../data/mp.as/lg1.png");

    this->pionl.loadFromFile("../data/mp.as/pionl.png");
    this->pionb.loadFromFile("../data/mp.as/pionb.png");
    this->boardl.loadFromFile("../data/mp.as/szachbraz.png");
    this->boardb.loadFromFile("../data/mp.as/szachblack.png");

    this->pod1.loadFromFile("../data/mp.as/2.png");
    this->pod2.loadFromFile("../data/mp.as/3.png");
    this->pod3.loadFromFile("../data/mp.as/4.png");

    this->login.loadFromFile("../data/mp.as/dop.png");
    this->sa.loadFromFile("../data/mp.as/sa2.png");

    this->arch.loadFromFile("../data/mp.as/archiwum.png");
}

sf::Texture& pola_menu::g_p1() { return this->p1;}
sf::Texture& pola_menu::g_p2() { return this->p2;}
sf::Texture& pola_menu::g_lgw(){return  this->lgw;}
sf::Texture& pola_menu::g_lg(){return  this->lg;}

sf::Texture& pola_menu::g_pionl() {return  this->pionl;}
sf::Texture& pola_menu::g_pionb() {return this->pionb;}
sf::Texture& pola_menu::g_boardl() {return this->boardl;}
sf::Texture& pola_menu::g_boardb() {return this->boardb;}

sf::Texture& pola_menu::g_pod1() {return this->pod1;}
sf::Texture& pola_menu::g_pod2() {return this->pod2;}
sf::Texture& pola_menu::g_pod3() {return this->pod3;}

sf::Texture& pola_menu::g_login() {return this->login;}
sf::Texture& pola_menu:: g_sa(){return this->sa;}

sf::Texture& pola_menu::g_arch() {return this->arch;}


bool pola_menu::what_if(sf::Sprite &sprite, sf::RenderWindow &window) {

    sf::IntRect rect(sprite.getPosition().x, sprite.getPosition().y, sprite.getGlobalBounds().width, sprite.getGlobalBounds().height);

    if (rect.contains(sf::Mouse::getPosition(window)) && (sf::Mouse::isButtonPressed(sf::Mouse::Left))) {
        return true;
    }

    return false;


}