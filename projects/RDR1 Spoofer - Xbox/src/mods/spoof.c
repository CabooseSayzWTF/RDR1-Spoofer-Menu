#include "mods.h"

#include "../util.h"
#define NGTAG GET_LOCAL_PLAYER_NAME(0)
int capital_letter = 0;
int capital_letter2 = 0;
int lowercase_letter = 0;
int lowercase_letter2 = 0;
int number = 0;
int number2 = 0;
int special_character = 0;
int special_character2 = 0;
int colour = 0;
int colour2 = 0;
int button_blip = 0;
int button_blip2 = 0;
int other_blip = 0;
int other_blip2 = 0;
int saveXUID1 = 0;
int saveXUID2 = 0;
int savename1 = 0;
int savename2 = 0;
int savename3 = 0;
int savename4 = 0;
int savename5 = 0;
int savename6 = 0;
int savename7 = 0;
int savename8 = 0;
int savename9 = 0;
int savename10 = 0;
int savename11 = 0;
int savename12 = 0;
int savename13 = 0;
int savename14 = 0;
int savename15 = 0;

char gamertag[16];
char titletext[24];//longest i think is 23, this should be max of 23 chars
int gamertag_index = 0;
int title_index = 0;
const char *VerifiedGT2;
void add_capital_letters()
{
	switch (capital_letter)
	{
	case 0:
		stradd_s(gamertag, "A");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 1:
		stradd_s(gamertag, "B");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 2:
		stradd_s(gamertag, "C");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 3:
		stradd_s(gamertag, "D");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 4:
		stradd_s(gamertag, "E");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 5:
		stradd_s(gamertag, "F");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 6:
		stradd_s(gamertag, "G");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 7:
		stradd_s(gamertag, "H");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 8:
		stradd_s(gamertag, "I");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 9:
		stradd_s(gamertag, "J");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 10:
		stradd_s(gamertag, "K");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 11:
		stradd_s(gamertag, "L");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 12:
		stradd_s(gamertag, "M");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 13:
		stradd_s(gamertag, "N");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 14:
		stradd_s(gamertag, "O");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 15:
		stradd_s(gamertag, "P");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 16:
		stradd_s(gamertag, "Q");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 17:
		stradd_s(gamertag, "R");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 18:
		stradd_s(gamertag, "S");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 19:
		stradd_s(gamertag, "T");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 20:
		stradd_s(gamertag, "U");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 21:
		stradd_s(gamertag, "V");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 22:
		stradd_s(gamertag, "W");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 23:
		stradd_s(gamertag, "X");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 24:
		stradd_s(gamertag, "Y");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 25:
		stradd_s(gamertag, "Z");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	}
}
void add_capital_letters2()
{
	switch (capital_letter2)
	{
	case 0:
		stradd_s(titletext, "A");
		print(titletext, 5000);
		title_index++;
		break;
	case 1:
		stradd_s(titletext, "B");
		print(titletext, 5000);
		title_index++;
		break;
	case 2:
		stradd_s(titletext, "C");
		print(titletext, 5000);
		title_index++;
		break;
	case 3:
		stradd_s(titletext, "D");
		print(titletext, 5000);
		title_index++;
		break;
	case 4:
		stradd_s(titletext, "E");
		print(gamertag, 5000);
		title_index++;
		break;
	case 5:
		stradd_s(titletext, "F");
		print(gamertag, 5000);
		title_index++;
		break;
	case 6:
		stradd_s(titletext, "G");
		print(titletext, 5000);
		title_index++;
		break;
	case 7:
		stradd_s(titletext, "H");
		print(titletext, 5000);
		title_index++;
		break;
	case 8:
		stradd_s(titletext, "I");
		print(titletext, 5000);
		title_index++;
		break;
	case 9:
		stradd_s(titletext, "J");
		print(titletext, 5000);
		title_index++;
		break;
	case 10:
		stradd_s(titletext, "K");
		print(titletext, 5000);
		title_index++;
		break;
	case 11:
		stradd_s(titletext, "L");
		print(titletext, 5000);
		title_index++;
		break;
	case 12:
		stradd_s(titletext, "M");
		print(titletext, 5000);
		title_index++;
		break;
	case 13:
		stradd_s(titletext, "N");
		print(titletext, 5000);
		title_index++;
		break;
	case 14:
		stradd_s(titletext, "O");
		print(titletext, 5000);
		title_index++;
		break;
	case 15:
		stradd_s(titletext, "P");
		print(titletext, 5000);
		title_index++;
		break;
	case 16:
		stradd_s(titletext, "Q");
		print(titletext, 5000);
		title_index++;
		break;
	case 17:
		stradd_s(titletext, "R");
		print(titletext, 5000);
		title_index++;
		break;
	case 18:
		stradd_s(titletext, "S");
		print(titletext, 5000);
		title_index++;
		break;
	case 19:
		stradd_s(titletext, "T");
		print(titletext, 5000);
		title_index++;
		break;
	case 20:
		stradd_s(titletext, "U");
		print(titletext, 5000);
		title_index++;
		break;
	case 21:
		stradd_s(titletext, "V");
		print(titletext, 5000);
		title_index++;
		break;
	case 22:
		stradd_s(titletext, "W");
		print(titletext, 5000);
		title_index++;
		break;
	case 23:
		stradd_s(titletext, "X");
		print(titletext, 5000);
		title_index++;
		break;
	case 24:
		stradd_s(titletext, "Y");
		print(titletext, 5000);
		title_index++;
		break;
	case 25:
		stradd_s(titletext, "Z");
		print(titletext, 5000);
		title_index++;
		break;
	}
}

