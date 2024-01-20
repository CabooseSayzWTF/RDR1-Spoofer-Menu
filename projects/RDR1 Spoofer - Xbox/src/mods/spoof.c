#include "mods.h"

#include "../util.h"
#define NGTAG GET_LOCAL_PLAYER_NAME(0)
int capital_letter = 0;
int capital_letter2 = 0;
int lowercase_letter = 0;
int lowercase_letter2 = 0;
int lowercase_letter3 = 0;
int number = 0;
int number2 = 0;
int number3 = 0;
int special_character = 0;
int special_character2 = 0;
int colour = 0;
int colour2 = 0;
int endcolour = 0;
int endcolour2 = 0;
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
char titletext[65];//longest i think is 23, this should be max of 23 chars
int gamertag_index = 0;
int title_index = 0;
int npid_index = 0;

void TagInfoPrint()
{
	char TagInfo[255];
	stradd_s(TagInfo, "Count: ");
	straddi_s(TagInfo, gamertag_index);
	stradd_s(TagInfo, "/15");
	stradd_s(TagInfo, "\n");
	stradd_s(TagInfo, "Name: ");
	stradd_s(TagInfo, gamertag);
	print(TagInfo, 8000);
}
void TitleInfoPrint()
{
	char TitleInfo[255];
	stradd_s(TitleInfo, "Count: ");
	straddi_s(TitleInfo, title_index);
	stradd_s(TitleInfo, "/63");
	stradd_s(TitleInfo, "\n");
	stradd_s(TitleInfo, "Title: ");
	stradd_s(TitleInfo, titletext);
	print(TitleInfo, 8000);
}
void add_capital_letters()
{
	switch (capital_letter)
	{
	case 0:
		stradd_s(gamertag, "A");
		gamertag_index++;
		break;
	case 1:
		stradd_s(gamertag, "B");
		gamertag_index++;
		break;
	case 2:
		stradd_s(gamertag, "C");
		gamertag_index++;
		break;
	case 3:
		stradd_s(gamertag, "D");
		gamertag_index++;
		break;
	case 4:
		stradd_s(gamertag, "E");
		gamertag_index++;
		break;
	case 5:
		stradd_s(gamertag, "F");
		gamertag_index++;
		break;
	case 6:
		stradd_s(gamertag, "G");
		gamertag_index++;
		break;
	case 7:
		stradd_s(gamertag, "H");
		gamertag_index++;
		break;
	case 8:
		stradd_s(gamertag, "I");
		gamertag_index++;
		break;
	case 9:
		stradd_s(gamertag, "J");
		gamertag_index++;
		break;
	case 10:
		stradd_s(gamertag, "K");
		gamertag_index++;
		break;
	case 11:
		stradd_s(gamertag, "L");
		gamertag_index++;
		break;
	case 12:
		stradd_s(gamertag, "M");
		gamertag_index++;
		break;
	case 13:
		stradd_s(gamertag, "N");
		gamertag_index++;
		break;
	case 14:
		stradd_s(gamertag, "O");
		gamertag_index++;
		break;
	case 15:
		stradd_s(gamertag, "P");
		gamertag_index++;
		break;
	case 16:
		stradd_s(gamertag, "Q");
		gamertag_index++;
		break;
	case 17:
		stradd_s(gamertag, "R");
		gamertag_index++;
		break;
	case 18:
		stradd_s(gamertag, "S");
		gamertag_index++;
		break;
	case 19:
		stradd_s(gamertag, "T");
		gamertag_index++;
		break;
	case 20:
		stradd_s(gamertag, "U");
		gamertag_index++;
		break;
	case 21:
		stradd_s(gamertag, "V");
		gamertag_index++;
		break;
	case 22:
		stradd_s(gamertag, "W");
		gamertag_index++;
		break;
	case 23:
		stradd_s(gamertag, "X");
		gamertag_index++;
		break;
	case 24:
		stradd_s(gamertag, "Y");
		gamertag_index++;
		break;
	case 25:
		stradd_s(gamertag, "Z");
		gamertag_index++;
		break;
	}
	TagInfoPrint();
}
void add_capital_letters2()
{
	switch (capital_letter2)
	{
	case 0:
		stradd_s(titletext, "A");
		title_index++;
		break;
	case 1:
		stradd_s(titletext, "B");
		title_index++;
		break;
	case 2:
		stradd_s(titletext, "C");
		title_index++;
		break;
	case 3:
		stradd_s(titletext, "D");
		title_index++;
		break;
	case 4:
		stradd_s(titletext, "E");
		title_index++;
		break;
	case 5:
		stradd_s(titletext, "F");
		title_index++;
		break;
	case 6:
		stradd_s(titletext, "G");
		title_index++;
		break;
	case 7:
		stradd_s(titletext, "H");
		title_index++;
		break;
	case 8:
		stradd_s(titletext, "I");
		title_index++;
		break;
	case 9:
		stradd_s(titletext, "J");
		title_index++;
		break;
	case 10:
		stradd_s(titletext, "K");
		title_index++;
		break;
	case 11:
		stradd_s(titletext, "L");
		title_index++;
		break;
	case 12:
		stradd_s(titletext, "M");
		title_index++;
		break;
	case 13:
		stradd_s(titletext, "N");
		title_index++;
		break;
	case 14:
		stradd_s(titletext, "O");
		title_index++;
		break;
	case 15:
		stradd_s(titletext, "P");
		title_index++;
		break;
	case 16:
		stradd_s(titletext, "Q");
		title_index++;
		break;
	case 17:
		stradd_s(titletext, "R");
		title_index++;
		break;
	case 18:
		stradd_s(titletext, "S");
		title_index++;
		break;
	case 19:
		stradd_s(titletext, "T");
		title_index++;
		break;
	case 20:
		stradd_s(titletext, "U");
		title_index++;
		break;
	case 21:
		stradd_s(titletext, "V");
		title_index++;
		break;
	case 22:
		stradd_s(titletext, "W");
		title_index++;
		break;
	case 23:
		stradd_s(titletext, "X");
		title_index++;
		break;
	case 24:
		stradd_s(titletext, "Y");
		title_index++;
		break;
	case 25:
		stradd_s(titletext, "Z");
		title_index++;
		break;
	}
	TitleInfoPrint();
}

