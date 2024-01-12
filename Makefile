DESTDIR ?=
PREFIX ?= /usr/local

coolcalc: calc.c
	gcc -Wall calc.c -o coolcalc

install : coolcalc
	install -m 0755 -d $(DESTDIR)$(PREFIX)/bin
	install -m 0755 coolcalc $(DESTDIR)$(PREFIX)/bin
