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
 > In addition to completing the "User Interface Specification" and "Class Diagram" sections below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column (aka Sprint Backlog).
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. Both time slots should be during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## User Interface Specification
 > Include a navigation diagram for your screens and the layout of each of those screens as desribed below. For all the layouts/diagrams, you can use any tool such as PowerPoint or a drawing program. (Specification requirement is adapted from [this template](https://redirect.cs.umbc.edu/~mgrass2/cmsc345/Template_UI.doc))

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
![ULM_Diagram](https://github.com/cs100/final-project-buong001-alau030-byu064-imcke003/assets/156245193/23110b10-9982-4336-842d-d59ef1b564aa)


 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
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
 