void add_lowercase_letters()
{
	switch (lowercase_letter)
	{
	case 0:
		stradd_s(gamertag, "a");
		gamertag_index++;
		break;
	case 1:
		stradd_s(gamertag, "b");
		gamertag_index++;
		break;
	case 2:
		stradd_s(gamertag, "c");
		gamertag_index++;
		break;
	case 3:
		stradd_s(gamertag, "d");
		gamertag_index++;
		break;
	case 4:
		stradd_s(gamertag, "e");
		gamertag_index++;
		break;
	case 5:
		stradd_s(gamertag, "f");
		gamertag_index++;
		break;
	case 6:
		stradd_s(gamertag, "g");
		gamertag_index++;
		break;
	case 7:
		stradd_s(gamertag, "h");
		gamertag_index++;
		break;
	case 8:
		stradd_s(gamertag, "i");
		gamertag_index++;
		break;
	case 9:
		stradd_s(gamertag, "j");
		gamertag_index++;
		break;
	case 10:
		stradd_s(gamertag, "k");
		gamertag_index++;
		break;
	case 11:
		stradd_s(gamertag, "l");
		gamertag_index++;
		break;
	case 12:
		stradd_s(gamertag, "m");
		gamertag_index++;
		break;
	case 13:
		stradd_s(gamertag, "n");
		gamertag_index++;
		break;
	case 14:
		stradd_s(gamertag, "o");
		gamertag_index++;
		break;
	case 15:
		stradd_s(gamertag, "p");
		gamertag_index++;
		break;
	case 16:
		stradd_s(gamertag, "q");
		gamertag_index++;
		break;
	case 17:
		stradd_s(gamertag, "r");
		gamertag_index++;
		break;
	case 18:
		stradd_s(gamertag, "s");
		gamertag_index++;
		break;
	case 19:
		stradd_s(gamertag, "t");
		gamertag_index++;
		break;
	case 20:
		stradd_s(gamertag, "u");
		gamertag_index++;
		break;
	case 21:
		stradd_s(gamertag, "v");
		gamertag_index++;
		break;
	case 22:
		stradd_s(gamertag, "w");
		gamertag_index++;
		break;
	case 23:
		stradd_s(gamertag, "x");
		gamertag_index++;
		break;
	case 24:
		stradd_s(gamertag, "y");
		gamertag_index++;
		break;
	case 25:
		stradd_s(gamertag, "z");
		gamertag_index++;
		break;
	}
	TagInfoPrint();
}
void add_lowercase_letters2()
{
	switch (lowercase_letter2)
	{
	case 0:
		stradd_s(titletext, "a");
		title_index++;
		break;
	case 1:
		stradd_s(titletext, "b");
		title_index++;
		break;
	case 2:
		stradd_s(titletext, "c");
		title_index++;
		break;
	case 3:
		stradd_s(titletext, "d");
		title_index++;
		break;
	case 4:
		stradd_s(titletext, "e");
		title_index++;
		break;
	case 5:
		stradd_s(titletext, "f");
		title_index++;
		break;
	case 6:
		stradd_s(titletext, "g");
		title_index++;
		break;
	case 7:
		stradd_s(titletext, "h");
		title_index++;
		break;
	case 8:
		stradd_s(titletext, "i");
		title_index++;
		break;
	case 9:
		stradd_s(titletext, "j");
		title_index++;
		break;
	case 10:
		stradd_s(titletext, "k");
		title_index++;
		break;
	case 11:
		stradd_s(titletext, "l");
		title_index++;
		break;
	case 12:
		stradd_s(titletext, "m");
		title_index++;
		break;
	case 13:
		stradd_s(titletext, "n");
		title_index++;
		break;
	case 14:
		stradd_s(titletext, "o");
		title_index++;
		break;
	case 15:
		stradd_s(titletext, "p");
		title_index++;
		break;
	case 16:
		stradd_s(titletext, "q");
		title_index++;
		break;
	case 17:
		stradd_s(titletext, "r");
		title_index++;
		break;
	case 18:
		stradd_s(titletext, "s");
		title_index++;
		break;
	case 19:
		stradd_s(titletext, "t");
		title_index++;
		break;
	case 20:
		stradd_s(titletext, "u");
		title_index++;
		break;
	case 21:
		stradd_s(titletext, "v");
		title_index++;
		break;
	case 22:
		stradd_s(titletext, "w");
		title_index++;
		break;
	case 23:
		stradd_s(titletext, "x");
		title_index++;
		break;
	case 24:
		stradd_s(titletext, "y");
		title_index++;
		break;
	case 25:
		stradd_s(titletext, "z");
		title_index++;
		break;
	}
	TitleInfoPrint();
}

void add_numbers()
{
	switch (number)
	{
	case 0:
		stradd_s(gamertag, "0");
		gamertag_index++;
		break;
	case 1:
		stradd_s(gamertag, "1");
		gamertag_index++;
		break;
	case 2:
		stradd_s(gamertag, "2");
		gamertag_index++;
		break;
	case 3:
		stradd_s(gamertag, "3");
		gamertag_index++;
		break;
	case 4:
		stradd_s(gamertag, "4");
		gamertag_index++;
		break;
	case 5:
		stradd_s(gamertag, "5");
		gamertag_index++;
		break;
	case 6:
		stradd_s(gamertag, "6");
		gamertag_index++;
		break;
	case 7:
		stradd_s(gamertag, "7");
		gamertag_index++;
		break;
	case 8:
		stradd_s(gamertag, "8");
		gamertag_index++;
		break;
	case 9:
		stradd_s(gamertag, "9");
		gamertag_index++;
		break;
	}
	TagInfoPrint();
}
void add_numbers2()
{
	switch (number2)
	{
	case 0:
		stradd_s(titletext, "0");
		title_index++;
		break;
	case 1:
		stradd_s(titletext, "1");
		title_index++;
		break;
	case 2:
		stradd_s(titletext, "2");
		title_index++;
		break;
	case 3:
		stradd_s(titletext, "3");
		title_index++;
		break;
	case 4:
		stradd_s(titletext, "4");
		title_index++;
		break;
	case 5:
		stradd_s(titletext, "5");
		title_index++;
		break;
	case 6:
		stradd_s(titletext, "6");
		title_index++;
		break;
	case 7:
		stradd_s(titletext, "7");
		title_index++;
		break;
	case 8:
		stradd_s(titletext, "8");
		title_index++;
		break;
	case 9:
		stradd_s(titletext, "9");
		title_index++;
		break;
	}
	TitleInfoPrint();
}

