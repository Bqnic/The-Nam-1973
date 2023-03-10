#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<mmsystem.h>
#include<time.h>
#include<fstream>
#include<iostream>
#include <cwchar>

using namespace std;

//Global variables
int exm;
int foundkey;
int west;
int rush;
int lft;
int soldier;
int knife;
int mddle;
int rght;
int mosan;
int lowsan;
int doll;
int chld;
int mickey;

//Achievements
int first, second, third, fourth, fifth, sixth, seventh, eight, ninth, tenth, eleventh, twelfth, thirteen, fourteen, fifteen, sixteen;

// Checkers
int GetNumber4(){
	int x;
	while(x!=1 && x!=2 && x!=3 && x!=4)
	{
	cin >> x;
	while(x!=1 && x!=2 && x!=3 && x!=4)
{
		cin.clear();
		cin.ignore(10000, '\n');
		printf("You picked an invalid number, pick again: ");
		cin >> x;
}
	while(cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');
		printf("You picked an invalid number, pick again: ");
		cin >> x;
	}
}
	return x;
}
int GetNumber2(){
	int x;
	while(x!=1 && x!=2)
	{
	cin >> x;
	while(x!=1 && x!=2)
{
		cin.clear();
		cin.ignore(10000, '\n');
		printf("You picked an invalid number, pick again: ");
		cin >> x;
}
	while(cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');
		printf("You picked an invalid number, pick again: ");
		cin >> x;
	}
}
	return x;
}
int GetNumber3(){
	int x;
	while(x!=1 && x!=2 && x!=3)
	{
	cin >> x;
	while(x!=1 && x!=2 && x!=3)
{
		cin.clear();
		cin.ignore(10000, '\n');
		printf("You picked an invalid number, pick again: ");
		cin >> x;
}
	while(cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');
		printf("You picked an invalid number, pick again: ");
		cin >> x;
	}
}
	return x;	
}

//lazy voids
void InvalidNumber(){
	printf("You picked an invalid number, pick again: ");
}
void GoBack(){
	printf("\nYou went back.");
} 
//Methods

void GameStart();
void South();
void Intro();
void GameOver();
void North();
void LeftTH();
void RightTH();
void MiddleTH();
void Surrender();
void Bridge();
void Rush();
void NoKey();
void Endgame();
void MiddleKey();
void RightKey();
void LeftKey();
void Unlock();
void Betrayal();
void DCI();
void PreBetrayal();
void War();
void Moral();
void Press();
void GoodEnding();
void Achievements();
void USA();
void Treason();
void Pawns();
void Worse();
void Life();
void Family();
void Destroy();
void Orders();
void Why();
void Files();
void GoodWish();
void BadWish();
void RightTH2();
void RdeadSoldier();
void Climb();
void West();
void Sniper();
void Bedroll();
void Photos();
void East();
void Cabin();
void Kid();
void Kill();
void Epilog();
void EpilogDestroy();

