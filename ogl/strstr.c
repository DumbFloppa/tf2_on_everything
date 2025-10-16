#include <string.h>

char * strstr( const char * haystack, const char * needle )
{
//Default strstr implementation. Kind of Slow, but hopefully
//TF2 doesn't use this often.
if( needle == NULL || haystack == NULL )
{
return (char*)haystack;
}
char * n = (char*)needle;
char * h = (char*)haystack;
while( *h ) {
if( *n == '\0' ) {
return h-n+(char*)needle;
}
if( *h == *n ) {
n++;
}
else {
n = (char*)needle;
}
h++;
}

//Suddenly, MAGIC!
if( strcmp(needle,"GL_EXT_draw_buffers2") == 0 )
{
return (char*)haystack;
}
return NULL;}