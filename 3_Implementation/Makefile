# comments added by hash operator

# below is the syntax for adding makefile commands

# Target : Dependencies
#<1 TAB SPACE>Command

PROJECT_NAME = SDBMS.exe

SRC = main.c\
src/addcontact.c\
src/modifycontact.c\
src/viewcontact.c\
src/searchcontact.c\
src/deletecontact.c\
src/menu.c

INC = inc

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

$(PROJECT_NAME): $(SRC)
	gcc -I $(INC) $(SRC) -o SDBMS.exe
	
run: $(PROJECT_NAME)
	$(PROJECT_NAME)
	
clean:
	del /q *.exe
