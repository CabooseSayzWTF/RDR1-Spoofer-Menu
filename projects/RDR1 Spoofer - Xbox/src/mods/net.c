#include "mods.h"

#include "../menu_backend.h"
#include "../util.h"
#define ORIGINAL_EDITION_XBOX 9
#define UNDEAD_EDITION_XBOX 10
char *net_player_names[16];
int   net_selected_player = 1;//change to 0 and test later
void credthat()
{
	print("Base Used: FuhzBot/Connor \n In-Depth Gamertag Editor: JamesTwt \n Local Name Spoofer, Title Spoofer, XUID Spoofer, Reset Name/XUID: CabooseSayzWTF", 10000);
}
void PrintChat(const char* t12)
{
	_PRINT_CHAT(t12, 0, 0, 0, 0, 0, 0);
}
void Net_RefreshPlayerlist()
{
	for (int i = 0; i <= 15; i++)
	{
		if (IS_SLOT_VALID(i))
		{
			net_player_names[i] = (char*)GET_SLOT_NAME(i);
		}
		if (!IS_SLOT_VALID(i))
		{
			net_player_names[i] = "INVALID";
		}
	}
}
const char *GetColoredSlotName(int slot)
{
	char temp[23] = "MPPlayerNameColored_";

	straddi_s(temp, slot);

	return UI_GET_STRING(temp);
}
