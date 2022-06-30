#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

void rules1()
{
	system("cls");
	cout << "\t\t======CASINO RANDOM GUESS NUMBER RULES!======\n";
	cout << "\t1. Choose a number between 1 to 10\n";
	cout << "\t2. Winner gets 3 times of the money bet\n";
	cout << "\t3. Wrong bet, and you lose the amount you bet\n";
	cout << "********************************************************************" << endl;
}

void rules2()
{
	system("cls");
	cout << "\t\t======CASINO MACHINE SLOT GAME RULES!======\n";
	cout << "\t1. Wrong bet, and you lose the amount you bet\n";
	cout << "\t2. If The All Numbers are Same You Get 10* on bet \n";
	cout << "\t3. If The Two Numbers are Same You Get Your bet Double\n";
	cout << "********************************************************************" << endl;
}

void rules3()
{
	system("cls");
	cout << "\t\t======CASINO ROULETTE GAME RULES!======\n";
	cout << "\t1. Wrong bet, and you lose the amount you bet\n";
	cout << "\t2. On Single Bet You Won *36 \n";
	cout << "\t3. On Double Bet You Won *18 \n";
	cout << "\t4. On Three Numbers You Won *12 \n";
	cout << "\t5. On Four Numbers You Won *9 \n";
	cout << "\t6. On Six Numbers You Won *6 \n";
	cout << "\t7. ON Even And Odd You Won *2 \n";
	cout << "\t8. On High and Low Deck You Won *2 \n";
	cout << "********************************************************************" << endl;
}

void rule() {
	cout << "\t1. For Bet on Single Number Press 1 \n";
	cout << "\t2. For Bet on Two Numbers Press 2 \n";
	cout << "\t3. For Bet on Three Numbers Press 3 \n";
	cout << "\t4. For Bet on Four Numbers  Press 4 \n";
	cout << "\t5. For Bet on Six Numbers Press 6 \n";
	cout << "\t6. For Bet on Even and Odd Numbers Press 5 \n";
	cout << "\t7. For Bet on Lower Deck(1 - 18) Numbers Press 7 \n";
	cout << "\t8. For Bet on Higher Deck(19 - 36) Numbers Press 8 \n";
	cout << "********************************************************************" << endl;
}

void choose()
{
	cout << "\n *******************************************************************";
	cout << "\n Do You Want to Play Again:\n";
	cout << "\n *******************************************************************";
	cout << "\nFor Play Press y or 1";
	cout << "\nFor Play Another Game Press any Key" << endl;
}



