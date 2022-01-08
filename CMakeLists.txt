cmake_minimum_required(VERSION 3.17)
project(FinalProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(FinalProject main.cpp SplashScreen.cpp SplashScreen.h CardsAgainstHumanity.cpp CardsAgainstHumanity.h DrawCard.cpp DrawCard.h WhiteCardDeck.cpp WhiteCardDeck.h WhiteStack.cpp WhiteStack.h WhiteCardList.cpp WhiteCardList.h BlackStack.cpp BlackStack.h BlackCardList.cpp BlackCardList.h BlackCardDeck.cpp BlackCardDeck.h)

target_link_libraries(FinalProject sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)