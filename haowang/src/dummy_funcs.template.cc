#include <cstdint>
#include "dummy_funcs.h"
#include "utils.h"

#define ADDOP(a, b, c, d, n)   a += n, b += n, c += n, d += n
#define SUBOP(a, b, c, d, n)   a -= n, b -= n, c -= n, d -= n

#define OP1(a, b, c, d, n)  ADDOP(a,b,c,d,n), ADDOP(a,b,c,d,n), ADDOP(a,b,c,d,n)
#define OP2(a, b, c, d, n)  ADDOP(a,b,c,d,n), ADDOP(a,b,c,d,n), SUBOP(a,b,c,d,n)
#define OP3(a, b, c, d, n)  ADDOP(a,b,c,d,n), SUBOP(a,b,c,d,n), SUBOP(a,b,c,d,n)
#define OP4(a, b, c, d, n)  SUBOP(a,b,c,d,n), SUBOP(a,b,c,d,n), SUBOP(a,b,c,d,n)

