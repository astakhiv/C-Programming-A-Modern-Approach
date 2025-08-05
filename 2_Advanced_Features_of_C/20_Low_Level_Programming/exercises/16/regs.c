#include <stdio.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;

// looked up structure
union {
	struct {
		DWORD eax, ebx, ecx, edx;
	} dword;
	struct {
		WORD ax, eax, bx, ebx, cx, ecx, dx, edx;
	} word;
	struct {
		BYTE al, ah, eal, eah, bl, bh, ebl, ebh, cl, ch, ecl, ech, dl, dh, edl, edh;
	} byte;
} regs;

int main(void)
{
	regs.byte.ah = 0x56;
	regs.byte.al = 0x78;
	printf("AX: %hx\n", regs.word.ax);
	regs.word.eax = 0x1234;
	printf("EAX: %lx\n", regs.dword.eax);

	return 0;
}
