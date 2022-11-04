#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:       bartender
//  action 1:   the bartender takes an order
bartender.takeOrder();
//  action 2:   the bartender shakes a drink
bartender.shakeDrink();
//  action 3:   the bartender serves a drink
bartender.serveDrink();
//  2)
//  Noun:       politician
//  action 1:   the politician campaigns
politician.campaign();
//  action 2:   the politician gives a speech
politician.giveSpeech();
//  action 3:   the politician argues
politician.argue();
//  3)
//  Noun:       chameleon
//  action 1:   the chameleon hides
chameleon.hide();
//  action 2:   the chameleon eats a plant
chameleon.eatPlant();
//  action 3:   the chameleon sleeps
chameleon.sleep();
//  4)
//  Noun:       AI
//  action 1:   the AI learns
ai.learn();
//  action 2:   the AI questions
ai.question();
//  action 3:   the AI makes a joke
ai.makeJoke();
//  5)
//  Noun:       oven
//  action 1:   the oven heats up
oven.heatUp();
//  action 2:   the oven cools down
oven.coolDown();
//  action 3:   the oven burns food
oven.burnFood();
//  6)
//  Noun:       wormhole
//  action 1:   the wormhole opens
wormhole.open();
//  action 2:   the wormhole defies physics
wormhole.defyPhysics();
//  action 3:   the wormhole closes
wormhole.close();
//  7)
//  Noun:       author
//  action 1:   the author writes a book
author.writeBook();
//  action 2:   the author signs an autograph
author.signAutograph();
//  action 3:   the author makes a sequel
author.makeSequel();
//  8)
//  Noun:       dj
//  action 1:   the dj plays a track
dj.playTrack();
//  action 2:   the dj neglects a track request
dj.neglectTrackRequest();
//  action 3:   the dj scratches
dj.scratch();
//  9)
//  Noun:       stock
//  action 1:   the stock rises in value
stock.riseInValue();
//  action 2:   the stock decreases in value
stock.decreaseInValue();
//  action 3:   the stock stays unaffected
stock.stayUnaffected();
//  10)
//  Noun:       horror movie
//  action 1:   the horror movie shocks an audience
horrorMovie.shockAudience();
//  action 2:   the horror movie depicts violence
horrorMovie.depictViolence();
//  action 3:   the horror movie ends
horrorMovie.end();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