void add_special_characters()
{
	switch (special_character)
	{
	case 0:
		stradd_s(gamertag, "`");
		gamertag_index++;
		break;
	case 1:
		stradd_s(gamertag, "!");
		gamertag_index++;
		break;
	case 2:
		stradd_s(gamertag, "$");
		gamertag_index++;
		break;
	case 3:
		stradd_s(gamertag, "%");
		gamertag_index++;
		break;
	case 4:
		stradd_s(gamertag, "&");
		gamertag_index++;
		break;
	case 5:
		stradd_s(gamertag, "*");
		gamertag_index++;
		break;
	case 6:
		stradd_s(gamertag, "(");
		gamertag_index++;
		break;
	case 7:
		stradd_s(gamertag, ")");
		gamertag_index++;
		break;
	case 8:
		stradd_s(gamertag, "-");
		gamertag_index++;
		break;
	case 9:
		stradd_s(gamertag, "_");
		gamertag_index++;
		break;
	case 10:
		stradd_s(gamertag, "=");
		gamertag_index++;
		break;
	case 11:
		stradd_s(gamertag, "+");
		gamertag_index++;
		break;
	case 12:
		stradd_s(gamertag, "[");
		gamertag_index++;
		break;
	case 13:
		stradd_s(gamertag, "]");
		gamertag_index++;
		break;
	case 14:
		stradd_s(gamertag, "{");
		gamertag_index++;
		break;
	case 15:
		stradd_s(gamertag, "}");
		gamertag_index++;
		break;
	case 16:
		stradd_s(gamertag, ";");
		gamertag_index++;
		break;
	case 17:
		stradd_s(gamertag, ":");
		gamertag_index++;
		break;
	case 18:
		stradd_s(gamertag, "'");
		gamertag_index++;
		break;
	case 19:
		stradd_s(gamertag, "@");
		gamertag_index++;
		break;
	case 20:
		stradd_s(gamertag, "#");
		gamertag_index++;
		break;
	case 21:
		stradd_s(gamertag, "~");
		gamertag_index++;
		break;
	case 22:
		stradd_s(gamertag, "|");
		gamertag_index++;
		break;
	case 23:
		stradd_s(gamertag, ",");
		gamertag_index++;
		break;
	case 24:
		stradd_s(gamertag, ".");
		gamertag_index++;
		break;
	case 25:
		stradd_s(gamertag, "/");
		gamertag_index++;
		break;
	case 26:
		stradd_s(gamertag, "?");
		gamertag_index++;
		break;
	case 27:
		stradd_s(gamertag, "¡");
		gamertag_index += 2;
		break;
	case 28:
		stradd_s(gamertag, "ª");
		gamertag_index += 2;
		break;
	case 29:
		stradd_s(gamertag, "º");
		gamertag_index += 2;
		break;
	case 30:
		stradd_s(gamertag, "¿");
		gamertag_index += 2;
		break;
	case 31:
		stradd_s(gamertag, "–");
		gamertag_index += 3;
		break;
	case 32:
		stradd_s(gamertag, "…");
		gamertag_index += 3;
		break;
	case 33:
		stradd_s(gamertag, "‰");
		gamertag_index += 3;
		break;
	case 34:
		stradd_s(gamertag, "™");
		gamertag_index += 3;
		break;
	}
	TagInfoPrint();
}
void add_special_characters2()
{
	switch (special_character2)
	{
	case 0:
		stradd_s(titletext, "`");
		title_index++;
		break;
	case 1:
		stradd_s(titletext, "!");
		title_index++;
		break;
	case 2:
		stradd_s(titletext, "$");
		title_index++;
		break;
	case 3:
		stradd_s(titletext, "%");
		title_index++;
		break;
	case 4:
		stradd_s(titletext, "&");
		title_index++;
		break;
	case 5:
		stradd_s(titletext, "*");
		title_index++;
		break;
	case 6:
		stradd_s(titletext, "(");
		title_index++;
		break;
	case 7:
		stradd_s(titletext, ")");
		title_index++;
		break;
	case 8:
		stradd_s(titletext, "-");
		title_index++;
		break;
	case 9:
		stradd_s(titletext, "_");
		title_index++;
		break;
	case 10:
		stradd_s(titletext, "=");
		title_index++;
		break;
	case 11:
		stradd_s(titletext, "+");
		title_index++;
		break;
	case 12:
		stradd_s(titletext, "[");
		title_index++;
		break;
	case 13:
		stradd_s(titletext, "]");
		title_index++;
		break;
	case 14:
		stradd_s(titletext, "{");
		title_index++;
		break;
	case 15:
		stradd_s(titletext, "}");
		title_index++;
		break;
	case 16:
		stradd_s(titletext, ";");
		title_index++;
		break;
	case 17:
		stradd_s(titletext, ":");
		title_index++;
		break;
	case 18:
		stradd_s(titletext, "'");
		title_index++;
		break;
	case 19:
		stradd_s(titletext, "@");
		title_index++;
		break;
	case 20:
		stradd_s(titletext, "#");
		title_index++;
		break;
	case 21:
		stradd_s(titletext, "~");
		title_index++;
		break;
	case 22:
		stradd_s(titletext, "|");
		title_index++;
		break;
	case 23:
		stradd_s(titletext, ",");
		title_index++;
		break;
	case 24:
		stradd_s(titletext, ".");
		title_index++;
		break;
	case 25:
		stradd_s(titletext, "/");
		title_index++;
		break;
	case 26:
		stradd_s(titletext, "?");
		title_index++;
		break;
	case 27:
		stradd_s(titletext, "¡");
		title_index += 2;
		break;
	case 28:
		stradd_s(titletext, "ª");
		title_index += 2;
		break;
	case 29:
		stradd_s(titletext, "º");
		title_index += 2;
		break;
	case 30:
		stradd_s(titletext, "¿");
		title_index += 2;
		break;
	case 31:
		stradd_s(titletext, "–");
		title_index += 3;
		break;
	case 32:
		stradd_s(titletext, "…");
		title_index += 3;
		break;
	case 33:
		stradd_s(titletext, "‰");
		title_index += 3;
		break;
	case 34:
		stradd_s(titletext, "™");
		title_index += 3;
		break;
	}
	TitleInfoPrint();
}

