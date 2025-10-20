# graphics-programming-with-raydelto_03_agenda

## Agenda assignment development documentation
In this assignment I tried the best I can to NOT use AI to get most insightful practice possible.

But I have to admit, I hit the breaks twice when I was getting started with smart pointers working on the Agenda logic, and when I was compiling the program after restructuring the classes out of main.cpp.

## Program logic and structure summary
I encapsulate the entire AgendaProgram on its own scope/folder so main.cpp just runs the program. The AgendaProgram class have the console menu logic and from there, calls the methods of Agenda instance, the Agenda class have the CRUD of Contacts, there are all the important functions to operate the Contacts of the program, and for last but also important, the Contact class have the necessary fields to manage.

## Compilation and linking
At the start of the development I had all coded on main.cpp for easy testing, so there I had no problems, until I take out all the classes from main, had to make sure all the inclusions are declared correctly (with the exact relative location) the AI helped me with an example of how to create the commands to link all the code source and headers, and with that, we have the program baked and ready!
