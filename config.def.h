/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int opacity = 1;                     /* -o  option; if 0, then alpha is disabled */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] =
{
	"JetBrains Mono:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *symbol_1 = "<";
static const char *symbol_2 = ">";

static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3]      = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};

/* Color Schemes
 * The available themes are:
 * 1. doom-one.h
 * 2. dracula.h
 * 3. gruvbox-dark.h
 * 4. monokai-pro.h
 * 5. nord.h
 * 6. oceanic-next.h
 * 7. solarized-dark.h 
 * 8. solarized-light.h
 * 9. tokyo-night.h
 * 10. tomorrow-night.h
 * 11. doom-horizon.h
 * 12. doom-city-lights.h
 */
#include "colors/tokyo-night.h"

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -g option; if nonzero, dmenu uses a grid comprised of columns and lines */
static unsigned int columns    = 0;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";