void add_colours()
{
	switch (colour)
	{
	case 0:
		stradd_s(gamertag, "<red>");
		gamertag_index += 5;
		break;
	case 1:
		stradd_s(gamertag, "<orange>");
		gamertag_index += 8;
		break;
	case 2:
		stradd_s(gamertag, "<yellow>");
		gamertag_index += 8;
		break;
	case 3:
		stradd_s(gamertag, "<green>");
		gamertag_index += 7;
		break;
	case 4:
		stradd_s(gamertag, "<blue>");
		gamertag_index += 6;
		break;
	case 5:
		stradd_s(gamertag, "<purple>");
		gamertag_index += 8;
		break;
	case 6:
		stradd_s(gamertag, "<brown>");
		gamertag_index += 7;
		break;
	case 7:
		stradd_s(gamertag, "<sepia>");
		gamertag_index += 7;
		break;
	case 8:
		stradd_s(gamertag, "<grey>");
		gamertag_index += 6;
		break;
	case 9:
		stradd_s(gamertag, "<0xFF0000>");//True Red
		gamertag_index += 10;
		break;
	case 10:
		stradd_s(gamertag, "<0x00FF00>");//True Green
		gamertag_index += 10;
		break;
	case 11:
		stradd_s(gamertag, "<0x0000FF>");//True Blue
		gamertag_index += 10;
		break;
	case 12:
		stradd_s(gamertag, "<0x00FFFF>");//Cyan
		gamertag_index += 10;
		break;
	case 13:
		stradd_s(gamertag, "<0xFF69B4>");//Pink
		gamertag_index += 10;
		break;
	case 14:
		stradd_s(gamertag, "<0x9D00D7>");//true Purple
		gamertag_index += 10;
		break;
	case 15:
		stradd_s(gamertag, "<0xF7FF00>");//true yellow
		gamertag_index += 10;
		break;
	case 16:
		stradd_s(gamertag, "<0x3EB489>");//mint
		gamertag_index += 10;
		break;
	}
	TagInfoPrint();
}
void add_colours2()
{
	switch (colour2)
	{
	case 0:
		stradd_s(titletext, "<red>");
		title_index += 5;
		break;
	case 1:
		stradd_s(titletext, "<orange>");
		title_index += 8;
		break;
	case 2:
		stradd_s(titletext, "<yellow>");
		title_index += 8;
		break;
	case 3:
		stradd_s(titletext, "<green>");
		title_index += 7;
		break;
	case 4:
		stradd_s(titletext, "<blue>");
		title_index += 6;
		break;
	case 5:
		stradd_s(titletext, "<purple>");
		title_index += 8;
		break;
	case 6:
		stradd_s(titletext, "<brown>");
		title_index += 7;
		break;
	case 7:
		stradd_s(titletext, "<sepia>");
		title_index += 7;
		break;
	case 8:
		stradd_s(titletext, "<grey>");
		title_index += 6;
		break;
	case 9:
		stradd_s(titletext, "<0xFF0000>");//True Red
		title_index += 10;
		break;
	case 10:
		stradd_s(titletext, "<0x00FF00>");//True Green
		title_index += 10;
		break;
	case 11:
		stradd_s(titletext, "<0x0000FF>");//True Blue
		title_index += 10;
		break;
	case 12:
		stradd_s(titletext, "<0x00FFFF>");//Cyan
		title_index += 10;
		break;
	case 13:
		stradd_s(titletext, "<0xFF69B4>");//Pink
		title_index += 10;
		break;
	case 14:
		stradd_s(titletext, "<0x9D00D7>");//true Purple
		title_index += 10;
		break;
	case 15:
		stradd_s(titletext, "<0xF7FF00>");//true yellow
		title_index += 10;
		break;
	case 16:
		stradd_s(titletext, "<0x3EB489>");//mint
		title_index += 10;
		break;
	}
	TitleInfoPrint();
}

void end_colours()
{
	switch (endcolour)
	{
	case 0:
		stradd_s(titletext, "</red>");
		title_index += 6;
		break;
	case 1:
		stradd_s(titletext, "</orange>");
		title_index += 9;
		break;
	case 2:
		stradd_s(titletext, "</yellow>");
		title_index += 9;
		break;
	case 3:
		stradd_s(titletext, "</green>");
		title_index += 8;
		break;
	case 4:
		stradd_s(titletext, "</blue>");
		title_index += 7;
		break;
	case 5:
		stradd_s(titletext, "</purple>");
		title_index += 9;
		break;
	case 6:
		stradd_s(titletext, "</brown>");
		title_index += 8;
		break;
	case 7:
		stradd_s(titletext, "</sepia>");
		title_index += 8;
		break;
	case 8:
		stradd_s(titletext, "</grey>");
		title_index += 7;
		break;
	case 9:
		stradd_s(titletext, "</0x>");
		title_index += 5;
		break;
	}
	TitleInfoPrint();
}

void end_colours2()
{
	switch (endcolour2)
	{
	case 0:
		stradd_s(gamertag, "</red>");
		gamertag_index += 6;
		break;
	case 1:
		stradd_s(gamertag, "</orange>");
		gamertag_index += 9;
		break;
	case 2:
		stradd_s(gamertag, "</yellow>");
		gamertag_index += 9;
		break;
	case 3:
		stradd_s(gamertag, "</green>");
		gamertag_index += 8;
		break;
	case 4:
		stradd_s(gamertag, "</blue>");
		gamertag_index += 7;
		break;
	case 5:
		stradd_s(gamertag, "</purple>");
		gamertag_index += 9;
		break;
	case 6:
		stradd_s(gamertag, "</brown>");
		gamertag_index += 8;
		break;
	case 7:
		stradd_s(gamertag, "</sepia>");
		gamertag_index += 8;
		break;
	case 8:
		stradd_s(gamertag, "</grey>");
		gamertag_index += 7;
		break;
	case 9:
		stradd_s(gamertag, "</0x>");
		gamertag_index += 5;
		break;
	}
	TagInfoPrint();
}

