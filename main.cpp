#include<ncurses.h>
#include<stdlib.h>
using namespace std;

int main(int argc,char ** argv)
{
  //initializees screen for ncurses
  initscr();

	const char *name = "ENV_VARIABLE_NAME";
	char *value;

	int MAX_X,MAX_Y;

	getmaxyx

  int x,y;
  x = 10;
  y = 10;

  move(y,x);

  refresh();

  // waits for user input, returns int value of that key
  int c = getch();

  printw("%d\n",c);

  refresh();

  getch();

  //deallocates memory and ends ncurses
  endwin();

  return 0;
}
