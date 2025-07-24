#include <string.h>
#include <stdio.h>

#define LEN 20

void call_by_str(char *str);
int read_line(char *str, int len);

void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_cmd(void);
void save_as_cmd(void);
void save_all_cmd(void);
void print_cmd(void);
void exit_cmd(void);


struct {
	char *cmd_name;
	void (*cmd_pointer)(void);
} file_cmd[] =
   {{"new", new_cmd},
	{"open", open_cmd},
	{"close", close_cmd},
	{"close all", close_all_cmd},
	{"save", save_cmd},
	{"save as", save_as_cmd},
	{"save all", save_all_cmd},
	{"print", print_cmd},
	{"exit", exit_cmd}
};

int main(void)
{
	char command[LEN];

	for (;;) {
		printf("Enter the command: ");
		read_line(command, LEN);

		if (strcmp(command, "quit") == 0) {
			break;
		}

		call_by_str(command);
	}	

	return 0;
}


void call_by_str(char *str)
{
	int i;

	for (i = 0; i < 9; i++) {
		if (strcmp(str, file_cmd[i].cmd_name) == 0) {
			file_cmd[i].cmd_pointer();
			return;
		}
	}
	printf("Command not found.\n");
}

int read_line(char *str, int len)
{
	int ch, i = 0;
	while ((ch = getchar()) != '\n')
		if (i < len)
			str[i++] = ch;
	str[i] = '\0';

	return i;
}

void new_cmd(void)
{
	printf("new_cmd\n");
}

void open_cmd(void)
{
	printf("open_cmd\n");
}

void close_cmd(void)
{
	printf("close_cmd\n");
}

void close_all_cmd(void)
{
	printf("clear_all_cmd\n");
}

void save_cmd(void)
{
	printf("save_cmd\n");
}

void save_as_cmd(void)
{
	printf("save_as_cmd\n");
}

void save_all_cmd(void)
{
	printf("save_all_cmd\n");
}

void print_cmd(void)
{
	printf("print_cmd\n");
}

void exit_cmd(void)
{
	printf("exit_cmd\n");
}

