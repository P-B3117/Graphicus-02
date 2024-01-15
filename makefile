#
# Auteur: C.-A. Brunet
# Date: 04 janvier 2024
# Modifie par : Charles Poulin-Bergevin
# Date : 08-01-2024
# Description: compilation de graphicus-01. Ce fichier fait partie de 
#	la distribution de Graphicus.
#

graphicus-01: graphicus-01.o tests.o canevas.o couche.o forme.o vecteur.o rectangle.o carre.o cercle.o
	g++ -o graphicus-01 graphicus-01.o tests.o canevas.o couche.o forme.o vecteur.o rectangle.o carre.o cercle.o

graphicus-01.o: graphicus-01.cpp canevas.h couche.h forme.h
	g++ -c graphicus-01.cpp

tests.o: tests.cpp tests.h canevas.h couche.h forme.h 
	g++ -c tests.cpp

canevas.o: canevas.cpp canevas.h couche.h forme.h
	g++ -c canevas.cpp

couche.o: couche.cpp couche.h forme.h
	g++ -c couche.cpp
	
vecteur.o: vecteur.cpp vecteur.h forme.h
	g++ -c vecteur.cpp
	
forme.o: forme.cpp forme.h
	g++ -c forme.cpp
	
rectangle.o: rectangle.cpp rectangle.h forme.h coordonnee.h
	g++ -c rectangle.cpp

carre.o: carre.cpp carre.h rectangle.h
	g++ -c carre.cpp
	
cercle.o: cercle.cpp cercle.h forme.h coordonnee.h
	g++ -c cercle.cpp
	
clean:
	rm  -f *.o