void add_lowercase_letters()
{
	switch (lowercase_letter)
	{
	case 0:
		stradd_s(gamertag, "a");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 1:
		stradd_s(gamertag, "b");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 2:
		stradd_s(gamertag, "c");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 3:
		stradd_s(gamertag, "d");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 4:
		stradd_s(gamertag, "e");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 5:
		stradd_s(gamertag, "f");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 6:
		stradd_s(gamertag, "g");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 7:
		stradd_s(gamertag, "h");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 8:
		stradd_s(gamertag, "i");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 9:
		stradd_s(gamertag, "j");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 10:
		stradd_s(gamertag, "k");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 11:
		stradd_s(gamertag, "l");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 12:
		stradd_s(gamertag, "m");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 13:
		stradd_s(gamertag, "n");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 14:
		stradd_s(gamertag, "o");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 15:
		stradd_s(gamertag, "p");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 16:
		stradd_s(gamertag, "q");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 17:
		stradd_s(gamertag, "r");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 18:
		stradd_s(gamertag, "s");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 19:
		stradd_s(gamertag, "t");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 20:
		stradd_s(gamertag, "u");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 21:
		stradd_s(gamertag, "v");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 22:
		stradd_s(gamertag, "q");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 23:
		stradd_s(gamertag, "x");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 24:
		stradd_s(gamertag, "y");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 25:
		stradd_s(gamertag, "z");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	}
}
void add_lowercase_letters2()
{
	switch (lowercase_letter2)
	{
	case 0:
		stradd_s(titletext, "a");
		print(titletext, 5000);
		title_index++;
		break;
	case 1:
		stradd_s(titletext, "b");
		print(titletext, 5000);
		title_index++;
		break;
	case 2:
		stradd_s(titletext, "c");
		print(titletext, 5000);
		title_index++;
		break;
	case 3:
		stradd_s(titletext, "d");
		print(titletext, 5000);
		title_index++;
		break;
	case 4:
		stradd_s(titletext, "e");
		print(titletext, 5000);
		title_index++;
		break;
	case 5:
		stradd_s(titletext, "f");
		print(titletext, 5000);
		title_index++;
		break;
	case 6:
		stradd_s(titletext, "g");
		print(titletext, 5000);
		title_index++;
		break;
	case 7:
		stradd_s(titletext, "h");
		print(titletext, 5000);
		title_index++;
		break;
	case 8:
		stradd_s(titletext, "i");
		print(titletext, 5000);
		title_index++;
		break;
	case 9:
		stradd_s(titletext, "j");
		print(titletext, 5000);
		title_index++;
		break;
	case 10:
		stradd_s(titletext, "k");
		print(titletext, 5000);
		title_index++;
		break;
	case 11:
		stradd_s(titletext, "l");
		print(titletext, 5000);
		title_index++;
		break;
	case 12:
		stradd_s(titletext, "m");
		print(titletext, 5000);
		title_index++;
		break;
	case 13:
		stradd_s(titletext, "n");
		print(titletext, 5000);
		title_index++;
		break;
	case 14:
		stradd_s(titletext, "o");
		print(titletext, 5000);
		title_index++;
		break;
	case 15:
		stradd_s(titletext, "p");
		print(titletext, 5000);
		title_index++;
		break;
	case 16:
		stradd_s(titletext, "q");
		print(titletext, 5000);
		title_index++;
		break;
	case 17:
		stradd_s(titletext, "r");
		print(titletext, 5000);
		title_index++;
		break;
	case 18:
		stradd_s(titletext, "s");
		print(titletext, 5000);
		title_index++;
		break;
	case 19:
		stradd_s(titletext, "t");
		print(titletext, 5000);
		title_index++;
		break;
	case 20:
		stradd_s(titletext, "u");
		print(titletext, 5000);
		title_index++;
		break;
	case 21:
		stradd_s(titletext, "v");
		print(titletext, 5000);
		title_index++;
		break;
	case 22:
		stradd_s(titletext, "q");
		print(titletext, 5000);
		title_index++;
		break;
	case 23:
		stradd_s(titletext, "x");
		print(titletext, 5000);
		title_index++;
		break;
	case 24:
		stradd_s(titletext, "y");
		print(titletext, 5000);
		title_index++;
		break;
	case 25:
		stradd_s(titletext, "z");
		print(titletext, 5000);
		title_index++;
		break;
	}
}

void add_numbers()
{
	switch (number)
	{
	case 0:
		stradd_s(gamertag, "0");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 1:
		stradd_s(gamertag, "1");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 2:
		stradd_s(gamertag, "2");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 3:
		stradd_s(gamertag, "3");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 4:
		stradd_s(gamertag, "4");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 5:
		stradd_s(gamertag, "5");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 6:
		stradd_s(gamertag, "6");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 7:
		stradd_s(gamertag, "7");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 8:
		stradd_s(gamertag, "8");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 9:
		stradd_s(gamertag, "9");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	}
}
void add_numbers2()
{
	switch (number2)
	{
	case 0:
		stradd_s(titletext, "0");
		print(titletext, 5000);
		title_index++;
		break;
	case 1:
		stradd_s(titletext, "1");
		print(titletext, 5000);
		title_index++;
		break;
	case 2:
		stradd_s(titletext, "2");
		print(titletext, 5000);
		title_index++;
		break;
	case 3:
		stradd_s(titletext, "3");
		print(titletext, 5000);
		title_index++;
		break;
	case 4:
		stradd_s(titletext, "4");
		print(titletext, 5000);
		title_index++;
		break;
	case 5:
		stradd_s(titletext, "5");
		print(titletext, 5000);
		title_index++;
		break;
	case 6:
		stradd_s(titletext, "6");
		print(titletext, 5000);
		title_index++;
		break;
	case 7:
		stradd_s(titletext, "7");
		print(titletext, 5000);
		title_index++;
		break;
	case 8:
		stradd_s(titletext, "8");
		print(titletext, 5000);
		title_index++;
		break;
	case 9:
		stradd_s(titletext, "9");
		print(titletext, 5000);
		title_index++;
		break;
	}
}

