/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#444455",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#FF3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "System locked; Enter Correct Password";

/* Command to get message from */
static const char * MessageCmd = "sh /home/robert/.config/polybar/scripts/get_mocp_status.sh";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-misc-fixed-medium-r-semicondensed--13-100-100-100-c-60-iso8859-1";
