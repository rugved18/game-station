#include<iostream>
using namespace std;
#include<time.h>
#include <cstdlib>
#include <vector>
#include <ctime>

#include<string.h>
#include<conio.h>
#include <stdlib.h>

int totalScore1=0,totalSCore2=0;

int ticTacToeMutli();
void ticTacToe();
void rockPaperScissors();
void rpsMulti();
void handCricket();
int hcMulti();
void guessNumber();
int commonScore();


int hcMulti(){

     int a,c,d,e,ps,cs,scoreDiff;
    bool b,tossChoose;
    //a=randomNum(a);
    //cout<<a<<endl;

    cout<<"----------GAME RULES----------"<<endl;
    cout<<"1.Winner of the Toss will choose Batting or Bowling"<<endl;
    cout<<"2.While Playing this game number Should be between only 0-6(Execpt for Toss)"<<endl;
    cout<<"3.If there is Same Number Will Batting the Player gets OUT"<<endl;
    cout<<"4.While Bowling if you Enter number Greater than 6 the player gets out"<<endl;
    cout<<"5.Winner of Game will be Decided Based on the Final Score Scored"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Let's Start the Game"<<endl;
    cout<<"Enter any Number to Start the Game"<<endl;

    int start;
    cin>>start;


    cout<<"Choose odd or even"<<endl;
    cout<<"Choose by Player1"<<endl;
    cout<<"'0' for ODD and '1'for Even"<<endl;
    cin>>b;
    cout<<"Enter an Number to Toss by Player1"<<endl;
    cin>>c;
    cout<<"Enter an Number to Toss by Player2"<<endl;
    cin>>a;


    d=a+c;

    if(d % 2 == 0){
        e=1;
        //cout<<"Computer's number is: "<< a <<endl;
        cout<<"Its EVEN"<<endl;
    }
    else {
        e=0;
        //cout<<"Computer's number is: "<< a <<endl;
        cout<<"Its ODD"<<endl;
    }

    if (b==e){
        cout<<"Player1 win The Toss"<<endl;
        cout<<"Choose Batting or Bowling"<<endl;
        cout<<"'1' for Batting"<<endl<<"'0' for Bowling"<<endl;
        cin>>tossChoose;

        if(tossChoose==1){
            cout<<"It's your Batting turn"<<endl;
            cout<<"Let's Start"<<endl;

            ps = commonScore();

            cout<<"Now it's Player2 Batting turn"<<endl;
            cout<<"Second Innings Starts"<<endl<<"Lets goo !!"<<endl;
            cs = commonScore();

        }
        else{
            cout<<"Now it's Player2 Batting turn"<<endl;
            cout<<"And Player1 Bowling turn"<<endl;
            cout<<"Let's Start";

            cs = commonScore();

            cout<<"Now it's Player1 Batting turn"<<endl;
            cout<<"Second Innings Starts"<<endl<<"Lets goo !!"<<endl;

            ps = commonScore();

        }

    }
    else{
        cout<< "Player1 Lose the Toss!!"<<endl;
        cout<<"Choose Batting or Bowling"<<endl;
        cout<<"'1' for Batting"<<endl<<"'0' for Bowling"<<endl;
        int f;
        if(f==1){
            cout<<"Player2 choose to Bat"<<endl;
            cout<<"Let's Start"<<endl;

            cs = commonScore();

            cout<<"Now it's Player1 Batting turn"<<endl;
            cout<<"Second Innings Starts"<<endl<<"Lets goo !!"<<endl;
            cout<<endl;

            ps = commonScore();
        }
        else{
            cout<<"Player2 choose to Bowl"<<endl;
            cout<<"Let's Start"<<endl;

            ps = commonScore();

            cout<<"It's now Player2 Batting turn"<<endl;
            cout<<"Second Innings Starts"<<endl<<"Lets goo !!"<<endl;
            cout<<endl;

            cs = commonScore();

        }



    }
    if(cs==ps){
            cout<<"Match Draw"<<endl;
            totalScore1 = totalScore1+50;
            cout<<"Total Earnes Through this game is: "<<totalScore1<<endl;
        }
    else if(cs>ps){

            scoreDiff = cs-ps;
            cout<<"Player2 Win by : "<< scoreDiff <<" runs .."<<endl;
            cout<<"Player1 Lost"<<endl;
        }
    else if(ps>cs){

            scoreDiff = ps-cs;

            cout<<"Player1 Win by : "<< scoreDiff << " runs .. !!" <<endl;
            cout<<"Get me a Party"<<endl;
    }
    return 0;
}





