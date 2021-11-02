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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: eye
//  action 1: the eye rolls
eye.roll();
//  action 2: the eye looks
eye.look();
//  action 3: the eye watches each and every one of us
eye.watchEveryone();
//  2)
//  Noun: mind
//  action 1: the wanders wanders
mind.wander();
//  action 2: the mind malfunctions
mind.malfunction();
//  action 3: the mind forgets
mind.forget();
//  3)
//  Noun: boss
//  action 1: the boss opresses
boss.opress();
//  action 2: the boss pays
boss.forget();
//  action 3: the boss fires
boss.setMeFree();
//  4)
//  Noun: car
//  action 1: the car crashes
car.crash();
//  action 2: the car repairs itself
car.repairSelf();
//  action 3: the car refuses to move
car.die();
//  5)
//  Noun: boat
//  action 1: the boat sails
boat.sail();
//  action 2: the boat is leaking
boat.leak();
//  action 3: the boat sinks
boat.sink();
//  6)
//  Noun: detective
//  action 1: the detective investigates
detective.investigate();
//  action 2: the detective accepts bribe
detective.acceptBribe();
//  action 3: the detective misses clues
detective.missClue();
//  7)
//  Noun: friend
//  action 1: the friend gives advice
friend.giveAdvice(); // I wonder, why is "friend" marked in blue?
//  action 2: the friend hides motives
friend.hideMotives();
//  action 3: the friend becomes enemy
friend.becomeEnemy();
//  8)
//  Noun: duck
//  action 1: the duck wakes up
duck.wakeUp();
//  action 2: the duck crosses the road
duck.CrossRoad();
//  action 3: the duck regrets action 2
duck.regretAction2();
//  9)
//  Noun: drill
//  action 1: the drill drills a hole
drill.drillHole();
//  action 2: the drill harms the users body
drill.harmBody();
//  action 3: this is not a drill
drill.notA();
//  10)
//  Noun: you
//  action 1: you made me do this
you.makeMeDo();
//  action 2: you love teaching, its obvious
you.loveTeaching();
//  action 3: you go to a party
you.goToParty();


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
