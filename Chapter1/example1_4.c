// Файл example1_4.c 
// Книга "Extreme C" Amini K. Часть 1. Директивы препроцессора
// Использование операторов # и ## в макросе
// Оператор # переводит параметр в строковую форму: #NAME - "copy" (для CMD(copy))
// Оператор ## соединяет параметр с другими элементами: 
// NAME ## Cmd[256] = ""; - даст copyCmd[256] = ""; (для CMD(copy))

#include <stdio.h>
#include <string.h>

#define CMD(NAME) \
	char NAME ## Cmd[256] = ""; \
	strcpy(NAME ## Cmd, #NAME);

int main(int argc, char** argv) {
	CMD(copy)
	CMD(paste)
	CMD(cut)
	
	printf("Ennter your command: ");
	char cmd[256];
	scanf("%s", cmd);
	
	if (strcmp(cmd, copyCmd) == 0)
		printf("This enter - 'copy'\n");

	if (strcmp(cmd, pasteCmd) == 0)
		printf("This enter - 'paste'\n");

	if (strcmp(cmd, cutCmd) == 0)
		printf("This enter - 'cut'\n");

	return 0;
}