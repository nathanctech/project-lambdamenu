/*
		THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
					http://dev-c.com
				(C) Alexander Blade 2015
*/

#pragma once

#ifndef SERVER_SIDED
#include <windows.h>

#define VK_KEY_0	0x30                //('0')	0
#define VK_KEY_1	0x31                //('1')	1
#define VK_KEY_2	0x32                //('2')	2
#define VK_KEY_3	0x33                //('3')	3
#define VK_KEY_4	0x34                //('4')	4
#define VK_KEY_5	0x35                //('5')	5
#define VK_KEY_6	0x36                //('6')	6
#define VK_KEY_7	0x37                //('7')	7
#define VK_KEY_8	0x38                //('8')	8
#define VK_KEY_9	0x39                //('9')	9
#define VK_KEY_A	0x41                //('A')	A
#define VK_KEY_B	0x42                //('B')	B
#define VK_KEY_C	0x43                //('C')	C
#define VK_KEY_D	0x44                //('D')	D
#define VK_KEY_E	0x45                //('E')	E
#define VK_KEY_F	0x46                //('F')	F
#define VK_KEY_G	0x47                //('G')	G
#define VK_KEY_H	0x48                //('H')	H
#define VK_KEY_I	0x49                //('I')	I
#define VK_KEY_J	0x4A                //('J')	J
#define VK_KEY_K	0x4B                //('K')	K
#define VK_KEY_L	0x4C                //('L')	L
#define VK_KEY_M	0x4D                //('M')	M
#define VK_KEY_N	0x4E                //('N')	N
#define VK_KEY_O	0x4F                //('O')	O
#define VK_KEY_P	0x50                //('P')	P
#define VK_KEY_Q	0x51                //('Q')	Q
#define VK_KEY_R	0x52                //('R')	R
#define VK_KEY_S	0x53                //('S')	S
#define VK_KEY_T	0x54                //('T')	T
#define VK_KEY_U	0x55                //('U')	U
#define VK_KEY_V	0x56                //('V')	V
#define VK_KEY_W	0x57                //('W')	W
#define VK_KEY_X	0x58                //('X')	X
#define VK_KEY_Y	0x59                //('Y')	Y
#define VK_KEY_Z	0x5A                //('Z')	Z

// parameters are the same as with aru's ScriptHook for IV
void OnKeyboardMessage(DWORD key, WORD repeats, BYTE scanCode, BOOL isExtended, BOOL isWithAlt, BOOL wasDownBefore, BOOL isUpNow);

bool IsKeyDown(DWORD key);
bool IsKeyJustUp(DWORD key, bool exclusive = true);
void ResetKeyState(DWORD key);

struct VirtualKeysWithNames
{
	int keyCode;
	char* name;
};

