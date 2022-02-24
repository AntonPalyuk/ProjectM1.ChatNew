#include "Program.h"

int main()
{
	
	Program p1;

	p1.setUser("LOG1", "1", "NAME1", 0);
	p1.setUser("LOG2", "2", "NAME2", 1);
	p1.setUser("LOG3", "3", "NAME3", 2);

	p1.addMessageM("me", "you", "Hello!", 0);
	p1.addMessageM("me", "you", "Aloha!", 1);
	p1.addMessageM("me", "you", "Chears!", 2);

	while (p1.getProgramStatus())
	{
		
		p1.mainMenu();


		while (p1.getCurrentUser())
		{
			
			p1.userMenu();


		}

	}

	return 0;


}