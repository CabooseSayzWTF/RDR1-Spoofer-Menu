#include "menu_backend.h"

#include "types.h"
#include "constants.h"
#include "intrinsics.h"
#include "natives.h"
#include "common.h"

#include "util.h"
#include "mods/mods.h"
#include "menu.h"
int firstprint = 0;
void main()
{
	while (true)
	{
		if (NET_IS_IN_SESSION())
		{
			if (!HUD_IS_FADED())
			{
				if (!IS_GAME_PAUSED())
				{
					if (firstprint == 0)
					{
						print("<purple>Hold</purple> <rb> <purple>and Press</purple> <dpadleft> <purple>To Open</purple>", 6000);
						firstprint = 2;
					}
				}
			}
		}
		Net_RefreshPlayerlist();
		if (!dontDraa2)
		{
			HandleInput();
			DrawMenu();
			ExecLoopMods();//for title spoofing only atm
		}
		WAIT(0);
	}
}
