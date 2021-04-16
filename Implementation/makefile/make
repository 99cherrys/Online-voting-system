PROJ_NAME = Simple_Voting_System


SRC = src/admin.c \
src/user.c \
src/common.c 


INC_H = inc

ifdef OS
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
	  EXEC = out
   endif
endif

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(PROJ_NAME).$(EXEC)
	
run:
	$(PROJ_NAME).$(EXEC)

cppcheck:
	cppcheck --enable=all $(SRC)
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(PROJ_NAME).$(EXEC)


clean:
	del *.DAT
	del *.$(EXEC)
