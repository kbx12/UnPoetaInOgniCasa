#pragma once

/*
* Parametri:
*	filename		-> percorso del file da leggere
*	verse_max_len	-> lunghezza massima di ogni verso (considerando anche il terminatore)
*	out_size		-> numero di versi trovati nel file
*
* Comportamento:
*	Apre il file, legge i contenuti, salva ogni verso in memoria, chiude il file,
*	trasmette il numero di versi e ritorna una matrice di puntatori a ogni verso.
*	In caso di errore, la funzione ritorna NULL e libera la memoria eventualmente allocata.
*	Tutti i versi sono terminati dal terminatore.
*
* Dettagli
*	L'operatore [] permette di accedere a ogni verso. Gli indici sono nell'intervallo [0, out_size).
*	Prima di terminare l'esecuzione di un programma, se la funzione ha avuto successo è necessario
*	liberare la memoria allocata. Ciò può essere fatto tramite la funzione LiberaDatabase o manualmente.
*/

char** CaricaDatabase(const char*, size_t, size_t*);

/* Libera tutta la memoria allocata da CaricaDatabase */
void LiberaDatabase(char**, size_t);

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