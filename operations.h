#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "animals.h"
using namespace std;
class pokupki {
public:
	vector <animal*> my_animals;
	int money;
};
void selling(pokupki& p)
{
	string name;
	cout << "Which animal would you like to buy? ";
	cin >> name;
	if (name == "cat")
	{
		if (p.money >= 100) {
			cout << "Congratulations! You have got a cat! ";
			p.money -= 100;
			p.my_animals.push_back(new cat);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "donkey")
	{
		if (p.money >= 200) {
			cout << "Congratulations! You have got a donkey! ";
			p.money -= 200;
			p.my_animals.push_back(new donkey);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "goose")
	{
		if (p.money >= 125) {
			cout << "Congratulations! You have got a goose! ";
			p.money -= 125;
			p.my_animals.push_back(new goose);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "duck")
	{
		if (p.money >= 75) {
			cout << "Congratulations! You have got a duck! ";
			p.money -= 75;
			p.my_animals.push_back(new duck);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "pig")
	{
		if (p.money >= 350) {
			cout << "Congratulations! You have got a pig! ";
			p.money -= 350;
			p.my_animals.push_back(new pig);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "horse")
	{
		if (p.money >= 400) {
			cout << "Congratulations! You have got a horse! ";
			p.money -= 400;
			p.my_animals.push_back(new horse);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "cow")
	{
		if (p.money >= 300) {
			cout << "Congratulations! You have got a cow! ";
			p.money -= 300;
			p.my_animals.push_back(new cow);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "sheep")
	{
		if (p.money >= 250) {
			cout << "Congratulations! You have got a sheep! ";
			p.money -= 250;
			p.my_animals.push_back(new sheep);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "dog")
	{
		if (p.money >= 150) {
			cout << "Congratulations! You have got a dog! ";
			p.money -= 150;
			p.my_animals.push_back(new dog);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "mouse")
	{
		if (p.money >= 25) {
			cout << "Congratulations! You have got a mouse! ";
			p.money -= 25;
			p.my_animals.push_back(new mouse);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else if (name == "parrot")
	{
		if (p.money >= 50) {
			cout << "Congratulations! You have got a parrot! "; p.money -= 50;
			p.my_animals.push_back(new parrot);
		}
		else cout << "Oops, you haven't enough money! ";
	}
	else cout << "Oops, we haven't this animal in the shop... ";
}
void draw(animal* ani) {
	if (ani->vid == "cat") { cout << " _._     _,-'""`-._" << endl << "(,-.`._,'(       |\\`-/|" << endl << "  `-.-'   \\ )-`( ,>o o)<" << endl << "           `-   \\`_`\"'-" << endl; }
	else if (ani->vid == "cow") { cout << "        /)  (\\" << endl << "   .-._((,~~.))_.-," << endl << "    `=.   99   ,='" << endl << "      / ,o~~o. \\" << endl << "     { { .__. } }" << endl << "      ) `~~~\\' (" << endl << "     /`-._  _\\.-\\" << endl << "    /         )  \\" << endl << "  ,-X        #   X-." << endl << " /   \\          /   \\" << endl << "(     )| |  | |(     )" << endl << " \\   / | |  | | \\   /" << endl << "  \\_(.-( )--( )-.)_/" << endl << "  /_,\\ ) /  \\ ( /._\\" << endl << "      /_,\\  /._\\" << endl; }
	else if (ani->vid == "dog") { cout << "             ____" << endl << "            /    \\__" << endl << "|\\         /    @   \\" << endl << "\\ \\_______|    \\  .:|>" << endl << " \\        |    | \\__/" << endl << "  |        \\__/   \\" << endl << "  /  /           \\|" << endl << " /  /----------\\  \\" << endl << " L_JJ           \\__JJ" << endl; }
	else if (ani->vid == "horse") { cout << "                                 |\\    /|" << endl << "                              ___| \\,,/_/" << endl << "                           ---__/ \\/    \\" << endl << "                          __--/     (D)  \\" << endl << "                          _ -/    (_      \\" << endl << "                         // /       \\_ /  -\\" << endl << "   __-------_____--___--/           / \\_ O o)" << endl << "  /                                 /   \\__/" << endl << " /                                 /" << endl << "||          )                   \\_/\\" << endl << "||         /              _      /  |" << endl << "| |      /--______      ___\\    /\\  :" << endl << "| /   __-  - _/   ------    |  |   \\ \\" << endl << " |   -  -   /                | |     \\ )" << endl << " |  |   -  |                 | )     | |" << endl << "  | |    | |                 | |    | |" << endl << "  | |    < |                 | |   |_/" << endl << "  < |    /__\\                <  \\" << endl << "  /__\\                       /___\\" << endl; }
	else if (ani->vid == "duck") { cout << "        ,----," << endl << "   ___.`      `," << endl << "   `===  D     :" << endl << "     `'.      .'" << endl << "        )    (                   ," << endl << "       /      \\_________________/|" << endl << "      /                          |" << endl << "     |                           ;" << endl << "     |               _____       /" << endl << "     |      \\       ______7    ,'" << endl << "     |       \\    ______7     /" << endl << "      \\       `-,____7      ,'" << endl << "^~^~^~^`\\                  /~^~^~^~" << endl << "~^~^~^~^ `----------------' ~^~^~^~" << endl << "^~^~^~^~^~^^~^~^~^~^~^~^~^~^~^~^~^~" << endl; }
	else if (ani->vid == "parrot") { cout << "        __" << endl << "       /'{>" << endl << " //'--;   ;--'\\\\" << endl << "///////\\_/\\\\\\\\\\\\\\" << endl << "       m m" << endl; }
	else if (ani->vid == "pig") { cout << "                                   )\\\   /|" << endl << "                                .-/'-|_/ |" << endl << "             __            __,-' (   / \\/" << endl << "         .-'\"  \"'-..__,-'\"\"          -o.`-._" << endl << "        /                                   '/" << endl << "*--._ ./                                 _.--" << endl << "      |                              _.-'" << endl << "      :                           .-/" << endl << "       \\                       )_ /" << endl << "        \\                _)   / \\(" << endl << "          `.   /-.___.---'(  /   \\\\" << endl << "           (  /   \\\\       \\(     L\\" << endl << "            \\(     L\\       \\\\" << endl << "             \\\\              \\\\" << endl << "              L\\              L\\" << endl; }
	else if (ani->vid == "sheep") { cout << "        __  _" << endl << "    .-:'  `; `-._" << endl << "   (_,           )" << endl << " ,'o\"(            )>" << endl << "(__,-'            )" << endl << "   (             )" << endl << "    `-'._.--._.-'" << endl << "       |||  |||" << endl; }
	else if (ani->vid == "donkey") { cout << "                          /\\          /\\" << endl << "                         ( \\\\        // )" << endl << "                          \\ \\\\      // /" << endl << "                           \\_\\\\||||//_/" << endl << "                            \\/ _  _ \\" << endl << "                           \\/|(O)(O)|" << endl << "                          \\/ |      |" << endl << "      ___________________\\/  \\      /" << endl << "     //                //     |____|" << endl << "    //                ||     /      \\" << endl << "   //|                \\|     \\ 0  0 /" << endl << "  // \\       )         V    / \\____/" << endl << " //   \\     /        (     /" << endl << "\*\*     \\   /_________|  |_/" << endl << "       /  /\\   /     |  ||" << endl << "      /  / /  /      \\  ||" << endl << "      | |  | |        | ||" << endl << "      | |  | |        | ||" << endl << "      |_|  |_|        |_||" << endl << "       \\_\\  \\_\\        \\_\\\\" << endl; }
	else if (ani->vid == "goose") { cout << "                                   ___" << endl << "                               ,-\"\"   `." << endl << "                             ,'  _   e )`-._" << endl << "                            /  ,' `-._<.===-'" << endl << "                           /  /" << endl << "                          /  ;" << endl << "              _          /   ;" << endl << " (`._    _.-\"\" \"\"--..__,'    |" << endl << " <_  `-\"\"                     \\" << endl << "  <`-                          :" << endl << "   (__   <__.                  ;" << endl << "     `-.   '-.__.      _.'    /" << endl << "        \\      `-.__,-'    _,'" << endl << "         `._    ,    /__,-'" << endl << "            \"\"._\\__,'< <____" << endl << "                 | |  `----.`." << endl << "                 | |        \\ `." << endl << "                 ; |___      \\-``" << endl << "                 \\   --<" << endl << "                  `.`.<" << endl << "                    `-'" << endl; }
	else if (ani->vid == "mouse") { cout << "           .-_" << endl << "    .\"'.  //,  )" << endl << "    \"   \\,'``'`," << endl << "    `.   \\  . '# )" << endl << "      `\"'(   ,_,. _" << endl << "       _..'. `\"/   `)-." << endl << "   .``)_    `-` _-` `-`" << endl << "    `-'  /`-    \\_ ," << endl << " .\".  ,'        ,'  .\"." << endl << "'  ;  /``'-.-`'\";.  :  '" << endl << ":  : ;  `      ,  \\ '  ;" << endl << " \\  '    `-._.     `,  /" << endl << "  `_.,-,`'-,,,,,-'`-,_`" << endl << "         :    ,\"" << endl << "         `.   ," << endl << "          .   :" << endl << "          ;  ;" << endl << "        ,' _`" << endl << "       (_,'" << endl; }
}
void pricelist() { cout << "___________________" << endl << "| Today we have : |" << endl << "|                 |" << endl << "|  Mouse      25  |" << endl << "|  Parrot     50  |" << endl << "|  Duck       75  |" << endl << "|  Cat       100  |" << endl << "|  Goose     125  |" << endl << "|  Dog       150  |" << endl << "|  Donkey    200  |" << endl << "|  Sheep     250  |" << endl << "|  Cow       300  |" << endl << "|  Pig       350  |" << endl << "|  Horse     400  |" << endl << "-------------------" << endl; }
void receipt(pokupki& p)
{
	cout << endl << "___________________" << endl;
	for (int i = 0; i < p.my_animals.size(); i++)
	{
		if (p.my_animals[i]->vid == "cat")
		{
			cout << "|  Cat       100  |" << endl;
		}
		else if (p.my_animals[i]->vid == "dog")
		{
			cout << "|  Dog       150  |" << endl;
		}
		else if (p.my_animals[i]->vid == "goose")
		{
			cout << "|  Goose     125  |" << endl;
		}
		else if (p.my_animals[i]->vid == "horse")
		{
			cout << "|  Horse     400  |" << endl;
		}
		else if (p.my_animals[i]->vid == "donkey")
		{
			cout << "|  Donkey    200  |" << endl;
		}
		else if (p.my_animals[i]->vid == "pig")
		{
			cout << "|  Pig       350  |" << endl;
		}
		else if (p.my_animals[i]->vid == "cow")
		{
			cout << "|  Cow       300  |" << endl;
		}
		else if (p.my_animals[i]->vid == "sheep")
		{
			cout << "|  Sheep     250  |" << endl;
		}
		else if (p.my_animals[i]->vid == "parrot")
		{
			cout << "|  Parrot     50  |" << endl;
		}
		else if (p.my_animals[i]->vid == "mouse")
		{
			cout << "|  Mouse      25  |" << endl;
		}
		else if (p.my_animals[i]->vid == "duck")
		{
			cout << "|  Duck       75  |" << endl;
		}
	}cout << "-------------------" << endl;
}
void itog(pokupki& p) {
	cout << "Now you have " << p.money << " dollars. " << endl;
	if (p.my_animals.size() == 0) cout << "You didn't buy anything. ";
	else for (int i = 0; i < p.my_animals.size(); i++) {
		cout << "You bought a " << p.my_animals[i]->vid << ". " << p.my_animals[i]->golos() << endl;
		draw(p.my_animals[i]);
	}
}
void cycle(pokupki& p)
{
	string answer;
	cout << "Do you want to buy an animal? Please, type 'yes' or 'no'. ";
	cin >> answer;
	if (answer == "yes")
	{
		selling(p);
		cycle(p);
	}
	else if (answer == "no")
	{
		cout << "OK. Are you need a receipt? Please, type 'yes' or 'no'. ";
		string answer2;
		cin >> answer2;
		if (answer2 == "yes") { receipt(p); }
		else if (answer2 == "no") {}
		else cout << "Oops, something is wrong... ";
		itog(p);
	}
	else cout << "Oops, something is wrong... ";
}