int commonScore(){

    int a[100],b[100],c,d=0,i,j,score=0;


    for(i=0;i<100;i++){

        cout<<"Batting Runs"<<endl;
        cin>>c;
        a[i]=c;
        d++;

        cout<<"Bowler runs"<<endl;

        cin>>j;
        b[i]=j;

        if(a[i] == b[i]){
            cout<<"Batter OUT ..!"<<endl;

        }

        for(i=0;i<d;i++){
        score = score + b[i];
    }

    cout<<"Your Runs are:"<<endl;

    for(i=0;i<d;i++){
        cout<<b[i]<<" ";

    }
    cout<<endl;
    cout<<"Your Total Score is :"<<score<<endl;

    return score;

        }

        return 0;


    }





int playerBatting(){
    int a[100],b[100],c,d=0,i,j,score=0;

    srand(time(0));
    for(int i=0;i<100;i++){
        int b=rand()%7;
        a[i]=b;
    }

    /*for(int i=0;i<100;i++){
        cout<<a[i];
    }*/

    cout<<"Enter your Runs"<<endl;
    for(int j=0;j<100;j++){
        cin>>c;
        if(c>6){
            cout<<"Invalid Run"<<endl;
            cout<<"You are OUT!!"<<endl;
            break;
        }
        else
        {
             if(c!=a[j])
             {
                b[j]=c;
                d++;
                }
            else
            {
                break;
            }
        }

        cout<<"computer Scored"<<a[j]<<"against you"<<endl;

    }
    for(i=0;i<d;i++){
        score = score + b[i];
    }

    cout<<"Your Runs are:"<<endl;

    for(i=0;i<d;i++){
        cout<<b[i]<<" ";

    }
    cout<<endl;
    cout<<"Your Total Score is :"<<score<<endl;

    return score;

}

