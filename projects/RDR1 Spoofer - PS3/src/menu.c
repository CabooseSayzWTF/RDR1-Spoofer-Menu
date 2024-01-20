#include "menu_backend.h"
#include "menu.h"

#include "mods/mods.h"

#include "constants.h"
#include "natives.h"
#include "common.h"
#include "intrinsics.h"

#pragma region Scrollables
bool enableonce = false;
char* capital_letters[] =
{
    "A",
    "B",
    "C",
    "D",
    "E",
    "F",
    "G",
    "H",
    "I",
    "J",
    "K",
    "L",
    "M",
    "N",
    "O",
    "P",
    "Q",
    "R",
    "S",
    "T",
    "U",
    "V",
    "W",
    "X",
    "Y",
    "Z",
    null
};

char* lowercase_letters[] =
{
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z",
    null
};

char* numbers[] =
{
    "0",
    "1",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    null
};

char* special_characters[] =
{
    "`",
    "!",
    "$",
    "%",
    "&",
    "*",
    "(",
    ")",
    "-",
    "_",
    "=",
    "+",
    "[",
    "]",
    "{",
    "}",
    ";",
    ":",
    "'",
    "@",
    "#",
    "~",
    "|",
    ",",
    ".",
    "/",
    "?",
    "¡",//unicode finally lol
    "ª",
    "º",
    "¿",
    "–",
    "…",
    "‰",
    "™",
    null
};

char* colours[] =
{
    "<red>red</red>",
    "<orange>orange</orange>",
    "<yellow>yellow</yellow>",
    "<green>green</green>",
    "<blue>blue</blue>",
    "<purple>purple</purple>",
    "<brown>brown</brown>",
    "<sepia>sepia</sepia>",
    "<grey>grey</grey>",
    "<0xFF0000>RGB Red</0x>",
    "<0x00FF00>RGB Green</0x>",
    "<0x0000FF>RGB Blue</0x>",
    "<0x00FFFF>RGB Cyan</0x>",
    "<0xFF69B4>RGB Pink</0x>",
    "<0x9D00D7>RGB Purple</0x>",
    "<0xF7FF00>RGB Yellow</0x>",
    "<0x3EB489>RGB Mint</0x>",
    null
};

char* endcolours[] =
{
    "<red>red</red>",
    "<orange>orange</orange>",
    "<yellow>yellow</yellow>",
    "<green>green</green>",
    "<blue>blue</blue>",
    "<purple>purple</purple>",
    "<brown>brown</brown>",
    "<sepia>sepia</sepia>",
    "<grey>grey</grey>",
    "RGB Color",
	null
};

char* button_blips[] =
{
    "<action>",
    "<cancel>",
    "<x>",
    "<y>",
    "<lt>",
    "<rt>",
    "<lb>",
    "<rb>",
    "<ls>",
    "<rs>",
    "<lclick>",
    "<rclick>",
    "<start>",
    "<back>",
    "<dpadleft>",
    "<dpadright>",
    "<dpadleftright>",
    "<dpadup>",
    "<dpaddown>",
    null
};