void add_button_blips()
{
	switch (button_blip)
	{
	case 0:
		stradd_s(gamertag, "<action>");
		gamertag_index += 8;
		break;
	case 1:
		stradd_s(gamertag, "<cancel>");
		gamertag_index += 8;
		break;
	case 2:
		stradd_s(gamertag, "<x>");
		gamertag_index += 3;
		break;
	case 3:
		stradd_s(gamertag, "<y>");
		gamertag_index += 3;
		break;
	case 4:
		stradd_s(gamertag, "<lt>");
		gamertag_index += 4;
		break;
	case 5:
		stradd_s(gamertag, "<rt>");
		gamertag_index += 4;
		break;
	case 6:
		stradd_s(gamertag, "<lb>");
		gamertag_index += 4;
		break;
	case 7:
		stradd_s(gamertag, "<rb>");
		gamertag_index += 4;
		break;
	case 8:
		stradd_s(gamertag, "<ls>");
		gamertag_index += 4;
		break;
	case 9:
		stradd_s(gamertag, "<rs>");
		gamertag_index += 4;
		break;
	case 10:
		stradd_s(gamertag, "<lclick>");
		gamertag_index += 8;
		break;
	case 11:
		stradd_s(gamertag, "<rclick>");
		gamertag_index += 8;
		break;
	case 12:
		stradd_s(gamertag, "<start>");
		gamertag_index += 7;
		break;
	case 13:
		stradd_s(gamertag, "<back>");
		gamertag_index += 6;
		break;
	case 14:
		stradd_s(gamertag, "<dpadleft>");
		gamertag_index += 10;
		break;
	case 15:
		stradd_s(gamertag, "<dpadright>");
		gamertag_index += 11;
		break;
	case 16:
		stradd_s(gamertag, "<dpadleftright>");
		gamertag_index += 15;
		break;
	case 17:
		stradd_s(gamertag, "<dpadup>");
		gamertag_index += 10;
		break;
	case 18:
		stradd_s(gamertag, "<dpaddown>");
		gamertag_index += 10;
		break;
	}
	TagInfoPrint();
}
void add_button_blips2()
{
	switch (button_blip2)
	{
	case 0:
		stradd_s(titletext, "<action>");
		title_index += 8;
		break;
	case 1:
		stradd_s(titletext, "<cancel>");
		title_index += 8;
		break;
	case 2:
		stradd_s(titletext, "<x>");
		title_index += 3;
		break;
	case 3:
		stradd_s(titletext, "<y>");
		title_index += 3;
		break;
	case 4:
		stradd_s(titletext, "<lt>");
		title_index += 4;
		break;
	case 5:
		stradd_s(titletext, "<rt>");
		title_index += 4;
		break;
	case 6:
		stradd_s(titletext, "<lb>");
		title_index += 4;
		break;
	case 7:
		stradd_s(titletext, "<rb>");
		title_index += 4;
		break;
	case 8:
		stradd_s(titletext, "<ls>");
		title_index += 4;
		break;
	case 9:
		stradd_s(titletext, "<rs>");
		title_index += 4;
		break;
	case 10:
		stradd_s(titletext, "<lclick>");
		title_index += 8;
		break;
	case 11:
		stradd_s(titletext, "<rclick>");
		title_index += 8;
		break;
	case 12:
		stradd_s(titletext, "<start>");
		title_index += 7;
		break;
	case 13:
		stradd_s(titletext, "<back>");
		title_index += 6;
		break;
	case 14:
		stradd_s(titletext, "<dpadleft>");
		title_index += 10;
		break;
	case 15:
		stradd_s(titletext, "<dpadright>");
		title_index += 11;
		break;
	case 16:
		stradd_s(titletext, "<dpadleftright>");
		title_index += 15;
		break;
	case 17:
		stradd_s(titletext, "<dpadup>");
		title_index += 10;
		break;
	case 18:
		stradd_s(titletext, "<dpaddown>");
		title_index += 10;
		break;
	}
	TitleInfoPrint();
}