int computerBatting(){

    int a[100],b[100],c,d=0,i,j,score=0;

    srand(time(0));
    for(int i=0;i<100;i++){
        int b=rand()%7;
        a[i]=b;
    }

    /*for(int i=0;i<100;i++){
        cout<<a[i];
    }*/

    cout<<"Enter your Bowing Runs"<<endl;
    for(int j=0;j<100;j++){
        cin>>c;

        if(c!=a[j])
        {
            b[j]=c;
            d++;
        }
        else
        {
            break;
        }

        cout<<"computer Scored"<<a[j]<<"against you"<<endl;
    }




    for(i=0;i<d;i++){
        score = score + a[i];
    }

    cout<<"Computer's Runs are:"<<endl;

    for(i=0;i<d;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    cout<<"Computer's Total Score is :"<<score<<endl;

    return score;
}


int randomNum(int a){

    srand(time(0));
    a=rand()%10;
    return a;
}

bool compToss(){

    srand(time(0));
    bool a=rand()%2;
    return a;
}




void handCricket(){
    int a,c,d,e,ps,cs,scoreDiff;
    bool b,tossChoose;
    a=randomNum(a);
    //cout<<a<<endl;

    cout<<"----------GAME RULES----------"<<endl;
    cout<<"1.Winner of the Toss will choose Batting or Bowling"<<endl;
    cout<<"2.While Playing this game number Should be between only 0-6(Execpt for Toss)"<<endl;
    cout<<"3.If there is Same Number Will Batting the Player gets OUT"<<endl;
    cout<<"4.While Bowling if you Enter number Greater than 6 the player gets out"<<endl;
    cout<<"5.Winner of Game will be Decided Based on the Final Score Scored"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Let's Start the Game"<<endl;
    cout<<"Enter any Number to Start the Game"<<endl;

    int start;
    cin>>start;


    cout<<"Choose odd or even"<<endl;
    cout<<"'0' for ODD and '1'for Even"<<endl;
    cin>>b;
    cout<<"Enter an Number to Toss"<<endl;
    cin>>c;

    d=a+c;

    if(d % 2 == 0){
        e=1;
        cout<<"Computer's number is: "<< a <<endl;
        cout<<"Its EVEN"<<endl;
    }
    else {
        e=0;
        cout<<"Computer's number is: "<< a <<endl;
        cout<<"Its ODD"<<endl;
    }

    if (b==e){
        cout<<"You win The Toss"<<endl;
        cout<<"Choose Batting or Bowling"<<endl;
        cout<<"'1' for Batting"<<endl<<"'0' for Bowling"<<endl;
        cin>>tossChoose;

        if(tossChoose==1){
            cout<<"It's your Batting turn"<<endl;
            cout<<"Let's Start"<<endl;

            ps = playerBatting();

            cout<<"Now it's Computer's Batting turn"<<endl;
            cout<<"Second Innings Starts"<<endl<<"Lets goo !!"<<endl;
            cs = computerBatting();

        }
        else{
            cout<<"It's your Bowling turn"<<endl;
            cout<<"It's now Computer Batting turn"<<endl;
            cout<<"Let's Start";

            cs = computerBatting();

            cout<<"Now it's your Batting turn"<<endl;
            cout<<"Second Innings Starts"<<endl<<"Lets goo !!"<<endl;

            ps = playerBatting();

        }

    }
    else{
        cout<< "You Lose the Toss!!"<<endl;
        int f = compToss();
        if(f==0){
            cout<<"computer choose to Bat"<<endl;
            cout<<"Let's Start"<<endl;

            cs = computerBatting();

            cout<<"Now it's your Batting turn"<<endl;
            cout<<"Second Innings Starts"<<endl<<"Lets goo !!"<<endl;
            cout<<endl;

            ps = playerBatting();
        }
        else{
            cout<<"computer choose to Bowl"<<endl;
            cout<<"Let's Start"<<endl;

            ps = playerBatting();

            cout<<"It's now Computer Batting turn"<<endl;
            cout<<"Second Innings Starts"<<endl<<"Lets goo !!"<<endl;
            cout<<endl;

            cs = computerBatting();

        }



    }
    if(cs==ps){
            cout<<"Match Draw"<<endl;
            totalScore1 = totalScore1+50;
            cout<<"Total Earnes Through this game is: "<<totalScore1<<endl;
        }
    else if(cs>ps){

            scoreDiff = cs-ps;
            cout<<"Computer Win by : "<< scoreDiff <<" runs .."<<endl;
            cout<<"Total Earnes Through this game is: "<<totalScore1<<endl;
            cout<<"Oops !! You Lost"<<endl;
        }
    else if(ps>cs){

            scoreDiff = ps-cs;

            cout<<"you Win by : "<< scoreDiff << " runs .. !!" <<endl;
            totalScore1 = totalScore1+100;
            cout<<"Total Earnes Through this game is: "<<totalScore1<<endl;
            cout<<"Get me a Party"<<endl;
    }


}






void rpsMulti(){
    string pone;
    string ptwo;
    string r;
    string p;
    string s;

    cout << "Rock, Paper, Scissors Game\n";
    cout << "\nPlayer One, please enter your move: ('p' for Paper, 'r' for Rock, 's' for Scissor)";

    cin >> pone;

    cout << "\nPlayer Two, please enter your move: ('p' for Paper, 'r' for Rock, 's' for Scissor)";

    cin >> ptwo;

    r = "r";
p = "p";
s = "s";

    if (pone == ptwo)
    {
        cout <<"\nThere is a tie"<<endl;
        exit(0);
    }

    if ( pone == r && ptwo == p)
    {
        cout << "\nPaper wraps rock, Player 1 win";
        exit(0);
    }
    else if (pone == r && ptwo == s)
    {
        cout << "\nRock smashes scissors, player 1 win";
    }

    if (pone == p && ptwo == r)
    {
        cout <<"\nPaper wraps rock, player 1 win";
    }
    else if ( pone == p && ptwo == s)
    {
        cout <<"\nScissors cut paper, player 2 win";
        exit(0);
    }

    if ( pone == r && ptwo == p)
    {
        cout << "\nPaper wraps rock, Player 1 win";
    }
    else if (pone == r && ptwo == s)
    {
        cout << "\nRock smashes scissors, player 1 win";
        exit(0);
    }

    if (pone == p && ptwo == r)
    {
        cout <<"\nPaper wraps rock, player 1 win";
    }
    else if ( pone == p && ptwo == s)
    {
        cout <<"\nScissors cut paper, player 2 win";
        exit(0);
    }

    if ( ptwo == s && pone == r)
    {
        cout <<"\nScissors cut paper, player 1 win";
    }
    else if (ptwo == s && pone == p)
    {
        cout <<"\nRock smashes scissors, player 2 win ";
        exit(0);
    }

}




#define compareBoxes(box1, box2, box3) ((board[box1] == board[box2]) && (board[box2] == board[box3]) && (board[box1] != 0)) //Checkes if three items are the same, and makes sure they're not 0's.
#define numberToLetter(x) ((x > 0) ? (x == 1) ? 'X' : 'O' : ' ') //Takes the number and turns it into the letter or space.

int getWinner(int board[9]) {
	//Finds winner of game, if there is no winner, returns 0.
	int winner = 0;
	for (int x = 0; x < 3; x++) {
		if (compareBoxes(3*x, 3*x+1, 3*x+2)) { //Chekcs rows.
			winner = board[3*x];
			break;
		} else if (compareBoxes(x, x+3, x+6)) { //Checks columns.
			winner = board[x];
			break;

		} else if (compareBoxes(2*x, 4, 8-2*x) && (x < 2)) { //Checks diagonals. Doesn't check if x == 2.
			winner = board[4];
			break;
		}
	}
	return winner;
}
bool gameOver(int board[9]){
	//Checks if game is over, and announces who won, or if it was a tie.
	int winner = getWinner(board);
	if (winner > 0) {
		cout << numberToLetter(winner) << " wins!"<< endl;
		totalScore1 =+ 100;
		cout<<"Total Earnes Through this game is: "<<totalScore1<<endl;

		return true;
	}
	for (int x = 0; x < 9; x++) {
		if (board[x] == 0) return false;
	}
	cout << "Tie!\n\n";
	return true;
}

int willWin(int board[9], int player) {
	//Checks if a given player could win in the next plank.
	for (int x = 0; x < 9; x++) {
		int tempBoard[9];
		memcpy(tempBoard, board, 36);
		if (board[x] > 0) continue;
		tempBoard[x] = player;
		if(getWinner(tempBoard) == player) return x;
	}
	return -1;
}

int exceptionalCase(int board[9]) {
	//Finds bords that are exceptions to how the algorithm works.
	int cases[2][9] = {{1,0,0,0,2,0,0,0,1}, {0,1,0,1,2,0,0,0,0}}; //Boards that don't work with algorithm.
	int answers[2][4] = {{3,3,3,3}, {2,8,6,0}};
	int rotatedBoard[9] = {6,3,0,7,4,1,8,5,2};
	int newBoard[9];
	int tempBoard[9];
	for(int x = 0; x < 9; x++) {
		newBoard[x] = board[x];
	}
	for (int caseIndex = 0; caseIndex < 2; caseIndex++) {
		for(int rotation = 0; rotation < 4; rotation++) {
			for (int x = 0; x < 9; x++)
				tempBoard[x] = newBoard[x];

			int match = 0;
			//Rotates board so it works with different versions of the same board.
			for (int box = 0; box < 9; box++) {
				newBoard[box] = tempBoard[rotatedBoard[box]];
			}

			for (int x = 0; x < 9; x++) {
				if (newBoard[x] == cases[caseIndex][x]) match++;
				else break;
			}
			if (match == 9) return answers[caseIndex][rotation];
		}
	}
	return -1;
}

int getSpace(int board[9], int spaces[4]) {
	//Gets a random corner or side that's not taken.
	bool isSpaceEmpty = false;
	int y;
	for (int x = 0; x < 4; x++) {
		if (board[spaces[x]] == 0) {
			isSpaceEmpty = true;
			break;
		}
	}
	if (isSpaceEmpty) {
		do {
			y = rand() % 4;
		} while (board[spaces[y]] != 0);
		return spaces[y];
	}
	return -1;
}

void outputBoard(int board[9]) {
	for(int line = 0; line < 3; line++){
		for (int box = 0; box < 3; box++) {
			cout << numberToLetter(board[3*line+box]) << ((box < 2) ? '|' : '\n');
		}
		cout << ((line < 2) ? "-----\n" : "\n");
	}
}








void ticTacToe(){
    int board[9] = {0,0,0,0,0,0,0,0,0}; //Starts empty board.
	int possibleWinner;
	int move;
	bool isInvalid;
	string moveString;
	srand((int) time(0));
	int corners[4] = {0,2,6,8};
	int sides[4] = {1,3,5,7};

	cout << "1|2|3\n-----\n4|5|6\n-----\n7|8|9\n\n";

	while (true) {
		//Player X decides what move they'll do.
		do {
			cout << "X: ";
			getline(cin, moveString);
			move = moveString[0] - '1';
			if (move > 8 || move < 0 || board[move] != 0) {
				cout << "Invalid input" << endl;
				isInvalid = true;
			} else {
				board[move] = 1;
				isInvalid = false;
				cout << endl;
			}
		} while (isInvalid);

		//Decides whether or not the game continues.
		if (gameOver(board) > 0) {
			outputBoard(board);
			break;
		}

		//Player O decides which move they'll do.
		bool good = false;
		for (int x = 2; x > 0; x--){
			possibleWinner = willWin(board, x);
			if (possibleWinner != -1) {
				board[possibleWinner] = 2;
				good = true;
				break;
			}
		}
		if (good);
		else if (board[4] == 0) board[4] = 2; //Middle.
		else if (exceptionalCase(board) > -1) board[exceptionalCase(board)] = 2; //Exception boards.
		else if (getSpace(board, corners) != -1) board[getSpace(board, corners)] = 2; //Corners
		else board[getSpace(board, sides)] = 2; //Sides

		//Prints the board to the screen.
		outputBoard(board);

		//Decides whether or not the game continues.
		if(gameOver(board)) break;

	}
}




class Player {      //stores player/enemy points
private:
    int score;
public:
    int getScore() {
        return score;
    }

    void incrementScore() {
        score++;
    }
    //constructor
    Player(int points);
};

//constructor
Player::Player(int points)
    : score {points} {
}

int convertToInt(string pChoice) {      //converts player input into integers
    if (pChoice == "Rock" || pChoice == "rock") {
        return 0;
    }
    else if (pChoice == "Paper" || pChoice == "paper") {
        return 1;
    }
    else if (pChoice == "Scissor" || pChoice == "scissor") {
        return 2;
    }

    return 0;
}

bool inputValidation(const vector <string> choices, string pChoice) {      //validates player input
    bool boolean {};
    for (const string choice : choices) {     //checks vector that contains a list of all possible options
        if (choice == pChoice) {
            boolean = true;
            break;
        }
        else {
            boolean = false;
        }
    }
    return boolean;
}

void printEnemyChoice(unsigned int &enemyRand, string &enemyChoice) {   //prints enemy choice
//remember that 0, 1 and 2 correspond to rock, paper and scissor respectively
    switch (enemyRand) {
        case 0: {
            enemyChoice = "Rock";
            cout << "Enemy picked: " << enemyChoice << endl;
            break;
        }
        case 1: {
            enemyChoice = "Paper";
            cout << "Enemy picked: " << enemyChoice << endl;
            break;
        }
        case 2: {
            enemyChoice = "Scissors";
            cout << "Enemy picked: " << enemyChoice << endl;
            break;
        }
    }
}

void checkResult(Player &playerScore, Player &enemyScore, unsigned int &playerIChoice, unsigned int &enemyRand) {   //determines the winner
/* a 2D array is used to compared playerIChoice (the player's choice) and the enemy's choice (randomly generated)
 * 0 represents draw
 * 1 represents player's win
 * 2 represents enemy's win
 * remember that 0, 1, 2 is also Rock, Paper and Scissor respectively.. bit confusing. Hope theres a better way to name this properly.
 * for eg. if playerIChoice = 2 (Scissors) and enemyRand = 1 (Paper), this points to "1" on the 2D array (3rd row, column 2)
 * since it points to a "1", therefore the player wins (Scissors beats Paper).
 * 1 is assigned to result, which is used in a switch statement to print out the winner on case 1 and increments the playerScore.score attribute.
 */

    int resultArray[3][3] {
        {0, 2, 1},
        {1, 0, 2},
        {2, 1, 0}
    };

    int result = resultArray[playerIChoice][enemyRand];
    switch (result) {
        case 0: {
            cout << "Result is: Draw" << endl;
            break;
        }
        case 1: {
            cout << "Result is: You win!" << endl;
            playerScore.incrementScore();
            break;
        }
        case 2: {
            cout << "Result is: You lose!" << endl;
            enemyScore.incrementScore();
            break;
        }
    }
}






//single player rps
void rockPaperScissors(){
    Player playerScore {0};
    Player enemyScore {0};
    bool gameLoop {true};
    const vector <string> choices {"Rock", "rock", "Paper", "paper", "Scissor", "scissor", "Q", "q"};
    string playerChoice {};
    string enemyChoice {};
    unsigned int playerIChoice {};
    unsigned int enemyRand {};

    cout << "======================================" << endl;
    cout << "Rock, Paper, Scissor! - CLI w/ Objects" << endl;
    cout << "======================================" << endl;

    while (gameLoop) {
        cout << "\nChoose rock, paper, or scissor: " << endl;
        cout << "Press Q to quit the game." << endl;
        cin >> playerChoice;

        if (playerChoice == "Q" || playerChoice == "q") {
            cout << "Thanks for playing." << endl;
            gameLoop = false;
            break;
        }

        if (inputValidation(choices, playerChoice) == false) {      //passes vector with valid input and player's input to compare
            cout << "Invalid input, try again!" << endl;
            continue;
        }

        cout << "You picked: " << playerChoice << endl;
        playerIChoice = convertToInt(playerChoice);         //converts valid input into integers to compare with enemy's choice

        srand (time(NULL));
        enemyRand = rand() % 3;     //generates random number from 0-2

        printEnemyChoice(enemyRand, enemyChoice);
        checkResult(playerScore, enemyScore, playerIChoice, enemyRand);

        cout << "\nYour score is: " << playerScore.getScore() << endl;
        cout << "Enemy score is: " << enemyScore.getScore() << endl;

        if(playerScore.getScore() == 3 || enemyScore.getScore() == 3 ){
            cout<<"Match ends"<<endl;
            break;
        }


    }
    if(playerScore.getScore() == 3){
            cout<<"You Win ..!"<<endl;
            totalScore1 = totalScore1+100;
            cout<<"Total Earnes Through this game is: "<<totalScore1<<endl;
        }
        else{
            cout<<"You Lose"<<endl;
           // cout<<"Total Earnes Through this game is: "<<totalScore1<<endl;
        }




}





//guessnumber game
void guessNumber(){
    const int MAX_GUESSES = 7;
    const int MAX_NUMBER = 100;
    int secretNumber = rand() % MAX_NUMBER + 1;

    int guess;
    int numGuesses = 0;
    bool win = false;

    cout << "Guess a number between 1 and " << MAX_NUMBER << "." << endl;

    do {
        cout << "Guess #" << numGuesses + 1 << ": ";
        cin >> guess;

        if (guess == secretNumber) {
            win = true;
            cout << "You win!" << endl;
            totalScore1 = totalScore1+100;
            cout<<"Total Earnes Through this game is: "<<totalScore1<<endl;
        } else if (guess < secretNumber) {
            cout << "Too low. Guess again." << endl;
        } else {
            cout << "Too high. Guess again." << endl;
        }
        numGuesses++;
    } while (numGuesses < MAX_GUESSES && !win);

    if (!win) {
        cout << "You lose. The secret number was " << secretNumber << "." <<endl;
    }
}





char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row,column;
char turn = 'X';
bool draw = false;



void display_board(){



    cout<<"PLAYER - 1 [X]\t PLAYER - 2 [O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"\t\t__|_|__\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t__|_|__\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}



void player_turn(){
    if(turn == 'X'){
        cout<<"\n\tPlayer - 1 [X] turn : ";
    }
    else if(turn == 'O'){
        cout<<"\n\tPlayer - 2 [O] turn : ";
    }


    cin>> choice;



    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O'){

        board[row][column] = 'X';
        turn = 'O';
    }else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){

        board[row][column] = 'O';
        turn = 'X';
    }else {

        cout<<"Box already filled!n Please choose another!!\n\n";
        player_turn();
    }

    display_board();
}



