// Text_Adventure_Game_Ilya.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <sstream>
#include <iomanip>
#include <stdlib.h>     
#include <time.h> 
#include <random>
#include <iterator>

using namespace std;



struct hero
{
	int hp;
	int level;
	int lokacia;
	int money;
	int stamina;


}kristal;
struct problematic
{
	int time;
}world;
struct things_for_the_shift
{
	bool make_up = 0;
	bool attendence = 0;
	bool appereance = 0;
	bool clothes = 0;
	string studio;
}before_shift;

class Question {
public:

	string question;
	string firstans;
	string secondans;
	string thirdans;
	string fourthans;
	int id;
	int correctans;

public:
	void setValues(string ques, string an1, string an2, string an3, string an4, int idd, int correct) {
		question = ques;
		firstans = an1;
		secondans = an2;
		thirdans = an3;
		fourthans = an4;
		id = idd;
		correctans = correct;
	}
	void askQuestion(int answer, int score) {
		cout << question << " " << firstans << " " << secondans << " " << thirdans << " " << fourthans;
		cout << "What is your answer?" << endl;
		cin >> answer;
		if (answer == correctans)
		{
			cout << "You're correct" << endl;
			score += 1;
		}
		else
		{
			cout << "Wrong!" << endl;
		}
	}

};