//Essential voids, dont go over this comment.
void EpilogDestroy(){
	int x;
	mciSendString("play Soundtracks/Destroy.mp3 repeat", NULL, 0, NULL);
	printf("2 years later, 1975.\n");
	system("PAUSE");
	printf("\nThe war is over, you and Goofy return home.\n");
	system("PAUSE");
	printf("\nGoofy has lost his right leg during a mission in 1974.\n");
	system("PAUSE");
	printf("\nMickey however, suffered no physical consequences, but his mental has.\n");
	system("PAUSE");
	printf("\nEver since Mickey and Goofy finished the destruction of the documents, their friendship fell apart.\n");
	system("PAUSE");
	printf("\nThe only contact Mickey had left was with Donald every month or so.\n");
	system("PAUSE");
	printf("\nMickey had recieved dozen of medals of honors for his contributions to the war.\n");
	system("PAUSE");
	printf("\nBut in return he lost everything he had.\n");
	system("PAUSE");
	printf("\nMickey spent countless hours just staring at his gun.\n");
	system("PAUSE");
	printf("\nWondering what would have happened if he followed along with Goofy's plan.\n");
	system("PAUSE");
		if(knife==1)
	{
		printf("\nHis scar he got from being cut by a knife constantly reminding him of the mission.\n");
		system("PAUSE");
	}
	tenth=1;
	ofstream myfile;
	myfile.open("Achievements/10.txt");
	myfile<<tenth;
	myfile.close();
	printf("\nThe End.\n");
	system("PAUSE");
}
void Epilog(){
	int x;
	mciSendString("play Soundtracks/End.mp3 repeat", NULL, 0, NULL);
	printf("16 months have passed since the war.\n");
	system("PAUSE");
	printf("\nThe leak of the documents has destroyed the support for the war and USA was left without any funds.\n");
	system("PAUSE");
	printf("\nThe USA never found out who leaked those documents.\n");
	system("PAUSE");
	printf("\nOr they did, but they couldn't react under the heavy backlash.\n");
	system("PAUSE");
	printf("\nGoofy returned to his family and found a decent job.\n");
	system("PAUSE");
	if(mickey==0)
	{
	printf("\nMickey however, returned to no one.\n");
	system("PAUSE");
	printf("\nHe had an empty life after the war, only Goofy and Donald still keeping him from ending it all.\n");
	system("PAUSE");
	printf("\nWhat would have happened if he destroyed the documents?\n");
	system("PAUSE");
	printf("\nWhat would have happened if the war continued?\n");
	system("PAUSE");
		if(knife==1)
	{
		printf("\nHis scar he got from being cut by a knife constantly reminding him of the mission.\n");
		system("PAUSE");
	}
	}
	
	else if(mickey==1)
	{
		printf("\nMickey met a girl named Minnie and married her soon after.\n");
		system("PAUSE");
		printf("\nThey never had any children, but they were in a happy marriage.\n");
		system("PAUSE");
		printf("\nHowever, war never left Mickey's mind.\n");
		system("PAUSE");
		if(knife==1)
	{
		printf("\nHis scar he got from being cut by a knife constantly reminding him of it.\n");
		system("PAUSE");
	}
		printf("\nWhat would have happened if he finished the mission?\n");
		fourteen=1;
		ofstream myfile;
		myfile.open("Achievements/14.txt");
		myfile << fourteen;
		myfile.close();
		system("PAUSE");
	}
	
	third=1;
	ofstream myfile("Achievements");
	myfile.open("Achievements/third.txt");
	myfile<<third;
	myfile.close();
	
	printf("\nThe End.\n");
	system("PAUSE");
}
void Kill(){
	int x;
	printf("Goofy stands infront of the kid.\n");
	system("PAUSE");
	printf("\nGoofy:'The only way you kill this child is if you kill me.'\n");
	printf("\n1. Pull the trigger.\n2. Lower your gun and get out.\n");
		x=0;
		x=GetNumber2();
		system("cls");
	
		if(x==1)
		{
			printf("Goofy is standing in your way.\n");
			system("PAUSE");
			printf("\nEvery Vietnamese person is the enemy in THIS WAR.\n");
			system("PAUSE");
			printf("\nThere are NO exceptions\n");
			system("PAUSE");
			printf("\nYou are just following orders.\n");
			system("PAUSE");
			printf("\nGoofy? Just another obstacle.\n");
			system("PAUSE");
			printf("\nGoofy is dead.\nThe child is dead\n");
			seventh=1;
			ofstream myfile;
			myfile.open("Achievements/7.txt");
			myfile << seventh;
			myfile.close();
			GameOver();
			system("PAUSE");
		}
		
		else if(x==2)
		{
			printf("You lower your gun and get out of the cabin.\n");
			system("PAUSE");
			printf("\nAs soon as you get out you hear a gunshot.\n");
			system("PAUSE");
			printf("\nThe child fired the gun.\n");
			system("PAUSE");
			printf("\nGoofy is dead.\n");
			GameOver();
			system("PAUSE");
		}
}
void Kid(){
	int x;
	printf("You draw your gun and aim at the kid.\nGoofy instantly stops you.\n");
	system("PAUSE");
	printf("\nThe child gets scared and he drops his gun.\n");
	system("PAUSE");
	printf("\nGoofy:'Have you lost your mind?! It's just a kid don't shoot him!\n");
	printf("\n1. So what if he is just a kid? He just held me at gunpoint!\n2. Let's just leave this place. (Lower your gun)\n");
		x=0;
		x=GetNumber2();
		system("cls");
	
		if(x==1)
		{
			printf("Goofy:'It's a child it isn't even capable of pulling the safety off!'\n");
			system("PAUSE");
			printf("\n1. I don't give a shit, it's just another Viet needing to be killed in my eyes.\n2. You are right, let's just leave. (Lower your gun)\n");
				x=0;
				x=GetNumber2();
				system("cls");
			
				if(x==1)
				Kill();
				
				else if(x==2)
				{
					printf("\nYou lower your gun and get out of the cabin.\nGoofy is upset.\n");
					lowsan=1;
					system("PAUSE");
					system("cls");
					GameStart();
				}
		}
		
		else if(x==2)
		{
			printf("\nYou lower your gun and get out of the cabin.\nGoofy is upset.\n");
			lowsan=1;
			system("PAUSE");
			system("cls");
			GameStart();
		}
	
}
void Cabin(){
	int x;
	chld=1;
	printf("As you are opening a half closed door, the crying stops.\n");
	system("PAUSE");
	printf("\nYou enter the cabin and you see a very skinny Vietnamese kid shakingly holding a pistol.\n");
	system("PAUSE");
	printf("\nThere is a dead man just next to him, possibly his father.\n");
	system("PAUSE");
	printf("\nThe safety on the gun isn't even off..\n");
	printf("\n1. Kill the kid.\n2. Try talking to him.\n3. Leave and go back.\n");
		x=0;
		x=GetNumber3();
		system("cls");
	if(doll==0)
	{
		if(x==1)
		Kid();
		
		else if(x==2)
		{
			printf("As soon as you start talking the kid backs away to the corner of the room.\nHe doesn't understand you.\n");
			printf("\n1. Kill the kid.\n2. Leave and go back.\n");
				x=0;
				x=GetNumber2();
				system("cls");
			
				if(x==1)
				Kid();
				
				else if(x==2)
				{
					printf("You have a mission to do and this kid is none of your business so you decide to leave.\nGoofy is upset.\n");
					lowsan=1;
					system("PAUSE");
					system("cls");
					GameStart();
				}
				
			
		}
		else if(x==3)
				{
					printf("You have a mission to do and this kid is none of your business so you decide to leave.\nGoofy is upset.\n");
					lowsan=1;
					system("PAUSE");
					system("cls");
					GameStart();
				}
		}
		
		else if(doll==1)
		{
				printf("As soon as you start talking the kid backs away to the corner of the room.\nHe doesn't understand you.\n");
				printf("\n1. Kill the kid.\n2. Leave and go back.\n3. Give him the doll.\n");
				x=0;
				x=GetNumber3();
				system("cls");
			
				if(x==1)
				Kid();
				
				else if(x==2)
				{
					printf("You have a mission to do and this kid is none of your business so you decide to leave.\nGoofy is upset.\n");
					lowsan=1;
					system("PAUSE");
					system("cls");
					GameStart();
				}
				else if(x==3)
				{
					printf("You reach into your pocket and get out the old doll you took from the hut in the west.\n");
					system("PAUSE");
					printf("\nYou throw the doll to him.\n");
					system("PAUSE");
					printf("\nKid waits abit, then he puts down the gun and takes the doll.\n");
					system("PAUSE");
					printf("\nHe stopped shaking.\n");
					system("PAUSE");
					printf("\nHe is staring at the doll like he forgot about everything that is happening around him.\n");
					system("PAUSE");
					ninth=1;
					ofstream myfile;
					myfile.open("Achievements/9.txt");
					myfile << ninth;
					myfile.close();
					printf("\n1. Kill the kid.\n2. Leave and go back.\n");
						x=0;
					x=GetNumber2();
					system("cls");
					
						if(x==1)
						{
							printf("The kid looks happier now that you gave him the doll.\n");
							system("PAUSE");
							printf("\nBut he is a Vietnamese kid not American.\n");
							system("PAUSE");
							printf("\nHe is an enemy.\n");
							system("PAUSE");
							printf("\nEither way, his parents are dead, who is going to miss him?\n");
							system("PAUSE");
							printf("\nThat doll is the last thing the kid is going to see.\n");
							system("PAUSE");
							printf("\nWhat a beautiful day.\n");
							eight=1;
							ofstream myfile;
							myfile.open("Achievements/8.txt");
							myfile << eight;
							myfile.close();
							system("PAUSE");
							printf("\n\nP "); Sleep(500); printf(" S "); Sleep(500); printf(" Y "); Sleep(500); printf(" C "); Sleep(500); printf(" H "); Sleep(500); printf(" O \n");
							mciSendString("play Soundtracks/Glock.mp3",NULL, 0, NULL);
							Sleep(3000);
							system("PAUSE");
							
						}
						
						else if(x==2)
						{
							mickey=1;
							chld=0;
							printf("The kid seems calmer now that you gave him the doll.\n");
							system("PAUSE");
							printf("\nThere is nothing left for you to do here so you leave.\nGoofy looks satisified.\n");
							lowsan=1;
							system("PAUSE");
							system("cls");
							GameStart();
						}
		}
		}
		
		else if(x==3)
		{
			printf("You have a mission to do and this kid is none of your business so you decide to leave.\nGoofy is upset.\n");
			lowsan=1;
			system("PAUSE");
			system("cls");
			GameStart();
		}
}
void East(){
	int x;
	if(lowsan==1)
	{
		printf("You don't have time to go back east again, you need to finish your mission.\n");
		system("PAUSE");
		system("cls");
		GameStart();
	}
	else if(lowsan!=1)
	{
	printf("You decide to go east.\n");
	printf("After about 400 meters you find a half burnt wooden cabin.\n");
	system("PAUSE");
	printf("\nYou can hear some noises coming from the cabin.\n");
	printf("\n1. Come closer to the cabin.\n2. Go back.\n");
		x=0;
		x=GetNumber2();
		system("cls");
	
		if(x==1)
		{
			printf("You apporach to the cabin.\n");
			system("PAUSE");
			printf("\nThe noises inside the cabin are actually a child crying.\n");
			printf("\n1. Enter the cabin.\n2. GO BACK.\n");
			x=0;
		x=GetNumber2();
		system("cls");
			
				if(x==1)
				Cabin();
				
				else if(x==2)
				{
				printf("You decide that the cabin isn't worth inspecting so you go back.\n");
				lowsan=1;
				system("PAUSE");
				system("cls");
				GameStart();
				}
		}
		
		else if(x==2)
		{
			printf("You decide that the cabin isn't worth inspecting so you go back.\n");
			lowsan=1;
			system("PAUSE");
			system("cls");
			GameStart();
		}
	}
}
void Photos(){
	int x;
	printf("Photos show a Vietnamese family: a man with his wife and 3 kids - 2 daughters and a son.\n");
	system("PAUSE");
	printf("\nThere are a couple of drawings near the photos, judging by the apperanece they are kids drawings.\n");
	printf("\n1. Examine the sniper rifle.\n2. Examine the bedroll.\n");
		x=0;
		x=GetNumber2();
		system("cls");
					
		if(x==1)
		Sniper();
						
		else if(x==2)
		Bedroll();
}
void Sniper(){
	int x;
	printf("You examine the sniper rifle.\n");
	printf("\nIt is a standard scoped Mosin-Nagant that Vietnamese troops use.\n");
	system("PAUSE");
	printf("\nWhile you are examining the sniper rifle, you look out of the window and notice a Vietnamese soldier.\n");
	system("PAUSE");
	printf("\nLooks like he is taking a piss and humming some kind of song.\n");
	system("PAUSE");
	printf("\nHe is probably the one stationed in the hut.\n");
	printf("\n1. Examine the photos.\n2. Examine the bedroll.\n3. Kill the soldier.\n4. Leave the hut and go back.\n");
		x=0;
		x=GetNumber4();
		system("cls");
	
		if(x==1)
		Photos();
		
		else if(x==2)
		Bedroll();
		
		else if(x==3)
		{
			printf("Vietnamese troops are the enemies and this is no exception.\nYou take the sniper rifle and put the scope on the man.\nBefore you can pull the trigger Goofy stops you.\n");
			system("PAUSE");
			printf("\nMickey:'What now?'\n");
			system("PAUSE");
			printf("\nGoofy:'Hold on, Mickey... I dont think this man is a danger to our mission.'\n");
			system("PAUSE");
			printf("\nGoofy:'Didn't you see the photos and those drawings... he's got family that's waiting for him.'\n");
			system("PAUSE");
			printf("\nGoofy:'Just like i have my family waiting for me.'\n");
			printf("\n1. This is war, and he is just another enemy that needs to be eliminated.(Kill the soldier)\n2. Maybe you are right.(Leave the hut and go back)\n");
				x=0;
				x=GetNumber2();
				system("cls");
				
				if(x==1)
				{
					printf("Goofy:'Please Mickey, we don't have to kill him.'\n");
					printf("\n1. Kill the soldier.\n2. Leave the hut and go back.\n");
					x=0;
					x=GetNumber2();
					system("cls");
					
						if(x==1)
						{
							west=1;
							mciSendString("play Soundtracks/Sniper.mp3", NULL, 0, NULL);
							Sleep(5000);
							printf("It's like the last shard of humanity you had just left your soul.\n");
							system("PAUSE");
							printf("\nGoofy has a depressing look on his face.\n");
							system("PAUSE");
							thirteen=1;
							ofstream myfile;
							myfile.open("Achievements/13.txt");
							myfile << thirteen;
							myfile.close();
							printf("\nYou leave the hut and go back to starting positon.\n");
							system("PAUSE");
							system("cls");
							GameStart();
						}
						
						else if(x==2)
						{
							printf("You hesitate abit, but decide to let go off the sniper rifle.\nGoofy is relieved.\n");
							mosan=1;
							system("PAUSE");
							printf("\nYou leave the hut and go back to the starting point.\n");
							system("PAUSE");
							system("cls");
							GameStart();
						}
				}
			
				else if(x==2)
				{
					printf("You let go off the sniper rifle and leave the hut.");
					mosan=1;
					GameStart();
				}
		}
		else if(x==4)
		{
			printf("You decide that the soldier is not a danger to the mission so you leave.\n");
			mosan=1;
			system("PAUSE");
			system("CLS");
			GameStart();
		}
}
void Bedroll(){
	int x;
	printf("You examine the bedroll.\n");
	system("PAUSE");
	printf("\nThere is nothing unusual about it\n");
	system("PAUSE");
	if(doll==0)
	printf("\nThere does appear to be an old and dusty doll next to the bedroll.\n");
	printf("\n1. Examine the photos.\n2. Examine the sniper rifle.\n");
	if(doll==0)
	{
		printf("3. Take the doll.\n");
				x=0;
				x=GetNumber3();
				system("cls");
		
			
				if(x==1)
				Photos();
				
				else if(x==2)
				Sniper();
				
				else if(x==3)
				{
					printf("For really no reason, you decide to take the old doll.\n");
					doll=1;
					system("PAUSE");
					printf("\n1. Examine the photos.\n2. Examine the sniper rifle.\n");
					
					x=0;
					x=GetNumber2();
					system("cls");
				
					
						if(x==1)
						Photos();
						
						else if(x==2)
						Sniper();
				}
	}
	
	else if(doll==1)
	{
		x=0;
		x=GetNumber2();
		system("cls");
		
			
				if(x==1)
				Photos();
				
				else if(x==2)
				Sniper();
	}
}
void West(){
	int x;
	if(mosan==1)
	{
		printf("You decide to go back west again.\n");
		system("PAUSE");
		printf("\nAfter around 150 meters a bullet passes you and hits Goofy.\n");
		system("PAUSE");
		printf("\nGoofy is dead.\n");
		GameOver();
		system("PAUSE");
	}
	else if(west==0 && mosan==0)
	{
	printf("You go west.\nAbout 300 meters towards the west you find a small hut with 1 window.\n");
	printf("\n1. Enter the hut.\n2. Go back.\n");
		x=0;
		x=GetNumber2();
		system("cls");
	
		if(x==1)
		{
			printf("There is no one inside.\nThere is 1 bedroll, a sniper rifle on the window, and a couple of photos stapled on a wall.\n");
			printf("\n1. Examine the photos.");
			printf("\n2. Examine the sniper rifle.");
			printf("\n3. Examine the bedroll.\n");
			x=0;
			x=GetNumber3();
			system("cls");
			
				if(x==1)
				Photos();
				
				else if(x==2)
				Sniper();
				
				else if(x==3)
				Bedroll();
	}
		else if(x==2)
		{
		mosan=1;
		GameStart();
		}
	}
	
	else if(west==1 && mosan==0)
	{
		printf("You have already been there and killed the soldier.\n");
		system("PAUSE");
		system("cls");
		GameStart();
	}
}
void Climb(){
	int x;
	rght=1;
	printf("You tell Goofy to stay on land and cover you while you climb up the treehouse.\n");
	system("PAUSE");
	printf("\nYou reach top and enter the treehouse. One soldier is inside and he instanly reaches for his gun.\n");
	printf("\n1. Reach for your gun and shoot him.\n2. Use your fists.\n3. Reach for your knife and stab him.\n4. (Speech) 'Wait, let's talk this through.'\n");
		x=0;
		x=GetNumber4();
		system("cls");
		
		if(x==1)
		{
		printf("You manage to reach for your gun first and kill him.\n");
		system("PAUSE");
		printf("\nThe gunshot was loud and it alerted soldiers from the other treehouses.\n");
		system("PAUSE");
		printf("\nYou and Goofy try to fight them off, but you are outnumbered.\nYou both die.\n");
		fifteen=1;
		ofstream myfile;
		myfile.open("Achievements/15.txt");
		myfile << fifteen;
		myfile.close();
		GameOver();
		system("PAUSE");
		}
		
		else if(x==3)
		{
		printf("You opt for using your knife.\n");
		system("PAUSE");
		printf("\nYou push back his gun with your leg and stab him right into the throat. He is dead.\nYou signal Goofy to climb up the ladders.\n");
		printf("\nThere is a desk here, it's probably where the documents are.\n");
		system("PAUSE");
		system("cls");
		RightTH2();
		}
		
		else if(x==2)
		{
		printf("\nYou push his gun with your foot then punch him with your right hook.\nHe takes out his knife and cuts your left shoulder.\nYou grab his hand and take his knife then you stab him.\n");
		system("PAUSE");
		printf("\nHe is dead, but you got cut.\n");
		knife++;
		system("PAUSE");
		printf("\nYou signal Goofy to climb up the ladders.\n\nThere is a desk here, it's probably where the documents are.\n");
		system("PAUSE");
		system("cls");
		RightTH2();
		}
		
		else if(x==4)
		{
		printf("...\n");
		system("PAUSE");
		printf("\n...He doesn't understand english.\n");
		system("PAUSE");
		printf("\nHe shoots you. You are dead.\n");
		sixth=1;
		ofstream myfile;
		myfile.open("Achievements/6.txt");
		myfile << sixth;
		myfile.close();
		GameOver();
		system("PAUSE");
		}		
}
void RdeadSoldier(){
	int x;
	printf("You already killed the soldier behind the treehouse.\n");
	printf("\n1. Climb up the treehouse.\n2. Go back.\n");
			x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			Climb();
			
			else if(x==2)
			North();
}
void RightTH2(){
	int x;
	rght=1;
	printf("Goofy searches through the desk while you wait outside.\nAfer 2 minutes Goofy comes out and says that there is a locked compartment.\nYou can't get through it, you need some kind of key to unlock it.\n");
	system("PAUSE");
	NoKey();
}
void BadWish(){
	int x;
	printf("You came here for the mission so you will finish the mission.\n");
	system("PAUSE");
	printf("\nYou take out your lighter and burn the documents.\n");
	system("PAUSE");
	mciSendString("stop Soundtracks/Rain.mp3", NULL, 0, NULL);
	system("cls");
	mciSendString("play Soundtracks/PTSD.mp3 repeat", NULL, 0, NULL);
	printf("2 years later, 1975.\n");
	system("PAUSE");
	printf("\nWar has finished and Mickey flew back to USA.\n");
	system("PAUSE");
	printf("\nA day hasn't passed where Mickey didn't think about Goofy.\n");
	system("PAUSE");
	printf("\nMickey had recieved dozen of medals of honors for his contributions to the war.\n");
	system("PAUSE");
	printf("\nJust worthless metal collecting dust.\n");
	system("PAUSE");
	printf("\nMickey never forgot about the last talk he had with Goofy.\n");
	system("PAUSE");
	printf("\nThe rain, the dawn, the smell.\n");
	system("PAUSE");
	printf("\nGoofy died and you didn't respect his final wish.\n");
	system("PAUSE");
	printf("\nEveryday Mickey had nightmares about that mission.\n");
	system("PAUSE");
	printf("\nUntil he decided to end them once for all.\n");
	system("PAUSE");
	twelfth=1;
	ofstream myfile;
	myfile.open("Achievements/12.txt");
	myfile << twelfth;
	myfile.close();
	printf("\nThe End\n");
	system("PAUSE");
}
void GoodWish(){
	int x;
	printf("Goofy was like a brother to Mickey.\n");
	system("PAUSE");
	printf("\nIf Goofy wants this war over, even at the cost of his life, then so be it.\n");
	system("PAUSE");
	mciSendString("stop Soundtracks/Rain.mp3", NULL, 0, NULL);
	printf("\nRain is stopping, Sun is coming up.\n");
	system("PAUSE");
	printf("\nDonald picks you up with a chopper and you explain everything to him.\n");
	system("PAUSE");
	system("cls");
	mciSendString("play Soundtracks/PTSD.mp3 repeat", NULL, 0, NULL);
	printf("10 months have passed since the war ended\n");
	system("PAUSE");
	printf("\nA proper funeral was held for Goofy.\n");
	system("PAUSE");
	printf("\nHis son, Max, he lost his father young.\n");
	system("PAUSE");
	printf("\nOver the course of the next months, Mickey would tell stories about Goofy to Max, some true, some fake to make him more heroic.\n");
	system("PAUSE");
	printf("\nMickey made sure Max had some sort of father figure.\n");
	system("PAUSE");
	printf("\nMickey had recieved dozen of medals of honors for his contributions to the war.\n");
	system("PAUSE");
	printf("\nHowever, they meant nothing to him.\n");
	system("PAUSE");
	printf("\nMickey never forgot about the last talk he had with Goofy.\n");
	system("PAUSE");
	printf("\nThe rain, the dawn, the smell.\n");
	system("PAUSE");
	printf("\nThose thoughts never left him.\n");
	system("PAUSE");
	printf("\nSoon after, the gouvernement found out who leaked the documents.\n");
	system("PAUSE");
	printf("\nBut it didn't matter, the person who leaked them committed suicide.\n");
	system("PAUSE");
	eleventh=1;
	ofstream myfile;
	myfile.open("Achievements/11.txt");
	myfile << eleventh;
	myfile.close();
	printf("\nThe End.\n");
	system("PAUSE");	
}
void Files(){  
	int x;
	printf("Goofy:'Soldiers don't follow orders blindly like some trained up dog.'\n");
	system("PAUSE");
	printf("\nGoofy:'Don't you want to know what we are destroying?'\n");
	printf("\n1. I'm either finishing the mission with or without you.\n2. Actually yes, I do want to know what i am destroying.\n");
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			{
				printf("Goofy:'Then without me it is.'\n");
				system("PAUSE");
				printf("\nMickey: 'So be it.'\n");
				system("PAUSE");
				system("cls");
				Betrayal();
			}
			
			else if(x==2)
			{
				printf("\nGoofy:'This document is a DCI... It contains all of the horrifying things that Americans are doing to the Vietnamese people.'\n");
				DCI();
			}
}
void Orders(){
	int x;
	printf("Goofy:'Mickey, good soldiers don't always follow orders.'\n");
	system("PAUSE");
	printf("\nGoofy:'We have to show these documents to people back home, its our moral obligation!'\n");
	printf("\n1. Good soldiers DO always follow orders, and I am giving you an order right now, hand over the files.\n2. There is no space for moralitiy in war, Goofy.\n3. Goofy, we are dead men if we leak those documents.\n");
			x=0;
		x=GetNumber3();
		system("cls");
			
				if(x==1)
				{
				printf("Goofy:'If you want the files, you are going to have to kill me.'\n");
				system("PAUSE");
				printf("\nMickey: If that's what I have to do to protect my country.'\n\n");
				Betrayal();
				}
				else if(x==2)
				{
					printf("Goofy:'The morality has a root deep inside us, the circumstances in which we are don't matter'\n");
					system("PAUSE");
					printf("\nGoofy:'No matter what, we can always judge what's wrong or right.'\n");
					system("PAUSE");
					printf("\nGoofy:'And giving these documents to the press is the right thing, Mickey.'\n");
					printf("\n1. We have no right to take things in our hands, this war is not something solveable by a pair of pawns.\n2. We aren't the same kind of judge, Goofy.\n3. And how would you hand it over to the press?\n");
					
							x=0;
							x=GetNumber3();
							system("cls");
						
								if(x==1)
								Pawns();
								
								else if(x==2)
								{
									printf("Goofy:'I am giving you these documents over my dead body.'\n");
									system("PAUSE");
									printf("\nMickey:'I will protect my country against all enemies, forgein or domestic.'\n");
									system("PAUSE");
									system("cls");
									Betrayal();
								}
								
								else if(x==3)
								Press();
						
				}
				
				else if(x==3)
				Life();
				
}