int main()
{
	string PlayerName;
	int bal;
	char choice;
	char another;

	cout << "\n\t\t=========WELCOME TO CASINO WORLD==============\n\n";


	cout << "\n\nWhat's your Name : ";
	getline(cin, PlayerName);
	cout << PlayerName << " How Much Money You Can Spend in CASINO : $";
	cin >> bal;
	do {
		cout << "\n which game you want to play:" << endl;
		cout << "\n\t1 Random Guess Number" << endl;
		cout << "\n\t2 Machine Slot" << endl;
		cout << "\n\t3 Roulette" << endl;
		cout << "*******************************************************" << endl;
		int game, bet, guess;
		cout << "Select the Game Number: ";



		// **********************Game no. 1------Random Guess Number********************


		do {
			cin >> game;
			if (game > 3)
			{
				cout << " \n Please Select a Number Between (1-3) ";
			}
			else
			{
				if (game == 1)
				{
					srand(time(0));
					do
					{
						system("cls");
						rules1();
						cout << "*****************" << PlayerName << " Your current balance is $ " << bal << "*****************" << endl;
						cout << " \n Bet Your Money: ";
						do
						{
							cin >> bet;
							if (bet > bal)
							{
								cout << "\n you don't have balance: ";
							}
						} while (bet > bal);
						if (bet <= bal && bet >= 1)
						{
							cout << "\n Pridict the number between 1 to 10: ";
						}
						do
						{
							cin >> guess;
							if (guess > 10 || guess <= 0)
							{
								cout << "\n Please Enter the Value Between 1 to 10: ";
							}

						} while (guess > 10 || guess <= 0);
						int num1 = (rand() % 10) + 1;
						cout << "\n Lets Check Your Luck!!!" << endl;
						cout << "\n *******************************************************************" << endl;
						sleep(3);
						if (guess == num1)
						{
							cout << "\n**** You win $" << bet * 10 << " ****";
							bal = bal - bet;
							bal = bal + (bet * 10);
						}
						else
						{
							cout << "\n Better Luck Next Time The Number is: " << num1 << endl;
							cout << "                   " << endl;
							cout << "\n Sorry But You Loss $" << bet << endl;
							bal = bal - bet;

						}if (bal == 0) {
							cout << " Sorry But You Don't Have Money to Play: $0" << endl;
							cout << "   ";
							break;
						}
						cout << "\n *******************************************************************" << endl;
						cout << "\n\n" << PlayerName << ",Now You have $ " << bal << " only \n";

						choose();
						cin >> choice;
					} while (choice == '1' || choice == 'y' || choice == 'Y');
					cout << "\n\n\n";

					cout << "\n Press 1 And i for Game Index: ";
					cin >> another;
					system("cls");
				}

				//*********************Game No. 2----- Machine Slot*************************

				else if (game == 2)
				{
					srand(time(0));
					do
					{
						system("cls");
						rules2();
						cout << "*****************" << PlayerName << " Your current balance is $ " << bal << "*****************" << endl;
						cout << " \n Bet Your Money: ";
						do
						{
							cin >> bet;
							if (bet > bal) {
								cout << "\n betting amount more than balance:";
							}
						} while (bet > bal);
						int num1 = (rand() % 10) + 1;
						int num2 = (rand() % 10) + 1;
						int num3 = (rand() % 10) + 1;
						cout << "\n Lets Check Your Luck!!!" << endl;
						cout << "\n *******************************************************************" << endl;
						sleep(3);
						cout << "    " << num1 << "    " << num2 << "    " << num3 << endl;
						if (num1 == num2 == num3)
						{
							cout << "\n ****you win****" << endl;
							bal = bal - bet;
							bal = bal + (bet * 10);
						}
						else if (num1 == num2 || num2 == num3 || num1 == num3)
						{
							cout << "\n ****you win****" << endl;
							bal = bal - bet;
							bal = bal + (bet * 2);
						}
						else
						{
							cout << "\n you lose" << endl << endl;
							bal = bal - bet;
						}
						if (bal == 0)
						{
							cout << " Sorry But You Don't Have Money to Play: $0" << endl;
							cout << "   ";
							break;
						}
						cout << "********************" << PlayerName << " Now You Have $" << bal << " only******************" << endl;
						choose();
						cin >> choice;
					} while (choice == '1' || choice == 'y' || choice == 'Y');
					if (bal == 0)
					{
						cout << "   ";
						break;
					}
					cout << "\n Press 1 And i for Game Index: ";
					cin >> another;
					system("cls");
				}



				//*********************Game no. 3------ Roulette*********************



				else if (game == 3)
				{
					srand(time(0));
					do
					{
						system("cls");
						rules3();
						cout << "*****************" << PlayerName << " Your current balance is $ " << bal << "*****************" << endl;
						cout << " \n Bet Your Money: ";
						do
						{
							cin >> bet;
							if (bet > bal)
							{
								cout << "\n betting amount more than balance:";
							}
						} while (bet > bal);

						int select;
						rule();
						cout << "\n On Which Deck You Want to Play:  ";
						cin >> select;
						cout << "\n************************************************" << endl;

						// ******************Select 1*******************    

						if (select == 1)
						{
							system("cls");
							cout << "\n ********If You Win You Get *36 On Your Bet********" << endl;
							cout << "\n          " << endl;
							int a;
							cout << "\n Guess Any 1 number between(1-36): ";
							do
							{
								cin >> a;
								if (a > 36 || a < 1) {
									cout << " Please Select Again: ";
								}
								else
								{
									int num1 = (rand() % 36) + 1;
									cout << "\n Lets Check Your Luck!!!" << endl;
									cout << "\n *******************************************************************" << endl;
									sleep(3);
									
									if (a == num1)
									{
										cout << "\n ******You Won******" << endl;
										cout << "\n The Number is: " << num1 << endl;
										bal = bal - bet;
										bal = bal + (bet * 36);
									}
									else
									{
										cout << "\n Better Luck Next Time " << endl;
										cout << "\n The Number is: " << num1 << endl;
										bal = bal - bet;
									}
									if (bal == 0)
									{
										cout << " Sorry But You Don't Have Money to Play: $0" << endl;
										cout << "   ";
										break;
									}
									cout << "********************" << PlayerName << " Now You Have $" << bal << " only******************" << endl;
								}
							} while (a > 36 || a < 1);
						}

						// ******************Select 2******************* 

						else if (select == 2)
						{
							system("cls");
							cout << "\n ********If You Win You Get *18 On Your Bet********" << endl;
							cout << "\n          " << endl;
							int a, b;
							cout << "\n Guess Any number between(1-36): ";
							do
							{
								cin >> a;
								if (a > 36 || a < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
							} while (a > 36 || a < 1);

							cout << "\n Guess Any Second number between(1-36): ";
							do
							{
								cin >> b;
								if (b > 36 || b < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (b == a)
								{
									cout << " please select a different number: ";
								}
							} while (b > 36 || b < 1 || b == a);
							int num1 = (rand() % 36) + 1;
							cout << "\n Lets Check Your Luck!!!" << endl;
							cout << "\n *******************************************************************" << endl;
							sleep(3);
							
							if (a == num1 || b == num1)
							{
								cout << "\n ******You Won******" << endl;
								cout << "\n The Number is: " << num1 << endl;
								bal = bal - bet;
								bal = bal + (bet * 18);
							}
							else
							{
								cout << "\n Better Luck Next Time " << endl;
								cout << "\n The Number is: " << num1 << endl;
								bal = bal - bet;
							}
							if (bal == 0)
							{
								cout << " Sorry But You Don't Have Money to Play: $0" << endl;
								cout << "   ";
								break;
							}
							cout << "********************" << PlayerName << " Now You Have $" << bal << " only******************" << endl;
						}

						// ******************Select 3******************* 

						else if (select == 3)
						{
							system("cls");
							cout << "\n ********If You Win You Get *12 On Your Bet********" << endl;
							cout << "\n          " << endl;
							int a, b, c;
							cout << "\n Guess Any number between(1-36): ";
							do
							{
								cin >> a;
								if (a > 36 || a < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
							} while (a > 36 || a < 1);
							cout << "\n Guess Any Second number between(1-36): ";
							do
							{
								cin >> b;
								if (b > 36 || b < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (b == a)
								{
									cout << " please select a different number: ";
								}
							} while (b > 36 || b < 1 || b == a);
							cout << "\n Guess Any Third number between(1-36): ";
							do
							{
								cin >> c;
								if (c > 36 || c < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (c == a || c == b)
								{
									cout << " please select a different number: ";
								}
							} while (c > 36 || c < 1 || c == a || c == b);
							int num1 = (rand() % 36) + 1;
							cout << "\n Lets Check Your Luck!!!" << endl;
							cout << "\n *******************************************************************" << endl;
							sleep(3);
							
							if (a == num1 || b == num1 || c == num1)
							{
								cout << "\n ******You Won******" << endl;
								cout << "\n The Number is: " << num1 << endl;
								bal = bal - bet;
								bal = bal + (bet * 12);
							}
							else
							{
								cout << "\n Better Luck Next Time " << endl;
								cout << "\n The Number is: " << num1 << endl;
								bal = bal - bet;
							}
							if (bal == 0)
							{
								cout << " Sorry But You Don't Have Money to Play: $0" << endl;
								cout << "   ";
								break;
							}
							cout << "********************" << PlayerName << " Now You Have $" << bal << " only******************" << endl;
						}

						// ******************Select 4*******************

						else if (select == 4)
						{
							system("cls");
							cout << "\n ********If You Win You Get *9 On Your Bet********" << endl;
							cout << "\n          " << endl;
							int a, b, c, d;
							cout << "\n Guess Any number between(1-36): ";
							do
							{
								cin >> a;
								if (a > 36 || a < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
							} while (a > 36 || a < 1);
							cout << "\n Guess Any Second number between(1-36): ";
							do
							{
								cin >> b;
								if (b > 36 || b < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (b == a)
								{
									cout << " please select a different number: ";
								}
							} while (b > 36 || b < 1 || b == a);
							cout << "\n Guess Any Third number between(1-36): ";
							do
							{
								cin >> c;
								if (c > 36 || c < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (c == a || c == b)
								{
									cout << " please select a different number: ";
								}
							} while (c > 36 || c < 1 || c == a || c == b);
							cout << "\n Guess Any Fourth Number Between(1-36): ";
							do
							{
								cin >> d;
								if (d > 36 || d < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (d == a || d == b || d == c)
								{
									cout << " please select a different number: ";
								}
							} while (d > 36 || d < 1 || d == a || d == b || d == c);

							int num1 = (rand() % 36) + 1;
							cout << "\n Lets Check Your Luck!!!" << endl;
							cout << "\n *******************************************************************" << endl;
							sleep(3);
							
							if (a == num1 || b == num1 || c == num1 || d == num1)
							{
								cout << "\n ******You Won******" << endl;
								cout << "\n The Number is: " << num1 << endl;
								bal = bal - bet;
								bal = bal + (bet * 9);
							}
							else
							{
								cout << "\n Better Luck Next Time " << endl;
								cout << "\n The Number is: " << num1 << endl;
								bal = bal - bet;
							}
							if (bal == 0)
							{
								cout << " Sorry But You Don't Have Money to Play: $0" << endl;
								cout << "   ";
								break;
							}
							cout << "********************" << PlayerName << " Now You Have $" << bal << " only******************" << endl;
						}

						// ******************Select 5*******************

						else if (select == 5)
						{
							system("cls");
							cout << "\n ********If You Win You Get *2 On Your Bet********" << endl;
							cout << "\n          " << endl;
							int a;
							cout << "Select Any One Number Between(1-36): ";
							do
							{
								cin >> a;
								if (a > 36 || a < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
							} while (a > 36 || a < 1);

							int num1 = (rand() % 36) + 1;
							cout << "\n Lets Check Your Luck!!!" << endl;
							cout << "\n *******************************************************************" << endl;
							sleep(3);
							
							if ( a % 2 == 0)
							{
								if (num1 % 2 == 0)
								{
									cout << "You Win The Number is Even: " << num1 << endl;
									bal = bal - bet;
									bal = bal + (bet * 2);
								}
								else
								{
									cout << "You Loss The Number is Odd: " << num1 << endl;
									bal = bal - bet;
								}
							}
							else if ( a % 2 != 0)
							{
								if (num1 % 2 != 0)
								{
									cout << "You Win The Number is Odd: " << num1 << endl;
									bal = bal - bet;
									bal = bal + (bet * 2);
								}
								else
								{
									cout << "You Loss The Number is Even: " << num1 << endl;
									bal = bal - bet;
								}
							}
							if (bal == 0)
							{
								cout << " Sorry But You Don't Have Money to Play: $0" << endl;
								cout << "   ";
								break;
							}
							cout << "********************" << PlayerName << " Now You Have $" << bal << " only******************" << endl;
						}

						// ******************Select 6******************* 

						else if (select == 6)
						{
							system("cls");
							cout << "\n ********If You Win You Get *6 On Your Bet********" << endl;
							cout << "\n          " << endl;
							int a, b, c, d, e, f;

							cout << "\n Guess Any number between(1-36): ";
							do
							{
								cin >> a;
								if (a > 36 || a < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
							} while (a > 36 || a < 1);


							cout << "\n Guess Any Second number between(1-36): ";
							do
							{
								cin >> b;
								if (b > 36 || b < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (b == a)
								{
									cout << " please select a different number: ";
								}
							} while (b > 36 || b < 1 || b == a);


							cout << "\n Guess Any Third number between(1-36): ";
							do
							{
								cin >> c;
								if (c > 36 || c < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (c == a || c == b)
								{
									cout << " please select a different number: ";
								}
							} while (c > 36 || c < 1 || c == a || c == b);


							cout << "\n Guess Any Fourth Number Between(1-36): ";
							do
							{
								cin >> d;
								if (d > 36 || d < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (d == a || d == b || d == c)
								{
									cout << " please select a different number: ";
								}
							} while (d > 36 || d < 1 || d == a || d == b || d == c);


							cout << "\n Guess Any 5th number between(1-36): ";
							do
							{
								cin >> e;
								if (e > 36 || e < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (e == a || e == b || e == c || e == d)
								{
									cout << " please select a different number: ";
								}
							} while (e > 36 || e < 1 || e == a || e == b || e == c || e == d);


							cout << "\n Guess Any 6th number between(1-36): ";
							do
							{
								cin >> f;
								if (f > 36 || f < 1)
								{
									cout << "Please Select Number Between (1-36): ";
								}
								else if (f == a || f == b || f == c || f == d || f == e)
								{
									cout << " please select a different number: ";
								}
							} while (f > 36 || f < 1 || f == a || f == b || f == c || f == d || f == e);
							int num1 = (rand() % 36) + 1;
							cout << "\n Lets Check Your Luck!!!" << endl;
							cout << "\n *******************************************************************" << endl;
							sleep(3);
							
							if (a == num1 || b == num1 || c == num1 || d == num1 || e == num1 || f == num1)
							{
								cout << "\n ******You Won******" << endl;
								cout << "\n The Number is: " << num1 << endl;
								bal = bal - bet;
								bal = bal + (bet * 6);
							}
							else
							{
								cout << "\n Better Luck Next Time " << endl;
								cout << "\n The Number is: " << num1 << endl;
								bal = bal - bet;
							}
							if (bal == 0)
							{
								cout << " Sorry But You Don't Have Money to Play: $0" << endl;
								cout << "   ";
								break;
							}
							cout << "********************" << PlayerName << " Now You Have $" << bal << " only******************" << endl;
						}

						// ******************Select 7*******************

						else if (select == 7)
						{
							system("cls");
							cout << "\n ********If You Win You Get *2 On Your Bet********" << endl;
							cout << "\n          " << endl;
							int a;
							cout << "Select Any One Number Between(1-18): ";
							do
							{
								cin >> a;
								if (a > 18 || a < 1)
								{
									cout << " Please Select Number Between(1-18): ";
								}
							} while (a > 18 || a < 1);

							int num1 = (rand() % 18) + 1;
							cout << "\n Lets Check Your Luck!!!" << endl;
							cout << "\n *******************************************************************" << endl;
							sleep(3);
							
							if (a == num1)
							{
								cout << "You Win The Number is: " << num1 << endl;
								bal = bal - bet;
								bal = bal + (bet * 2);
							}
							else
							{
								cout << "You Loss The Number is: " << num1 << endl;
								bal = bal - bet;
							}
							if (bal == 0)
							{
								cout << " Sorry But You Don't Have Money to Play: $0" << endl;
								cout << "   ";
								break;
							}
							cout << "********************" << PlayerName << " Now You Have $" << bal << " only******************" << endl;
						}

						// ******************Select 8*******************

						else if (select == 8)
						{
							system("cls");
							cout << "\n ********If You Win You Get *2 On Your Bet********" << endl;
							cout << "\n          " << endl;
							int a;
							cout << "Select Any One Number Between(19-36): ";
							do
							{
								cin >> a;
								if (a > 36 || a < 19)
								{
									cout << " Please Select Number Between(19-36): ";
								}
							} while (a > 36 || a < 19);

							int num1 = (rand() % 18) + 19;
							cout << "\n Lets Check Your Luck!!!" << endl;
							cout << "\n *******************************************************************" << endl;
							sleep(3);
							
							if (a == num1)
							{
								cout << "You Win The Number is: " << num1 << endl;
								bal = bal - bet;
								bal = bal + (bet * 2);
							}
							else
							{
								cout << "You Loss The Number is: " << num1 << endl;
								bal = bal - bet;
							}
							if (bal == 0)
							{
								cout << " Sorry But You Don't Have Money to Play: $0" << endl;
								cout << "   ";
								break;
							}
							cout << "********************" << PlayerName << " Now You Have $" << bal << " only******************" << endl;
						}
						if (bal == 0)
						{
							cout << "   ";
							break;
						}
						choose();
						cin >> choice;
					} while (choice == '1' || choice == 'y' || choice == 'Y');
					if (bal == 0)
					{
						cout << "   ";
						break;
					}
					cout << "\n Press 1 And i for Game Index: ";
					cout << "\n Press Any Key to Exit";
					cin >> another;
				}
			}
		} while (game > 3);
	} while (another == '1' || another == 'i' || another == 'I');
	cout << "\n\n\n";
	return 0;
}