char* other_blips[] =
{
    "<WHITE>",              //0
    "<RED_CIRCLE>",         //1
    "<ENEMY>",              //2
    "<FRIEND>",             //3
    "<HOME>",               //4
    "<OBJECTIVE>",          //5
    "<XP>",                 //6
    "<STAR_GOLD>",          //7
    "<STAR_SILVER>",        //8
    "<STAR_BRONZE>",        //9
    "<ROCKSTAR>",           //10
    "<PLAYER>",             //11
    "<JAVIER>",             //12
    "<MONEY>",              //13
    "<BLACKSMITH>",         //14
    "<COACH_DRIVER>",       //15
    "<HEAR_NOISE>",         //16
    "<TRAIN>",              //17
    "<MOST_WANTED>",        //18
    "<HOSTAGE>",            //19
    "<MP_REVIVES>",         //20
    "<MP_INJURED>",         //21
    "<MP_DEATH>",           //22
    "<NIGHTWATCH>",         //23
    "<EYEWITNESS>",         //24
    "<SHERIFF>",            //25
    "<TELEGRAPH>",          //26
    "<BEER>",               //27
    "<BULLRIDING>",         //28
    "<CARDS>",              //29
    "<HORSESHOE>",          //30
    "<ARM_WRESTLING>",      //31
    "<DUEL>",               //32
    "<FIVE_FINGER>",        //33
    "<WEAPON_CACHE>",       //34
    "<POSSE_LEADER>",       //35
    "<SCRAP>",              //36
    "<ATTACK_COACH >",      //37
    "<FIRE>",               //38
    "<SKULL>",              //39
    "<RED_SKULL>",          //40
    "<TRANSPORT_RED>",      //41
    "<SHOP>",               //42
    "<DOCTOR>",             //43
    "<GUNSMITH>",           //44
    "<TRAIN_TICKETS>",      //45
    "<BOMB>",               //46
    "<CHECKER>",            //47
    "<DYNAMITE>",           //48
    "<FIREBOTTLE>",         //49
    "<HEIST_END>",          //50
    "<QUESTION_MARK>",      //51
    "<RACE_FINISH>",        //52
    "<RACE_OPPONENT>",      //53
    "<TARGET>",             //54
    "<HERD_MAIN>",          //55
    "<LIARSDICE>",          //56
    "<POKER>",              //57
    "<TRAIN_RED>",          //58
    "<SWAG>",               //59
    "<SWAG_Y>",             //60
    "<SWAG_R>",             //61
    "<SWAG_B>",             //62
    "<CHEST>",              //63
    "<MP_ACHIEVE>",         //64
    "<MP_KO>",              //65
    "<MPK_VIP>",            //66
    "<MPK_KNIFE>",          //67
    "<MPK_ANIMAL>",         //68
    "<DICE6>",              //69
    "<MPK_SPREE_END>",      //70
    "<MPK_SNIPER>",         //71
    "<MPS_DROWN>",          //72
    "<MPS_FALL>",           //73
    "<MPS_SPLODE>",         //74
    "<MPS_CACTUS>",         //75
    "<TAILOR>",             //76
    "<CANNON>",             //77
    "<GATLING>",            //78
    "<MOVIEHOUSE>",         //79
    "<NEWSPAPER>",          //80
    "<MP_REZ>",             //81
    "<MP_SCORE>",           //82
    "<MPK_PWHIP>",          //83
    "<VSKIP>",              //84
    "<MP_LOCKED>",          //85
    "<ENVELOPE>",           //86
    "<MPK_TEAMMATE>",       //87
    null
};

#pragma endregion

void NetPlayerFreeze();
void gtagspoofer2();
void gtagspoofer4();

#pragma region Network
void Network_ShowSlot(int slot)
{
	SetHeader(net_player_names[slot]);

	net_selected_player = slot;
	AddItem("Change Players Name", changename, NetPlayerFreeze, "");
    AddItem("Steal Name", spoof_to_player_gamertag, NetPlayerFreeze, "");
    AddItem("Steal NPID", stealnpid, NetPlayerFreeze, "");
	AddItem("Find New Session", New_session, NetPlayerFreeze, "");
}
#pragma endregion

void gtagspoofer2()
{
    SetHeader("Name Editor");

    AddScrollableItem("Capital Letters", capital_letters, add_capital_letters, Main, "", &capital_letter);
    AddScrollableItem("Lowercase Letters", lowercase_letters, add_lowercase_letters, Main, "", &lowercase_letter);
    AddScrollableItem("Numbers", numbers, add_numbers, Main, "", &number);
    AddScrollableItem("Special Characters", special_characters, add_special_characters, Main, "", &special_character);
    AddScrollableItem("Start Color", colours, add_colours, Main, "", &colour);
    AddScrollableItem2("<grey>End Color", endcolours, end_colours2, Main, "", &endcolour2);
    AddScrollableItem("<grey>Button Blips", button_blips, add_button_blips, Main, "", &button_blip);
    AddScrollableItem("Other Blips", other_blips, add_other_blips, Main, "", &other_blip);
    AddItem("Add a Space", add_a_space, Main, "");
    AddItem("Add a New Line", add_a_new_line, Main, "");
    AddItem("Backspace", backspace, Main, "");
    AddItem("Reset Buffer", reset_gamertag_buffer, Main, "");
    AddItem("Name Info", TagInfoPrint, Main, "");
    AddItem("Spoof Name", spoof_gamertag, Main, "");
	AddItem("Find New Session", New_session, Main, "");
}

