@echo off
REM Compilar archivos objeto con las rutas de inclusion
g++ -c main.cpp -o main.o -I. -IAgenda -IContact
g++ -c AgendaProgram/AgendaProgram.cpp -o AgendaProgram.o -I. -IAgenda -IContact
g++ -c AgendaProgram/Agenda/Agenda.cpp -o Agenda.o -I. -IAgenda -IContact
g++ -c AgendaProgram/Contact/Contact.cpp -o Contact.o -I. -IAgenda -IContact

REM Enlazar archivos objeto para crear el ejecutable
g++ main.o AgendaProgram.o Agenda.o Contact.o -o AgendaProgram.exe

REM Limpiar archivos objeto (Opcional)
del *.o

echo Compilacion y Enlazado completado.