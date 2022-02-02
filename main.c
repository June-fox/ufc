// ULTIMATE  :  UFC - lets do fight in virtual June's brain
// 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ConfirmFighters(void);
double Fighting(int x,int y);
void ShowMenu(void);
char* GetString(void);
//

typedef struct fighter {
	char* name;
	double age;
	double strength;
	double striking;
	double ground;
	double clinch;
	double submission;
	double stamina;
}fighterT;

void ConfirmFighters(void);
int SelectMenu(void);
void DoMenu(int menu);

int main(void) {

	// we're gonna manage 15 top fighters
	fighterT warrior[15];
	// confirm the warriorses .txt(append / edit / delete)
	ConfirmFighters();

	// start game
	// pick opponents

	// fighting()
	int x, y;
	Fighting(x, y);
	// After fighted, renew ranking
	//AfterFight();

	// # do txt file about fighters(ranking , stats)

	return 0;
}

void ConfirmFighters(void) {

	int m = 0;
	do {
		// print the menu
		ShowMenu();
		// select the menu
		m = SelectMenu();
		// do menu
		DoMenu(m);
	} while (m == 5);
}

void ShowMenu(void) {
	printf("1. Show the fighter chart.");
	printf("2. Append the fighter.");
	printf("3. Edit the fighter.");
	printf("4. Delete the fihter.");
	printf("5. Let's go on the octagon.");
}

int SelectMenu(void) {
	int temp_num = 0;
	printf("press the number which service...");
	scanf("%d", &temp_num);

	return temp_num;
}

void DoMenu(int menu) {
	switch (menu)
	{
	case 1:
		// bring(open) the txt file
		break;
	case 2:
		// append the fighter on chart

		break;
	case 3:
		// edit

		break;
	case 4:
		// delete

		break;
	case 5:
		printf("bring us on the octagon!!\n");
		break;
	default:
		printf("Please press the right number.\n");
		break;
	}
}

char* GetString(void) {
	char s[30] = {0};
	printf("Which fighter?");
	scanf("%[^\n]", s);

	if (s[0] == '\n') { return 0; }
	char* s1 = (char*)malloc(strlen(s) + 1);
	strcpy(s1, s);
	return s1;
}