void add_special_characters()
{
	switch (special_character)
	{
	case 0:
		stradd_s(gamertag, "`");
		print(gamertag, 5000);
		gamertag_index++;
		break;
		/*
		case 1:
			stradd_s(gamertag, "¬");
			print(gamertag, 5000);
			gamertag_index++;
			break;
		*/
	case 1:
		stradd_s(gamertag, "!");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 2:
		stradd_s(gamertag, "$");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 3:
		stradd_s(gamertag, "%");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 4:
		stradd_s(gamertag, "&");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 5:
		stradd_s(gamertag, "*");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 6:
		stradd_s(gamertag, "(");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 7:
		stradd_s(gamertag, ")");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 8:
		stradd_s(gamertag, "-");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 9:
		stradd_s(gamertag, "_");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 10:
		stradd_s(gamertag, "=");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 11:
		stradd_s(gamertag, "+");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 12:
		stradd_s(gamertag, "[");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 13:
		stradd_s(gamertag, "]");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 14:
		stradd_s(gamertag, "{");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 15:
		stradd_s(gamertag, "}");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 16:
		stradd_s(gamertag, ";");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 17:
		stradd_s(gamertag, ":");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 18:
		stradd_s(gamertag, "'");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 19:
		stradd_s(gamertag, "@");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 20:
		stradd_s(gamertag, "#");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 21:
		stradd_s(gamertag, "~");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 22:
		stradd_s(gamertag, "|");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 23:
		stradd_s(gamertag, ",");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 24:
		stradd_s(gamertag, ".");
		print(gamertag, 5000);
		gamertag_index++;
		break;
		/*
		case 26:
			stradd_s(gamertag, "<");
			print(gamertag, 5000);
			gamertag_index++;
			break;
		case 27:
			stradd_s(gamertag, ">");
			print(gamertag, 5000);
			gamertag_index++;
			break;
		*/
	case 25:
		stradd_s(gamertag, "/");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	case 26:
		stradd_s(gamertag, "?");
		print(gamertag, 5000);
		gamertag_index++;
		break;
	}
}
void add_special_characters2()
{
	switch (special_character2)
	{
	case 0:
		stradd_s(titletext, "`");
		print(titletext, 5000);
		title_index++;
		break;
	case 1:
		stradd_s(titletext, "!");
		print(titletext, 5000);
		title_index++;
		break;
	case 2:
		stradd_s(titletext, "$");
		print(titletext, 5000);
		title_index++;
		break;
	case 3:
		stradd_s(titletext, "%");
		print(titletext, 5000);
		title_index++;
		break;
	case 4:
		stradd_s(titletext, "&");
		print(titletext, 5000);
		title_index++;
		break;
	case 5:
		stradd_s(titletext, "*");
		print(titletext, 5000);
		title_index++;
		break;
	case 6:
		stradd_s(titletext, "(");
		print(titletext, 5000);
		title_index++;
		break;
	case 7:
		stradd_s(titletext, ")");
		print(titletext, 5000);
		title_index++;
		break;
	case 8:
		stradd_s(titletext, "-");
		print(titletext, 5000);
		title_index++;
		break;
	case 9:
		stradd_s(titletext, "_");
		print(titletext, 5000);
		title_index++;
		break;
	case 10:
		stradd_s(titletext, "=");
		print(titletext, 5000);
		title_index++;
		break;
	case 11:
		stradd_s(titletext, "+");
		print(titletext, 5000);
		title_index++;
		break;
	case 12:
		stradd_s(titletext, "[");
		print(titletext, 5000);
		title_index++;
		break;
	case 13:
		stradd_s(titletext, "]");
		print(titletext, 5000);
		title_index++;
		break;
	case 14:
		stradd_s(titletext, "{");
		print(titletext, 5000);
		title_index++;
		break;
	case 15:
		stradd_s(titletext, "}");
		print(titletext, 5000);
		title_index++;
		break;
	case 16:
		stradd_s(titletext, ";");
		print(titletext, 5000);
		title_index++;
		break;
	case 17:
		stradd_s(titletext, ":");
		print(titletext, 5000);
		title_index++;
		break;
	case 18:
		stradd_s(titletext, "'");
		print(titletext, 5000);
		title_index++;
		break;
	case 19:
		stradd_s(titletext, "@");
		print(titletext, 5000);
		title_index++;
		break;
	case 20:
		stradd_s(titletext, "#");
		print(titletext, 5000);
		title_index++;
		break;
	case 21:
		stradd_s(titletext, "~");
		print(titletext, 5000);
		title_index++;
		break;
	case 22:
		stradd_s(titletext, "|");
		print(titletext, 5000);
		title_index++;
		break;
	case 23:
		stradd_s(titletext, ",");
		print(titletext, 5000);
		title_index++;
		break;
	case 24:
		stradd_s(titletext, ".");
		print(titletext, 5000);
		title_index++;
		break;
	case 25:
		stradd_s(titletext, "/");
		print(titletext, 5000);
		title_index++;
		break;
	case 26:
		stradd_s(titletext, "?");
		print(titletext, 5000);
		title_index++;
		break;
	}
}