void add_other_blips()
{
	switch (other_blip)
	{
	case 0:
		stradd_s(gamertag, "<WHITE>");
		gamertag_index += 7;
		break;
	case 1:
		stradd_s(gamertag, "<RED_CIRCLE>");
		gamertag_index += 12;
		break;
	case 2:
		stradd_s(gamertag, "<ENEMY>");
		gamertag_index += 7;
		break;
	case 3:
		stradd_s(gamertag, "<FRIEND>");
		gamertag_index += 8;
		break;
	case 4:
		stradd_s(gamertag, "<HOME>");
		gamertag_index += 6;
		break;
	case 5:
		stradd_s(gamertag, "<OBJECTIVE>");
		gamertag_index += 11;
		break;
	case 6:
		stradd_s(gamertag, "<XP>");
		gamertag_index += 4;
		break;
	case 7:
		stradd_s(gamertag, "<STAR_GOLD>");
		gamertag_index += 11;
		break;
	case 8:
		stradd_s(gamertag, "<STAR_SILVER>");
		gamertag_index += 13;
		break;
	case 9:
		stradd_s(gamertag, "<STAR_BRONZE>");
		gamertag_index += 13;
		break;
	case 10:
		stradd_s(gamertag, "<ROCKSTAR>");
		gamertag_index += 10;
		break;
	case 11:
		stradd_s(gamertag, "<PLAYER>");
		gamertag_index += 8;
		break;
	case 12:
		stradd_s(gamertag, "<JAVIER>");
		gamertag_index += 8;
		break;
	case 13:
		stradd_s(gamertag, "<MONEY>");
		gamertag_index += 7;
		break;
	case 14:
		stradd_s(gamertag, "<BLACKSMITH>");
		gamertag_index += 12;
		break;
	case 15:
		stradd_s(gamertag, "<COACH_DRIVER>");
		gamertag_index += 14;
		break;
	case 16:
		stradd_s(gamertag, "<HEAR_NOISE>");
		gamertag_index += 12;
		break;
	case 17:
		stradd_s(gamertag, "<TRAIN>");
		gamertag_index += 7;
		break;
	case 18:
		stradd_s(gamertag, "<MOST_WANTED>");
		gamertag_index += 13;
		break;
	case 19:
		stradd_s(gamertag, "<HOSTAGE>");
		gamertag_index += 9;
		break;
	case 20:
		stradd_s(gamertag, "<MP_REVIVES>");
		gamertag_index += 12;
		break;
	case 21:
		stradd_s(gamertag, "<MP_INJURED>");
		gamertag_index += 12;
		break;
	case 22:
		stradd_s(gamertag, "<MP_DEATH>");
		gamertag_index += 10;
		break;
	case 23:
		stradd_s(gamertag, "<NIGHTWATCH>");
		gamertag_index += 12;
		break;
	case 24:
		stradd_s(gamertag, "<EYEWITNESS>");
		gamertag_index += 12;
		break;
	case 25:
		stradd_s(gamertag, "<SHERIFF>");
		gamertag_index += 9;
		break;
	case 26:
		stradd_s(gamertag, "<TELEGRAPH>");
		gamertag_index += 11;
		break;
	case 27:
		stradd_s(gamertag, "<BEER>");
		gamertag_index += 6;
		break;
	case 28:
		stradd_s(gamertag, "<BULLRIDING>");
		gamertag_index += 12;
		break;
	case 29:
		stradd_s(gamertag, "<CARDS>");
		gamertag_index += 7;
		break;
	case 30:
		stradd_s(gamertag, "<HORSESHOE>");
		gamertag_index += 11;
		break;
	case 31:
		stradd_s(gamertag, "<ARM_WRESTLING>");
		gamertag_index += 15;
		break;
	case 32:
		stradd_s(gamertag, "<DUEL>");
		gamertag_index += 6;
		break;
	case 33:
		stradd_s(gamertag, "<FIVE_FINGER>");
		gamertag_index += 13;
		break;
	case 34:
		stradd_s(gamertag, "<WEAPON_CACHE>");
		gamertag_index += 14;
		break;
	case 35:
		stradd_s(gamertag, "<POSSE_LEADER>");
		gamertag_index += 14;
		break;
	case 36:
		stradd_s(gamertag, "<SCRAP>");
		gamertag_index += 7;
		break;
	case 37:
		stradd_s(gamertag, "<ATTACK_COACH >");//verify
		gamertag_index += 15;
		break;
	case 38:
		stradd_s(gamertag, "<FIRE>");
		print(gamertag, 5000);
		gamertag_index += 6;
		break;
	case 39:
		stradd_s(gamertag, "<SKULL>");
		gamertag_index += 7;
		break;
	case 40:
		stradd_s(gamertag, "<RED_SKULL>");
		gamertag_index += 11;
		break;
	case 41:
		stradd_s(gamertag, "<TRANSPORT_RED>");
		gamertag_index += 15;
		break;
	case 42:
		stradd_s(gamertag, "<SHOP>");
		gamertag_index += 6;
		break;
	case 43:
		stradd_s(gamertag, "<DOCTOR>");
		gamertag_index += 8;
		break;
	case 44:
		stradd_s(gamertag, "<GUNSMITH>");
		gamertag_index += 10;
		break;
	case 45:
		stradd_s(gamertag, "<TRAIN_TICKETS>");
		gamertag_index += 15;
		break;
	case 46:
		stradd_s(gamertag, "<BOMB>");
		gamertag_index += 6;
		break;
	case 47:
		stradd_s(gamertag, "<CHECKER>");
		gamertag_index += 9;
		break;
	case 48:
		stradd_s(gamertag, "<DYNAMITE>");
		gamertag_index += 10;
		break;
	case 49:
		stradd_s(gamertag, "<FIREBOTTLE>");
		gamertag_index += 12;
		break;
	case 50:
		stradd_s(gamertag, "<HEIST_END>");
		gamertag_index += 11;
		break;
	case 51:
		stradd_s(gamertag, "<QUESTION_MARK>");
		gamertag_index += 15;
		break;
	case 52:
		stradd_s(gamertag, "<RACE_FINISH>");
		gamertag_index += 13;
		break;
	case 53:
		stradd_s(gamertag, "<RACE_OPPONENT>");
		gamertag_index += 15;
		break;
	case 54:
		stradd_s(gamertag, "<TARGET>");
		gamertag_index += 8;
		break;
	case 55:
		stradd_s(gamertag, "<HERD_MAIN>");
		gamertag_index += 11;
		break;
	case 56:
		stradd_s(gamertag, "<LIARSDICE>");
		gamertag_index += 11;
		break;
	case 57:
		stradd_s(gamertag, "<POKER>");
		gamertag_index += 7;
		break;
	case 58:
		stradd_s(gamertag, "<TRAIN_RED>");
		gamertag_index += 11;
		break;
	case 59:
		stradd_s(gamertag, "<SWAG>");
		gamertag_index += 6;
		break;
	case 60:
		stradd_s(gamertag, "<SWAG_Y>");
		gamertag_index += 8;
		break;
	case 61:
		stradd_s(gamertag, "<SWAG_R>");
		gamertag_index += 8;
		break;
	case 62:
		stradd_s(gamertag, "<SWAG_B>");
		gamertag_index += 8;
		break;
	case 63:
		stradd_s(gamertag, "<CHEST>");
		gamertag_index += 7;
		break;
	case 64:
		stradd_s(gamertag, "<MP_ACHIEVE>");
		gamertag_index += 12;
		break;
	case 65:
		stradd_s(gamertag, "<MP_KO>");
		gamertag_index += 7;
		break;
	case 66:
		stradd_s(gamertag, "<MPK_VIP>");
		gamertag_index += 9;
		break;
	case 67:
		stradd_s(gamertag, "<MPK_KNIFE>");
		gamertag_index += 11;
		break;
	case 68:
		stradd_s(gamertag, "<MPK_ANIMAL>");
		gamertag_index += 12;
		break;
	case 69:
		stradd_s(gamertag, "<DICE6>");
		gamertag_index += 7;
		break;
	case 70:
		stradd_s(gamertag, "<MPK_SPREE_END>");
		gamertag_index += 15;
		break;
	case 71:
		stradd_s(gamertag, "<MPK_SNIPER>");
		gamertag_index += 12;
		break;
	case 72:
		stradd_s(gamertag, "<MPS_DROWN>");
		gamertag_index += 11;
		break;
	case 73:
		stradd_s(gamertag, "<MPS_FALL>");
		gamertag_index += 10;
		break;
	case 74:
		stradd_s(gamertag, "<MPS_SPLODE>");
		gamertag_index += 12;
		break;
	case 75:
		stradd_s(gamertag, "<MPS_CACTUS>");
		gamertag_index += 12;
		break;
	case 76:
		stradd_s(gamertag, "<TAILOR>");
		gamertag_index += 8;
		break;
	case 77:
		stradd_s(gamertag, "<CANNON>");
		gamertag_index += 8;
		break;
	case 78:
		stradd_s(gamertag, "<GATLING>");
		gamertag_index += 9;
		break;
	case 79:
		stradd_s(gamertag, "<MOVIEHOUSE>");
		gamertag_index += 12;
		break;
	case 80:
		stradd_s(gamertag, "<NEWSPAPER>");
		gamertag_index += 11;
		break;
	case 81:
		stradd_s(gamertag, "<MP_REZ>");
		gamertag_index += 8;
		break;
	case 82:
		stradd_s(gamertag, "<MP_SCORE>");
		gamertag_index += 10;
		break;
	case 83:
		stradd_s(gamertag, "<MPK_PWHIP>");
		gamertag_index += 11;
		break;
	case 84:
		stradd_s(gamertag, "<VSKIP>");
		gamertag_index += 7;
		break;
	case 85:
		stradd_s(gamertag, "<MP_LOCKED>");
		gamertag_index += 11;
		break;
	case 86:
		stradd_s(gamertag, "<ENVELOPE>");
		gamertag_index += 10;
		break;
	case 87:
		stradd_s(gamertag, "<MPK_TEAMMATE>");
		gamertag_index += 14;
		break;
	}
	TagInfoPrint();
}
void add_other_blips2()
{
	switch (other_blip2)
	{
	case 0:
		stradd_s(titletext, "<WHITE>");
		title_index += 7;
		break;
	case 1:
		stradd_s(titletext, "<RED_CIRCLE>");
		title_index += 12;
		break;
	case 2:
		stradd_s(titletext, "<ENEMY>");
		title_index += 7;
		break;
	case 3:
		stradd_s(titletext, "<FRIEND>");
		title_index += 8;
		break;
	case 4:
		stradd_s(titletext, "<HOME>");
		title_index += 6;
		break;
	case 5:
		stradd_s(titletext, "<OBJECTIVE>");
		title_index += 11;
		break;
	case 6:
		stradd_s(titletext, "<XP>");
		title_index += 4;
		break;
	case 7:
		stradd_s(titletext, "<STAR_GOLD>");
		title_index += 11;
		break;
	case 8:
		stradd_s(titletext, "<STAR_SILVER>");
		title_index += 13;
		break;
	case 9:
		stradd_s(titletext, "<STAR_BRONZE>");
		title_index += 13;
		break;
	case 10:
		stradd_s(titletext, "<ROCKSTAR>");
		title_index += 10;
		break;
	case 11:
		stradd_s(titletext, "<PLAYER>");
		title_index += 8;
		break;
	case 12:
		stradd_s(titletext, "<JAVIER>");
		title_index += 8;
		break;
	case 13:
		stradd_s(titletext, "<MONEY>");
		title_index += 7;
		break;
	case 14:
		stradd_s(titletext, "<BLACKSMITH>");
		title_index += 12;
		break;
	case 15:
		stradd_s(titletext, "<COACH_DRIVER>");
		title_index += 14;
		break;
	case 16:
		stradd_s(titletext, "<HEAR_NOISE>");
		title_index += 12;
		break;
	case 17:
		stradd_s(titletext, "<TRAIN>");
		title_index += 7;
		break;
	case 18:
		stradd_s(titletext, "<MOST_WANTED>");
		title_index += 13;
		break;
	case 19:
		stradd_s(titletext, "<HOSTAGE>");
		title_index += 9;
		break;
	case 20:
		stradd_s(titletext, "<MP_REVIVES>");
		title_index += 12;
		break;
	case 21:
		stradd_s(titletext, "<MP_INJURED>");
		title_index += 12;
		break;
	case 22:
		stradd_s(titletext, "<MP_DEATH>");
		title_index += 10;
		break;
	case 23:
		stradd_s(titletext, "<NIGHTWATCH>");
		title_index += 12;
		break;
	case 24:
		stradd_s(titletext, "<EYEWITNESS>");
		title_index += 12;
		break;
	case 25:
		stradd_s(titletext, "<SHERIFF>");
		title_index += 9;
		break;
	case 26:
		stradd_s(titletext, "<TELEGRAPH>");
		title_index += 11;
		break;
	case 27:
		stradd_s(titletext, "<BEER>");
		title_index += 6;
		break;
	case 28:
		stradd_s(titletext, "<BULLRIDING>");
		title_index += 12;
		break;
	case 29:
		stradd_s(titletext, "<CARDS>");
		title_index += 7;
		break;
	case 30:
		stradd_s(titletext, "<HORSESHOE>");
		title_index += 11;
		break;
	case 31:
		stradd_s(titletext, "<ARM_WRESTLING>");
		title_index += 15;
		break;
	case 32:
		stradd_s(titletext, "<DUEL>");
		title_index += 6;
		break;
	case 33:
		stradd_s(titletext, "<FIVE_FINGER>");
		title_index += 13;
		break;
	case 34:
		stradd_s(titletext, "<WEAPON_CACHE>");
		title_index += 14;
		break;
	case 35:
		stradd_s(titletext, "<POSSE_LEADER>");
		title_index += 14;
		break;
	case 36:
		stradd_s(titletext, "<SCRAP>");
		title_index += 7;
		break;
	case 37:
		stradd_s(titletext, "<ATTACK_COACH >");
		title_index += 15;
		break;
	case 38:
		stradd_s(titletext, "<FIRE>");
		title_index += 6;
		break;
	case 39:
		stradd_s(titletext, "<SKULL>");
		title_index += 7;
		break;
	case 40:
		stradd_s(titletext, "<RED_SKULL>");
		title_index += 11;
		break;
	case 41:
		stradd_s(titletext, "<TRANSPORT_RED>");
		title_index += 15;
		break;
	case 42:
		stradd_s(titletext, "<SHOP>");
		title_index += 6;
		break;
	case 43:
		stradd_s(titletext, "<DOCTOR>");
		title_index += 8;
		break;
	case 44:
		stradd_s(titletext, "<GUNSMITH>");
		title_index += 10;
		break;
	case 45:
		stradd_s(titletext, "<TRAIN_TICKETS>");
		title_index += 15;
		break;
	case 46:
		stradd_s(titletext, "<BOMB>");
		title_index += 6;
		break;
	case 47:
		stradd_s(titletext, "<CHECKER>");
		title_index += 9;
		break;
	case 48:
		stradd_s(titletext, "<DYNAMITE>");
		title_index += 10;
		break;
	case 49:
		stradd_s(titletext, "<FIREBOTTLE>");
		title_index += 12;
		break;
	case 50:
		stradd_s(titletext, "<HEIST_END>");
		title_index += 11;
		break;
	case 51:
		stradd_s(titletext, "<QUESTION_MARK>");
		title_index += 15;
		break;
	case 52:
		stradd_s(titletext, "<RACE_FINISH>");
		title_index += 13;
		break;
	case 53:
		stradd_s(titletext, "<RACE_OPPONENT>");
		title_index += 15;
		break;
	case 54:
		stradd_s(titletext, "<TARGET>");
		title_index += 8;
		break;
	case 55:
		stradd_s(titletext, "<HERD_MAIN>");
		title_index += 11;
		break;
	case 56:
		stradd_s(titletext, "<LIARSDICE>");
		title_index += 11;
		break;
	case 57:
		stradd_s(titletext, "<POKER>");
		title_index += 7;
		break;
	case 58:
		stradd_s(titletext, "<TRAIN_RED>");
		title_index += 11;
		break;
	case 59:
		stradd_s(titletext, "<SWAG>");
		title_index += 6;
		break;
	case 60:
		stradd_s(titletext, "<SWAG_Y>");
		title_index += 8;
		break;
	case 61:
		stradd_s(titletext, "<SWAG_R>");
		title_index += 8;
		break;
	case 62:
		stradd_s(titletext, "<SWAG_B>");
		title_index += 8;
		break;
	case 63:
		stradd_s(titletext, "<CHEST>");
		title_index += 7;
		break;
	case 64:
		stradd_s(titletext, "<MP_ACHIEVE>");
		title_index += 12;
		break;
	case 65:
		stradd_s(titletext, "<MP_KO>");
		title_index += 7;
		break;
	case 66:
		stradd_s(titletext, "<MPK_VIP>");
		title_index += 9;
		break;
	case 67:
		stradd_s(titletext, "<MPK_KNIFE>");
		title_index += 11;
		break;
	case 68:
		stradd_s(titletext, "<MPK_ANIMAL>");
		title_index += 12;
		break;
	case 69:
		stradd_s(titletext, "<DICE6>");
		title_index += 7;
		break;
	case 70:
		stradd_s(titletext, "<MPK_SPREE_END>");
		title_index += 15;
		break;
	case 71:
		stradd_s(titletext, "<MPK_SNIPER>");
		title_index += 12;
		break;
	case 72:
		stradd_s(titletext, "<MPS_DROWN>");
		title_index += 11;
		break;
	case 73:
		stradd_s(titletext, "<MPS_FALL>");
		title_index += 10;
		break;
	case 74:
		stradd_s(titletext, "<MPS_SPLODE>");
		title_index += 12;
		break;
	case 75:
		stradd_s(titletext, "<MPS_CACTUS>");
		title_index += 12;
		break;
	case 76:
		stradd_s(titletext, "<TAILOR>");
		title_index += 8;
		break;
	case 77:
		stradd_s(titletext, "<CANNON>");
		title_index += 8;
		break;
	case 78:
		stradd_s(titletext, "<GATLING>");
		title_index += 9;
		break;
	case 79:
		stradd_s(titletext, "<MOVIEHOUSE>");
		title_index += 12;
		break;
	case 80:
		stradd_s(titletext, "<NEWSPAPER>");
		title_index += 11;
		break;
	case 81:
		stradd_s(titletext, "<MP_REZ>");
		title_index += 8;
		break;
	case 82:
		stradd_s(titletext, "<MP_SCORE>");
		title_index += 10;
		break;
	case 83:
		stradd_s(titletext, "<MPK_PWHIP>");
		title_index += 11;
		break;
	case 84:
		stradd_s(titletext, "<VSKIP>");
		title_index += 7;
		break;
	case 85:
		stradd_s(titletext, "<MP_LOCKED>");
		title_index += 11;
		break;
	case 86:
		stradd_s(titletext, "<ENVELOPE>");
		title_index += 10;
		break;
	case 87:
		stradd_s(titletext, "<MPK_TEAMMATE>");
		title_index += 14;
		break;
	}
	TitleInfoPrint();
}