void gtagspoofer4()
{
	SetHeader("Title Editor");

	AddScrollableItem2("Capital Letters", capital_letters, add_capital_letters2, Main, "", &capital_letter2);
	AddScrollableItem2("Lowercase Letters", lowercase_letters, add_lowercase_letters2, Main, "", &lowercase_letter2);
	AddScrollableItem2("Numbers", numbers, add_numbers2, Main, "", &number2);
	AddScrollableItem2("Special Characters", special_characters, add_special_characters2, Main, "", &special_character2);
	AddScrollableItem2("Start Color", colours, add_colours2, Main, "", &colour2);
	AddScrollableItem2("<grey>End Color", endcolours, end_colours, Main, "", &endcolour);
	AddScrollableItem2("<grey>Button Blips", button_blips, add_button_blips2, Main, "", &button_blip2);
	AddScrollableItem2("Other Blips", other_blips, add_other_blips2, Main, "", &other_blip2);
	AddItem("Add a Space", add_a_space2, Main, "");
	AddItem("Backspace", backspace2, Main, "");
	AddItem("Reset Buffer", reset_gamertag_buffer2, Main, "");
	AddItem("Title Info", TitleInfoPrint, Main, "");
	AddItem("Spoof Title", spoof_title, Main, "");
    AddItem("Find New Session", New_session, Main, "");
}

void gtagspoofer5()
{
    SetHeader("NPID Editor");

    AddScrollableItem2("Letters", lowercase_letters, add_lowercase_letters3, Main, "", &lowercase_letter3);
    AddScrollableItem2("Numbers", numbers, add_numbers3, Main, "", &number3);
    AddItem("Backspace", backspace3, Main, "");
    AddItem("Reset Buffer", reset_gamertag_buffer3, Main, "");
    AddItem("NPID Info", NPIDInfoPrint, Main, "");
    AddItem("Spoof NPID", spoof_NPID, Main, "");
    AddItem("Find New Session", New_session, Main, "");
}
void NetPlayerFreeze()
{
	SetHeader("Players");

	for (int i = 0; i <= 15; i++)//force stop at 16 slots
	{
		if (_STRING_COMPARE(net_player_names[i], "INVALID"))
		{
			continue;
		}

		char name[100];

		stradd_s(name, GetColoredSlotName(i));

		switch (i)
		{
		case 0:
			AddSubmenu(name, Net_Slot0, Main);
			break;
		case 1:
			AddSubmenu(name, Net_Slot1, Main);
			break;
		case 2:
			AddSubmenu(name, Net_Slot2, Main);
			break;
		case 3:
			AddSubmenu(name, Net_Slot3, Main);
			break;
		case 4:
			AddSubmenu(name, Net_Slot4, Main);
			break;
		case 5:
			AddSubmenu(name, Net_Slot5, Main);
			break;
		case 6:
			AddSubmenu(name, Net_Slot6, Main);
			break;
		case 7:
			AddSubmenu(name, Net_Slot7, Main);
			break;
		case 8:
			AddSubmenu(name, Net_Slot8, Main);
			break;
		case 9:
			AddSubmenu(name, Net_Slot9, Main);
			break;
		case 10:
			AddSubmenu(name, Net_Slot10, Main);
			break;
		case 11:
			AddSubmenu(name, Net_Slot11, Main);
			break;
		case 12:
			AddSubmenu(name, Net_Slot12, Main);
			break;
		case 13:
			AddSubmenu(name, Net_Slot13, Main);
			break;
		case 14:
			AddSubmenu(name, Net_Slot14, Main);
			break;
		case 15:
			AddSubmenu(name, Net_Slot15, Main);
			break;
		}
		memset(name, 0, sizeof(name));
	}
}

void Main()
{
	AUTOSCROLL = false;
	SetHeader("Spoofer");
	AddSubmenu("Name Editor", gtagspoofer2, nullptr);
    AddSubmenu("NPID Editor", gtagspoofer5, nullptr);
	AddSubmenu("Title Editor", gtagspoofer4, nullptr);
	AddSubmenu("Name Stealer", NetPlayerFreeze, nullptr);
    AddBoolItem("Always Show Name", shownametitle, nullptr, "", showname);
	AddItem("Reset Name & NPID", resetname, nullptr, "");
	AddItem("Find New Session", New_session, nullptr, "");
	AddItem("Credits", credthat, nullptr, "");
	if (NET_IS_IN_SESSION())
	{
		if (!enableonce)
		{
			save_xuid();
			enableonce = true;
		}
	}
}