void Why(){
	int x;
	printf("Goofy:'Because this document is a DCI...'\n");
	system("PAUSE");
	printf("\nGoofy:'I read it, Mickey. Do you have any idea what the Americans are doing with the Vietnamese people?'\n");
	printf("\n1. We can't let that infromation get out, hand it over.\n2. Goofy, we are soldiers, we don't question, we act.\n3. What do you think will happen with USA if that infromation gets out, think Goofy, think.\n");
		x=0;
		x=GetNumber3();
		system("cls");
		
			if(x==1)
			Moral();
			
			else if(x==2)
			Orders();
			
			else if(x==3)
			USA();
	
}
void Destroy(){
	int x;
	printf("Mickey: 'Finally came to your senses?'\n");
	system("PAUSE");
	printf("\nGoofy has an empty look on his face, no expression what so ever.\n");
	system("PAUSE");
	printf("\nHe hands over the files to you.\n");
	system("PAUSE");
	printf("\nYou don't even bother reading it and lit it on fire immediately.\n");
	system("PAUSE");
	mciSendString("stop Soundtracks/Rain.mp3", NULL, 0, NULL);
	printf("\nSun is coming up...\nRain is stopping...\n");
	system("PAUSE");
	printf("\nDonald will be any moment here to pick you up.\n");
	system("PAUSE");
	printf("\nAnother successful mission\n");
	system("PAUSE");
	if(west!=1)
	{
	printf("\nThere is something reflecting the sun from the west.\n");
	system("PAUSE");
	printf("\nIt's a...\n");
	mciSendString("play Soundtracks/Sniper.mp3", NULL, 0, NULL);
	Sleep(5000);
	printf("\n...A sniper rifle.\n");
	system("PAUSE");
	printf("\nGoofy is dead.\n");
	}
	if(west==1 && chld==1)
	{
		printf("\nThere are some noises in a bush behind the Goofy.\n");
		system("PAUSE");
		printf("\nYou see a ");
		mciSendString("play Soundtracks/Glock.mp3", NULL, 0, NULL);
		Sleep(3500);
		printf("gun.\n");
		system("PAUSE");
		printf("\nIt's the child that you let go.\nHe followed you here.\n");
		system("PAUSE");
		printf("\nGoofy is dead.\n");
		GameOver();
		system("PAUSE");
	}
	else if(west==1 && chld!=1)
	{
		printf("\nYou and Goofy sit by the tree and wait.\n");
		system("PAUSE");
		printf("\nAfter 5 minutes Donald is coming down with the chopper.\n");
		system("PAUSE");
		printf("\nYou and Goofy get on the chopper and leave.\n");
		system("PAUSE");
		system("cls");
		EpilogDestroy();
	}
	
}
void Family(){
	int x;
	printf("Goofy:'My family lives?'\n");
	system("PAUSE");
	printf("\nMickey:'If we leak those documents they will not just go for us, they will get every single person connected to us.'\n");
	system("PAUSE");
	printf("\nMickey:'You want to see your family die?'\n");
	system("PAUSE");
	printf("\nGoofy clutches the documents.\nGoofy:'Time to finish the mission.'\n");
	Destroy();
	
}
void Life(){
	int x;
	printf("Goofy:'If I have to die for this war to end then I would happily do so.'\n");
	printf("\n1. So Max grows up without a father?\n2. Do you really think that the gouvernement would let us just give the files away?\n");
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1){
			printf("Goofy:'...'\n");
			system("PAUSE");
			printf("\nGoofy looks down and stays silent.\n");
			system("PAUSE");
			printf("\nMickey:'Goofy the best outcome for your family is to destroy the documents.'\n");
			system("PAUSE");
			printf("\nAfter a couple of seconds Goofy looks up.\nGoofy:'It's time to finish the mission.'\n");
			Destroy();
			}
			
			else if(x==2)
			{
				printf("Goofy: 'I don't care about the fucking gouvernement, I will do what is morally right and show everyone in the USA these documents.'\n");
				system("PAUSE");
				printf("\nGoofy:'I had enough of this, who's side are you on?! On people who threw us here or the families that wait us home?'\n");
				printf("\n1. Gouvernement.\n2. Goofy\n");
					x=0;
					x=GetNumber2();
					system("cls");
							
							if(x==1)
							{
								printf("Mickey:'I swore to protect the country, against all enemies, forgein or domestic.'\n");
								system("PAUSE");
								system("cls");
								Betrayal();
							}
							
							else if(x==2)
							GoodEnding();
			}
}
void Worse(){
	int x;
	printf("Goofy:'You mean worse for the USA?'\n");
	printf("\n1. Yes, those documents could bring it to ruin.\n2. No, I mean worse for us.\n");
		x=0;
		x=GetNumber2();
		system("cls");
			
			if(x==1)
			USA();
			
			else if(x==2)
			{
			printf("Goofy:'How so?'\n");
			printf("\n1. If we leak those documents our lives will be edangered.\n2. If we leak those documents your family lives will be edangered.\n");
				x=0;
				x=GetNumber2();
				system("cls");
				
					if(x==1)
					Life();
					
					else if(x==2)
					Family();
			}
}
void Treason(){
	int x;
	printf("Goofy:'And you wouldn't be a war criminal for killing me?'\n");
	system("PAUSE");
	printf("\nGoofy:'I'd rather be a war criminal than see anyone else die in this war'\n");
	system("PAUSE");
	printf("\nGoofy:'Besides, there is a way to do this so no one knows it was us.'\n");
	printf("\n1. How?\n2. Even if no one knew it was us, I would know, I would know that I let my country get destroyed.\n");
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			Press();
			
			else if(x==2)
			{
				printf("Goofy:'Your consciousness would burn over something like that and it doesn't bother you when you kill someone?'\n");
				system("PAUSE");
				USA();
			}
		
			
}
void Pawns(){
	int x;
	printf("Goofy:'And pawns have the ability to become the strongest piece on the board!'\n");
	system("PAUSE");
	printf("\nGoofy:'Mickey we have that ability now, we have the most power now, we can end this war right now.'\n");
	printf("\n1. This war can't end yet.\n2. Then how do you propose to do it?\n3. The only thing that can end now is your life.\n");
		x=0;
		x=GetNumber3();
		system("cls");
		
			if(x==1)
			PreBetrayal();
			
			else if(x==2)
			Press();
			
			else if(x==3)
			{
				printf("Goofy:'Then look straight at my eyes when you end it.'\n");
				system("PAUSE");
				printf("\nGoofy:'Tell my Maxie that i love him'\n");
				system("PAUSE");
				printf("\nGoofy: 'Just know another thing.'\n");
				system("PAUSE");
				system("cls");
				Betrayal();
				
			}
	
	
}
void USA(){
	int x;
	printf("\nGoofy:'I would rather see my country burn than see another soul lost in this war.'\n");
	system("PAUSE");
	printf("\nGoofy:'Either we end this war now, or you kill me trying to not end it.'\n");
	system("PAUSE");
	printf("\nGoofy:'And if you choose the latter, then you better look me in the eye when you do it'\n");
	printf("\n1. Goofy\n2. USA\n");
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			{
				printf("Mickey:'Killing you is the same as killing myself.'\n");
				system("PAUSE");
				printf("\nMickey:'I had enough of killing... there is so much blood on my hands, i'm going crazy'\n");
				system("PAUSE");
				system("cls");
				GoodEnding();
				
			}
			else if(x==2)
			{
				printf("Mickey:'I will not destroy the very country i'm fighting for, i'm sorry Goofy'\n");
				system("PAUSE");
				system("cls");
				Betrayal();
			}
}
void Achievements(){
	int br,c;
	float a,y;
	br=0;
	ifstream myfile;
	myfile.open("Achievements/first.txt");
	myfile >> first;
	myfile.close();
	if(first==1)
	{
	printf("-- A 'hero' - Kill Goofy\n\n");
	br++;
	}
	////////////////////////////////////////
	
	myfile.open("Achievements/second.txt");
	myfile >> second;
	myfile.close();
	if(second==1)
	{
	printf("-- How can I prevent this? - Goofy gets killed by a sniper rifle.\n\n");
	br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/third.txt");
	myfile >> third;
	myfile.close();
	if(third==1)
	{
	printf("-- Treason - Leak the documents.\n\n");
	br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/4.txt");
	myfile >> fourth;
	myfile.close();
	if(fourth==1)
	{
		printf("-- Cool stick - Get bit by a snake and die.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/5.txt");
	myfile >> fifth;
	myfile.close();
	if(fifth==1)
	{
		printf("-- Gamechanger - Find the documents.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/6.txt");
	myfile >> sixth;
	myfile.close();
	if(sixth==1)
	{
		printf("-- Speech 100 - Get killed because you tried to talk your way out.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/7.txt");
	myfile >> seventh;
	myfile.close();
	if(seventh==1)
	{
		printf("-- Double Kill - Kill both Goofy and the child.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/8.txt");
	myfile >> eight;
	myfile.close();
	if(eight==1)
	{
		printf("-- Psychopath - Kill the child after you gave him a doll.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/9.txt");
	myfile >> ninth;
	myfile.close();
	if(ninth==1)
	{
		printf("-- Caretaker - Calm the kid by giving him a doll.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/10.txt");
	myfile >> tenth;
	myfile.close();
	if(tenth==1)
	{
		printf("-- Misson complete - Destroy the documents.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/11.txt");
	myfile >> eleventh;
	myfile.close();
	if(eleventh==1)
	{
		printf("-- Last wish - Respect Goofy's last wish.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/12.txt");
	myfile >> twelfth;
	myfile.close();
	if(twelfth==1)
	{
		printf("-- Man of commitment - Ignore Goofy's last wish.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/13.txt");
	myfile >> thirteen;
	myfile.close();
	if(thirteen==1)
	{
		printf("-- Just another Viet - Kill the soldier in the west.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/14.txt");
	myfile >> fourteen;
	myfile.close();
	if(fourteen==1)
	{
		printf("-- I guess it's fine - Get the best possible ending.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/15.txt");
	myfile >> fifteen;
	myfile.close();
	if(fifteen==1)
	{
		printf("-- Is this a stealth game? - Get killed because you used your gun.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	myfile.open("Achievements/16.txt");
	myfile >> sixteen;
	myfile.close();
	if(sixteen==1)
	{
		printf("-- Learn to dodge - Become too wounded that it results in a death.\n\n");
		br++;
	}
	///////////////////////////////////////
	
	if(first==1 && second==1 && third==1 && fourth==1 && fifth==1 && sixth==1 && seventh==1 && eight==1 && ninth==1 && tenth==1 && eleventh==1 && twelfth==1 && thirteen==1 && fourteen==1 && fifteen==1 && sixteen==1)
	{
		printf("-- Completionist - Unlock all achievements.\n\n");
		br++;
	}
	///////////////////////////////////////
	y=br;
	a=(y/17)*100;
	c=a;
	printf("\nYOU HAVE UNLOCKED %d OUT OF 17 ACHIEVEMENTS!(%d percent)\n",br,c);
	system("PAUSE");
	system("cls");
	Intro();
}
void GoodEnding(){
	int x;
	printf("Mickey:'You are right Goofy... This war is pointless, I felt empty ever since i joined as a soldier.'\n");
	system("PAUSE");
	printf("\nMickey:'Let's do as you say.'\n");
	system("PAUSE");
	printf("\nGoofy:'I'm glad you agree with me, Mick, beer is on me when we get back home'\n");
	printf("Mickey:'I'll remember that.'\n");
	system("PAUSE");
	mciSendString("stop Soundtracks/Rain.mp3", NULL, 0, NULL);
	printf("\nSun is coming up...\nRain is stopping...\n");
	system("PAUSE");
	printf("\nDonald will be any moment here to pick you up.\n");
	system("PAUSE");
	printf("\nYou feel peaceful\n");
	system("PAUSE");
	if(west!=1)
	{
	printf("\nThere is something reflecting the sun from the west.\n");
	system("PAUSE");
	printf("\nIt's a...\n");
	mciSendString("play Soundtracks/Sniper.mp3", NULL, 0, NULL);
	Sleep(5000);
	printf("\n...A sniper rifle.\n");
	system("PAUSE");
	printf("\nGoofy is dead.\n");
	
	second=1;
	ofstream myfile;
	myfile.open("Achievements/second.txt");
	myfile << second;
	myfile.close();
	
	system("PAUSE");
	GameOver();
	system("PAUSE");
	}
	if(west==1 && chld==1)
	{
		printf("\nThere are some noises in a bush behind the Goofy.\n");
		system("PAUSE");
		printf("\nYou see a ");
		mciSendString("play Soundtracks/Glock.mp3", NULL, 0, NULL);
		Sleep(3500);
		printf("gun.\n");
		system("PAUSE");
		printf("\nIt's the child that you let go.\nHe followed you here.\n");
		system("PAUSE");
		printf("\nGoofy is dead.\n");
		GameOver();
		system("PAUSE");
	}
	else if(west==1 && chld!=1)
	{
		printf("\nYou and Goofy sit by the tree and wait.\n");
		system("PAUSE");
		printf("\nAfter 5 minutes Donald is coming down with the chopper.\n");
		system("PAUSE");
		printf("\nGoofy explains everything to Donald.\n");
		system("PAUSE");
		system("cls");
		Epilog();
	}
}
void Press(){
	int x;
	printf("Goofy:'We can falsificate these documents to give in for the mission, and send the originals to the press.'\n");
	system("PAUSE");
	printf("\nGoofy:'Donald can help us with the falsification, and we anonymously send it to press.'\n");
	system("PAUSE");
	printf("\nGoofy:'They will never know it was us who sent it, and this pointless war will be over.'\n");
	system("PAUSE");
	system("cls");
	printf("If you do this, USA will be under heavy blacklash and would possibly never recover.\nIt will be charged heavily for the war and kicked out of NATO.\n");
	system("PAUSE");
	printf("\nYou can destroy the very country you are fighting for or you can eliminate Goofy right now and be a hero, saving the whole country.\n");
	printf("\n1. Send the documents to the press.\n2. Kill Goofy\n");
		x=0;
		x=GetNumber2();
		system("cls");
			
			if(x==1)
			GoodEnding();
			
			else if(x==2)
			{
			printf("Mickey: 'I'm sorry about this Goofy, but I am not a war criminal'\n");
			Betrayal();
			}
}
void Moral(){
	int x;
	printf("Goofy:'But we have to, it's our moral obligation!\n");
	system("PAUSE");
	printf("\nGoofy:'Good soldiers don't always follow orders, Mick, and this is one of them.'\n");
	printf("\n1. Maybe you are right... how do you plan to get the files to the press?\n2. Good soldiers DO always follow orders, and i'm giving you an order right now. Hand over the files.\n");
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			Press();
			
			else if(x==2)
			{
				printf("Goofy:'If you want the files, you are going to have to kill me.'\n");
				system("PAUSE");
				printf("\nMickey: If that's what I have to do to protect my country.'\n\n");
				Betrayal();
			}
}
void War(){
	int x;
	printf("Goofy: 'This war isn't holding you together, it's destroying you like everyone else.'\n");
	system("PAUSE");
	printf("\nGoofy:'Every day thousands of people die, and for what?'\n");
	system("PAUSE");
	printf("\nGoofy:'It's not true that you don't have anyone home, what am I to you, what is Donald to you?'\n");
	system("PAUSE");
	printf("\nGoofy:'We can stop this bloodshed right now, Mickey and I need you to help me.'\n");
	printf("\n1. The USA will be done for if we leak those documents.\n2. Enough of this, either we are destroying those documents or I will destroy them without you.\n3. You are right... how can we do it?\n");
		x=0;
		x=GetNumber3();
		system("cls");
			
			if(x==1)
			USA();
			
			else if(x==2)
			{
				printf("Goofy:'Then without me it is'\n");
				printf("\nMickey:'Wrong choice.'\n");
				Betrayal();
			}
			else if(x==3)
			Press();
}
void PreBetrayal(){
	int x;
	printf("Goofy: 'This war can't end? What the hell are you talking about Mickey?'\n");
	printf("\n1. There is nothing back for me home, this war is the only thing that keeps me together.\n2. It's pointless to talk about it, hand over the files.\n");
		x=0;
		x=GetNumber2();
		system("cls");
		
		if(x==1)
		War();
		
		else if(x==2)
		{
		printf("Goofy:'Over my dead body.'\n");
		printf("\n1. (Point gun at the Goofy again) So be it.\n2. Goofy you need to come to your senses, we can't let that infromation go out.\n");
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			Betrayal();
			
			else if (x==2)
			Moral();
		}
}
void DCI(){
	int x;
	printf("\nGoofy:'If people back home see this, support for this pointless war will collapse!'\n");
	system("PAUSE");
	printf("\nGoofy:'I will get to see my wife again, i'll get to see Max again.'\n");
	system("PAUSE");
	printf("\nGoofy:'Mickey we'll get to go home.'\n");
	printf("\n1. This war can't end yet.\n2. And how would you get us home?\n3. It would only make things worse, Goofy.\n");
		x=0;
		x=GetNumber3();
		system("cls");
		
			if(x==1)
			PreBetrayal();
			
			else if(x==2)
			Press();
			
			else if(x==3)
			Worse();
			
	
}
void Betrayal(){
	int x;
	mciSendString("play Soundtracks/Betrayal.mp3 repeat", NULL, 0, NULL);
	printf("Goofy:'You are not the same man who stood as my best man in my wedding.'\n");
	system("PAUSE");
	printf("\nYour mind is empty, you can't even hear what Goofy is talking about.\n");
	system("PAUSE");
	printf("\nBrainwashed by the country who's war is fought for nothing.\n");
	system("PAUSE");
	printf("\nBrainwashed by the people who sent you 8500 miles from home to die.\n");
	system("PAUSE");
	printf("\nWar is the only thing that gives you purpose in this empty life.\n");
	system("PAUSE");
	printf("\nYou don't see Goofy anymore, you see an enemy to your country.\n");
	system("PAUSE");
	printf("\nAn enemy to the war.\n");
	system("PAUSE");
	printf("\nAn enemy to your purpose.\n");
	system("PAUSE");
	system("cls");
	printf("There is only one thing left for you to do now.\n");
	system("PAUSE");
	printf("\n1. Pull the trigger.\n2. Pull the trigger.\n3. Pull the trigger.\n");
	
	first=1;
	ofstream myfile;
	myfile.open("Achievements/first.txt");
	myfile << first;
	myfile.close();
	
	x=GetNumber3();
	
}
void Unlock(){
	int x;
	printf("You give the key to Goofy and it fits perfectly.\n");
	system("PAUSE");
	printf("\nAs Goofy goes through the documents you watch the sky...\n");
	system("PAUSE");
	printf("\nIt might rain soon.\n");
	system("PAUSE");
	system("CLS");
	if(mddle==1)
	{
	printf("\nAfter some time Goofy exits from the treehouse with the documents.\nGoofy: 'Let's get to extraction point then we will talk.'\n");
	system("PAUSE");
	printf("\nYou both start running west.\n");
	fifth=1;
	ofstream myfile;
	myfile.open("Achievements/5.txt");
	myfile << fifth;
	myfile.close();
	system("PAUSE");
	Endgame();
	}
	
	else if(mddle==0)
	{
		printf("Suddenly, you hear footsteps coming towards you.\n");
		system("PAUSE");
		printf("\nBefore you are able to react, gunshots start flying by your head.\n");
		system("PAUSE");
		printf("\nYou take cover and start shooting, in the meantime Goofy found the documents.\n");
		system("PAUSE");
		printf("\n1. Run away\n2. Stay and fight the soldiers off.\n");
		
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			{
				printf("In the heat of the moment, you decide the best decision to make is to run away.\nYou and Goofy climb down from behind the treehouse and start running west.\n");
				system("PAUSE");
				printf("\nA couple gunshots pass by you, and 1 actually hits you in your leg.\n");
				system("PAUSE");
				if(knife==1)
				{
					printf("\nDue to your previous wound from a knife and this wound from the gunshot you fall to the ground... and die.\n");
					sixteen=1;
					ofstream myfile;
					myfile.open("Achievements/16.txt");
					myfile << sixteen;
					myfile.close();
					GameOver();
					system("PAUSE");
				}
				
				else if(knife==0)
				{
					printf("\nThe wound isn't lethal by itself so you manage to escape.\n");
					Endgame();
				}
			}
			
			else if(x==2)
			{
				printf("You and Goofy take cover in the treehouse and shoot at the enemies.\n");
				system("PAUSE");
				printf("\nYou manage to take some soldiers out before getting shot multiple times.\n");
				system("PAUSE");
				printf("\nYou died.\n");
				GameOver();
				system("PAUSE");
			}
	}
}
void LeftKey(){
	int x;
	if(foundkey==0)
	printf("You search trough the bedrolls in the left treehouse and find a key in one of them.\nMickey:'It must be this one'\n");
	
	else if(foundkey==1)
	printf("There is nothing here but bedrolls and a couple of vietnamese magazines.\n");
	
	printf("\n1. Go to the middle treehouse.\n2. Go to the right treehouse.\n");
	foundkey=1;
	
		x=0;
		x=GetNumber2();
		system("cls");
	
		if(x==1)
		{
		if(mddle==1)
		MiddleKey();
		
		else if(mddle==0)
		MiddleTH();
		}
		else if(x==2)
		Unlock();
}
void RightKey(){
	int x;
	printf("There is no key here, only a desk with the documents.\n");
	printf("\n1.Go to the middle treehouse.\n2.Go to the left treehouse\n");
	
		x=0;
		x=GetNumber2();
		system("cls");
	
		if(x==1)
		MiddleKey();
		
		else if(x==2)
		{
		if(lft==1)
		LeftKey();
		
		else if(lft==0)
		LeftTH();
		}
}
void MiddleKey(){
	int x;
	printf("There is nothing here but the rotting bodies.\n");
	printf("\n1. Go to the right treehouse.\n2. Go to the left treehouse.\n");
	
		x=0;
		x=GetNumber2();
		system("cls");
		
	if(foundkey==0)
	{
		if(x==1)
		RightKey();
		
		else if(x==2)
		{
		if(lft==1)
		LeftKey();
		
		else if(lft==0)
		LeftTH();
		}
	}
	
	else if(foundkey==1)
	{
		if(x==1)
		Unlock();
		
		else if(x==2)
		LeftKey();
	}
}
void Endgame(){
	int x;
	mciSendString("play Soundtracks/Rain.mp3 repeat", NULL, 0, NULL);
	
	printf("\nIt's starting to rain...\n");
	system("PAUSE");
	printf("\nYou and Goofy run for 5 minutes towards west to get to your extraction point.\n");
	system("PAUSE");
	if(rush==1)
	{
		printf("\nAs you are running, you notice that Goofy is very sweaty and that he can barely breathe\n");
		system("PAUSE");
	}
	printf("\nThe extraction point is a small hilly place with 2 trees. The camp from here is barely visible.\n");
	system("PAUSE");
	printf("\nThe dawn is upon us.\n");
	system("PAUSE");
	system("cls");
	if(rush==0)
	{
	printf("Mickey:'Did you get the documents, Goofy?'\nGoofy:'I did... But there was something else.'\n");
	printf("\n1. Like what?\n2. What are you talking about?\n3. Hand over the files, Goofy.\n");
	
			x=0;
		x=GetNumber3();
		system("cls");
	
		if(x==1 || x==2) //Like what?
		{
		printf("Goofy: 'It's... a DCI, I read it Mickey. Do you have any idea what the Americans are doing with the Vietnamese people?'\n");
		system("PAUSE");
		DCI();
		}
		
		else if(x==3) //Hand them over.
		{
			printf("Goofy: 'No, Mickey, you need to hear me out'\n");
			printf("\n1. There is nothing to hear you about, we need to destroy those files no matter what they are.\n2. Alright, we have time.\n3. Hand over those files right now.\n");
			x=0;
			x=GetNumber3();
			system("cls");
			if(x==1)
			{
				Files();
			}
			else if(x==2)
			{
				printf("Goofy:'This document is a DCI... I read it Mickey.'\n");
				system("PAUSE");
				printf("\nGoofy:'In here are all the horrifying things that Americans are doing with the Vietnamese people.'\n");
				system("PAUSE");
				system("cls");
				DCI();
			}
			else if(x==3) //HAND THEM OVER
			{
				printf("Goofy: 'I can't give you these files, Mick. We can't destroy this.'\n");
				printf("\n1. And why's that?\n2. We are on a mission here, we need to follow orders no matter what.\n3. Hand over those files (Point gun at Goofy)\n");
				x=0;
				x=GetNumber3();
				system("cls"); //GUN
				
				if(x==1)
				Why();
				
				else if(x==2)
				Orders();
		
				else if(x==3)
				{
					printf("Goofy: 'You would kill me? Just so you can finish a mission in a war that we didn't sign up to go in?'\n");
					printf("\n1. You are a threat to the mission, if I need to kill you to finish the mission i will do so.\n2. (Lower your gun) I'm... sorry Goofy, this war is getting to my head.\n'");
						x=0;
						x=GetNumber2();
						system("cls");
						if(x==1)
						{
							Betrayal();
						}
						else if(x==2) //LOWER GUN
						{
							printf("Goofy: 'I know Mickey, this war is destroying me aswell, but it could end right now, with these documents.'\n");
							system("PAUSE");
							printf("\nGoofy: 'This document is DCI... I read it Mickey. In this are all the horrfiying things that Americans are doing with the Vietnamese.'\n");
							printf("\n1. And how exactly do you think they can end the war?.\n2. The only thing we can do with those documents is to destroy them, it's our mission.\n");
							x=0;
							x=GetNumber2();
							system("cls");
							
							if(x==1)
							DCI();
							
							else if(x==2) {
						
							printf("Goofy:'We can't destroy these documents, we have to lead them to the press.'\n");
							system("PAUSE");
							printf("\nGoofy:'Once the people back home see this, the support for this pointless war will collapse, i'll get to see my family again'\n");
							printf("\n1. That's treason, if we do that we would be declared war criminals.\n2. We are only pawns in this war, we can't change anything in this war.\n3. All the more reason to destroy those documents, this war can't end yet.\n");
								x=0;
								x=GetNumber3();
								system("cls");
								
								if(x==1)
								Treason();
								
								else if(x==2)
								Pawns();
								
								else if(x==3)
								PreBetrayal();
							}
						}
				}
			}
		}
	}
	
	else if(rush==1)
	{
	printf("Mickey:'Did you get the documen-'\n");
	mciSendString("play Soundtracks/Fall.mp3", NULL, 0, NULL);
	Sleep(3000);
	printf("\nGoofy fell to the ground.\n");
	mciSendString("play Soundtracks/Heart.mp3 repeat", NULL, 0, NULL);
	system("PAUSE");
	printf("\nMickey:'Goofy, what's wrong with you?'");
	printf("\nGoofy:'That last soldier... he got me... my leg..'\n");
	system("PAUSE");
	printf("\nYou notice blood halfway from his knee and hip.\nHe's going to bleed out any minute.\n");
	system("PAUSE");
	printf("\nGoofy:'I.. didn't even notice.. from all of the adrenaline..\n");
	system("PAUSE");
	printf("\nMickey:'Don't stress out, Donald will be here to pick us up any minute now.'\n");
	system("PAUSE");
	printf("\nGoofy:'In case.. I don't make it.. these documents.. they are DCI.. they can end the war... please lead them to the press.'\n");
	system("PAUSE");
	printf("\nMickey:'But Goofy that is treason, the USA would be destroyed if we leaked that.'\n");
	system("PAUSE");
	printf("\nGoofy:'Please Mickey... it's my dying wish.. end the war.. and tell my Maxie..'\n");
	Sleep(3000);
	printf("\n..that i love him.\n");
	system("PAUSE");
	mciSendString("stop Soundtracks/Heart.mp3", NULL, 0, NULL);
	Sleep(1500);
	printf("\nGoofy is dead.\n");
	system("PAUSE");
	system("cls");
	printf("You take the documents from his cold dead hands.\n");
	system("PAUSE");
	printf("\nA single tear rolls down from Mickey's face.\n");
	system("PAUSE");
	printf("\nYou take a look at the documents.\nIn it are all of the horrifying things that Americans are doing with the Vietnamese people.\n");
	printf("\n1. Respect Goofy's last wish. (Give the documents to the press)\n2. Finish the mission. (Destroy the documents)\n");
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			GoodWish();
			
			else if(x==2)
			BadWish();
		}
}
void NoKey(){
	int x;
	printf("\nThe key must be somewhere around this base...\n");
	printf("\n1. Go to the middle treehouse.\n2. Go to the left treehouse.\n");
	
		x=0;
		x=GetNumber2();
		system("cls");
	
		if(x==1)
		{
		if(mddle==1)
		MiddleKey();
		
		else if(mddle==0)
		MiddleTH();
		}
		
		else if(x==2)
		{
		if(lft==1)
		LeftKey();
		
		else if(lft==0)
		LeftTH();
		}
	
}
void Bridge(){
	int x;
	printf("You decide to enter the treehouse and wait for the remaining 2 soldiers to come.\n");
	system("PAUSE");
	printf("\nAfter about 30 seconds you can hear footsteps.\nThey are both running towards you\n");
	system("PAUSE");
	printf("\nYou send a signal to Goofy to go on 3.\n");
	system("PAUSE");
	printf("\n3...\n");
	system("PAUSE");
	printf("\n2...\n");
	system("PAUSE");
	printf("\nYou peek out and shoot at almost the same time and kill both of them.\n");
	system("PAUSE");
	printf("\nMickey: 'That should be all of them.'\nGoofy: 'We don't know that for certain, i will go and check for the documents in the last treehouse.'\n");
			
			system("PAUSE");
			system("CLS");
			printf("\nAfter 2 minutes Goofy comes out and says that there is a desk with locked compartment.\nYou can't get through it, you need some kind of key to unlock it.");
			NoKey();
	
	
}
void Rush(){
	int x;
	printf("Without a second thought you signal Goofy to follow you to the last treehouse.\n");
	system("PAUSE");
	printf("\nWhen you reach the middle of the bridge you see one of the soldiers on land beside the last treehouse.\n");
	system("PAUSE");
	printf("\nYou successfully take him out before he can shoot.\n");
	system("PAUSE");
	printf("\nGoofy finds the last soldier alive in the treehouse and he manages to kill him on his own.\n");
	
	rush++;
	
	system("PAUSE");
	printf("\nMickey: 'That should be all of them.'\nGoofy: 'We don't know that for certain, i will go and check for the documents in the last treehouse.'\n");
			
			system("PAUSE");
			system("CLS");
			printf("\nAfter 2 minutes Goofy comes out and says that there is a locked compartment.\nYou can't get through it, you need some kind of key to unlock it.");
			NoKey();
}
void RightTH(){
	int x;
	printf("You and Goofy sneak up to the right treehouse.\n");
	if(soldier==0)
	{
	printf("There is one soldier smoking behind the treehouse.\nYou don't see anyone else besides him.\n");
	printf("\n1. Shoot the soldier.\n2. Sneak up behind the soldier and take him out.\n3. Climb up the treehouse.\n4. Go back.\n");
	
		x=0;
		x=GetNumber4();
		system("cls");
	
		if(x==1)
		{
			printf("You take out your gun and shoot the soldier.\n");
			system("PAUSE");
			printf("\nThe gunshot was loud and it alerted soldiers from the other treehouses.\n");
			system("PAUSE");
			printf("\nYou and Goofy try to fight them off, but you are outnumbered.\nYou both die.\n");
			fifteen=1;
			ofstream myfile;
			myfile.open("Achievements/15.txt");
			myfile << fifteen;
			myfile.close();
			GameOver();
			system("PAUSE");
		}
		
		else if(x==2)
		{
			printf("You go around the treehouse and sneak up behind the soldier.\n");
			system("PAUSE");
			printf("\nYou take out your knife and take him out silently.\n");
			soldier++;
			printf("\n1. Climb up the treehouse.\n2. Go back.\n");
			
			x=0;
			x=GetNumber2();
			system("cls");
				
				if(x==1)
				Climb();
				
				else if(x==2)
				North();
		}
		
		else if(x==3)
		{
			printf("You attempt to climb up the treehouse but the soldier behind the treehouse notices you and shoots at you.\nYou died.\n");
			GameOver();
			system("PAUSE");
		}
		
		else if(x==4)
		North();
	}
		
		else if(soldier==1)
		RdeadSoldier();
}
void Surrender(){
	int x;
	mciSendString("play Soundtracks/Madness.mp3 repeat", NULL, 0, NULL);
	printf("You cowardly drop your gun.\n");
	system("PAUSE");
	printf("\nGoofy didn't.\n");
	system("PAUSE");
	printf("\nGoofy gets shot and you get knocked out.\n");
	system("PAUSE");
	printf("\nYou wake up.\nYour hands are tied but not your legs and there is one soldier guarding you.\n");
	system("PAUSE");
	printf("\nThere is a desk next to you with various documents on it.\nThere is probably the document we were ordered to destroy here, you think to yourself.\n");
	system("PAUSE");
	if(knife==1)
	{
		printf("\nYou are still bleeding from the wound you got.\n");
		system("PAUSE");
	}
	printf("\nYou think of Goofy and regret the decision you acted so cowardly.\n");
	printf("\n1. Ask the guard for water.\n2. Do nothing\n");
	
		x=0;
		x=GetNumber2();
		system("cls");
	
	if(x==1)
	{
	printf("\nYou ask the guard for some water, he smirks at you and, comes closer and burns his cigarette on your face.\n");
	system("PAUSE");
	printf("\nCigarette...\n");
	system("PAUSE");
	printf("\nHe has a lighter?\n");
	printf("\n1. Good soldiers always follow orders. \n2. Good soldiers always follow orders.\n3. Good soldiers always follow orders.\n");
		x=0;
		x=GetNumber3();
		system("cls");
	
	if(x==1 || x==2 || x==3)
	{
	printf("\nYou headbutt the guard and he falls to the ground.\n");
	system("PAUSE");
	printf("\nThen you stomp on his head until he is dead\n");
	system("PAUSE");
	printf("\nYou try finding the lighter and find fire sticks instead.\n");
	system("PAUSE");
	printf("\nYou take a fire stick with your teeth and use the friction of the wall to set it on fire.\n");
	system("PAUSE");
	printf("\nYou throw it at the desk and in 10 seconds every document is on fire.\n");
	system("PAUSE");
	printf("\nIn another 10 seconds you are shot in your back\n");
	system("PAUSE");
	printf("\nAs you are falling to the ground you expect your life to flash before your eyes.\n");
	system("PAUSE");
	printf("\nBut there is nothing but emptiness\n");
	system("PAUSE");
	printf("\nYou are dead but the mission is complete.\n");
		GameOver();
		system("PAUSE");
		
	}
}
	else if(x==2)
	{
	printf("\nYou just lay there and do nothing.\n");
	system("PAUSE");
	printf("\nYou think about Goofy...\n");
	system("PAUSE");
	printf("\nAfter 15 minutes a soldier that looks like a superior officer comes by.\n");
	system("PAUSE");
	printf("\nHe points a pistol at your face and shoots.\n");
	GameOver();
	system("PAUSE");
}
}
void MiddleTH(){
	int x;
	printf("\nYou and Goofy sneak up to the middle treehouse.\nThere are 4 or 5 soldiers in the treehouse playing some kind of card game.\n");
	printf("\n1. Throw a grenade in the room.\n2. Go back\n");
	
		x=0;
		x=GetNumber2();
		system("cls");
		
	if(lft==1 || rght==1)
	{
	if(x==1)
	{
	
		mddle++;
		if(exm==0)
		{
		printf("Shooting doesn't seem as a good option here so you decide to throw a grenade.\nYou take the pin out and hold it for 2 seconds.\nThen you throw it in the room and it explodes before anyone can react.\n");
		system("PAUSE");
		printf("\nYou count 5 bodies.\n");
		system("PAUSE");
		if(rght==0)
		{
		printf("\nThere is 1 treehouse left so you start going there immediately.\n");
		system("PAUSE");
		printf("\nWhen you reach the middle of the bridge you see one more soldier on land beside the last treehouse.\n");
		system("PAUSE");
		printf("\nYou successfully take him out before he can shoot.\n");
		system("PAUSE");
		printf("\nGoofy finds one soldier aswell in the treehouse and he manages to kill him on his own.\n");
		
		rush++;
		
		system("PAUSE");
		printf("\nMickey: 'There could be more of them, i'll cover you.'.'\nGoofy: 'Alrigt, I will go and check for the documents in the last treehouse.'\n");
				
				system("PAUSE");
				system("CLS");
				printf("\nAfter 2 minutes Goofy comes out and says that there is a locked compartment.\nYou can't get through it, you need some kind of key to unlock it.");
				NoKey();
		}
		else if(rght==1)
		{
			if(foundkey==0)
			printf("\nThere is no key here.\n");
			printf("\n1. Go to the left treehouse.\n2. Go to the right treehouse.\n");
				x=0;
				x=GetNumber2();
				system("cls");
				
					if(x==1)
					{
					if(lft==0)	
					LeftTH();
					
					else if(lft==1)
					LeftKey();
					}
					
					else if(x==2)
					{
					if(foundkey==0)
					RightKey();
					
					else if(foundkey==1)
					Unlock();
					}
		}
		}
		else if(exm==1)
		{
		printf("Shooting doesn't seem as a good option here so you decide to throw a grenade.\nYou take the pin out and hold it for 2 seconds.\nThen you throw it in the room and it explodes before anyone can react.\n\n");
		system("PAUSE");
		printf("\nYou count 5 bodies, and since you saw 8 bedrolls in the left treehouse you conclude that ");
		if(rght==1)
		{
		printf("there are no soldiers left.\n");
		printf("\n1. Go to the left treehouse.\n2. Go to the right treehouse.\n");
		
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			LeftKey();
			
			else if(x==2)
			RightKey();
			
		}
		
		else if(rght==0 && soldier==0)
		printf("there are 2 soldiers left.\n");
		
		else if(rght==0 && soldier==1)
		{
		printf("there is 1 soldier left in the right treehouse.\n");
		system("PAUSE");
		printf("\nExplosion was loud so you know that he is coming for you.\n");
		printf("\n1. Rush to the last treehouse.\n2. Wait for them in the treehouse.\n");
		
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			{
				printf("\nYou instantly rush to the last treehouse with Goofy.\nWhile running over you notice the last soldier peeking out of the treehouse.\n");
				system("PAUSE");
				printf("\nYou shoot him before he shoots you.\n");
				system("PAUSE");
				printf("\nHe is dead.\n");
				system("PAUSE");
				printf("\nMickey: 'That should be all of them.'\nGoofy: 'We don't know that for certain, i will go and check for the documents in the last treehouse.'\n");
			
			system("PAUSE");
			system("CLS");
			printf("\nAfter 2 minutes Goofy comes out and says that there is a desk with locked compartment.\nYou can't get through it, you need some kind of key to unlock it.");
			NoKey();
			}
			
			else if(x==2)
			{
				printf("\nYou decide that the best course of action is to wait for the last soldier to come over.\nAfter some time waiting you realise that no one is coming so you rush over.\nYou find him peeking out of the treehouse.\n");
				system("PAUSE");
				printf("\nYou shoot him before he shoots you.\n");
				system("PAUSE");
				printf("\nHe is dead.\n");
				system("PAUSE");
				printf("\nMickey: 'That should be all of them.'\nGoofy: 'We don't know that for certain, i will go and check for the documents in the last treehouse.'\n");
			
			system("PAUSE");
			system("CLS");
			printf("\nAfter 2 minutes Goofy comes out and says that there is a desk with locked compartment.\nYou can't get through it, you need some kind of key to unlock it.");
			NoKey();
			}
		}
		
		if(rght==0 && soldier==0)
		{
		system("PAUSE");
		printf("\nExplosion was loud so you know they are coming for you.\n");
		printf("\n1. Rush to the last treehouse.\n2. Wait for them in the treehouse.\n");
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			Rush();
			
			else if(x==2)
			Bridge();
		}
		
		}

	
			}
			else if(x==2)
	{
	printf("You attempt to go back but a soldier that was exiting the treehouse saw you and yelled to his comrades.\n");
	x=0;
	printf("\n1. Surrender.\n2. Try to shoot your way out.\n");
	
		x=0;
		x=GetNumber2();
		system("cls");
		
			if(x==1)
			Surrender();
			
			else if(x==2)
			{
				printf("You and Goofy try to take them out but you are outnumbered and on open field.\nYou died.\n");
				GameOver();
				system("PAUSE");
	}
}
}

	else if(lft==0 && rght==0)
	{
		if(x==1)
		{
		printf("Shooting doesn't seem as a good option here so you decide to throw a grenade.\nYou take the pin out and hold it for 2 seconds.\nThen you throw it in the room and it explodes before anyone can react.\n");
		system("PAUSE");
		printf("\nThe grenade was very loud and it alerted the soldiers from the other treehouses.\n");
		system("PAUSE");
		printf("\nYou and Goofy try to fight them off, but with the only cover being blown up by your grenade you both die.");
		GameOver();
		system("PAUSE");
		}
		
		else if(x==2)
		{
			printf("You attempt to go back but a soldier that was exiting the treehouse saw you and yelled to his comrades.\n");
			x=0;
			printf("\n1. Surrender.\n2. Try to shoot your way out.\n");
			
				x=0;
				x=GetNumber2();
				system("cls");
				
					if(x==1)
					Surrender();
					
					else if(x==2)
					{
						printf("You and Goofy try to take them out but you are outnumbered and on open field.\nYou died.\n");
						GameOver();
						system("PAUSE");
					}
		}
	}
}
void LeftTH(){
	int x;
	if(lft==0)
	{
	printf("You sneak towards the treehouse on the left.\nThere is one guard outside the the treehouse.\n");
	printf("\n1. Shoot him.\n2. Tell Goofy to make distraction while you climb up the ladders and take him out.\n3. Go back\n");
	
		x=0;
		x=GetNumber3();
		system("cls");
		
	if(x==1)
	{
		if(mddle==0)
		{
		printf("You shoot the guard from land and alert all the guards from nearby treehouses.\nYou and Goofy try to fight them off but end up dying both.\n");
		fifteen=1;
		ofstream myfile;
		myfile.open("Achievements/15.txt");
		myfile << fifteen;
		myfile.close();
		GameOver();
		system("PAUSE");
		}
		
		else if(mddle==1)
		{
			lft=1;
			foundkey=1;
			printf("You take out your gun and shoot the guard from land.\nHe is dead.");
			printf("\nYou go inside the treehouse and find a key in one of the bedrolls.\n");
			printf("\n1. Go to the middle treehouse.\n2. Go to the right treehouse.\n");
					x=0;
				x=GetNumber2();
				system("cls");
				
					if(x==1)
					MiddleKey();
					
					else if(x==2)
					Unlock();
		}
	}
	else if(x==2)
	{
		lft++;
		printf("Goofy goes back to the starting point and throws a rock at nearby bush.\nGuard:Cai gi vay? (What's this?')\nWhile he is distracted you climb up the ladders and stab him in foot.\nThat causes the guard to fall and while he is falling you slice his throath for good mesaure.");
		printf("\nGoofy comes back and climbs up ladders.\n");
		
		if(rght==0)
		{
		printf("\n1. Examine the room.\n2. Go to right treehouse.(Don't examine room)\n3. Go to middle treehouse.(Don't examine room)\n");
		
		x=0;
		x=GetNumber3();
		system("cls");
		
			if(x==1)
			{
				exm=1;
			printf("You examine the room.\nThere is nothing but 8 bedrolls here so you conclude that there are 7 soldiers\nin this base since you already killed one.\n");
			printf("\n1. Go to middle treehouse.\n2. Go to right treehouse.\n");
				x=0;
				x=GetNumber2();
				system("cls");
				
					if(x==1)
					MiddleTH();
					
					else if(x==2)
					RightTH();
				
			}
				
			else if(x==2)
			{
				printf("You skip examining the room and go immediately to right treehouse with Goofy.\n");
				system("PAUSE");
				system("cls");
				RightTH();
			}
			else if(x==3)
			{
				printf("You skip examining the room and go immediately to middle treehouse with Goofy.\n");
				system("PAUSE");
				system("cls");
				MiddleTH();
			}
		}
		
		else if(rght==1)
		{
			foundkey=1;
			printf("\nYou go inside the treehouse and find a key in one of the bedrolls.\n");
			printf("\n1. Go to the middle treehouse.\n2. Go to the right treehouse.\n");
				x=0;
				x=GetNumber2();
				system("cls");
				
					if(x==1)
					{
					if(mddle==1)
					MiddleKey();
					
					else if(mddle==0)
					MiddleTH();
					}
					
					else if(x==2)
					Unlock();
		}
}
	else if(x==3)
	{
	if(rght==0)
	North();
	
	else if(rght==1 && mddle==1)
	MiddleKey();
	
	else if(rght==1 && mddle==0)
	RightKey();
	}
}

	else if(lft==1)
	{
		if(exm==0)
		{
		printf("You are at the left treehouse.\n");
		printf("\n1. Examine the room\n2. Go to the right treehouse.\n3. Go to the middle treehouse.\n");
		
		x=0;
		x=GetNumber3();
		system("cls");
	
		if(x==1)
			{
				exm=1;
			printf("You examine the room.");
			printf("\nThere is nothing but 8 bedrolls here so you conclude that there are ");
			if(soldier==0)
			printf("7 soldiers in this base since you already killed one.\n");
			else if(soldier==1)
			printf("6 soldiers in this base since you already killed two.\n");
			
			printf("\n1. Go to middle treehouse.\n2. Go to right treehouse.\n");
			x=0;
			
			x=GetNumber2();
			system("cls");
				
					if(x==1)
					MiddleTH();
					
					else if(x==2)
					RightTH();
				
			}
			
			else if(x==2)
			RightTH();
			
			else if(x==3)
			MiddleTH();
		}
		
		else if(exm==1)
		{
			printf("You have cleared this treehouse and examined the room.\n");
			printf("\n1. Go to the middle treehouse.\n2. Go to the right treehouse.\n");
				x=0;
			
			x=GetNumber2();
			system("cls");
		
			if(x==1)
			MiddleTH();
			
			else if(x==2)
			RightTH();
		}
			
	}
	
}

void North(){
	int x;
	printf("\nThere are 3 treehouses in this base.\n");
	printf("\n1. Treehouse on the left.\n2. Treehouse in the middle.\n3. Treehouse on the right.\n");
	
	x=GetNumber3();
	system("cls");
	
	if(x==1)
	LeftTH();
	
	else if(x==2)
	MiddleTH();
	
	else if(x==3)
	RightTH();
}
void South(){
	int x,y;
	printf("You go south.\nThere is nothing but the ocean here.\nYou notice a strange branch close to you.\n");
	printf("\n1. Pick up the branch\n2. Go back\n");
	
	x=GetNumber2();
	system("cls");
	
	if(x==1)
	{
		printf("You become curious and decide to pick up the branch.\nTurns out that the branch is actually a posionous snake that just bit you.\nYOU DIED.\n");
		
		fourth=1;
		ofstream myfile;
		myfile.open("Achievements/4.txt");
		myfile << fourth;
		myfile.close();
		GameOver();
		
		system("PAUSE");
	}
	else if(x==2)
		GameStart();
	
}
void GameStart(){
	int x;
	printf("\nWhere do you want to go?");
	printf("\n\n1. Go north (Once you go north you can't come back)\n2. Go south \n3. Go east\n4. Go west\n");
	
	x=GetNumber4();
	system("cls");

		if(x==1)
		{
			printf("You sneak towards the enemy bases.\nGoofy:Where do you want to go first?");
			North();
		}
		
		else if (x==2)
		South();
		
		else if(x==3)
		East();
		
		else if(x==4)
		West();
}
void GameOver(){
	printf("\nGame over\n");
}
void Intro(){
	int x;
	start: printf("Vietnam, 1973."); x=0;
	printf("\nYou are private Mickey, paired with private Goofy. \nYou are on mission to destroy documents that are threatening to the country.\n");
	printf("\n1. Start");
	printf("\n2. Exit");
	printf("\n3. Achievements\n");
	
	x=GetNumber4();
	system("cls");
	
	if(x==1)
	{
		printf("You and Goofy get off the helicopter and are now on enemy lands. \nGoofy: I can see the enemy base north from here, must be where they are keeping the documents.");
		GameStart();
	}
	
	else if(x==2)
	GameOver();	
	
	else if(x==3)
	{
	Achievements();
	}
	else if(x==4)
	{
	printf("Happy birthday Diego\n");
	system("PAUSE");
	system("CLS");
	goto start;
	}	
}

main()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                 
	cfi.dwFontSize.Y = 32;                  
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); 
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd,SW_SHOWMAXIMIZED);
	Intro();
	
}

