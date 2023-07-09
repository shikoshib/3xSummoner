#include <stdio.h>
#include <conio.h>
#include <windows.h>

char titleNode[64];
char contentNode[1024];
int icon;
UINT selectedIcon;

const UINT iconObj[6] = {
	NULL,
	MB_ICONHAND,
	MB_ICONQUESTION,
	MB_ICONEXCLAMATION,
	MB_ICONASTERISK,
	MB_ICONMASK
};

int buttonSet;
UINT selectedbtnSet;  

int recBtn;
UINT selectedrecbtn;

const UINT btnsObj[7] = {
	NULL,
	MB_OK,
	MB_OKCANCEL,
	MB_ABORTRETRYIGNORE,
	MB_YESNOCANCEL,
	MB_YESNO,
	MB_RETRYCANCEL
};  

const UINT defBtnsObj[4] = {
	NULL,
	MB_DEFBUTTON1,
	MB_DEFBUTTON2,
	MB_DEFBUTTON3
};

void summonWindow() {
	 MessageBox(NULL, contentNode, titleNode, selectedIcon | selectedbtnSet | selectedrecbtn);
}

int main(int argc, char* argv[]){
	 printf("=======================================\n3xSummoner\nA Windows 3.1 error message generator\nMade by shikoshib\n=======================================\n\n");

	 printf("Enter the error title:\n");

	 scanf(" %[^\n]", titleNode);
	 
	 printf("Enter the error content:\n");

	 scanf(" %[^\n]", contentNode);

	 printf("Choose an icon.\n1 - Stop, 2 - Question Mark, 3 - Exclamation mark, 4 - Information, 5 - No Icon\n");

	 scanf("%d", &icon);    

	 printf("Choose a button set.\n1 - OK\n2 - OK and Cancel\n3 - Abort, Retry and Ignore\n4 - Yes, No and Cancel\n5 - Yes and No\n6 - Retry and Cancel\n");

	 scanf("%d", &buttonSet);   

	 printf("Which button should be selected (1, 2 or 3)?\n");

	 scanf("%d", &recBtn);

	 selectedIcon = iconObj[icon];
	 selectedbtnSet = btnsObj[buttonSet];
	 selectedrecbtn = defBtnsObj[recBtn];
	 summonWindow();
	 DestroyWindow(GetActiveWindow());

	 return 0;
}
