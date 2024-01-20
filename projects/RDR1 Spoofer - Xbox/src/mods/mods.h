#pragma once

#include "types.h"
#include "constants.h"
#include "natives.h"
#include "common.h"
#include "intrinsics.h"

#include "../menu.h"

#define ToggleBool(a) a = (a == true) ? false : true
#define self GET_PLAYER_ACTOR(0)
extern char *net_player_names[16];
extern int   net_selected_player;
const char *GetColoredSlotName(int slot);
extern bool dontDraw = 0;
extern bool dontDraa2 = 0;//change back
extern bool weAreAuthed = 0;//change back
extern bool AUTOSCROLL = 0;

//spoof options
extern int capital_letter;
extern int capital_letter2;
extern int freezep;
extern int lowercase_letter;
extern int lowercase_letter2;
extern int lowercase_letter3;
extern int number;
extern int number2;
extern int number3;
extern int special_character;
extern int special_character2;
extern int colour;
extern int colour2;
extern int endcolour;
extern int endcolour2;
extern int button_blip;
extern int button_blip2;
extern int other_blip;
extern int other_blip2;
extern int XUID1 = 0;
extern int XUID2 = 0;
extern int XUID3 = 0;
extern int XUID4 = 0;
extern int XUID5 = 0;
extern int XUID6 = 0;
extern int XUID7 = 0;
extern int XUID8 = 0;
extern bool titlespoof = 0;
extern bool showname = 0;
void spoof_to_player_gamertag();
void spoof_to_player_xuid();
void settoxuid();
void spoof_to_player_gamertag_and_xuid();
void resetxuid();
void resetname();
void save_xuid();
void credthat();
void changename();

void add_capital_letters();
void add_lowercase_letters();
void add_numbers();
void add_special_characters();
void add_colours();
void add_button_blips();
void add_other_blips();
void add_a_space();
void add_a_new_line();
void backspace();
void reset_gamertag_buffer();
void print_gamertag_count();
void print_gamertag_buffer();
void check_gamertag_index();
void check_title_index();
void spoof_gamertag();
void TagInfoPrint();

void add_capital_letters2();
void add_lowercase_letters3();
void add_numbers3();
void add_lowercase_letters2();
void add_numbers2();
void add_special_characters2();
void add_colours2();
void end_colours();
void end_colours2();
void add_button_blips2();
void add_other_blips2();
void add_a_space2();
void backspace2();
void reset_gamertag_buffer2();
void print_gamertag_count2();
void reset_gamertag_buffer3();
void print_gamertag_buffer2();
void spoof_title();
void shownametitle();
void TitleInfoPrint();

void Net_RefreshPlayerlist();
void New_session();
void ExecLoopMods();

//player list to load
void Net_Slot0() { Network_ShowSlot(0); }
void Net_Slot1() { Network_ShowSlot(1); }
void Net_Slot2() { Network_ShowSlot(2); }
void Net_Slot3() { Network_ShowSlot(3); }
void Net_Slot4() { Network_ShowSlot(4); }
void Net_Slot5() { Network_ShowSlot(5); }
void Net_Slot6() { Network_ShowSlot(6); }
void Net_Slot7() { Network_ShowSlot(7); }
void Net_Slot8() { Network_ShowSlot(8); }
void Net_Slot9() { Network_ShowSlot(9); }
void Net_Slot10() { Network_ShowSlot(10); }
void Net_Slot11() { Network_ShowSlot(11); }
void Net_Slot12() { Network_ShowSlot(12); }
void Net_Slot13() { Network_ShowSlot(13); }
void Net_Slot14() { Network_ShowSlot(14); }
void Net_Slot15() { Network_ShowSlot(15); }
void Net_Slot16() { Network_ShowSlot(16); }