coolcalc: calc.c
	gcc -Wall calc.c -o coolcalc

install : 
	cp coolcalc /usr/local/bin
