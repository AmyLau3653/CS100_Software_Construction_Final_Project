# Escape the Square Maze
 
 > Authors: [Brian Uong](https://github.com/Brian-Uong), [Amy Lau](https://github.com/alau030), [Bryan Yu](https://github.com/bryany1220/), [Ieu Mckenzie](https://github.com/ieuMckenzie)

## Project Description (Phase I)
 

This project holds significance for us as aspiring computing professionals, as it serves as a valuable learning opportunity in areas such as programming logic, data structures, user interface creation, team collaboration, and various other essential skills.


 Our project will be implemented in C++ and Git will be our version control system.


The program will use the terminal to handle input and output of each turn of the game.
If the player is all alone in the room, they will be prompted to either move ('1') or stay ('2')
If they choose to move, they can move up ('w'), left ('a'), right('d'), or down('s') depending on where they are in the map.
If the player happens to be in another room with another player, they can choose to fight ('1') or run('2'). We are still working out how the combat works.
Note that these input keys are not final and may be subject to change.


The RPG we are making consists of a map generated in the form of a square (where there is an odd square number of rooms on the map). This game will primarily feature a 2 player mode in which there are 2 win conditions: the first one to reach the escape room (designated as the middle of the map for now) wins, or the first to bring the other player's hp to 0 wins. However, other modes (like single-player modes) are also being considered further down the development line. There's will potentially be some RNG (random luck) elements involved as well, and a movement count for each player. Each player has a set HP and Atk value and will be determined by whichever type of player class the user chooses.

 > ## Phase II
## User Interface Specification

### Navigation Diagram

![Escape Maze Navi 3](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/139507850/1ee7f429-68f0-47fa-8d33-987648237a90)



This diagram depicts the different "screens" that the game will feature. For example, we have the title screen which also functions as the main menu. The user/player has the option to read the instructions, start the game, or quit (the circle represents the state of the program when it's not running). Once starting the game, both players will be prompted to the character creation screens, and the mechanics of the gameplay are shown in the rest of the graph. The player can either move, attack, stay, or check both players' stats. The graph also depicts which action will lead to which screen (for example, each action Player 1 does will automatically lead to Player 2's action screen. Once player 1 has acted on their turn, player 2 will be prompted to act).


### Screen Layouts
Our game is exclusively played in the terminal and uses five screen layouts: one for the game menu/introduction, one for the normal/encounter scenario, as well as screen layouts for the ‘move’, ‘analyze’, and ‘attack’ actions. 
* Game Menu/Introduction: Outputs the game menu and instructions on how to play
  * Expected input: ‘0’ to quit the game, ‘1’ to play the game, and ‘2’ to view the rules on how to play the game.
  * Input '1' to play the game:  
![input1](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/27d9aab0-4fc7-4bc6-b501-068b503e4657)
  * Input '2' to view how to play:  
![input2](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/47a86509-d461-4245-956d-564737d89296)
* Normal Scenario: Outputs options to 'Move', 'Stay', or 'Analyze'
  * Expected input:  ‘1’ to Move, 2 to ‘Stay’, and 3 to ‘Analyze’
  * Input '1' to Move:  
![input1move](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/ab0c7a12-3ee9-41f7-9435-db20e493eec5)
  * Input '3' to Analyze:  
![input3analyze](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/3990584b-4828-4ccb-8f11-beb2afd36b97)
* Encounter Scenario: Outputs options to 'Move', 'Stay', 'Analyze', or 'Attack'
  * Input '4' to Attack:  
![encounter attack](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/88931d85-7fb7-4356-9791-ac2af1cb72e9)

## Class Diagram
![finalUML drawio](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/156245193/bb7b12a1-ada3-4cef-a39d-1fdd41753a04)

The game class is used to be the driver of the game, creating the map of rooms and the character selection for each user.The Room class is a base class that will create each room in the map. A defualt room will be created if the room is not on the edge of the map and if a room is an edge, the room will be created using the EdgeRoom class. The Output class will be used to output the text seen by the users to the screen. The Player class is an abstract class that allows for three different types of characters, TypeA, TypeB and Type C. The TypeA class will will be a well rounded character with even attributes in health and attack, TypeB will have a greater enphasis on health over damage, while TypeC will have greater attack stats than health. If choosing to do the game in multiplayer, both people can choose their own class, but playing in singleplayer mode, the enemy will randomly choose one of the types. Armor and weapons can be found in different rooms that boost stats of a player character. 

 > ## Phase III
### Added InValidInput class and removed OutputBadInput function in Output class  
We removed the OutputBadInput function so that the Output class follows the single responsibility principle (SRP). The InvalidInput class now handles cases where there is an invalid input, and outputs "Error." After this update, both classes have a single responsibility and adhere to the SOLID principles.


### Updated Player Class's inherited classes
We decided to remove the "Enemy" class since there are only two players, with one acting as the current player and the other acting as the opponent player. We also decided to move some universal functions up to the Player class so that each inheriting class has access from one source. This follows the Dependency Inversion Principle (DIP) where the player types (Type A, Type B, and Type C) all depend on an abstract class (Player) and don't depend on outputs, but rather the player's inputs.

 
 > ## Final deliverable (Phase IV)
 
 ## Screenshots
* Game Menu/Introduction: Outputs the game menu and instructions on how to play
  * Expected input: ‘0’ to quit the game, ‘1’ to play the game, and ‘2’ to view the rules on how to play the game.
  * Input '2' for rules on how to play the game:
  * ![howtoplay](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/c6f70864-d2eb-41ce-87ed-96025cdc8f11)
  * Input '1' to play the game and move:
  * ![play](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/1998013f-c4a9-433d-938b-fc7c95ca3dbf)
* Normal Scenario: Outputs options to 'Move', 'Stay', or 'Analyze'
  * Expected input:  ‘1’ to Move, 2 to ‘Stay’, and 3 to ‘Analyze’
  * Input 3 to 'Analyze'
  * <img width="348" alt="analyze" src="https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/d30e66db-79d3-4ba4-af81-cc9fee75e234">
* Encounter Scenario: Outputs options to 'Move', 'Stay', 'Analyze', or 'Attack'
  * Input '4' to Attack and example output of player death:
  * ![bobdied](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/335a9c84-f462-425b-88b1-283e948178f6)
* Winning Scenario:
  * ![tomwins](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/131137160/8edb5fe1-fab9-4ec0-b414-70badcd57427)

 ## Installation/Usage
To install this game and run the application, this Github repository should be cloned into an IDE that supports C++ programming. After cloning in the terminal or command line, the following need to be run in this order: `cmake .`, `make`, `./runGame`. After `./runGame`, the game should start running and gameplay will begin. 

 ## Testing
The project was tested through unit testing using the Google Unit Test Framework, as well as manually testing different inputs while running the game. The unit testing files are included in the tests folder, where we have tested the following classes: Output, Player, Room, TypeA, TypeB, TypeC. A large majority of the testing was through comparing outputs in the terminal with the outputs we had in mind to ensure that the screen layouts would fit our expectations. This is due to the fact that this project is text-based game that is played solely in the terminal. In addition to the unit tests, we ran our game many times to check that it would run smoothly when given a valid input, and that it would output an error message when there was an invalid input.
 
