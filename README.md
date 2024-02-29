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
![Escape the Square Maze Navi Diagram](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/139507850/f635950d-bf57-4ed4-a821-a2621daeb330)

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
![Copy of Untitled Diagram drawio](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/139507850/437bf72c-f7ae-42ad-9577-ad0634738dce)

The game class is used to be the driver of the game, creating the map of rooms and the character selection for each user.The Room class is a base class that will create each room in the map. A defualt room will be created if the room is not on the edge of the map and if a room is an edge, the room will be created using the EdgeRoom class. The Output class will be used to output the text seen by the users to the screen. The Player class is an abstract class that allows for three different types of characters, TypeA, TypeB and Type C. The TypeA class will will be a well rounded character with even attributes in health and attack, TypeB will have a greater enphasis on health over damage, while TypeC will have greater attack stats than health. If choosing to do the game in multiplayer, both people can choose their own class, but playing in singleplayer mode, the enemy will randomly choose one of the types. Armor and weapons can be found in different rooms that boost stats of a player character. 

 > ## Phase III
### Added InValidInput class and removed OutputBadInput function in Output class  
We removed the OutputBadInput function so that the Output class follows the single responsibility principle (SRP). The InvalidInput class now handles cases where there is an invalid input, and outputs "Error." After this update, both classes have a single responsibility and adhere to the SOLID principles.

### Updated Player Class's inherited classes
We decided to remove the "Enemy" class since there are only two players, with one acting as the current player and the other acting as the opponent player. We also decided to move some universal functions up to the Player class so that each inheriting class has access from one source. This follows the Dependency Inversion Principle (DIP) where the player types (Type A, Type B, and Type C) all depend on an abstract class (Player) and don't depend on outputs, but rather the player's inputs.
 
 > ## Final deliverable (Phase IV)
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
