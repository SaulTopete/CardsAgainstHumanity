//
// Created by Saul Topete on 12/6/20.
//

#ifndef FINALPROJECT_SPLASHSCREEN_H
#define FINALPROJECT_SPLASHSCREEN_H

#include <SFML/Graphics.hpp>
#include "CardsAgainstHumanity.h"

class SplashScreen {

public:
    //Constructor
    SplashScreen();

    //Functions
    bool startClicked();

    //Getters
    sf::Text getTitle() const;
    sf::Sprite getCoverPhoto() const;
    sf::Text getName() const;
    sf::Text getSemesterStuff() const;
    sf::Text getStartButton() const;
    sf::Sprite getBackground() const;
    sf::FloatRect getStartBounds() const;

private:
    //Local functions
    void initBackground();
    void initTitle();
    void initCoverPhoto();
    void initName();
    void initCourseCRN();
    void initStartButton();
    void initStartFloat();
    void loadFont();


    sf::Text title;
    sf::Texture cardsPhoto;
    sf::Text name;
    sf::Text crnSemester;
    sf::Text start;
    sf::Font font;
    sf::Sprite _cardsPhoto;
    sf::Texture background;
    sf::Sprite _background;
    sf::FloatRect startFloat;
};


#endif //FINALPROJECT_SPLASHSCREEN_H
