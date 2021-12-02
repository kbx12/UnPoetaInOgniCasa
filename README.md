# Un poeta in ogni casa

> Avete deciso di avviarvi alla professione di poeta. Siete risoluti ma, forse a causa della passione collaterale per la scienza, volete qualche garanzia nel caso la fantasia e creatività facciano cilecca...

### Informazioni generali

- Il testo del problema è presente nella cartella come `problema.pdf`.
- I file sorgente sono nella cartella `src`.
- Il programma è stato studiato per essere il più modulare possibile.

### To do(s)

- [ ] sistemare la funzione `char* InserisciVerso()`: al momento non si riesce a chiamare la funzione due volte di fila senza che la prima delle due stringhe venga vuota.
- [x] implementare la funzione `int CalcolaCompatibilita(char* verso1, char* verso2)` che dati due versi ritorna `1` se essi sono compatibili (vedi problema) o `0` se non lo sono.
- [ ] implementare la funzione `int CheckInRima(char* verso1, char* verso2)` che dati due versi controlla se sono in rima (vedi problema) e ritorna `1` se lo sono o `0` se non lo sono.
- [ ]  implementare la funzione `char** CercaRima(char* verso, char** database, int* numero_righe)` che dato un verso e un array di stringhe proveniente dal database insieme alla lunghezza di tale array ritorna la prima stringa che è in rima con il verso oppure un puntatore nullo (se non esiste tale stringa).
- [ ] implementare la funzione `char* ApplicaCesura(char* verso) ` che dato un verso ritorna la cesura di tale verso (vedi problema) oppure un puntatore nullo se è impossibile applicare la cesura.
- [ ] implementare la funzione `char* CercaCesura(char** database, int* numero_righe)` che dato un array di stringhe proveniente dal database e la lunghezza di tale array ritorna la prima stringa nel database che è cesurabile(?) oppure un puntatore nullo.
- [ ] implementare la funzione `int CheckAssonanza(char* verso1, char* verso2)` che dati due versi ritorna `1` se i versi sono assonanti o `0` se non lo sono.
- [ ] implementare la funzione `char* CercaAssonanza(char* verso, char** database, int* numero_righe)` che dato un array di stringhe proveniente dal database e la lunghezza di tale array ritorna la prima stringa assonante nel database con il verso dato oppure un puntatore nullo se tale stringa non esiste.
- [ ] implementare la funzione `int CheckAlliterazione(char* verso)` che dato un verso ritorna `1` se il verso contiene una allitterazione (vedi problema) o `0` se non la contiene.
- [ ] implementare la funzione `char* CercaAlliterazione(char lettera, char** database, int* numero_righe)` che dato un array di stringhe proveniente dal database e la lunghezza di tale array ed una lettera ritorna la prima stringa nel database che ha una allitterazione con quella lettera oppure un puntatore nullo. 
- [x] implementare la funzione di supporto `float CalcolaPercentuale(int n1, int n2)` che dati due numeri calcola la percentuale di uno rispetto all'altro e la ritorna. (`5` è il `50%` di `10`).
- [ ] implementare la funzione di supporto `char** CaricaDatabase(const char* path_to_database, const int max_len_verso, int* numero_righe)` che dato un percorso ad un file ritorna un array di stringhe dove ogni entrata corrisponde ad una riga del file.

### Come compilare

Per compilare il progetto da Windows bisogna entrare con il terminale nella cartella del progetto e poi scrivere il comando da PowerShell:

```powershell
gcc .\src\main.c .\src\libraries\functions.c -o .\bin\app
```

In generale bisogna compilare insieme i file `main.c` che si trova in `src/main.c` e `functions.c` che si trova in `src/libaries/functions.c`. E mandare il file eseguibile nella cartella `bin`.

### Suggerimenti, errori, dubbi e altro

Per qualsiasi cosa dubbio o suggerimento per migliorare il programma o se trovate qualche errore scrivetemi su Whattsapp oppure sulla mia mail @thecaptaincraken@gmail.com oppure (ancora meglio!) create una nuova issue su Github.

### Come contribuire

Per scaricare il progetto bisogna creare un account [GitHub](https://github.com/) quindi scaricare il client desktop di GitHub. Dopo andare all'indirizzo web di [questa repository](https://github.com/TheCaptainCraken/UnPoetaInOgniCasa) e clickare sul tasto `code > Open with GitHub Desktop`.

Quindi creare una fork della repository.

Una volta aggiunte le funzionalità (cha vanno testate prima) riaprire il client desktop di GitHub e creare una pull request.

Per informazioni sull'utilizzo di GitHub guardate [qui](https://docs.github.com/en/get-started) oppure scrivetemi agli indirizzi sopra.
