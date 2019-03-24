# Luci al Pirellone 

##### (Selezioni nazionali oii 2005 - Milano)
  
Il Pirellone è un noto grattacielo di Milano, in cui le
finestre sono disposte ordinatamente su M righe (piani) e
N colonne. Le righe sono numerate da 1 a M (dall'alto in basso)
e le colonne da 1 a N (da sinistra a destra).

Non tutti i dipendenti spengono la luce dei loro uffici, la sera prima
di uscire. Quindi alcune finestre rimangono illuminate e tocca al
custode provvedere a spegnerle.

Il custode non può entrare nei singoli uffici ma dispono di M+N interruttori speciali, con un funzionamento particolare.
Ci sono M interruttori di riga e N interruttori di colonna.
Quando il custode agisce sull'i-esimo interruttore di riga, tutte le luci accese
dell'i-esima riga si spengono ma, allo stesso tempo, quelle
spente si accendono! Analogamente alle righe, un interruttore di
colonna spegne le luci accese di quella colonna e accende quelle
spente.

Aiuta il custode a decidere quali degli M+N interruttori azionare al fine di spegnere tutte le luci delle finestre del Pirellone.
Data la configurazione iniziale di luci, il custode deve verificare se sia possibile spegnere le luci con gli interruttori
speciali e, in tal caso, deve specificare anche su quali interruttori
agire. Altrimenti, segnala la situazione di impossibilità.

### Funzioni

Per risolvere il problema, dovrai implementare le seguenti due funzioni.

#### `is_solvable(N, M, P[][])`

Questa funzione dovrà restituire `1` se e solo se il Pirellone di dimensione `M`x`N` è risolvibile, altrimenti dovrà 
restituire `0`. 
La matrice `P` rappresenta il Pirellone corrente, dove per ogni `i` e `j` tali che `1 <= i <= M` e `1 <= j <= N` 
`P[i][j] = 1` se e solo se la finestra in posizione `i, j` è illuminata. 

#### `solve(M, N, P, switch_row(row), switch_col(col))`

Questa procedura computa una soluzione al problema pirellone. Analogamente a prima, i parametnri `M`, `N`, e `P` 
rappresentano il Pirellone. Chiaramente assumiamo in questa face che il grattacielo datoci ammetta una soluzione. 

Hai a disposizione le callback `switch_row(i)` e `switch_col(j)`, che rispettivamente azionano l'interruttore 
di riga e di colonna indicato. Il tuo obbiettivo è chiamare queste funzioni per spegnere tutte le luci del pirellone, chiaramente facendo 
il minor numero di operazioni possibili. 

**NB**: sebbene ti venga chiesto di implementare le funzioni in un singolo file, fra la valutazione di un goal e l'altro il
processo viene interrotto. Non funzionerà in sostanza definire variabili globali per condividere dati fra le 
due funzioni. 


### Goals 

Questo problema prevede i seguenti goal, obbiettivi che dovrai raggiungere:

- `decision_exponential`: decidere se il Pirellone sia spegnibile o meno, con M,N <= 10
- `solve_exponential`: qualora esista, dara una sequenza di mosse che spenga l'intero Pirellone, con M,N <= 10
- `decision_quadratic` e `solve_exponential`: rispettivamente come i primi due, ma con M,N <= 100