static const VirtualKeysWithNames ALL_KEYS[] =
{
	{ VK_KEY_0, "VK_KEY_0" },
	{ VK_KEY_1, "VK_KEY_1" },
	{ VK_KEY_2, "VK_KEY_2" },
	{ VK_KEY_3, "VK_KEY_3" },
	{ VK_KEY_4, "VK_KEY_4" },
	{ VK_KEY_5, "VK_KEY_5" },
	{ VK_KEY_6, "VK_KEY_6" },
	{ VK_KEY_7, "VK_KEY_7" },
	{ VK_KEY_8, "VK_KEY_8" },
	{ VK_KEY_9, "VK_KEY_9" },
	{ VK_KEY_A, "VK_KEY_A" },
	{ VK_KEY_B, "VK_KEY_B" },
	{ VK_KEY_C, "VK_KEY_C" },
	{ VK_KEY_D, "VK_KEY_D" },
	{ VK_KEY_E, "VK_KEY_E" },
	{ VK_KEY_F, "VK_KEY_F" },
	{ VK_KEY_G, "VK_KEY_G" },
	{ VK_KEY_H, "VK_KEY_H" },
	{ VK_KEY_I, "VK_KEY_I" },
	{ VK_KEY_J, "VK_KEY_J" },
	{ VK_KEY_K, "VK_KEY_K" },
	{ VK_KEY_L, "VK_KEY_L" },
	{ VK_KEY_M, "VK_KEY_M" },
	{ VK_KEY_N, "VK_KEY_N" },
	{ VK_KEY_O, "VK_KEY_O" },
	{ VK_KEY_P, "VK_KEY_P" },
	{ VK_KEY_Q, "VK_KEY_Q" },
	{ VK_KEY_R, "VK_KEY_R" },
	{ VK_KEY_S, "VK_KEY_S" },
	{ VK_KEY_T, "VK_KEY_T" },
	{ VK_KEY_U, "VK_KEY_U" },
	{ VK_KEY_V, "VK_KEY_V" },
	{ VK_KEY_W, "VK_KEY_W" },
	{ VK_KEY_X, "VK_KEY_X" },
	{ VK_KEY_Y, "VK_KEY_Y" },
	{ VK_KEY_Z, "VK_KEY_Z" },

	{ VK_BACK, "VK_BACK" },
	{ VK_TAB, "VK_TAB" },
	{ VK_CLEAR, "VK_CLEAR" },
	{ VK_RETURN, "VK_RETURN" },
	{ VK_SHIFT, "VK_SHIFT" },
	{ VK_CONTROL, "VK_CONTROL" },
	{ VK_MENU, "VK_MENU" },
	{ VK_PAUSE, "VK_PAUSE" },
	{ VK_CAPITAL, "VK_CAPITAL" },
	{ VK_KANA, "VK_KANA" },
	{ VK_HANGEUL, "VK_HANGEUL" },
	{ VK_HANGUL, "VK_HANGUL" },
	{ VK_JUNJA, "VK_JUNJA" },
	{ VK_FINAL, "VK_FINAL" },
	{ VK_HANJA, "VK_HANJA" },
	{ VK_KANJI, "VK_KANJI" },
	{ VK_ESCAPE, "VK_ESCAPE" },
	{ VK_CONVERT, "VK_CONVERT" },
	{ VK_NONCONVERT, "VK_NONCONVERT" },
	{ VK_ACCEPT, "VK_ACCEPT" },
	{ VK_MODECHANGE, "VK_MODECHANGE" },
	{ VK_SPACE, "VK_SPACE" },
	{ VK_PRIOR, "VK_PRIOR" },
	{ VK_NEXT, "VK_NEXT" },
	{ VK_END, "VK_END" },
	{ VK_HOME, "VK_HOME" },
	{ VK_LEFT, "VK_LEFT" },
	{ VK_UP, "VK_UP" },
	{ VK_RIGHT, "VK_RIGHT" },
	{ VK_DOWN, "VK_DOWN" },
	{ VK_SELECT, "VK_SELECT" },
	{ VK_PRINT, "VK_PRINT" },
	{ VK_EXECUTE, "VK_EXECUTE" },
	{ VK_SNAPSHOT, "VK_SNAPSHOT" },
	{ VK_INSERT, "VK_INSERT" },
	{ VK_DELETE, "VK_DELETE" },
	{ VK_HELP, "VK_HELP" },
	{ VK_LWIN, "VK_LWIN" },
	{ VK_RWIN, "VK_RWIN" },
	{ VK_APPS, "VK_APPS" },
	{ VK_SLEEP, "VK_SLEEP" },
	{ VK_NUMPAD0, "VK_NUMPAD0" },
	{ VK_NUMPAD1, "VK_NUMPAD1" },
	{ VK_NUMPAD2, "VK_NUMPAD2" },
	{ VK_NUMPAD3, "VK_NUMPAD3" },
	{ VK_NUMPAD4, "VK_NUMPAD4" },
	{ VK_NUMPAD5, "VK_NUMPAD5" },
	{ VK_NUMPAD6, "VK_NUMPAD6" },
	{ VK_NUMPAD7, "VK_NUMPAD7" },
	{ VK_NUMPAD8, "VK_NUMPAD8" },
	{ VK_NUMPAD9, "VK_NUMPAD9" },
	{ VK_MULTIPLY, "VK_MULTIPLY" },
	{ VK_ADD, "VK_ADD" },
	{ VK_SEPARATOR, "VK_SEPARATOR" },
	{ VK_SUBTRACT, "VK_SUBTRACT" },
	{ VK_DECIMAL, "VK_DECIMAL" },
	{ VK_DIVIDE, "VK_DIVIDE" },
	{ VK_F1, "VK_F1" },
	{ VK_F2, "VK_F2" },
	{ VK_F3, "VK_F3" },
	{ VK_F4, "VK_F4" },
	{ VK_F5, "VK_F5" },
	{ VK_F6, "VK_F6" },
	{ VK_F7, "VK_F7" },
	{ VK_F8, "VK_F8" },
	{ VK_F9, "VK_F9" },
	{ VK_F10, "VK_F10" },
	{ VK_F11, "VK_F11" },
	{ VK_F12, "VK_F12" },
	{ VK_F13, "VK_F13" },
	{ VK_F14, "VK_F14" },
	{ VK_F15, "VK_F15" },
	{ VK_F16, "VK_F16" },
	{ VK_F17, "VK_F17" },
	{ VK_F18, "VK_F18" },
	{ VK_F19, "VK_F19" },
	{ VK_F20, "VK_F20" },
	{ VK_F21, "VK_F21" },
	{ VK_F22, "VK_F22" },
	{ VK_F23, "VK_F23" },
	{ VK_F24, "VK_F24" },
	{ VK_NUMLOCK, "VK_NUMLOCK" },
	{ VK_SCROLL, "VK_SCROLL" },
	{ VK_OEM_NEC_EQUAL, "VK_OEM_NEC_EQUAL" },
	{ VK_OEM_FJ_JISHO, "VK_OEM_FJ_JISHO" },
	{ VK_OEM_FJ_MASSHOU, "VK_OEM_FJ_MASSHOU" },
	{ VK_OEM_FJ_TOUROKU, "VK_OEM_FJ_TOUROKU" },
	{ VK_OEM_FJ_LOYA, "VK_OEM_FJ_LOYA" },
	{ VK_OEM_FJ_ROYA, "VK_OEM_FJ_ROYA" },
	{ VK_LSHIFT, "VK_LSHIFT" },
	{ VK_RSHIFT, "VK_RSHIFT" },
	{ VK_LCONTROL, "VK_LCONTROL" },
	{ VK_RCONTROL, "VK_RCONTROL" },
	{ VK_LMENU, "VK_LMENU" },
	{ VK_RMENU, "VK_RMENU" },
	{ VK_BROWSER_BACK, "VK_BROWSER_BACK" },
	{ VK_BROWSER_FORWARD, "VK_BROWSER_FORWARD" },
	{ VK_BROWSER_REFRESH, "VK_BROWSER_REFRESH" },
	{ VK_BROWSER_STOP, "VK_BROWSER_STOP" },
	{ VK_BROWSER_SEARCH, "VK_BROWSER_SEARCH" },
	{ VK_BROWSER_FAVORITES, "VK_BROWSER_FAVORITES" },
	{ VK_BROWSER_HOME, "VK_BROWSER_HOME" },
	{ VK_VOLUME_MUTE, "VK_VOLUME_MUTE" },
	{ VK_VOLUME_DOWN, "VK_VOLUME_DOWN" },
	{ VK_VOLUME_UP, "VK_VOLUME_UP" },
	{ VK_MEDIA_NEXT_TRACK, "VK_MEDIA_NEXT_TRACK" },
	{ VK_MEDIA_PREV_TRACK, "VK_MEDIA_PREV_TRACK" },
	{ VK_MEDIA_STOP, "VK_MEDIA_STOP" },
	{ VK_MEDIA_PLAY_PAUSE, "VK_MEDIA_PLAY_PAUSE" },
	{ VK_LAUNCH_MAIL, "VK_LAUNCH_MAIL" },
	{ VK_LAUNCH_MEDIA_SELECT, "VK_LAUNCH_MEDIA_SELECT" },
	{ VK_LAUNCH_APP1, "VK_LAUNCH_APP1" },
	{ VK_LAUNCH_APP2, "VK_LAUNCH_APP2" },
	{ VK_OEM_1, "VK_OEM_1" }, // ; or :
	{ VK_OEM_PLUS, "VK_OEM_PLUS" },
	{ VK_OEM_COMMA, "VK_OEM_COMMA" },
	{ VK_OEM_MINUS, "VK_OEM_MINUS" },
	{ VK_OEM_PERIOD, "VK_OEM_PERIOD" },
	{ VK_OEM_2, "VK_OEM_2" },
	{ VK_OEM_3, "VK_OEM_3" },
	{ VK_OEM_4, "VK_OEM_4" },
	{ VK_OEM_5, "VK_OEM_5" },
	{ VK_OEM_6, "VK_OEM_6" },
	{ VK_OEM_7, "VK_OEM_7" },
	{ VK_OEM_8, "VK_OEM_8" },
	{ VK_OEM_AX, "VK_OEM_AX" },
	{ VK_OEM_102, "VK_OEM_102" },
	{ VK_ICO_HELP, "VK_ICO_HELP" },
	{ VK_ICO_00, "VK_ICO_00" },
	{ VK_PROCESSKEY, "VK_PROCESSKEY" },
	{ VK_ICO_CLEAR, "VK_ICO_CLEAR" },
	{ VK_PACKET, "VK_PACKET" },

	{ VK_OEM_RESET, "VK_OEM_RESET" },
	{ VK_OEM_JUMP, "VK_OEM_JUMP" },
	{ VK_OEM_PA1, "VK_OEM_PA1" },
	{ VK_OEM_PA2, "VK_OEM_PA2" },
	{ VK_OEM_PA3, "VK_OEM_PA3" },
	{ VK_OEM_WSCTRL, "VK_OEM_WSCTRL" },
	{ VK_OEM_CUSEL, "VK_OEM_CUSEL" },
	{ VK_OEM_ATTN, "VK_OEM_ATTN" },
	{ VK_OEM_FINISH, "VK_OEM_FINISH" },
	{ VK_OEM_COPY, "VK_OEM_COPY" },
	{ VK_OEM_AUTO, "VK_OEM_AUTO" },
	{ VK_OEM_ENLW, "VK_OEM_ENLW" },
	{ VK_OEM_BACKTAB, "VK_OEM_BACKTAB" },
	{ VK_ATTN, "VK_ATTN" },
	{ VK_CRSEL, "VK_CRSEL" },
	{ VK_EXSEL, "VK_EXSEL" },
	{ VK_EREOF, "VK_EREOF" },
	{ VK_PLAY, "VK_PLAY" },
	{ VK_ZOOM, "VK_ZOOM" },
	{ VK_NONAME, "VK_NONAME" },
	{ VK_PA1, "VK_PA1" },
	{ VK_OEM_CLEAR, "VK_OEM_CLEAR" }
};

int keyNameToVal(char * input);
#endif