#include "standard.h"


using namespace std;


pcc_t i18n_c::GetString(int id)
{
	switch (id)
	{
		case STRING_USAGE:						return 	"Syntax: ./tcpping [options] destination\n\n"
														"Options:\n"
														" -?, --help\tdisplay usage\n"
														" -p, --port N\tset TCP port N (required)\n"
														//" -p, --port N\tset TCP/UDP port N (required)\n"
														//"     --tcp\tuse TCP protocol (default)\n"
														"     --nocolor\tDisable color output\n"
														" -t, --timeout\ttimeout in milliseconds (default 1000)\n"
														" -c, --count N\tset number of checks to N\n";

		case STRING_STATS:						return	"\n"
														"Connection statistics:\n"
														"\tI Attempted = $%d$ times, I Connected = $%d$ times, I Failed = $%d$ ($%.2f%%$) times\n"
														"Approximate connection times:\n"
														"\tMinimum = $%.2fms$, Maximum = $%.2fms$, Average = $%.2fms$\n";

		case ERROR_POUTOFMEMORY:					return	"Dreadful: Out Of memory";
		case ERROR_SOCKET_TIMEOUT:				return	"$Dreadful: Connection Timed Out Lmao$";
		case ERROR_SOCKET_GENERALFAILURE:		return	"$Dreadful: I Failed For Some Reason$";
		case ERROR_SOCKET_CANNOTRESOLVE:		return	"$Dreadful: I Cannot Resolve This Domain/Host$";

		case STRING_CONNECT_INFO_FULL:			return	"Dreadful: I Am Connecting to $%s$ [$%s$] on $%s %d$:";
		case STRING_CONNECT_INFO_IP:			return	"Dreadful: I Am Connecting to $%s$ on $%s %d$:";
		case STRING_CONNECT_SUCCESS:			return	"Dreadful: Connected to $%s$: time=$%.2fms$ protocol=$%s$ port=$%d$";
		default:								return	"[ERROR: No translation]";
	}
}
