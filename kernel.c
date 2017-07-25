static char *const VGA_MEMORY = (char *)0xb8000;
static const int VGA_WIDTH = 80;
static const int VGA_HEIGHT = 25;

void kernel_early(void) {
    // do some early work here
}

int main(void) {
	const char *str = "Hi there!";
	unsigned int i = 0;
	unsigned int j = 0;
	
	while(str[i] != '\0') {
		VGA_MEMORY[j] = str[i];
		VGA_MEMORY[j+1] = 0x07;
		i++;
		j = j + 2;
	}

	return 0;
}


