/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
/* -b  option; if 0, dmenu appears at bottom     */
static int topbar = 0;                      
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Hack Nerd Font:size=10",
	"monospace:size=10",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char col_gray1[]       = "#282828";
static const char col_gray2[]       = "#3A3A3A";
static const char col_gray3[]       = "#f9f5d7";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#458588";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_gray3, col_gray1 },
	[SchemeSel] = { col_gray4, col_cyan },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
