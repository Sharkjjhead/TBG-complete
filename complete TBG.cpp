
#include<Windows.h>
#include<chrono>
#include<iostream>
#pragma comment(lib, "winmm.lib")
using namespace std;

string inventory[20];
int PlayerHealth = 100;
void SpookyMob();
void Puzzle();

int main() {
	//PlaySound(TEXT("dead.WAV"), NULL, SND_ASYNC);
	srand(time(NULL));
	SpookyMob();
	SpookyMob();
	SpookyMob();
	SpookyMob();

	bool quit = false;
	
	int room = 1;
	string input = "SANS";
	while (!quit) {
		cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "you inventory:";
		for (int i = 0; i < 20; i++)
			cout << inventory[i] << " | ";
		cout << endl;

		switch (room) {
		case 1://###################################### MAIN LOBBY #############################
			system("color 0A");
			SpookyMob();
			cout << "you're in the main lobby,you can west to the office, you can also go east toward the stairs, you can go north towards the bathrooms" << endl;
			cout << "theres a desk in the middle of the lobby" << endl;
			if (inventory[0] != "Boot(size 14)")
				cout << "you found a size 14 boot!" << endl;
			cin >> input;
			if (input == "west" || input == "w" || input == "office" || input == "go to office")
				room = 2;
			if (input == "east" || input == "e" || input == "stairs" || input == "go to stairs")
				room = 7;
			if (input == "north" || input == "n" || input == "bathroom" || input == "go to bathroom")
				room = 4;
			if (input == "desk" || input == "look" || input == "search" || input == "open desk") {
				if (inventory[2] != "key")
					cout << "you found a rusty key, it says janitor closet" << endl;
				inventory[2] = "key";
			}
			if (input == "boot" || input == "pick up boot" || input == "get boot") {
				inventory[0] != "Boot(size 14)";
				cout << "you picked up the boot and heard a dripping sound from the office" << endl;
				inventory[0] = "Boot(size 14)";
			}
			break;
		case 2://###################################### OFFICE #############################
			system("color 09");
			SpookyMob();
			cout << "you're in the office,you can go north to the main office,you can go east back to the lobby" << endl;
			if (inventory[1] != "WetHat")
				cout << "you see a wet hat on the ground." << endl;
			cin >> input;
			if (input == "north" || input == "n")
				room = 3;
			if (input == "east" || input == "e" || input == "back")
				room = 1;

			if (input == "hat" || input == "pick up hat" || input == "get hat") {
				inventory[1] = "WetHat";
				cout << "you picked up the wet hat and hear a screech from the main office" << endl;
			}
			break;
		case 3://###################################### MAIN OFFICE #############################
			system("color 09");
			cout << "you're in the main office,you can go south back to the office" << endl;
			cout << "theres a box in the middle of the room" << endl;
			cin >> input;
			if (input == "south" || input == "s" || input == "office" || input == "go to office")
				room = 2;
			if (input == "box" || input == "search" || input == "look" || input == "open") {
				if (inventory[3] != "RippedGloves")
					cout << "you found a ripped gloves" << endl;
				inventory[3] = "RippedGloves";
			}
			break;
		case 4://###################################### CROSSROADS #############################
			system("color 0D");
			SpookyMob();
			cout << "you are at the cross roads of the girls and boys bathrooms,you can go west to the boys bathroom or east to the girls bathroom,You can also go south back to the lobby" << endl;
			cin >> input;
			if (input == "west" || input == "w" || input == "boys bathroom" || input == "go to boys bathroom")
				room = 5;
			if (input == "east" || input == "e" || input == "girls bathroom" || input == "go to girls bathroom")
				room = 6;
			if (input == "south" || input == "s" || input == "back" || input == "lobby")
				room = 1;
			break;
		case 5://###################################### BOYS BATHROOM #############################
			system("color 01");
			cout << "you are in the boys bathroom,you can go east back to the crossroads" << endl;
			cout << "theres a open stall and trash cans" << endl;
			cin >> input;
			if (input == "east" || input == "e" || input == "cross roads" || input == "back")
				room = 4;
			if (input == "stall" || input == "look" || input == "search" || input == "search stall") {
				if (inventory[4] != "Message")
					cout << "you found many messages to some one named james but ones of them says (you guys will reget saying these) you assume james wrote that (PS remember this or revisit)" << endl;
				inventory[4] = "Message";
			}
			if (input == "trash can" || input == "trash" || input == "search can" || input == "search trash") {
				if (inventory[9] != "SANS plushy")
					cout << "you found a lot of trash but at the veyr bottom you found the best peice of trash (in a good way) SANS from UT you laeve it but can come back" << endl;
				cout << "             __________________ " << endl;
				cout << "         ____                  ____ " << endl;
				cout << "     ____                          ____ " << endl;
				cout << " ____                                  ____ " << endl;
				cout << " ____                                  ____ " << endl;
				cout << " ____                         |===|    ____ " << endl;
				cout << " ____                         |===|    ____ " << endl;
				cout << " ____     =====      [|]      |===|    ____ " << endl;
				cout << "     ____          [/////]         ____ " << endl;
				cout << " ____     |||||               |||||    ____ " << endl;
				cout << " ____     |||||||||||||||||||||||||    ____ " << endl;
				cout << " ____      |||  |||  |||  |||  |||     ____ " << endl;
				cout << "     ____     ||||||||||||||||||   ____ " << endl;
				cout << "         ______              ______ " << endl;
				cout << "               ______________ " << endl;
				PlaySound(TEXT("cheering.wav"), NULL, SND_FILENAME | SND_ASYNC);
				inventory[9] = "SANS plushy";
			}
			break;
		case 6://###################################### GIRLS BATHROOM #############################
			system("color 05");
			cout << "you are in the girls bathroom,you can go west back to the cross roads" << endl;
			cout << "you see a stall is open and you see a trash can" << endl;
			cin >> input;
			if (input == "west" || input == "w" || input == "cross roads" || input == "back")
				room = 4;
			if (input == "stall" || input == "look" || input == "search" || input == "search stall") {
				if (inventory[5] != "LongSocks")
					cout << "you found a pair of extremly long socks in the toilet almost flooding it" << endl;
				inventory[5] = "LongSocks";
			}
			if (input == "trash can" || input == "trash" || input == "search can" || input == "search trash") {
				if (inventory[8] != "Toby FOX plushy") {

					cout << "you found a almost empty trash can but at the very bottom you see a Toby Fox plushy" << endl;
					PlaySound(TEXT("cheering.wav"), NULL, SND_ASYNC);
					inventory[8] = "Toby Fox plushy";
				}
			}
			break;
		case 7://###################################### STAIRS 1 #############################
			system("color 08");
			SpookyMob();
			cout << "you are at the stairs you can go south back to the lobby,you can got north to the second floor" << endl;
			cout << "you might want to double check you have everything just saying" << endl;
			cin >> input;
			if (input == "south" || input == "s" || input == "lobby" || input == "back")
				room = 1;
			if (input == "north" || input == "n" || input == "floor two" || input == "second floor")
				room = 8;
			break;
		case 8://###################################### FLOOR 2 #############################
			system("color 08");
			SpookyMob();
			cout << "you are on the second floor you can go to the west hallway,you can go to the east hallway,you can go south back to the first floor" << endl;
			cout << "the halls are pitch black as you walk through" << endl;
			cin >> input;
			if (input == "south" || input == "s" || input == "lobby" || input == "back")
				room = 7;
			if (input == "west" || input == "w" || input == "west hallway")
				room = 9;
			if (input == "east" || input == "e" || input == "east hallway")
				room = 10;
			break;
		case 9://###################################### WEST HALLWAY #############################
			system("color 0E");
			SpookyMob();
			cout << "you are in the west hall,you can go south west to the janitors closet,you can go east to Mr.A's room,you can go back east to the stairs,you can go north to the north hallway,you can go NW to Ms.Ks room" << endl;
			cout << "type SW to go South West/Type back for the stairs/Type e for MR.A room/Type NW for MS.K room" << endl;
			cin >> input;
			if (input == "stairs" || input == "back")
				room = 8;
			if (input == "east" || input == "e" || input == "west hallway")
				room = 12;
			if (input == "South west" || input == "go south west" || input == "sw")
				room = 11;
			if (input == "north" || input == "go north" || input == "n")
				room = 15;
			if (input == "northwest" || input == "go northwest" || input == "nw")
				room = 17;
			break;
		case 10://###################################### EAST HALLWAY #############################
			system("color 0C");
			SpookyMob();
			cout << "you are in the east hallway,you can go South East to Ms.Bells room,you can go east into the gym,you can go North East to Ms.Talls room,You can go to the north to the north hallway" << endl;
			cout << "Type SE to go South East,type NE to go North East" << endl;
			cin >> input;
			if (input == "east" || input == "e" || input == "stairs" || input == "back")
				room = 8;
			if (input == "South East" || input == "se")
				room = 13;
			if (input == "North East" || input == "ne")
				room = 14;
			if (input == "north" || input == "go north" || input == "n")
				room = 15;
			if (input == "East" || input == "e")
				room = 16;
			break;
		case 11://###################################### JANITOR'S CLOSET #############################
			system("color 02");
			cout << "you are in the janitors closet,you can go back North East to the west wall way" << endl;
			cout << "Type NE to go back" << endl;
			cout << "theres a strange box with a scruffed out name but you can make out the word JAM.. and theres a strange computer" << endl;
			cin >> input;
			if (input == "North East" || input == "ne" || input == "hall" || input == "back")
				room = 9;
			if (input == "box" || input == "look" || input == "search" || input == "search box") {
				if (inventory[6] != "Binder")
					cout << "you found a old binder with a name scrached out but it has a ES on it" << endl;
				cout << "You open the binder and it contains many notes and letters that were saved with the words revenge engraved inside the binder you figure james was bullied and decided to keep the notes and meesages his bullies laft around to plot his revenge" << endl;
				inventory[6] = "Binder";
			}
			if (input == "computer" || input == "search computer") {
				Puzzle();
				cout << "HI" << endl;
			}
			break;
		case 12://###################################### MR.A's ROOM #############################
			system("color 04");
			cout << "you are in MR.A's Room,you can leave east to the west hallway" << endl;
			cout << "you see note on a desk" << endl;
			cin >> input;
			if (input == "east" || input == "e" || input == "hallway" || input == "back")
				room = 9;
			if (input == "note" || input == "look" || input == "search" || input == "desk") {
				if (inventory[7] != "CrumpledNote")
					cout << "you found a crumple paper note it says" << endl;
				cout << "you uncrumple the note and read (James is a good kid but is also a freak its weird to be that tall and skinny and only be a freshman he looks like he will flall over by a single gust of wind)" << endl;
				inventory[7] = "CrumpledNote";
			}
			break;
		case 13://###################################### MS.B'S ROOM #############################
			system("color 06");
			cout << "you are in MR.B's Room,you can leave west to the east hallway" << endl;
			cout << "you see a strange disfigured painting by someone named aims with a note on it" << endl;
			cin >> input;
			if (input == "west" || input == "w" || input == "hallway" || input == "back")
				room = 10;
			if (input == "note" || input == "look" || input == "search" || input == "painting") {
				if (inventory[10] != "PaintNote")
					cout << "the note says" << endl;
				cout << "The note says (James I told you to draw a person this isn't a person this thing doesn't even look human if you keep making these freakish drawing i will have to report you to the principal and possibly the police) you keep the note" << endl;
				inventory[10] = "PaintNote";
			}
			break;
		case 14://###################################### MS.T'S ROOM #############################
			system("color 03");
			cout << "you are in MR.T's Room,you can leave west to the east hallway" << endl;
			cout << "you see a bored with a bunch of stars next to kids names but one kids name was ripped off and on the floor was a paper with a desk number with the name james" << endl;
			cin >> input;
			if (input == "west" || input == "w" || input == "hallway" || input == "back")
				room = 10;
			if (input == "paper" || input == "look" || input == "search" || input == "pick up") {
				if (inventory[11] != "Paper")
					cout << "the paper says, DESK 5E JAMES classified loner, but its not in this room??" << endl;
				inventory[11] = "Paper";
			}
			break;
		case 15://###################################### NORTH HALL #############################
			system("color 0E");
			SpookyMob();
			cout << "you are in the North HALL,you can go back SouthEast to he east hallway,you can go SouthWest back to the west hallway,you can go north to the garden,you can go NorthWest to the principals office,you can go East to the music hall" << endl;
			cout << "Type NW for NorthWest/SE for SouthEast/SW for SouthWest/" << endl;
			cin >> input;
			if (input == "NW" || input == "northwest" || input == "Principal" || input == "office")
				room = 18;
			if (input == "SE" || input == "southeast" || input == "east hallway")
				room = 10;
			if (input == "southwest" || input == "SW" || input == "west hallway")
				room = 9;
			if (input == "north" || input == "n" || input == "garden")
				room = 21;
			if (input == "east" || input == "e" || input == "music hall")
				room = 20;
			break;
		case 16://###################################### GYM #############################
			system("color 08");
			SpookyMob();
			cout << "you are in the gym,you can go east back to the east hall way" << endl;
			cout << "you can look around the gym you might find something strange" << endl;
			cin >> input;
			if (input == "west" || input == "w" || input == "hallway")
				room = 10;
			if (input == "look" || input == "search") {
				if (inventory[14] != "SecretRoomMessage")
					cout << "you found a secret room behind the bleachers and go inside" << endl;
				cout << "you found a message on a desk in the room it says (I dont know why James did what he did but all i know is that the students in this school deserves to go to jail for laughing and making fun of how he died)" << endl;
				inventory[14] = "SecretRoomMessage";
				break;
		case 17://###################################### MS.K'S ROOM #############################
			system("color 0A");
			cout << "you are in Ms.k's Room,You can go south back to the north hallway" << endl;
			cout << "theres a nothing in this room that catches your eye maybe check the desk" << endl;
			cin >> input;
			if (input == "south" || input == "s" || input == "hallway")
				room = 15;
			if (input == "desk" || input == "look" || input == "search") {
				if (inventory[13] != "DeskMessage")
					cout << "You find a desk 5E its the desk James sat at you decide to check" << endl;
				cout << "you find a pair of broken glasses and are able to read a message on his desk it says (the only place we cant get you is in gym but dont worry we will see you after gym class)" << endl;
				inventory[13] = "DeskMessage";
			}
			break;
		case 18://###################################### PRINCIPALS OFFICE #############################
			system("color 0D");
			cout << "you are in the principals office,You can go back south to the north hallway" << endl;
			cout << "theres a folder that says secret on it" << endl;
			cin >> input;
			if (input == "south" || input == "s" || input == "hallway")
				room = 15;
			if (input == "folder" || input == "look" || input == "search" || input == "pick up") {
				if (inventory[12] != "Folder")
					cout << "The folder talks about a student named james that was constantly bullied by everyone in school for being to tall and skinny so he did something terrible in the gym" << endl;
				cout << "the rest is scrribled or marked over the details of what happend" << endl;
				inventory[12] = "Folder";
			}
			break;
		case 19://###################################### COURT YARD BOSS FIGHT #############################
			system("color 04");
			cout << "Gates slam behind you,you are now in the court yard you can't leave" << endl;
			cout << "you encounter a tall dark figure its disfigured and makes a sound its sounds like the word james" << endl;
			cin >> input;
			if (inventory[0] == "Boot(size 14)" && inventory[1] == "WetHat" && inventory[3] == "RippedGloves" && inventory[5] == "LongSocks" && inventory[6] == "Binder" && inventory[7] == "CrumpledNote" && inventory[10] == "PaintNote" && inventory[11] == "Paper" && inventory[14] == "SecretRoomMessage" && inventory[13] == "DeskMessage" && inventory[12] == "Folder" && inventory[15] == "JamesVHS" && inventory[4] == "Message") {
				cout << "The monster sees all the items you have collected and starts to have a revelation of his past as he does the darkness around him starts to clear and a golden glow rises surrounding him" << endl;
				cout << "James speaks (Thank you for helping me move on your the only one who cared 10 years I have been here crying for help asking people to tell my story and let them know why i did it but the school hid me away pertending i didn't exist they thought i would just fade away in history and it made me a monster I hated everyone when iw as alive and when i was dead i hated the fact that people laughed when i died they didn't care that they bulliued me they forgot i was human to, But you, you helpped me come back to the light you reminded me of my past you understand my pain and yet your braver than I was,Never let anyone tell you your wrong if people are trying to brig you dwon it usually means you are above them,Thank you for freeing me please let people know what happend to me and make sure you never get put down and again thank you)" << endl;
				cout << "hint (Type next)" << endl;
				if (input == "next")
					room = 22;
			}
			else {
				cout << "The monster comes closer to you seeing the items you have gathered but is not satisfied with the things you have so he grows bigger and bigger crushing your body with his foot" << endl;
				cout << "thanks for playing" << endl;
				PlaySound(TEXT("dead.wav"), NULL, SND_ASYNC);
				system("pause"); 
				quit = true; 
			}
			break;
		case 20://###################################### MUSIC HALL #############################
			system("color 05");
			SpookyMob();
			cout << "you are in the music hall,You can go west to get back to the North hallway,you can go east to the music room" << endl;
			cout << "you can hear the slight sound of a flute being played but who is playing it?" << endl;
			cin >> input;
			if (input == "west" || input == "w" || input == "back")
				room = 15;
			if (input == "east" || input == "e" || input == "music room")
				room = 23;
			break;
		case 21://###################################### GARDEN LAST TURN AROUND #############################
			system("color 02");
			SpookyMob();
			cout << "you are in the garden,You can go South back to the North hallway,you can go south west to the court yard" << endl;
			cin >> input;
			if (input == "south" || input == "s" || input == "back")
				room = 15;
			if (input == "southwest" || input == "sw" || input == "court yard")
				room = 19;
			break;
		case 22://###################################### THE CLUES PUT TOGETHER ###############################
			system("color 09");
			cout << "This is what truely happend to James" << endl;
			cout << "James was pretty normal kid except for his strange height and him being really skinny he went to carson highschool during his first couple days he was having a good time at school untill he found a note at his desk saying freak on it soon after many notes followed for the next couple months james found nots and kept them every time they were more hurt full he decided to collect them and put them in a binder as he collected he got angry and sad so wrote revenge in the binder eventually it started to effect his school work in one of his classes he had 5 gold stars like he was in kindergarden but eventually the stars dissapered and the teacher eventually ripped his name off the chart but it didn't stop their in art class he was given a F for a art project to draw a person his teacher called it freakish and horrifying threatining to call the police on james to make sure he is mentally ok but james didn't get help james had only 2 safe places the music room and the gym he loved playing music and in the gym his teacher made sure james was always safe when he entered and when he left.he continued to go through school getting bullied and laughed at. His teachers started to be scared by him, helping him as little as possible, not caring about him anymore. No one did; he was classified as a loner freak that no one cared about. eventually the bullying became physical kids beat him up breaking his glasses and taking his hat and gloves during winter and eventually took his socks and boots James got angry he went to bathroom after every time he was beat up and seen the messages left behind he decided to carve out the words (you guys will regret saying these) he thought and thought until he remembered something but before he could put his plan into action he was beat up outside they took his flute and knocked him out with it when james woke up he seen his broken flute with dried blood on it, it was the last straw he walked into the gym his safe place and he found an item that was strong enough to hold him that night he did something unforgivable in the morning there was an assemble  everyone walked in and seen what he had done people laughed some puked and others screamed traumatized especially the gym teacher he yelled at the students who laughed eventually going crazy and being fired but he left information in a secret room in the gym.After that james roamed the halls angry that no one talked about what he did they said he ran away or we as kidnapped he grew angry and started to lose himself in his anger eventually becoming a monster. and that's the story of James." << endl;
			PlaySound(TEXT("win.wav"), NULL, SND_ASYNC);
			system("pause");
			quit = true;
			break;
		case 23://###################################### MUSIC ROOM ###############################
			system("color 0B");
			cout << "you are in the Music room you can go west back to the Music hall" << endl;
			cout << "you see a flute and VHS on a chair in the back of the room the flute looks broken with a bit of dried blood on it" << endl;
			cin >> input;
			if (input == "west" || input == "w" || input == "back")
				room = 20;
			if (input == "flute" || input == "look" || input == "search" || input == "pick up") {
				if (inventory[15] != "JamesVHS")
					cout << "you pick up the flute and hear crying but focas on the VHS so you played it in a VHS player its shows a bunch of kids picking on a tall kid and one of them smacked the tall kid with the flute it broke making contract with him and making him bleed the VHS says James" << endl;
				inventory[15] = "JamesVHS";
				break;

			}
			}
		}
	}
	
	cout << "the game has quit";
}

void SpookyMob() {
	int num = rand() % 100 + 1;
	cout << "you hear and see a " << num << endl;

	if (num < 15) {//15%
		cout << "Rat ran by scaring you" << endl;
	}
	if (num < 25) {//10%
		cout << "racoon" << endl;
	}
	if (num < 45) {//20%
		cout << "bat flys past your head" << endl;
	}
	if (num < 75) {//30%
		cout << "big spider crawls on the wall" << endl;
	}
	else {//25%
		cout << "A tall figure runs by" << endl;
	}
}

void Puzzle() {
	int limit = 30;
	auto start = chrono::steady_clock::now();
	int num = rand() % 20 + 1;
	int guess = -1;
	int timeleft = 60;
	system("color 03");
	cout << "----------------------------------------------------------" << endl;
	cout << "the computer ask to guess 1 number 1- 20" << endl;
	while (guess != num && timeleft > 0) {
		auto now = chrono::steady_clock::now();
		timeleft = limit - chrono::duration_cast <chrono::seconds> (now - start).count();
		cin >> guess;
		if (guess != num) {
			cout << "error wrong password" << endl;
			cout << "time left:" << timeleft << endl;
		}
		else cout << "you got in and find a picture of Papyrus" << endl;
	}

}