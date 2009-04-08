extern unsigned char RAM[65536];

extern unsigned char A, X, Y, S;
extern unsigned short PC;
extern unsigned char V, B, D, I, C, N, Z;

#define SETZ(a) Z=a;
#define SETSZ(a) Z = (a)? 0:1; N = ((signed char)(a))<0?1:0
#define SETNC(a) C = (a)&0x100? 0:1
#define SETV(a) /* not needed */
#define STACK16(i) (RAM[0x0100+i]|(RAM[0x0100+i+1]<<8))
#define PUSH(b) RAM[0x0100+S--] = (b)
#define PUSH_WORD(b)      PUSH((b)>>8); PUSH((b)&0xFF)

void CHRGET(void);
void CHRGOT(void);

int main(int, char **);

#define VEC_ERROR	0x0300
#define VEC_MAIN	0x0302
#define VEC_CRNCH	0x0304
#define VEC_QPLOP	0x0306
#define VEC_GONE	0x0308
#define VEC_EVAL	0x030A
#define MAGIC_ERROR	0xFF00
#define MAGIC_MAIN	0xFF01
#define MAGIC_CRNCH	0xFF02
#define MAGIC_QPLOP	0xFF03
#define MAGIC_GONE	0xFF04
#define MAGIC_EVAL	0xFF05
#define MAGIC_CONTINUATION 0xFFFF
