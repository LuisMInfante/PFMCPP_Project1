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
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2: the dog sits
dog.sit();
//  action 3: the dog jumps
dog.jump();
//  2)
//  Noun: cat
//  action 1: the cat meows
cat.meow();
//  action 2: the cat purrs
cat.purr();
//  action 3: the cat scratches
cat.scratch();
//  3)
//  Noun: owls
//  action 1: the owl hoots
owl.hoot();
//  action 2: the owl flies
owl.fly();
//  action 3: the owl eats
owl.eat();
//  4)
//  Noun: lion
//  action 1: the lion roars
lion.roar();
//  action 2: the lion runs
lion.run();
//  action 3: the lion attacks
lion.attack();
//  5)
//  Noun: fish
//  action 1: the fish swims
fish.swim();
//  action 2: the fish breathes
fish.breathe();
//  action 3: the fish hides
fish.hide();
//  6)
//  Noun: wasp
//  action 1: the wasp stings
wasp.sting();
//  action 2: the wasp flies
wasp.fly();
//  action 3: the wasp mates
wasp.mate();
//  7)
//  Noun: squirrel
//  action 1: the squirrel runs up tree
squirrel.runUpTree();
//  action 2: the squirrel breaks nuts
squirrel.breakNut():
//  action 3: the squirrel eats
squirrel.eat();
//  8)
//  Noun: panda
//  action 1: the panda eats bamboo
panda.eatBamboo();
//  action 2: the panda sleeps
panda.sleep();
//  action 3: the panda relaxes
panda.relax();
//  9)
//  Noun: The Mystical Tree
//  action 1: The Mystical Tree shares wise old tales
theMysticalTree.shareWiseOldTale();
//  action 2: The Mystical Tree gives advice
theMysticalTree.giveAdvice();
//  action 3: The Mystical Tree yearns for battle
theMysticalTree.yearnForBattle();
//  10)
//  Noun: grandmother
//  action 1: the grandmother cooks
grandmother.cook();
//  action 2: the grandmother sleeps
grandmother.sleep();
//  action 3: the grandmother watches tv
grandmother.watchTv();


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