bool gameover(){
    //checking the win for Simple Rows and Simple Column
    for(int i=0; i<3; i++)
    if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    return false;

    //checking the win for both diagonal

    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
    return false;

    //Checking the game is in continue mode or not
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    if(board[i][j] != 'X' && board[i][j] != 'O')
    return true;


    draw = true;
    return false;
}




void ticTacToeMulti(){
        cout<<"\t\t\tT I C K -- T A C -- T O E -- G A M E\t\t\t";
        cout<<"\n\t\t\t\tFOR 2 PLAYERS\n\t\t\t";
        while(gameover()){
            display_board();
            player_turn();
            gameover();
        }
        if(turn == 'X' && draw == false){
            cout<<"\n\nCongratulations!Player with 'X' has won the game";
        }
        else if(turn == 'O' && draw == false){
            cout<<"\n\nCongratulations!Player with 'O' has won the game";
        }
        else
            cout<<"\n\nGAME DRAW!!!\n\n";
}

int main()
{

    int playerMode;
    string playerName1,playerName2;
    cout<<"\t\t\t\t===================="<<endl;
    cout<<"\t\t\t\tWelcome to GameStore"<<endl;
    cout<<"\t\t\t\t===================="<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\tEnter Mode of Game"<<endl;
    cout<<endl;
    cout<<"\t\t\t\tEnter 1 for Single Player Mode"<<endl;
    cout<<"\t\t\t\tEnter 2 for Multi Player Mode"<<endl;
    cout<<endl;
    cin>>playerMode;

    if(playerMode==1){
        cout<<"Welcome to Single Player Mode"<<endl;
        cout<<endl;
        cout<<"Enter Player Name"<<endl;
        cin>>playerName1;

        cout<<endl;
        cout<<"Hello  "<<playerName1<<"  Welcome "<<endl;

        double sum = 0;
        double add = 1;

     // Start measuring time
        clock_t start = clock();

        while(1){


            clock_t end = clock();
            double elapsed = double(end - start)/CLOCKS_PER_SEC;
            if(elapsed >= 500){
                cout<<"Time's UP .. !"<<endl;
                exit(0);
            }

            cout << "1. Guess Number" << endl;
            cout << "2. Tic Tac Toe" << endl;
            cout << "3. Rock Paper Scissors" << endl;
            cout << "4. Hand Cricket" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter your choice: ";





            cin >> choice;
            switch (choice) {
                case 1:
                guessNumber();
                break;
                case 2:
                ticTacToe();
                break;
                case 3:
                rockPaperScissors();
                break;
                case 4:
                handCricket();
                break;
                case 5:
                exit(0);
                break;
                default:
                cout << "Invalid choice. Try again." << endl;
            }

            cout << endl;



            /*clock_t end = clock();
            double elapsed = double(end - start)/CLOCKS_PER_SEC;
            if(elapsed == 5){
                cout<<"Time's UP .. !"<<endl;
                exit(0);
            }*/


        }
    }
    else if(playerMode==2){
        cout<<"Welcome to Multi Player Mode"<<endl;
        cout<<endl;
        cout<<"Enter Player1 Name"<<endl;
        cin>>playerName1;


        cout<<"Enter Player2 Name"<<endl;
        cin>>playerName2;

        cout<<"Hello  "<<playerName1<<"  and  "<<playerName2<<"  Welcome"<<endl;



     // Start measuring time
        clock_t start = clock();

        while(1){

            clock_t end = clock();
                double elapsed = double(end - start)/CLOCKS_PER_SEC;
                cout<<elapsed<<endl;
                if(elapsed >= 500){
                    cout<<"Time's UP .. !"<<endl;
                    exit(0);
                }

            cout << "1. Guess Number" << endl;
            cout << "2. Tic Tac Toe" << endl;
            cout << "3. Rock Paper Scissors" << endl;
            cout << "4. Hand Cricket" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter your choice: ";





            cin >> choice;




            switch (choice) {

                case 1:
                guessNumber();
                break;
                case 2:
                ticTacToeMulti();
                break;
                case 3:
                rpsMulti();
                break;
                case 4:
                hcMulti();
                break;
                case 5:
                exit(0);
                break;
                default:
                cout << "Invalid choice. Try again." << endl;
            }

            cout << endl;







        }
    }


    else{
        cout<<"Invalid Input"<<endl;
        exit(0);
    }
}