void add_colours()
{
	switch (colour)
	{
	case 0:
		stradd_s(gamertag, "<red>");
		print(gamertag, 5000);
		gamertag_index += 5;
		break;
	case 1:
		stradd_s(gamertag, "<orange>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 2:
		stradd_s(gamertag, "<yellow>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 3:
		stradd_s(gamertag, "<green>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 4:
		stradd_s(gamertag, "<blue>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 5:
		stradd_s(gamertag, "<purple>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 6:
		stradd_s(gamertag, "<brown>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 7:
		stradd_s(gamertag, "<sepia>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 8:
		stradd_s(gamertag, "<grey>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	}
}
void add_colours2()
{
	switch (colour2)
	{
	case 0:
		stradd_s(titletext, "<red>");
		print(titletext, 5000);
		title_index += 5;
		break;
	case 1:
		stradd_s(titletext, "<orange>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 2:
		stradd_s(titletext, "<yellow>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 3:
		stradd_s(titletext, "<green>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 4:
		stradd_s(titletext, "<blue>");
		print(titletext, 5000);
		title_index += 6;
		break;
	case 5:
		stradd_s(titletext, "<purple>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 6:
		stradd_s(titletext, "<brown>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 7:
		stradd_s(titletext, "<sepia>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 8:
		stradd_s(titletext, "<grey>");
		print(titletext, 5000);
		title_index += 6;
		break;
	}
}

void add_button_blips()
{
	switch (button_blip)
	{
	case 0:
		stradd_s(gamertag, "<action>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 1:
		stradd_s(gamertag, "<cancel>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 2:
		stradd_s(gamertag, "<x>");
		print(gamertag, 5000);
		gamertag_index += 3;
		break;
	case 3:
		stradd_s(gamertag, "<y>");
		print(gamertag, 5000);
		gamertag_index += 3;
		break;
	case 4:
		stradd_s(gamertag, "<lt>");
		print(gamertag, 5000);
		gamertag_index += 4;
		break;
	case 5:
		stradd_s(gamertag, "<rt>");
		print(gamertag, 5000);
		gamertag_index += 4;
		break;
	case 6:
		stradd_s(gamertag, "<lb>");
		print(gamertag, 5000);
		gamertag_index += 4;
		break;
	case 7:
		stradd_s(gamertag, "<rb>");
		print(gamertag, 5000);
		gamertag_index += 4;
		break;
	case 8:
		stradd_s(gamertag, "<ls>");
		print(gamertag, 5000);
		gamertag_index += 4;
		break;
	case 9:
		stradd_s(gamertag, "<rs>");
		print(gamertag, 5000);
		gamertag_index += 4;
		break;
	case 10:
		stradd_s(gamertag, "<lclick>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 11:
		stradd_s(gamertag, "<rclick>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 12:
		stradd_s(gamertag, "<start>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 13:
		stradd_s(gamertag, "<back>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 14:
		stradd_s(gamertag, "<dpadleft>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	case 15:
		stradd_s(gamertag, "<dpadright>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 16:
		stradd_s(gamertag, "<dpadleftright>");
		print(gamertag, 5000);
		gamertag_index += 15;
		break;
	case 17:
		stradd_s(gamertag, "<dpadup>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	case 18:
		stradd_s(gamertag, "<dpaddown>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	}
}
void add_button_blips2()
{
	switch (button_blip2)
	{
	case 0:
		stradd_s(titletext, "<action>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 1:
		stradd_s(titletext, "<cancel>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 2:
		stradd_s(titletext, "<x>");
		print(titletext, 5000);
		title_index += 3;
		break;
	case 3:
		stradd_s(titletext, "<y>");
		print(titletext, 5000);
		title_index += 3;
		break;
	case 4:
		stradd_s(titletext, "<lt>");
		print(titletext, 5000);
		title_index += 4;
		break;
	case 5:
		stradd_s(titletext, "<rt>");
		print(titletext, 5000);
		title_index += 4;
		break;
	case 6:
		stradd_s(titletext, "<lb>");
		print(titletext, 5000);
		title_index += 4;
		break;
	case 7:
		stradd_s(titletext, "<rb>");
		print(titletext, 5000);
		title_index += 4;
		break;
	case 8:
		stradd_s(titletext, "<ls>");
		print(titletext, 5000);
		title_index += 4;
		break;
	case 9:
		stradd_s(titletext, "<rs>");
		print(titletext, 5000);
		title_index += 4;
		break;
	case 10:
		stradd_s(titletext, "<lclick>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 11:
		stradd_s(titletext, "<rclick>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 12:
		stradd_s(titletext, "<start>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 13:
		stradd_s(titletext, "<back>");
		print(titletext, 5000);
		title_index += 6;
		break;
	case 14:
		stradd_s(titletext, "<dpadleft>");
		print(titletext, 5000);
		title_index += 10;
		break;
	case 15:
		stradd_s(titletext, "<dpadright>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 16:
		stradd_s(titletext, "<dpadleftright>");
		print(titletext, 5000);
		title_index += 15;
		break;
	case 17:
		stradd_s(titletext, "<dpadup>");
		print(titletext, 5000);
		title_index += 10;
		break;
	case 18:
		stradd_s(titletext, "<dpaddown>");
		print(titletext, 5000);
		title_index += 10;
		break;
	}
}

void add_other_blips()
{
	switch (other_blip)
	{
	case 0:
		stradd_s(gamertag, "<WHITE>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 1:
		stradd_s(gamertag, "<RED_CIRCLE>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 2:
		stradd_s(gamertag, "<ENEMY>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 3:
		stradd_s(gamertag, "<FRIEND>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 4:
		stradd_s(gamertag, "<HOME>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 5:
		stradd_s(gamertag, "<OBJECTIVE>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 6:
		stradd_s(gamertag, "<XP>");
		print(gamertag, 5000);
		gamertag_index += 4;
		break;
	case 7:
		stradd_s(gamertag, "<STAR_GOLD>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 8:
		stradd_s(gamertag, "<STAR_SILVER>");
		print(gamertag, 5000);
		gamertag_index += 13;
		break;
	case 9:
		stradd_s(gamertag, "<STAR_BRONZE>");
		print(gamertag, 5000);
		gamertag_index += 13;
		break;
	case 10:
		stradd_s(gamertag, "<ROCKSTAR>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	case 11:
		stradd_s(gamertag, "<PLAYER>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 12:
		stradd_s(gamertag, "<JAVIER>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 13:
		stradd_s(gamertag, "<MONEY>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 14:
		stradd_s(gamertag, "<BLACKSMITH>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 15:
		stradd_s(gamertag, "<COACH_DRIVER>");
		print(gamertag, 5000);
		gamertag_index += 14;
		break;
	case 16:
		stradd_s(gamertag, "<HEAR_NOISE>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 17:
		stradd_s(gamertag, "<TRAIN>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 18:
		stradd_s(gamertag, "<MOST_WANTED>");
		print(gamertag, 5000);
		gamertag_index += 13;
		break;
	case 19:
		stradd_s(gamertag, "<HOSTAGE>");
		print(gamertag, 5000);
		gamertag_index += 9;
		break;
	case 20:
		stradd_s(gamertag, "<MP_REVIVES>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 21:
		stradd_s(gamertag, "<MP_INJURED>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 22:
		stradd_s(gamertag, "<MP_DEATH>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	case 23:
		stradd_s(gamertag, "<NIGHTWATCH>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 24:
		stradd_s(gamertag, "<EYEWITNESS>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 25:
		stradd_s(gamertag, "<SHERIFF>");
		print(gamertag, 5000);
		gamertag_index += 9;
		break;
	case 26:
		stradd_s(gamertag, "<TELEGRAPH>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 27:
		stradd_s(gamertag, "<BEER>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 28:
		stradd_s(gamertag, "<BULLRIDING>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 29:
		stradd_s(gamertag, "<CARDS>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 30:
		stradd_s(gamertag, "<HORSESHOE>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 31:
		stradd_s(gamertag, "<ARM_WRESTLING>");
		print(gamertag, 5000);
		gamertag_index += 15;
		break;
	case 32:
		stradd_s(gamertag, "<DUEL>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 33:
		stradd_s(gamertag, "<FIVE_FINGER>");
		print(gamertag, 5000);
		gamertag_index += 13;
		break;
	case 34:
		stradd_s(gamertag, "<WEAPON_CACHE>");
		print(gamertag, 5000);
		gamertag_index += 14;
		break;
	case 35:
		stradd_s(gamertag, "<POSSE_LEADER>");
		print(gamertag, 5000);
		gamertag_index += 14;
		break;
	case 36:
		stradd_s(gamertag, "<SCRAP>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 37:
		stradd_s(gamertag, "<ATTACK_COACH >");
		print(gamertag, 5000);
		gamertag_index += 15;
		break;
	case 38:
		stradd_s(gamertag, "<FIRE>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 39:
		stradd_s(gamertag, "<SKULL>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 40:
		stradd_s(gamertag, "<RED_SKULL>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 41:
		stradd_s(gamertag, "<TRANSPORT_RED>");
		print(gamertag, 5000);
		gamertag_index += 15;
		break;
	case 42:
		stradd_s(gamertag, "<SHOP>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 43:
		stradd_s(gamertag, "<DOCTOR>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 44:
		stradd_s(gamertag, "<GUNSMITH>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	case 45:
		stradd_s(gamertag, "<TRAIN_TICKETS>");
		print(gamertag, 5000);
		gamertag_index += 15;
		break;
	case 46:
		stradd_s(gamertag, "<BOMB>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 47:
		stradd_s(gamertag, "<CHECKER>");
		print(gamertag, 5000);
		gamertag_index += 9;
		break;
	case 48:
		stradd_s(gamertag, "<DYNAMITE>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	case 49:
		stradd_s(gamertag, "<FIREBOTTLE>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 50:
		stradd_s(gamertag, "<HEIST_END>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 51:
		stradd_s(gamertag, "<QUESTION_MARK>");
		print(gamertag, 5000);
		gamertag_index += 15;
		break;
	case 52:
		stradd_s(gamertag, "<RACE_FINISH>");
		print(gamertag, 5000);
		gamertag_index += 13;
		break;
	case 53:
		stradd_s(gamertag, "<RACE_OPPONENT>");
		print(gamertag, 5000);
		gamertag_index += 15;
		break;
	case 54:
		stradd_s(gamertag, "<TARGET>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 55:
		stradd_s(gamertag, "<HERD_MAIN>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 56:
		stradd_s(gamertag, "<LIARSDICE>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 57:
		stradd_s(gamertag, "<POKER>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 58:
		stradd_s(gamertag, "<TRAIN_RED>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 59:
		stradd_s(gamertag, "<SWAG>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 60:
		stradd_s(gamertag, "<SWAG_Y>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 61:
		stradd_s(gamertag, "<SWAG_R>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 62:
		stradd_s(gamertag, "<SWAG_B>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 63:
		stradd_s(gamertag, "<CHEST>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 64:
		stradd_s(gamertag, "<MP_ACHIEVE>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 65:
		stradd_s(gamertag, "<MP_KO>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 66:
		stradd_s(gamertag, "<MPK_VIP>");
		print(gamertag, 5000);
		gamertag_index += 9;
		break;
	case 67:
		stradd_s(gamertag, "<MPK_KNIFE>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 68:
		stradd_s(gamertag, "<MPK_ANIMAL>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 69:
		stradd_s(gamertag, "<DICE6>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 70:
		stradd_s(gamertag, "<MPK_SPREE_END>");
		print(gamertag, 5000);
		gamertag_index += 15;
		break;
	case 71:
		stradd_s(gamertag, "<MPK_SNIPER>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 72:
		stradd_s(gamertag, "<MPS_DROWN>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 73:
		stradd_s(gamertag, "<MPS_FALL>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	case 74:
		stradd_s(gamertag, "<MPS_SPLODE>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 75:
		stradd_s(gamertag, "<MPS_CACTUS>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 76:
		stradd_s(gamertag, "<TAILOR>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 77:
		stradd_s(gamertag, "<CANNON>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 78:
		stradd_s(gamertag, "<GATLING>");
		print(gamertag, 5000);
		gamertag_index += 9;
		break;
	case 79:
		stradd_s(gamertag, "<MOVIEHOUSE>");
		print(gamertag, 5000);
		gamertag_index += 12;
		break;
	case 80:
		stradd_s(gamertag, "<NEWSPAPER>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 81:
		stradd_s(gamertag, "<MP_REZ>");
		print(gamertag, 5000);
		gamertag_index += 8;
		break;
	case 82:
		stradd_s(gamertag, "<MP_SCORE>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	case 83:
		stradd_s(gamertag, "<MPK_PWHIP>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 84:
		stradd_s(gamertag, "<VSKIP>");
		print(gamertag, 5000);
		gamertag_index += 7;
		break;
	case 85:
		stradd_s(gamertag, "<MP_LOCKED>");
		print(gamertag, 5000);
		gamertag_index += 11;
		break;
	case 86:
		stradd_s(gamertag, "<ENVELOPE>");
		print(gamertag, 5000);
		gamertag_index += 10;
		break;
	case 87:
		stradd_s(gamertag, "<MPK_TEAMMATE>");
		print(gamertag, 5000);
		gamertag_index += 14;
		break;
	}
}
void add_other_blips2()
{
	switch (other_blip2)
	{
	case 0:
		stradd_s(titletext, "<WHITE>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 1:
		stradd_s(titletext, "<RED_CIRCLE>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 2:
		stradd_s(titletext, "<ENEMY>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 3:
		stradd_s(titletext, "<FRIEND>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 4:
		stradd_s(titletext, "<HOME>");
		print(titletext, 5000);
		title_index += 6;
		break;
	case 5:
		stradd_s(titletext, "<OBJECTIVE>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 6:
		stradd_s(titletext, "<XP>");
		print(titletext, 5000);
		title_index += 4;
		break;
	case 7:
		stradd_s(titletext, "<STAR_GOLD>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 8:
		stradd_s(titletext, "<STAR_SILVER>");
		print(titletext, 5000);
		title_index += 13;
		break;
	case 9:
		stradd_s(titletext, "<STAR_BRONZE>");
		print(titletext, 5000);
		title_index += 13;
		break;
	case 10:
		stradd_s(titletext, "<ROCKSTAR>");
		print(titletext, 5000);
		title_index += 10;
		break;
	case 11:
		stradd_s(titletext, "<PLAYER>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 12:
		stradd_s(titletext, "<JAVIER>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 13:
		stradd_s(titletext, "<MONEY>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 14:
		stradd_s(titletext, "<BLACKSMITH>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 15:
		stradd_s(titletext, "<COACH_DRIVER>");
		print(titletext, 5000);
		title_index += 14;
		break;
	case 16:
		stradd_s(titletext, "<HEAR_NOISE>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 17:
		stradd_s(titletext, "<TRAIN>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 18:
		stradd_s(titletext, "<MOST_WANTED>");
		print(titletext, 5000);
		title_index += 13;
		break;
	case 19:
		stradd_s(titletext, "<HOSTAGE>");
		print(titletext, 5000);
		title_index += 9;
		break;
	case 20:
		stradd_s(titletext, "<MP_REVIVES>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 21:
		stradd_s(titletext, "<MP_INJURED>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 22:
		stradd_s(titletext, "<MP_DEATH>");
		print(titletext, 5000);
		title_index += 10;
		break;
	case 23:
		stradd_s(titletext, "<NIGHTWATCH>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 24:
		stradd_s(titletext, "<EYEWITNESS>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 25:
		stradd_s(titletext, "<SHERIFF>");
		print(titletext, 5000);
		title_index += 9;
		break;
	case 26:
		stradd_s(titletext, "<TELEGRAPH>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 27:
		stradd_s(titletext, "<BEER>");
		print(titletext, 5000);
		title_index += 6;
		break;
	case 28:
		stradd_s(titletext, "<BULLRIDING>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 29:
		stradd_s(titletext, "<CARDS>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 30:
		stradd_s(titletext, "<HORSESHOE>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 31:
		stradd_s(titletext, "<ARM_WRESTLING>");
		print(titletext, 5000);
		title_index += 15;
		break;
	case 32:
		stradd_s(titletext, "<DUEL>");
		print(titletext, 5000);
		title_index += 6;
		break;
	case 33:
		stradd_s(titletext, "<FIVE_FINGER>");
		print(titletext, 5000);
		title_index += 13;
		break;
	case 34:
		stradd_s(titletext, "<WEAPON_CACHE>");
		print(titletext, 5000);
		title_index += 14;
		break;
	case 35:
		stradd_s(titletext, "<POSSE_LEADER>");
		print(titletext, 5000);
		title_index += 14;
		break;
	case 36:
		stradd_s(titletext, "<SCRAP>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 37:
		stradd_s(titletext, "<ATTACK_COACH >");
		print(titletext, 5000);
		title_index += 15;
		break;
	case 38:
		stradd_s(titletext, "<FIRE>");
		print(titletext, 5000);
		title_index += 6;
		break;
	case 39:
		stradd_s(titletext, "<SKULL>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 40:
		stradd_s(titletext, "<RED_SKULL>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 41:
		stradd_s(titletext, "<TRANSPORT_RED>");
		print(titletext, 5000);
		title_index += 15;
		break;
	case 42:
		stradd_s(titletext, "<SHOP>");
		print(titletext, 5000);
		title_index += 6;
		break;
	case 43:
		stradd_s(titletext, "<DOCTOR>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 44:
		stradd_s(titletext, "<GUNSMITH>");
		print(titletext, 5000);
		title_index += 10;
		break;
	case 45:
		stradd_s(titletext, "<TRAIN_TICKETS>");
		print(titletext, 5000);
		title_index += 15;
		break;
	case 46:
		stradd_s(titletext, "<BOMB>");
		print(titletext, 5000);
		title_index += 6;
		break;
	case 47:
		stradd_s(titletext, "<CHECKER>");
		print(titletext, 5000);
		title_index += 9;
		break;
	case 48:
		stradd_s(titletext, "<DYNAMITE>");
		print(titletext, 5000);
		title_index += 10;
		break;
	case 49:
		stradd_s(titletext, "<FIREBOTTLE>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 50:
		stradd_s(titletext, "<HEIST_END>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 51:
		stradd_s(titletext, "<QUESTION_MARK>");
		print(titletext, 5000);
		title_index += 15;
		break;
	case 52:
		stradd_s(titletext, "<RACE_FINISH>");
		print(titletext, 5000);
		title_index += 13;
		break;
	case 53:
		stradd_s(titletext, "<RACE_OPPONENT>");
		print(titletext, 5000);
		title_index += 15;
		break;
	case 54:
		stradd_s(titletext, "<TARGET>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 55:
		stradd_s(titletext, "<HERD_MAIN>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 56:
		stradd_s(titletext, "<LIARSDICE>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 57:
		stradd_s(titletext, "<POKER>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 58:
		stradd_s(titletext, "<TRAIN_RED>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 59:
		stradd_s(titletext, "<SWAG>");
		print(titletext, 5000);
		title_index += 6;
		break;
	case 60:
		stradd_s(titletext, "<SWAG_Y>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 61:
		stradd_s(titletext, "<SWAG_R>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 62:
		stradd_s(titletext, "<SWAG_B>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 63:
		stradd_s(titletext, "<CHEST>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 64:
		stradd_s(titletext, "<MP_ACHIEVE>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 65:
		stradd_s(titletext, "<MP_KO>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 66:
		stradd_s(titletext, "<MPK_VIP>");
		print(titletext, 5000);
		title_index += 9;
		break;
	case 67:
		stradd_s(titletext, "<MPK_KNIFE>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 68:
		stradd_s(titletext, "<MPK_ANIMAL>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 69:
		stradd_s(titletext, "<DICE6>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 70:
		stradd_s(titletext, "<MPK_SPREE_END>");
		print(titletext, 5000);
		title_index += 15;
		break;
	case 71:
		stradd_s(titletext, "<MPK_SNIPER>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 72:
		stradd_s(titletext, "<MPS_DROWN>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 73:
		stradd_s(titletext, "<MPS_FALL>");
		print(titletext, 5000);
		title_index += 10;
		break;
	case 74:
		stradd_s(titletext, "<MPS_SPLODE>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 75:
		stradd_s(titletext, "<MPS_CACTUS>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 76:
		stradd_s(titletext, "<TAILOR>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 77:
		stradd_s(titletext, "<CANNON>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 78:
		stradd_s(titletext, "<GATLING>");
		print(titletext, 5000);
		title_index += 9;
		break;
	case 79:
		stradd_s(titletext, "<MOVIEHOUSE>");
		print(titletext, 5000);
		title_index += 12;
		break;
	case 80:
		stradd_s(titletext, "<NEWSPAPER>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 81:
		stradd_s(titletext, "<MP_REZ>");
		print(titletext, 5000);
		title_index += 8;
		break;
	case 82:
		stradd_s(titletext, "<MP_SCORE>");
		print(titletext, 5000);
		title_index += 10;
		break;
	case 83:
		stradd_s(titletext, "<MPK_PWHIP>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 84:
		stradd_s(titletext, "<VSKIP>");
		print(titletext, 5000);
		title_index += 7;
		break;
	case 85:
		stradd_s(titletext, "<MP_LOCKED>");
		print(titletext, 5000);
		title_index += 11;
		break;
	case 86:
		stradd_s(titletext, "<ENVELOPE>");
		print(titletext, 5000);
		title_index += 10;
		break;
	case 87:
		stradd_s(titletext, "<MPK_TEAMMATE>");
		print(titletext, 5000);
		title_index += 14;
		break;
	}
}

void add_a_new_line()
{
	stradd_s(gamertag, "\n");
	print(gamertag, 5000);
	gamertag_index += 2;
}

void add_a_space()
{
	stradd_s(gamertag, " ");
	print(gamertag, 5000);
	gamertag_index++;
}
void add_a_space2()
{
	stradd_s(titletext, " ");
	print(titletext, 5000);
	title_index++;
}

void backspace()
{
	if (gamertag_index > 0)
	{
		char* ptr = gamertag[gamertag_index - 1] = 0x00;
		gamertag_index -= 1;
		print(gamertag, 5000);
	}
}
void backspace2()
{
	if (title_index > 0)
	{
		char* ptr = titletext[title_index - 1] = 0x00;
		title_index -= 1;
		print(titletext, 5000);
	}
}

void reset_gamertag_buffer()
{
	memset(gamertag, 0, sizeof(gamertag));
	//strcpy(gamertag, "", 1);
	gamertag_index = 0;
	print(gamertag, 5000);
}
void reset_gamertag_buffer2()
{
	memset(titletext, 0, sizeof(titletext));
	//strcpy(gamertag, "", 1);
	//UNK_0x7BD7A465(GET_LOCAL_SLOT(), "                       ");//resetting to max
	title_index = 0;
	print(titletext, 5000);
}

void print_gamertag_count()
{
	char gamertagIndex[3];
	straddi_s(gamertagIndex, gamertag_index);
	print(gamertagIndex, 5000);
}
void print_gamertag_count2()
{
	char titleIndex[3];
	straddi_s(titleIndex, title_index);
	print(titleIndex, 5000);
}

void print_gamertag_buffer()
{
	print(gamertag, 5000);
}
void print_gamertag_buffer2()
{
	print(titletext, 5000);
}

void check_gamertag_index()
{
	if (gamertag_index >= 16)
	{
		print("<blue>Exceeded max buffer size, only 15 characters!", 5000);
		gamertag_index -= 1;
	}
}

void spoof_gamertag()
{
	void* playerPointer = GET_LOCAL_PLAYER_NAME(0) - 0x74;
	char byte1[4] = { gamertag[0], gamertag[1],  gamertag[2], gamertag[3] };
	char byte2[4] = { gamertag[4], gamertag[5],  gamertag[6], gamertag[7] };
	char byte3[4] = { gamertag[8], gamertag[9],  gamertag[10], gamertag[11] };
	char byte4[3] = { gamertag[12], gamertag[13],  gamertag[14] };
	*(int*)(playerPointer + 0x74) = *(int*)(byte1);
	*(int*)(playerPointer + 0x78) = *(int*)(byte2);
	*(int*)(playerPointer + 0x7C) = *(int*)(byte3);
	*(int*)(playerPointer + 0x80) = *(int*)(byte4);
	print("<blue>Spoofed! Find a new session for the spoof to take effect.</blue>", 10000);
}
void spoof_to_player_gamertag()
{
	void* snuGamerClass = GET_SLOT_NAME(net_selected_player) - 0x74;
	void* playerPointer = GET_LOCAL_PLAYER_NAME(0) - 0x74;
	*(int*)(playerPointer + 0x74) = *(int*)(snuGamerClass + 0x74);
	*(int*)(playerPointer + 0x78) = *(int*)(snuGamerClass + 0x78);
	*(int*)(playerPointer + 0x7C) = *(int*)(snuGamerClass + 0x7C);
	*(int*)(playerPointer + 0x80) = *(int*)(snuGamerClass + 0x80);
	print("<blue>Spoofed! Find a new session for the spoof to take effect.</blue>", 10000);
}

void spoof_to_player_xuid()
{
	void* snuGamerClass = GET_SLOT_NAME(net_selected_player) - 0x74;
	void* playerPointer = GET_LOCAL_PLAYER_NAME(0) - 0x74;
	*(int*)(playerPointer + 0x50) = *(int*)(snuGamerClass + 0x50);
	*(int*)(playerPointer + 0x54) = *(int*)(snuGamerClass + 0x54);
	print("<blue>Spoofed! Find a new session for the spoof to take effect.</blue>", 10000);
}

void save_xuid()
{
	void* playerPointer = GET_LOCAL_PLAYER_NAME(0) - 0x74;
	void* playerPointer2 = GET_LOCAL_PLAYER_NAME(0);
	saveXUID1 = *(int*)(playerPointer + 0x50);
	saveXUID2 = *(int*)(playerPointer + 0x54);
	savename1 = *(byte*)(playerPointer2 + 0x00);
	savename2 = *(byte*)(playerPointer2 + 0x01);
	savename3 = *(byte*)(playerPointer2 + 0x02);
	savename4 = *(byte*)(playerPointer2 + 0x03);
	savename5 = *(byte*)(playerPointer2 + 0x04);
	savename6 = *(byte*)(playerPointer2 + 0x05);
	savename7 = *(byte*)(playerPointer2 + 0x06);
	savename8 = *(byte*)(playerPointer2 + 0x07);
	savename9 = *(byte*)(playerPointer2 + 0x08);
	savename10 = *(byte*)(playerPointer2 + 0x09);
	savename11 = *(byte*)(playerPointer2 + 0x0A);
	savename12 = *(byte*)(playerPointer2 + 0x0B);
	savename13 = *(byte*)(playerPointer2 + 0x0C);
	savename14 = *(byte*)(playerPointer2 + 0x0D);
	savename15 = *(byte*)(playerPointer2 + 0x0E);
	print("Current Name & XUID Saved For Resets", 5000);
}

void spoof_to_player_gamertag_and_xuid()
{
	void* snuGamerClass = GET_SLOT_NAME(net_selected_player) - 0x74;
	void* playerPointer = GET_LOCAL_PLAYER_NAME(0) - 0x74;
	*(int*)(playerPointer + 0x74) = *(int*)(snuGamerClass + 0x74);
	*(int*)(playerPointer + 0x78) = *(int*)(snuGamerClass + 0x78);
	*(int*)(playerPointer + 0x7C) = *(int*)(snuGamerClass + 0x7C);
	*(int*)(playerPointer + 0x80) = *(int*)(snuGamerClass + 0x80);
	*(int*)(playerPointer + 0x50) = *(int*)(snuGamerClass + 0x50);
	*(int*)(playerPointer + 0x54) = *(int*)(snuGamerClass + 0x54);
	print("<blue>Spoofed! Find a new session for the spoof to take effect.</blue>", 10000);
}
///name shit
void changename()
{
	char namechange1[255];
	stradd_s(namechange1, "Bitch");
	if (net_selected_player == 0)stradd_s(namechange1, "00");
	if (net_selected_player == 1)stradd_s(namechange1, "01");
	if (net_selected_player == 2)stradd_s(namechange1, "02");
	if (net_selected_player == 3)stradd_s(namechange1, "03");
	if (net_selected_player == 4)stradd_s(namechange1, "04");
	if (net_selected_player == 5)stradd_s(namechange1, "05");
	if (net_selected_player == 6)stradd_s(namechange1, "06");
	if (net_selected_player == 7)stradd_s(namechange1, "07");
	if (net_selected_player == 8)stradd_s(namechange1, "08");
	if (net_selected_player == 9)stradd_s(namechange1, "09");
	if (net_selected_player == 10)stradd_s(namechange1, "10");
	if (net_selected_player == 11)stradd_s(namechange1, "11");
	if (net_selected_player == 12)stradd_s(namechange1, "12");
	if (net_selected_player == 13)stradd_s(namechange1, "13");
	if (net_selected_player == 14)stradd_s(namechange1, "14");
	if (net_selected_player == 15)stradd_s(namechange1, "15");
	if (GET_LOCAL_SLOT() != net_selected_player)
	{
		strcpy(GET_SLOT_NAME(net_selected_player), namechange1, 255 - sizeof(GET_SLOT_NAME(net_selected_player)) - 7);
		print("<blue>This Locally Changes This Players Name For You ONLY", 5000);
	}
}
void settoxuid()
{
	void* playerPointer = GET_LOCAL_PLAYER_NAME(0) - 0x74;
	*(byte*)(playerPointer + 0x50) = XUID1;
	*(byte*)(playerPointer + 0x51) = XUID2;
	*(byte*)(playerPointer + 0x52) = XUID3;
	*(byte*)(playerPointer + 0x53) = XUID4;
	*(byte*)(playerPointer + 0x54) = XUID5;
	*(byte*)(playerPointer + 0x55) = XUID6;
	*(byte*)(playerPointer + 0x56) = XUID7;
	*(byte*)(playerPointer + 0x57) = XUID8;
}
void resetxuid()
{
	//unsigned char XUIDSpoof[] = { 0x00, 0x09, 0x00, 0x00, 0x0C, 0x5E, 0xEA, 0x1C };
	//unsigned char* b1 = (unsigned char *)((int)GET_SLOT_NAME(GET_LOCAL_SLOT()) - 0x74 + 0x50);
	//memcpy(b1, XUIDSpoof, 8);
	void* playerPointer = GET_LOCAL_PLAYER_NAME(0) - 0x74;
	void* playerPointer2 = GET_LOCAL_PLAYER_NAME(0);
	*(int*)(playerPointer + 0x50) = saveXUID1;
	*(int*)(playerPointer + 0x54) = saveXUID2;
	print("<green>XUID Reset - Find New Session So It Updates For Everyone", 5000);
}

void resetname()
{
	void* playerPointer2 = GET_LOCAL_PLAYER_NAME(0);
	*(byte*)(playerPointer2 + 0x00) = savename1;
	*(byte*)(playerPointer2 + 0x01) = savename2;
	*(byte*)(playerPointer2 + 0x02) = savename3;
	*(byte*)(playerPointer2 + 0x03) = savename4;
	*(byte*)(playerPointer2 + 0x04) = savename5;
	*(byte*)(playerPointer2 + 0x05) = savename6;
	*(byte*)(playerPointer2 + 0x06) = savename7;
	*(byte*)(playerPointer2 + 0x07) = savename8;
	*(byte*)(playerPointer2 + 0x08) = savename9;
	*(byte*)(playerPointer2 + 0x09) = savename10;
	*(byte*)(playerPointer2 + 0x0A) = savename11;
	*(byte*)(playerPointer2 + 0x0B) = savename12;
	*(byte*)(playerPointer2 + 0x0C) = savename13;
	*(byte*)(playerPointer2 + 0x0D) = savename14;
	*(byte*)(playerPointer2 + 0x0E) = savename15;
	print("<green>Name Reset - Find New Session So It Updates For Everyone", 5000);
}
void New_session()
{
	NET_SESSION_LEAVE_SESSION();
}

void spoof_title()
{
	titlespoof = !titlespoof;
	if (titlespoof)
	{
		UNK_0x7BD7A465(GET_LOCAL_SLOT(), "                       ");//we are clearing the entire title 1st before we reset it
	}
}
void shownametitle()
{
	showname = !showname;
	if (!showname)
	{
		*(byte*)0x83095E93 = 0;
	}
}
void ExecLoopMods()
{
	if (titlespoof)
	{
		UNK_0x7BD7A465(GET_LOCAL_SLOT(), titletext);
	}
	if (showname)
	{
		*(byte*)0x83095E93 = 1;
	}
}