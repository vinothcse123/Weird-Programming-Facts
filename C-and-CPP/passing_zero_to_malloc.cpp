#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

typedef unsigned char Byte;

#define container(ptr, type, member)               \
   ({                                                 \
    (type *)((Byte *)ptr - offsetof(type, member)); \
    })

typedef struct
{
   size_t size;
   void *block;
}Header;

int main()
{
   void *ptr = malloc(10);
   Header *pHdr = container(ptr, Header, block);
   printf("\n  :: %u ", pHdr->size );
   return 0;
}
