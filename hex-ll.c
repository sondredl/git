#include "git-compat-util.h"
#include "hex-ll.h"

const signed char hexval_table[256] = {
    -1, -1, -1, -1, -1, -1, -1, -1, /* 00-07 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 08-0f */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 10-17 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 18-1f */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 20-27 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 28-2f */
    0, 1, 2, 3, 4, 5, 6, 7,         /* 30-37 */
    8, 9, -1, -1, -1, -1, -1, -1,   /* 38-3f */
    -1, 10, 11, 12, 13, 14, 15, -1, /* 40-47 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 48-4f */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 50-57 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 58-5f */
    -1, 10, 11, 12, 13, 14, 15, -1, /* 60-67 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 68-67 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 70-77 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 78-7f */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 80-87 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 88-8f */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 90-97 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* 98-9f */
    -1, -1, -1, -1, -1, -1, -1, -1, /* a0-a7 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* a8-af */
    -1, -1, -1, -1, -1, -1, -1, -1, /* b0-b7 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* b8-bf */
    -1, -1, -1, -1, -1, -1, -1, -1, /* c0-c7 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* c8-cf */
    -1, -1, -1, -1, -1, -1, -1, -1, /* d0-d7 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* d8-df */
    -1, -1, -1, -1, -1, -1, -1, -1, /* e0-e7 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* e8-ef */
    -1, -1, -1, -1, -1, -1, -1, -1, /* f0-f7 */
    -1, -1, -1, -1, -1, -1, -1, -1, /* f8-ff */
};

int hex_to_bytes(unsigned char *binary, const char *hex, size_t len)
{
    for (; len; len--, hex += 2)
    {
        unsigned int val = (hexval(hex[0]) << 4) | hexval(hex[1]);

        if (val & ~0xff)
        {
            return -1;
        }
        *binary++ = val;
    }
    return 0;
}
