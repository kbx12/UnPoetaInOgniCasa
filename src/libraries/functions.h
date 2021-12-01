#pragma once

/* controlla la compatibilità di due versi */
int CalcolaCompatibilita(char*, char*);
/* controlla se due versi sono in rima o meno */
int CheckInRima(char*, char*);
/* controlla se, dato un verso, ne esiste uno nel database di cui viene fornito un array di stringhe e la sua lunghezza */
char* CercaRima(char*, char**, int);
/* applica la cesura su un verso, se possibile */
char* ApplicaCesura(char*);
/* cerca in un data base di cui viene fornito un array di stringhe e la sua lunghezza se esiste un verso cesurabile(?) */
char* CercaCesura(char**, int);
/* controlla se due verrsi sono assonanti */
int CheckAssonanza(char*, char*);
/* controlla se, dato un verso, ne esiste uno assonante nel database di cui viene forntio un array di stringhe e la sua lunghezza */
char* CercaAssonanza(char*, char**, int);
/* controlla se in un verso è presente una alliterazione */
int CheckAlliterazione(char*);
/* controlla se, data una lettera e un array di stringhe e la sua lunghezza, se esiste un verso che ha una alliterazione con quella lettera */
char* CercaAlliterazione(char, char**, int);
/* dati due interi calcola la percentuale della lunghezza del minore sul maggiore(il maggiore è il primo dei due) */
float CalcolaPercentuale(int, int);
/* dati due numeri interi ritorna il maggiore */
int Max(int, int);
/* dati due numeri interi ritorna il minore */
int Min(int, int);
/* dato un percorso ad un file ritorna un puntatore ad un array di stringhe corrispondenti ad ogni linea del file. */
char** CaricaDatabase(const char*, const int, int*);