/* $Id$ */

/** @file openttd.h Some generic types. */

#ifndef OPENTTD_H
#define OPENTTD_H

#ifndef VARDEF
#define VARDEF extern
#endif

enum GameModes {
	GM_MENU,
	GM_NORMAL,
	GM_EDITOR
};

enum SwitchModes {
	SM_NONE            =  0,
	SM_NEWGAME         =  1,
	SM_EDITOR          =  2,
	SM_LOAD            =  3,
	SM_MENU            =  4,
	SM_SAVE            =  5,
	SM_GENRANDLAND     =  6,
	SM_LOAD_SCENARIO   =  9,
	SM_START_SCENARIO  = 10,
	SM_START_HEIGHTMAP = 11,
	SM_LOAD_HEIGHTMAP  = 12,
};


/* Modes for GenerateWorld */
enum GenerateWorldModes {
	GW_NEWGAME   = 0,    /* Generate a map for a new game */
	GW_EMPTY     = 1,    /* Generate an empty map (sea-level) */
	GW_RANDOM    = 2,    /* Generate a random map for SE */
	GW_HEIGHTMAP = 3,    /* Generate a newgame from a heightmap */
};

/* Modes for InitializeGame, those are _bits_! */
enum InitializeGameModes {
	IG_NONE       = 0,  /* Don't do anything special */
	IG_DATE_RESET = 1,  /* Reset the date when initializing a game */
};

/* Display Options */
enum {
	DO_SHOW_TOWN_NAMES    = 0,
	DO_SHOW_STATION_NAMES = 1,
	DO_SHOW_SIGNS         = 2,
	DO_FULL_ANIMATION     = 3,
	DO_FULL_DETAIL        = 5,
	DO_WAYPOINTS          = 6,
};

enum {
	SORT_ASCENDING  = 0,
	SORT_DESCENDING = 1,
	SORT_BY_DATE    = 0,
	SORT_BY_NAME    = 2
};

extern byte _savegame_sort_order;

/* In certain windows you navigate with the arrow keys. Do not scroll the
 * gameview when here. Bitencoded variable that only allows scrolling if all
 * elements are zero */
enum {
	SCROLL_CON  = 0,
	SCROLL_EDIT = 1,
	SCROLL_SAVE = 2,
	SCROLL_CHAT = 4,
};
extern byte _no_scroll;

extern byte _game_mode;
extern bool _exit_game;
extern int8 _pause_game;

#endif /* OPENTTD_H */
