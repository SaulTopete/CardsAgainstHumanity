//
// Created by Saul Topete on 12/6/20.
//

#include "CardsAgainstHumanity.h"


CardsAgainstHumanity::CardsAgainstHumanity() {

}

void CardsAgainstHumanity::run() {
    SplashScreen s;
    DrawCard drawCard;
    WhiteCardDeck whiteCardDeck;
    WhiteStack whiteStack;
    BlackCardDeck blackCardDeck;
    BlackStack blackStack;

    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Dave Against Humanity");
    sf::Event event;

    int splashCounter = 0;
    int startClicked = 0;
    int leftCounter = 0;
    int rightCounter = 0;

    window.setFramerateLimit(60);

    //Game Loop
    while (window.isOpen()) {
        //Splash Screen
        while (splashCounter == 0) {
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                startClicked++;
            }
            if (startClicked == 0) {
                window.draw(s.getBackground());
                window.draw(s.getTitle());
                window.draw(s.getStartButton());
                window.draw(s.getSemesterStuff());
                window.draw(s.getName());
                window.draw(s.getCoverPhoto());
            } else {
//                window.clear(sf::Color::Black);
                splashCounter++;
            }

            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.display();
        }


        window.draw(drawCard.getWallpaper());
        window.draw(drawCard.getWhite1Card());
        window.draw(drawCard.getWhite2Card());
        window.draw(drawCard.getBlackCard());
        window.draw(drawCard.getWhite1Text());
        window.draw(drawCard.getWhite2Text());
        window.draw(drawCard.getBlackText());
        whiteCardDeck.addNode(whiteStack.getWhiteTop());
        whiteStack.removeFromStack();
        whiteCardDeck.addNode(whiteStack.getWhiteTop());
        whiteStack.removeFromStack();
        whiteCardDeck.addNode(whiteStack.getWhiteTop());
        whiteStack.removeFromStack();
        blackCardDeck.addNode(blackStack.getBlackTop());
        blackStack.removeFromStack();

        drawCard.updateWhiteCard1(whiteCardDeck.getNode(0));
        drawCard.updateWhiteCard2(whiteCardDeck.getNode(1));
        drawCard.updateBlackCard(blackCardDeck.getNode(0));

        window.draw(drawCard.getWhite1Text());
        window.draw(drawCard.getWhite2Text());
        window.draw(drawCard.getBlackText());
        window.draw(drawCard.getG());
        window.draw(drawCard.getH());

        window.display();

        //Game
        while (!(whiteStack.isEmpty())){
            bool clicked = false;

            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    window.close();
                }

                if( event.type == event.KeyReleased && event.key.code == sf::Keyboard::G ){
                    std::cout << "Clicked G" <<std::endl;
                    drawCard.updateWhiteCard1(whiteStack.getWhiteTop());
                    whiteStack.removeFromStack();
                    clicked = true;
                    drawCard.updateBlackCard(blackStack.getBlackTop());
                    blackStack.removeFromStack();
                    drawCard.updateLeftCounter(leftCounter++);
                }

                if(event.type == event.KeyReleased && event.key.code == sf::Keyboard::H){
                    std::cout << "Clicked H" <<std::endl;
                    drawCard.updateWhiteCard2(whiteStack.getWhiteTop());
                    whiteStack.removeFromStack();
                    clicked = true;
                    drawCard.updateBlackCard(blackStack.getBlackTop());
                    blackStack.removeFromStack();
                    drawCard.updateRightCounter(rightCounter++);
                }
            }

            if(clicked) {
                window.clear(sf::Color::White);
                window.draw(drawCard.getWallpaper());
                window.draw(drawCard.getWhite1Card());
                window.draw(drawCard.getWhite2Card());
                window.draw(drawCard.getBlackCard());
                window.draw(drawCard.getWhite1Text());
                window.draw(drawCard.getWhite2Text());
                window.draw(drawCard.getBlackText());
                window.draw(drawCard.getG());
                window.draw(drawCard.getH());
                window.draw(drawCard.getLeftNum());
                window.draw(drawCard.getRightNum());
                
                window.display();

            }
        }

        window.close();
    }
}
