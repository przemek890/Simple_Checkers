#include "txt_menu.h"
#include "LibrariesAndVariables.hpp"

txt_menu::txt_menu(){
    this->tl.loadFromFile(MY_DEFINE "../data/mp.as/theme_1.png");
    this->op_tl.loadFromFile(MY_DEFINE "../data/mp.as/theme_2.png");
}

sf::Sprite& txt_menu:: g_tl(){
    this->tl_sp.setTexture(this->tl);
    return tl_sp;
}

sf::Sprite& txt_menu::g_op_tl() {
    this->op_tl_sp.setTexture(this->op_tl);
    return op_tl_sp;
}