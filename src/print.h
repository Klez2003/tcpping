#include "standard.h"

using namespace std;

#ifdef _WIN32
	// Windows console colors
	#define PRINT_COLOR_BLACK		0
	#define PRINT_COLOR_BLUE		FOREGROUND_BLUE		|	FOREGROUND_INTENSITY
	#define PRINT_COLOR_GREEN		FOREGROUND_GREEN	|	FOREGROUND_INTENSITY
	#define PRINT_COLOR_RED			FOREGROUND_RED		|	FOREGROUND_INTENSITY
	#define PRINT_COLOR_YELLOW		FOREGROUND_GREEN	|	FOREGROUND_RED		|	FOREGROUND_INTENSITY
	#define PRINT_COLOR_CYAN		FOREGROUND_BLUE		|	FOREGROUND_GREEN	|	FOREGROUND_INTENSITY
	#define PRINT_COLOR_MAGENTA		FOREGROUND_RED		|	FOREGROUND_BLUE		|	FOREGROUND_INTENSITY
	#define PRINT_COLOR_WHITE		FOREGROUND_RED		|	FOREGROUND_GREEN	|	FOREGROUND_BLUE
	#define PRINT_COLOR_GRAY		FOREGROUND_INTENSITY
#else
	// ANSI colors for Linux/Unix
	#define PRINT_COLOR_BLACK		30
	#define PRINT_COLOR_RED			31
	#define PRINT_COLOR_GREEN		32
	#define PRINT_COLOR_YELLOW		33
	#define PRINT_COLOR_BLUE		34
	#define PRINT_COLOR_MAGENTA		35
	#define PRINT_COLOR_CYAN		36
	#define PRINT_COLOR_WHITE		37
#endif

struct slice_s
{
	int Begin;
	int End;
};

class print_c
{
	private:
		static int initialColors_;

	public:
		static bool UseColor;
		
		static void FormattedPrint(int color, pcc_t data);
		static void SetColor(int color);
		static void ResetColor();
};

