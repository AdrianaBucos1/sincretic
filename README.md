# sincretic
Motivul pentru care am ales această tema a fost din dorința de a învața mai mult despre modul de funcționare a algoritmilor de sortare. Am implementat cele 3 modalități de sortare pentru a vedea cum funcționează fiecare și să înțeleg avantajele și dezavantajele lor. Implementarea practică a acestora oferă o perspectivă concretă asupra pașilor implicați în sortare.
     Scopul proiectului este să analizeze și să compare trei algoritmi de sortare (Bubblesort, Shellsort și Quicksort) si sa masoare timpul de executie pentru fiecare algoritm.
Detaliile de implementare ale proiectului:
1.Bubblesort:
-algoritmul compară și schimbă elementele consecutive dacă sunt in ordine gresită, repetă acest proces pană cand niciun schimb nu mai este necesar.
-acest algoritm are o eficiență slabă pentru seturi de date mari, deoarece necesită un număr mare de comparări si schimbări.
2.Shellsort:
-acest algoritm este bazat pe inserție, îmbunătățit prin utilizarea unui set de pași mari, apoi reducand treptat pasul pana la 1 pentru o sortare finala;
-scopul este de a face ca elementele să fie apropiate de pozițiile finale rapid, urmat de o sortare fină cu pași mici.
3. Quicksort:
-acest algoritm allege un element pivot, împarte tabloul in două subtablouri și sortează recursiv aceste subtablouri;
-poziția finală a pivotului în tablou este determinată, iar aceasta este folosită pentru a împărți tabloul în continuare.
Explicare cod:
Includerea bibliotecilor necesare pentru funcționarea programului: “stdio.h” pentru funcțiile de intrare/ieșire standard, “stdlib.h” pentru funcții legate de alocare/dezalocare de memorie și “time.h” pentru funcții legate de timp.
1. Functia afisareTablou:
•	Această funcție primește un tablou de numere întregi (arr) și dimensiunea acestuia.
•	Folosește o buclă for pentru a parcurge fiecare element al tabloului și îl afișează la consolă.

2.Algoritmul Bubblesort:
•	bubbleSort(int arr[], int dimensiune): Această funcție primește un tablou de întregi arr și dimensiunea sa;
•	Se folosește o bucla for pentru a parcurge tabloul în mod repetat.
•	În interior, există o alta bucla for care compară elementele consecutive ale tabloului și le schimbă dacă sunt în ordine greșită (adică, dacă elementul curent este mai mare decât următorul).
3. Algoritmul Shellsort:
•	Se foloseste o bucla for pentru a itera prin pasii de la jumatatea dimensiunii tabloului, reducand pasul la jumatate in fiecare iteratie(pas/=2);
•	În interiorul primei bucle for, avem  a doua bucla for care parcurge elementele tabloului de la pas până la sfârșit.
•	Un element temporar temp este creat pentru a stoca valoarea curentă.
•	Apoi, avem o bucla while care compară și rearanjează elementele în funcție de pas, până când se asigură că elementele sunt în ordine.
•	La sfârșitul fiecărui bucle while, elementul temporar temp este plasat în poziția corectă în funcție de pas.
4. Algoritmul Quicksort:
•	Se verifică dacă subtabloul are cel puțin două elemente (stanga < dreapta).
•	Se alege un pivot, în acest caz, ultimul element al subtabloului (int pivot = arr[dreapta]).
•	Se parcurge subtabloul pentru a rearanja elementele mai mici și mai mari decât pivotul.
•	Elementele mai mici decât pivotul sunt mutate în stânga, iar cele mai mari în dreapta.
•	Pivotul este plasat în poziția corectă, iar indexul său este salvat în pi.
•	Funcția quickSort este apelată recursiv pentru partea stângă și partea dreaptă a pivotului. Recursivitatea continuă până când subtablourile au doar un singur element sau sunt goale.
4. Funcția main:
•	Solicită utilizatorului să introducă dimensiunea tabloului și elementele acestuia.
•	Afișează tabloul inițial.
•	Efectuează sortarea cu Bubblesort și afișează rezultatul.
•	Resetare și copierea tabloului inițial pentru a păstra aceleași date pentru următoarele sortări.
•	Efectuează sortarea cu Shellsort și afișează rezultatul.
•	Resetare și copierea din nou a tabloului inițial.
•	Efectuează sortarea cu Quicksort și afișează rezultatul.
•	Eliberează memoria alocată pentru tablou și copia acestuia.
•	Programul folosește malloc pentru a aloca dinamic memorie pentru tablou și o copie a acestuia. La sfârșit, memoria este eliberată folosind funcția free.
Bibliografie: Structuri de date si algoritmi(an I)

 
