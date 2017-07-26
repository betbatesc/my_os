#include "kernel/tty.h"

static char *const VGA_MEMORY = (char *)0xb8000;
static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;

void kernel_early(void) {
	terminal_initialize();
}

__attribute__((noreturn))
int main(void) {
	printf("Hi there!\n");
	while(1) {}
	return 0;
}


