all:outc 
	echo "build done"
outc: main.o account.o user.o admin.o
	gcc main.o account.o user.o admin.o -o outc
main.o:main.c
	gcc -c main.c
account.o:account.c
	gcc -c account.c
user.o:user.c
	gcc -c user.c
admin.o:admin.c
	gcc -c admin.c

clean:
	rm *.o outc
install:
	sudo cp outc /bin/


