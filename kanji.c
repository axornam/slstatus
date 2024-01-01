/* Written by Madison Lynch <madi@mxdi.xyz> */
#include <time.h>

const char *
kanji(const char *unused) {
	char *kanji[] = {"日", "月", "火", "水", "木", "金", "土"};
	time_t t=time(NULL);
	struct tm tm=*localtime(&t);
	int map[]={0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4},
	    m=tm.tm_mon+1,
	    y=tm.tm_year+1900-(m<3),
	    wd=(y+y/4-y/100+y/400+map[m-1]+tm.tm_mday)%7;
	return kanji[wd];
}
/* Written by Madison Lynch <madi@mxdi.xyz> */
#include <time.h>

const char *
kanji(const char *unused) {
	char *kanji[] = {"日", "月", "火", "水", "木", "金", "土"};
	time_t t=time(NULL);
	struct tm tm=*localtime(&t);
	int map[]={0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4},
	    m=tm.tm_mon+1,
	    y=tm.tm_year+1900-(m<3),
	    wd=(y+y/4-y/100+y/400+map[m-1]+tm.tm_mday)%7;
	return kanji[wd];
}
/* Written by Madison Lynch <madi@mxdi.xyz> */
#include <time.h>

const char *
kanji(const char *unused) {
	char *kanji[] = {"日", "月", "火", "水", "木", "金", "土"};
	time_t t=time(NULL);
	struct tm tm=*localtime(&t);
	int map[]={0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4},
	    m=tm.tm_mon+1,
	    y=tm.tm_year+1900-(m<3),
	    wd=(y+y/4-y/100+y/400+map[m-1]+tm.tm_mday)%7;
	return kanji[wd];
}
/* Written by Madison Lynch <madi@mxdi.xyz> */
#include <time.h>

const char *
kanji(const char *unused) {
	char *kanji[] = {"日", "月", "火", "水", "木", "金", "土"};
	time_t t=time(NULL);
	struct tm tm=*localtime(&t);
	int map[]={0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4},
	    m=tm.tm_mon+1,
	    y=tm.tm_year+1900-(m<3),
	    wd=(y+y/4-y/100+y/400+map[m-1]+tm.tm_mday)%7;
	return kanji[wd];
}
/* Written by Madison Lynch <madi@mxdi.xyz> */
#include <time.h>

const char *
kanji(const char *unused) {
	char *kanji[] = {"日", "月", "火", "水", "木", "金", "土"};
	time_t t=time(NULL);
	struct tm tm=*localtime(&t);
	int map[]={0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4},
	    m=tm.tm_mon+1,
	    y=tm.tm_year+1900-(m<3),
	    wd=(y+y/4-y/100+y/400+map[m-1]+tm.tm_mday)%7;
	return kanji[wd];
}
