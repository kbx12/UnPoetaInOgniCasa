#pragma once

//dati due versi, controlla la metrica (la lunghezza)
int CalcolaCompatibilita(char*, char*);
//dati due versi, verificare se sono in rima
int CheckInRima(char*, char*);
//dato un verso e il database, cercarne uno tra quanti non ancora usati, che sia in rima
char* CercaRima(char*, char**);
//dato un verso visualizzarne, se esiste, la cesura
char* ApplicaCesura(char*);
//cercare un verso tra quanti non ancora usati, cui sia possibile applicare una cesura, dato il database
char* CercaCesura(char**);
// dati due versi, verificare se c’`e assonanza
int CheckAssonanza(char*, char*);
//dato un verso, cercarne uno tra quanti non ancora usati, che abbia assonanza, dato il database
char* CercaAssonanza(char*, char**);
//dato un verso, sapere se c’`e allitterazione
int CheckAlliterazione(char*);
//data una lettera, cercare tra i versi non ancora usati uno che presenti un’allitterazione con quella lettera, dato il database
char* CercaAlliterazione(char, char**);
//dati due interi calcola la percentuale della lunghezza del minore sul maggiore
float CalcolaPercentuale(int, int);
//dato il percorso, carica su una matrice in memoria il contenuto del databse
char** CaricaDatabase(const char*);

