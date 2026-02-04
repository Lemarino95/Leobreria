#ifndef PLACEHOLD_H
# define PLACEHOLD_H

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MACROS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*~~~~~~~~~~~~~~~COLORS~~~~~~~~~~~~~~~*/
# define NO_ALL "\033[0m"

# define NO_COLOR "\033[39m"
# define BLACK "\e[30m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BRGREEN "\e[32;1m"
# define YELLOW "\e[33m"
# define BLUE "\e[34m"
# define MAGENTA "\e[95m"
# define BRCYAN "\e[96m"

/*~~~~~~~~~~~~BACKGROUNDS~~~~~~~~~~~~~*/
# define BGR "\033[41m"
# define BGG "\033[42m"
# define BGY "\033[43m"
# define BGB "\033[44m"
# define BGM "\033[45m"
# define BLACK_ON_WHITE "\e[107;30m"
# define NO_BG "\e[49m"

/*~~~~~~~~~~~~~~~MORE~~~~~~~~~~~~~~~*/
# define BOLD "\e[1m"// "\e[1;4m" Bold and Underlined
# define NO_BOLD "\e[21m"

# define UNDERLINE "\e[4m"
# define NO_UNDERLINE "\e[24m"

# define BLINK "\e[5m"//Doesn't work on vscode terminal
# define NO_BLINK "\e[25m"

# define HIDE "\e[8m"
# define NO_HIDE "\e[28m"

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

/*+++++++++++++++++++++++++++++++++++STRUCTS+++++++++++++++++++++++++++++++++*/

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


# include "libft.h"

#endif