void add_a_new_line()
{
	stradd_s(gamertag, "\n");
	gamertag_index += 2;
	TagInfoPrint();
}

void add_a_space()
{
	stradd_s(gamertag, " ");
	gamertag_index++;
	TagInfoPrint();
}
void add_a_space2()
{
	stradd_s(titletext, " ");
	title_index++;
	TitleInfoPrint();
}

void backspace()
{
	if (gamertag_index > 0)
	{
		char* ptr = gamertag[gamertag_index - 1] = 0x00;
		gamertag_index -= 1;
		TagInfoPrint();
	}
}
void backspace2()
{
	if (title_index > 0)
	{
		char* ptr = titletext[title_index - 1] = 0x00;
		title_index -= 1;
		TitleInfoPrint();
	}
}

void reset_gamertag_buffer()
{
	memset(gamertag, 0, sizeof(gamertag));
	gamertag_index = 0;
	TagInfoPrint();
}
void reset_gamertag_buffer2()
{
	memset(titletext, 0, sizeof(titletext));
	title_index = 0;
	TitleInfoPrint();
}

void check_gamertag_index()
{
	if (gamertag_index >= 16)
	{
		print("<blue>Exceeded max buffer size, only 15 characters!", 5000);
		gamertag_index -= 1;
	}
}
void check_title_index()
{
	if (title_index >= 64)
	{
		print("<blue>Exceeded max buffer size, only 63 characters!", 5000);
		title_index -= 1;
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

unsafe void ForceTitle(const char* title)
{
	__getFrame(0);
	__getGlobalP(78480);
	__addImm(32);
	__strCopy(64);
}

void spoof_title()
{
	UNK_0x7BD7A465(GET_LOCAL_SLOT(), titletext);
	ForceTitle(titletext);
	print("<green>Title Set - Find New Session So It Updates For Everyone", 5000);
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
	if (showname)
	{
		*(byte*)0x83095E93 = 1;
	}
	//loop checks to make sure we didnt go overboard.
	check_title_index();
	check_gamertag_index();
}