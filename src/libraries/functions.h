#pragma once

//controlla la compatibilità di due versi
int CalcolaCompatibilita(char*, char*);
//controlla se due versi sono in rima o meno
int CheckInRima(char*, char*);
//controlla se, dato un verso, ne esiste uno nel database di cui viene forntio il percorso relativo
char* CercaRima(char*, const char*);
//applica la cesura su un verso, se possibile
char* ApplicaCesura(char*);
//cerca in un data base di cui viene fornito il percorso relativo se esiste un verso cesurabile(?)
char* CercaCesura(const char*);
//controlla se due verrsi sono assonanti
int CheckAssonanza(char*, char*);
//controlla se, dato un verso, ne esiste uno assonante nel database di cui viene forntio il percorso relativo
char* CercaAssonanza(char*, const char*);
//controlla se in un verso è presente una alliterazione
int CheckAlliterazione(char*);
//controlla se, data una lettera e il percorso ad un database, se esiste un verso che ha una alliterazione con quella lettera
char* CercaAlliterazione(char, const char*);
//dati due interi calcola la percentuale della lunghezza del minore sul maggiore
float CalcolaPercentuale(int, int);
