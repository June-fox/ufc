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
int main(void) {

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

	int n = 0;
	do {
		// print the menu
		ShowMenu();
		// select the menu

		// do menu
	} while (n == 5);
}

void ShowMenu(void) {
	printf("1. Show the fighter chart.");
	printf("2. Append the fighter.");
	printf("3. Edit the fighter.");
	printf("4. Delete the fihter.");
	printf("5. Let's go on the octagon.");
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