static void shuffle_array(int arr[], int n)
{

	// To obtain a time-based seed
	unsigned seed = 0;

	// Shuffling our array using random_shuffle
	random_shuffle(arr, arr + n);
}
void time(int arr[2], int ddz, int fum) {

	if (ddz > 60) {
		fum = ddz / 60;
		ddz %= 60;
		arr[0] += fum;
	}
	arr[1] += ddz;
	if (arr[1] >= 60) {
		arr[0] += 1;
		arr[1] -= 60;
	}
	if (arr[0] >= 24) {
		arr[0] -= 24;
	}


	if (0 <= arr[0] && arr[0] < 10)
	{
		cout << "0" << arr[0];
	}
	else cout << arr[0];
	cout << ":";
	if (0 <= arr[1] && arr[1] < 10)
	{
		cout << "0" << arr[1];
	}
	else cout << arr[1];
	cout << endl;

}
void questions(int arr[]) {

	int answer = 0;
	int score = 0;
	int sizeArr = 20;
	Question obj1;
	obj1.setValues("Who is CEO of the company", "Aziz Mehmedov", "Nicolay Neshev", "Bogdan ", "Boiko Borisov", 1, 3);
	Question obj2;
	obj2.setValues("Who is the oldest dealer in the company", "Nina Asparuhova", "Deyan Petrov", "Gabriel", " Martin ", 2, 4);
	Question obj3;
	obj3.setValues("Who is the smelty person wich everybody hates", "Kristiyan Lazarov", "Ktistal boy", "Martin Ivanov", "Damyan", 3, 4);
	Question obj4;
	obj4.setValues("What id has a crazy lady which were in navy", "1610", "1493", "1515", "007", 4, 1);
	Question obj5;
	obj5.setValues("Who has a record for overtime in pragmatic", "Ilya Grygorov", "Kivito", "Edward", "Toni Borisov", 5, 3);
	Question obj6;
	obj6.setValues("Who is always smoking weed", "Nickolay Stefchev", "Gabriel", "Victoria Necheva", "Kaloyan (tm)", 6, 2);
	Question obj7;
	obj7.setValues("Which tm is good with boys but hate girls", "Nikolay Neshev", "Naiden", "Denica", "Rado", 7, 3);
	Question obj8;
	obj8.setValues("Which tm is good with girls but hate boys", "Hristina", "Nikolay ", "Dominos", "Rado", 8, 2);
	Question obj9;
	obj9.setValues("Which tm left problematic for 3 month and returned", "Vasko", "Dominos", "Hristina", "Kaloyan", 9, 1);
	Question obj10;
	obj10.setValues("Which tm were fired for sexual harrasment", "Todor", "Emil", "Vasil", "The greek tm", 10, 2);
	Question obj11;
	obj11.setValues("Which report doesn't affect the bonus ", "Posture", "Biting lips", "Placement", "smiling", 11, 3);
	Question obj12;
	obj12.setValues("Who is the bigest hoe in problematic", "Tsvetina", "Pepi (make up)", "Servanova", "Evelina (make up)", 12, 4);
	Question obj13;
	obj13.setValues("Who is texting to every girl but always rejected", "Ilko", "Kulinski", "Deyan", "Kaloyan (tm)", 13, 1);
	Question obj14;
	obj14.setValues("Who is the only one who gonna come for OT at 4 a.m.", "Ilya Grigorov", "Stefan blagoev", "Toni Borisov", "Kristal", 14, 3);
	Question obj15;
	obj15.setValues("Which Studio Manager is tm of Workforce", "Nadejda", "Aziz", "Stefan", "Cacho", 15, 1);
	Question obj16;
	obj16.setValues("Who from the trainers has a boyfriend/girlfriend form trainers", "Dani", "Lubcho", "Plamena", "Maria", 16, 3);;
	Question obj17;
	obj17.setValues("Who is the crazyest person", "Antonina", "Yougio", "Ilko", "You", 17, 4);
	Question obj18;
	obj18.setValues("When starts mid night shift", "19", "20", "00", "3", 18, 1);
	Question obj19;
	obj19.setValues("Who has an only fans account", "Tenev", "Simona", "Tsvetina", "Martin Ivanov", 19, 1);
	Question obj20;
	obj20.setValues("Bonus corect answer is 3", "0", "0", "0", "0", 20, 3);
	cout << " You entered the quiz game with answers a , b , c , d wich will affect to you evaluation" << endl;
	cout << "Max score is 10 and lowest 0 , depends on the amount of the correct answers" << endl;
	int masiv[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	shuffle_array(masiv, sizeArr);
	for (int i = 0; i < 10; i++) {
		if (masiv[i] == obj1.id) {
			obj1.askQuestion(answer, score);
		}
		else if (masiv[i] == obj2.id) {
			obj2.askQuestion(answer, score);
		}
		else if (masiv[i] == obj3.id) {
			obj3.askQuestion(answer, score);
		}
		else if (masiv[i] == obj4.id) {
			obj4.askQuestion(answer, score);
		}
		else if (masiv[i] == obj5.id) {
			obj5.askQuestion(answer, score);
		}
		else if (masiv[i] == obj6.id) {
			obj6.askQuestion(answer, score);
		}
		else if (masiv[i] == obj7.id) {
			obj7.askQuestion(answer, score);
		}
		else if (masiv[i] == obj8.id) {
			obj8.askQuestion(answer, score);
		}
		else if (masiv[i] == obj9.id) {
			obj9.askQuestion(answer, score);
		}
		else if (masiv[i] == obj10.id) {
			obj10.askQuestion(answer, score);
		}
		else if (masiv[i] == obj11.id) {
			obj11.askQuestion(answer, score);
		}
		else if (masiv[i] == obj12.id) {
			obj12.askQuestion(answer, score);
		}
		else if (masiv[i] == obj13.id) {
			obj13.askQuestion(answer, score);
		}
		else if (masiv[i] == obj14.id) {
			obj14.askQuestion(answer, score);
		}
		else if (masiv[i] == obj15.id) {
			obj15.askQuestion(answer, score);
		}
		else if (masiv[i] == obj16.id) {
			obj16.askQuestion(answer, score);
		}
		else if (masiv[i] == obj17.id) {
			obj17.askQuestion(answer, score);
		}
		else if (masiv[i] == obj18.id) {
			obj18.askQuestion(answer, score);
		}
		else if (masiv[i] == obj19.id) {
			obj19.askQuestion(answer, score);
		}
		else if (masiv[i] == obj20.id) {
			obj20.askQuestion(answer, score);
		}

	}

	cout << " Your score is" << " " << score;
	kristal.money = score * 5;
	kristal.stamina -= 20;
	cout << "Now you have a break 30 min enjoy it" << endl;
	cout << "Time is" << endl;
	time(arr, 30, 0);


}





void randstudio(int studio, string isstudio) {

	studio = rand() % 10;
	if (studio == 1) {
		isstudio = "1.7";
		before_shift.studio = "1.7";
	}
	else if (studio == 2) {
		isstudio = "1.6";
		before_shift.studio = "1.6";
	}
	else if (studio == 3) {
		isstudio = "0.5";
		before_shift.studio = "0.5";
	}
	else if (studio == 4) {
		isstudio = "2.1";
		before_shift.studio = "2.1";
	}
	else if (studio == 5) {
		isstudio = "2.2";
		before_shift.studio = "2.2";
	}
	else if (studio == 6) {
		isstudio = "2.3";
		before_shift.studio = "2.3";
	}
	else if (studio == 7) {
		isstudio = "2.4";
		before_shift.studio = "2.4";
	}
	else if (studio == 8) {
		isstudio = "2.5";
		before_shift.studio = "2.5";
	}
	else if (studio == 9) {
		isstudio = "2.6";
		before_shift.studio = "2.6";
	}
	else if (studio == 10) {
		isstudio = "2.7";
		before_shift.studio = "2.7";
	}
	cout << " Today you are in studio" << isstudio << endl;
}
void dealing() {
	cout << " You sat on the table " << endl;
	// quiz gane chat game rando events

}
void eightfloor(int arr[], string movement) {
	while (kristal.lokacia == 8)
	{
		cout << " You are in the restourant " << endl;
		cout << " Here you can recover your stamina by eating food" << endl;
		cout << " You have a choise what to eat" << endl;
		cout << " First menu is bob chorba with price 6 lv and will recover 40 stamina " << endl;
		cout << "Second menu is shkembe chorba with price 5 lv and will recover 30 stamina" << endl;
		cout << " Third menu is rebra with price 10 lv and will recover 60 stamina " << endl;
		cout << "Fourth menu is sushi rolls with price 15 lv and will recover full stamina " << endl;
		cout << "So choose what to it 1,2,3 or 4 " << endl;
		getline(cin, movement);
		if (movement == "1") {
			if (kristal.money < 6) {
				cout << "You don't have enought money " << endl;
				break;
			}
			cout << "You will eat bob chorba " << endl;
			movement.erase();
			kristal.stamina += 40;
			kristal.money -= 6;
			time(arr, 10, 0);
		}
		else if (movement == "2") {
			if (kristal.money < 5) {
				cout << "You don't have enought money " << endl;
				break;
			}
			cout << "You will eat shkembe chorba " << endl;
			movement.erase();
			kristal.stamina += 30;
			kristal.money -= 5;
			time(arr, 10, 0);
		}
		else if (movement == "3") {
			if (kristal.money < 10) {
				cout << "You don't have enought money " << endl;
				break;
			}
			cout << "You will eat rebra " << endl;
			movement.erase();
			kristal.stamina += 60;
			kristal.money -= 10;
			time(arr, 10, 0);
		}
		else if (movement == "4") {
			if (kristal.money < 15) {
				cout << "You don't have enought money " << endl;
				break;
			}
			cout << "You will eat sushi rolls " << endl;
			movement.erase();
			kristal.stamina += 100;
			kristal.money -= 15;
			time(arr, 10, 0);
		}

	}
}
void minusfloor(int arr[], string movement) {
	while (kristal.lokacia == -1) {
		cout << "You entered hidden floor - 1 " << endl;
		cout << "Here is the spot were you can find cleaning lady dealer " << endl;
		cout << "Cleaning lady can sell you a part of glass and the price for that is 50 lv" << endl;
		cout << "Do you want to buy" << endl;
		getline(cin, movement);
		if (movement == "yes") {
			if (kristal.money < 50) {
				cout << "You don't have enought money" << endl;
				break;
			}
			kristal.level += 1;
			kristal.money -= 50;
			movement.erase();
			kristal.stamina += 30;
			time(arr, 5, 0);

		}
		else
			break;


	}
}
void zerofloor(int arr[], string movement, int studio, string isstudio) {
	while (kristal.lokacia == 0) {

		cout << "We are on the zero floor here are studious where you are dealing" << endl;
		cout << " If you go left you are going to the studios " << endl;
		cout << "If you are going forward you are leaving the building of Problematic" << endl;
		getline(cin, movement);
		if (movement == "forward") {
			cout << "You are leaving the building " << endl;
			movement.erase();
			exit(0);
		}
		if (movement == "left") {
			cout << "You are infront of the escalator , if you go right you are going to the studios starts with 0." << endl;
			cout << " If you move forward you are going to the rest of the studios" << endl;
			getline(cin, movement);
			if (movement == "forward") {
				cout << "You are on the 1st floor where studios starts with 1." << endl;
				movement.erase();
				cout << "If you go right you are infront of studio 1.7" << endl;
				cout << "If you go forward you will infront of the Turkish studio 1.6" << endl;
				cout << "If you go left you will go up to the second floor where studios starts with 2." << endl;
				getline(cin, movement);
				if (movement == "right") {
					cout << "You are infront of the studio 1.7" << endl;
					movement.erase();
					if (before_shift.studio == "1.7") {
						cout << " Corect you are infront of the correct studio" << endl;
					}
					else
					{
						cout << " Wrong studio bro try batter" << endl;
					}

				}
				else if (movement == "forward") {
					cout << "You are infront of the studio 1.6" << endl;
					movement.erase();
					if (before_shift.studio == "1.6") {
						cout << " Corect you are infront of the correct studio" << endl;
						questions(arr);
					}
					else
					{
						cout << " Wrong studio bro try batter" << endl;
					}

				}
				else if (movement == "left") {
					cout << " You are on the second floor where are studios 2.1 ,2.2 ,2.4 , 2.5 , 2.3 , 2.6 , 2.7" << endl;
					movement.erase();
					cout << "If you go left you will infront of the studios 2.3 and 2.2" << endl;
					cout << "If you go forward you will be infront of the studios 2.1 and 2.7" << endl;
					cout << "If you go back you will be infront of the studio 2.4" << endl;
					cout << "If you go right you will infront of the studios 2.5 and 2.6" << endl;
					getline(cin, movement);
					if (movement == "left") {
						cout << "For studio 2.3 choose left , for studio 2.2 choose right" << endl;
						movement.erase();
						getline(cin, movement);
						if (movement == "left") {
							cout << " You are infront of the studio 2.3" << endl;
							movement.erase();
							questions(arr);
							if (before_shift.studio == "2.3") {
								cout << " Corect you are infront of the correct studio" << endl;
								questions(arr);
							}
							else
							{
								cout << " Wrong studio bro try batter" << endl;
							}


						}
						else if (movement == "right") {
							cout << " You are infront of the studio 2.2" << endl;
							movement.erase();

							if (before_shift.studio == "2.2") {
								cout << " Corect you are infront of the correct studio" << endl;
								questions(arr);
							}
							else
							{
								cout << " Wrong studio bro try batter" << endl;
							}

						}

					}
					else if (movement == "forward") {
						cout << "For studio 2.1 choose left , for studio 2.7 choose right" << endl;
						movement.erase();
						getline(cin, movement);
						if (movement == "left") {
							cout << " You are infront of the studio 2.1" << endl;
							movement.erase();
							if (before_shift.studio == "2.1") {
								cout << " Corect you are infront of the correct studio" << endl;
								questions(arr);
							}
							else
							{
								cout << " Wrong studio bro try batter" << endl;
							}


						}
						else if (movement == " right") {
							cout << " You are infront of the studio 2.7" << endl;
							movement.erase();
							if (before_shift.studio == "2.7") {
								cout << " Corect you are infront of the correct studio" << endl;
								questions(arr);
							}
							else
							{
								cout << " Wrong studio bro try batter" << endl;
							}

						}
					}
					else if (movement == "back") {
						cout << "You are infront of the studio 2.4" << endl;
						movement.erase();
						if (before_shift.studio == "2.4") {
							cout << " Corect you are infront of the correct studio" << endl;
							questions(arr);
						}
						else
						{
							cout << " Wrong studio bro try batter" << endl;
						}

					}
					else if (movement == "right") {
						cout << "For studio 2.6 choose left , for studio 2.5 choose right" << endl;
						movement.erase();
						getline(cin, movement);
						if (movement == "left") {
							cout << " You are infront of the studio 2.6" << endl;
							movement.erase();
							if (before_shift.studio == "2.6") {
								cout << " Corect you are infront of the correct studio" << endl;
								questions(arr);
							}
							else
							{
								cout << " Wrong studio bro try batter" << endl;
							}


						}
						else if (movement == " right") {
							cout << " You are infront of the studio 2.5" << endl;
							movement.erase();
							if (before_shift.studio == "2.5") {
								cout << " Corect you are infront of the correct studio" << endl;
								questions(arr);
							}
							else
							{
								cout << " Wrong studio bro try batter" << endl;
							}

						}
					}

				}
			}
			else
			{
				cout << "We are infront of the studio 0.5" << endl;
				movement.erase();
				if (before_shift.studio == "0.5") {
					cout << " Corect you are infront of the correct studio" << endl;
					questions(arr);
				}
				else
				{
					cout << " Wrong studio bro try batter" << endl;
				}

			}

		}
	}
}
void thirdfloor(int arr[], string movement) {
	while (kristal.lokacia == 3)
	{
		string movement;
		cout << "we ara going to smoke and to hear some storys about dealers hard life in Problematic" << endl;
		time(arr, 10, 0);
		cout << "Do you want to go back to the elevator?" << endl;
		getline(cin, movement);
		if (movement == "yes")
		{
			cout << " We are returning to the elevator" << endl;
			break;
		}
	}
}
void fourthfloor(string movement, int id, int arr[], int studio, string isstudio) {
	while (kristal.lokacia == 4) {
		cout << "If you choose \'forward\' , we are going for a check" << endl;
		cout << "If you choose \'left\' ,  we are going to the toilet" << endl;
		cout << "If you choose \'right\', we are going for a make up" << endl;
		cout << "If you choose \'back\' ,we are returning to the elevator " << endl;
		getline(cin, movement);
		if (movement == "forward") {

			while (id != 228) {
				cout << "Tell your id to the FS to check you in the system" << endl;
				cin >> id;
				if (id != 228)
					cout << "Wrong id try again" << endl;
				else {
					cout << "Right you are!" << endl;
					break;
				}
			}
			before_shift.attendence = true;
			time(arr, 5, 0);
			movement.erase();
			if (before_shift.attendence == true && before_shift.clothes == true && before_shift.make_up && before_shift.attendence == false) {
				cout << "Appereance check is done" << endl;
				before_shift.attendence == true;

			}
		}
		if (movement == "left") {

			cout << "We are going to the toilet to take a part of glass" << endl;
			cout << " You took a part of glass and your lvl increased by 1" << endl;
			kristal.level += 1;
			kristal.stamina += 30;
			//std::this_thread::sleep_for(std::chrono::seconds(5));
			time(arr, 15, 0);
			if (before_shift.attendence == false && arr[0] >= 23) {
				cout << " But you are late for attendence check so you lost 10 leva " << endl;
				kristal.money -= 10;
			}
			movement.erase();
		}
		if (movement == "right") {
			cout << " We are going to the make up room" << endl;
			cout << " We are prepairing ourself for the shift" << endl;
			before_shift.make_up = true;
			time(arr, 10, 0);
			movement.erase();

		}
		if (movement == "back") {

			movement.erase();
			break;
		}

		if ((arr[0] >= 23 && arr[1] >= 30) && (arr[1] >= 40) && before_shift.attendence == true) {
			cout << "Breafing starts , you can hear some useles bulshits here" << endl;
			time(arr, 10, 0);
			randstudio(studio, isstudio);
		}

	}
}
void fifthfloor(int arr[], string movement) {
	while (kristal.lokacia == 5)
	{
		cout << " We are on the 5th floor , there is nothing to do than to change your clothes" << endl;
		before_shift.clothes = true;
		time(arr, 10, 0);
		cout << " We are returning to the elevator" << endl;
		break;
	}
}
void seventhfloor(int arr[], string movement, int bet) {
	while (kristal.lokacia == 7) {
		cout << " We are on the 7th floor , choose what we are going to do here" << endl;
		cout << "If you choose \"forward\" we are going to the TM's " << endl;
		cout << "If you choose \'left\' we are going to play table tenis" << endl;
		cout << "If you choose \'right\' we are going to sleep" << endl;
		cout << "If you choose \'back\' we are returning to the elevator" << endl;
		getline(cin, movement);
		if (movement == "left") {
			cout << "You can win some money when you are playing" << endl;
			cout << " Type your bet " << endl;

			do
			{
				cin >> bet;
				if (bet > kristal.money)
					cout << "Wrong bet bro you dont have enought money" << endl;
			} while (bet > kristal.money);

			int flip = rand() % 2 + 1;
			if (flip == 1) {
				cout << "Congratulation you won " << bet * 2 << "leva" << endl;
				kristal.money += bet;
			}
			else if (flip == 2) {
				cout << "Better luck next time bro " << endl;
				kristal.money -= bet;
			}
			time(arr, 10, 0);
			movement.erase();
		}
		if (movement == "right") {
			cout << "It's time to take a nap and recover a bit" << endl;
			time(arr, 15, 0);
			movement.erase();
		}
		if (movement == "back")
			break;
		if (movement == "forward") {
			cout << "You are cheking evaluation" << endl;
			time(arr, 5, 0);
		}
	}
}

void elevetor(int floor, string movement, int arr[], int id, int bet, int studio, string isstudio) {
	do
	{
		cout << "choose the floor " << endl;
		cin >> floor;
		if (floor == 0)
		{
			cout << " Thats the studios and exit , do you need to work or leave" << endl;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
			else if (movement == "out") {
				kristal.lokacia = 0;
				zerofloor(arr, movement, studio, isstudio);
				movement.erase();
			}
		}
		else if (floor == 1) {
			cout << "Bro there is nothing to do on this floor , try another one" << endl; floor = 0;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
		}
		else if (floor == 2) {
			cout << "Bro there is nothing to do on this floor , try another one" << endl; floor = 0;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
		}
		else if (floor == 3) {
			cout << " Thats a smoking area , do you want to see some bros" << endl;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
			else if (movement == "out") {
				kristal.lokacia = 3;
				thirdfloor(arr, movement);
				movement.erase();
			}
		}
		else if (floor == 4) {
			cout << "Make up , workforse , cheks floor" << endl;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
			else if (movement == "out") {
				kristal.lokacia = 4;
				fourthfloor(movement, id, arr, studio, isstudio);
			}
		}
		else if (floor == 5) {
			cout << "Chenging room and treining room" << endl;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
			else if (movement == "out") {
				kristal.lokacia = 5;
				fifthfloor(arr, movement);
			}


		}
		else if (floor == 6) {
			cout << " Hr's floor , bro they are shit" << endl;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
			else
				kristal.lokacia = 6;
		}
		else if (floor == 7) {
			cout << "chilling room and TM office " << endl;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
			else if (movement == "out")
			{
				kristal.lokacia = 7;
				seventhfloor(arr, movement, bet);
			}
		}
		else if (floor == 8) {
			cout << "Restourant for rich people" << endl;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
			else
				kristal.lokacia = 8;
			eightfloor(arr, movement);

		}
		else if (floor == -1) {
			cout << "Hidden floor " << endl;
			cout << "Going out ?" << endl;
			cin.ignore();
			getline(cin, movement);
			if (movement == "no") {
				cout << "Choose another floor" << endl;
				movement.erase();
			}
			else {
				kristal.lokacia = -1;
				minusfloor(arr, movement);
			}

		}



		getline(cin, movement);
	} while (movement != "out");
}



int main()
{

	srand(time(NULL));
	int smt = 0;
	int arr[2] = { 22,45 };
	string movement;
	int floor = 0;
	int id = 0;
	int bet = 0;
	int studio = 0;
	string isstudio;
	cout << "Welcome to the world Kristal boy" << endl;
	cout << " You have spawned in the mythical place caled \'Problematic\'" << endl;
	cout << "In this world of npc's you are the main hero" << endl;
	cout << " Your level will increas with every dose of booster called \'glass part\'" << endl;
	cout << "You are in the spawn point location " << endl;
	cout << " You can move by using \'left\' \'right\' \'forward\' and \'back\'" << endl;
	cout << " But sometimes it's imposible to move to the point becouse of the walls and you are not a gost for now so yeah" << endl;
	cout << " You are near the security guys location so be cearful Kristal boy if they catch you ,you will be fired and game will finish" << endl;
	cout << "Go forward and check in your id card" << endl;
	cout << " So choose were to move brave Kristal hero" << endl;
	cout << " Now is 22 : 45" << endl;
	world.time =
		kristal.lokacia = 0;

	while (movement != "forward")
	{


		movement.erase();
		getline(cin, movement);
		if (movement == "forward") {
			cout << " Great choise Kristal you checked your id card" << endl;

			kristal.lokacia = 1;
			break;

		}
		else
		{
			cout << " Wrong choise bro try again" << endl;
			break;
		}
	}
	cout << " Nice kristal so now move again forward to the elevator and get a bonus glass part in the toilet on the 4th floor" << endl;
	getline(cin, movement);
	if (movement == "forward") {
		cout << "Great ,type the floor where we are going" << endl;
		cout << " Type \'out\' to go out of yhe elevator" << endl;
		elevetor(floor, movement, arr, id, bet, studio, isstudio);

		movement.erase();
	}

























}
