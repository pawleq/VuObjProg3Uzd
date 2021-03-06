# VuObjProg2Uzd
Objektinio programavimo 2 užduotis

Paulius Mykolaitis ISI I grupė, II pogrupis

# Kaip paleisti programą?
Jeigu naudojate CodeBlocks, sekite šiuos žingsnius :

1. Atidarome ***main.cpp*** failą.
2. Sukompiliuojame kodą ir paleidžiame programą.

Jeigu naudojate C++ compiler, pavyzdziui, GCC, tai :

Norint paleisti šią programa g++ compiler pagalba, nuėję į failo vietą, rašykite : 

Makefile commands:

**make**

Sukuria .o failus ir juos sulinkina i "main" faila;

**clean**

Ištrina main ir .o failus.

Galite naudoti programą.

# Kaip naudoti programą?

intel i5 8250u @ 1.6gHz, 8.0GB ram

v1.0 (pirma strategija)

1. Atsidarome **SarasoGen.cpp** faila, ji sukompiliuojame ir parasome, kiek studentu norime sugerenuoti ir kiek pazymiu;

2. Tada atisdarome tam tikra faila : jei norite programos su deque konteineriu - DeQueMain.cpp, jei su list - listMain.cpp, o jeigu su vector - vectorMain.cpp;

3. Suvedame, kas yra prasoma, o paprasius failo, is kurio skaityti duomenis, iveski **kursiokai.txt**.

Failo generavimas su 10 pazymiu

| Įrašų kiekis | Laikas |
|--|--|
| 1000 | 0,03452s |
| 10000 | 0,98574s | 
| 100000 | 1,5652s |
| 1000000 | 12.45678s |
| 10000000 | 120,54512s |

Nuskaitymas is failu (10 pazymiu)

| Įrašų kiekis | std::vector | std::deque | std::list |
|--|--|--|--|
| 1000 | 0.009s | 0.01s | 0.01s |
| 10000 |  0.094s | 0.089s | 0.09s |
| 100000 |  0.942s | 0.895s | 0.901s |
| 1000000 | 9.421s | 8.922s | 9.02s |
| 10000000 | 94.625s | 89.174s | 90.212s |


Rusiavimas ir isvedimas i failus (10 pazymiu)

| Įrašų kiekis | std::vector | std::deque | std::list |
|--|--|--|--|
| 1000 | 0.031s | 0.031s | 0.029s |
| 10000 |  0.215s | 0.221s | 0.172s |
| 100000 |  2.159s | 2.231s | 1.725s |
| 1000000 | 21.623s | 22.123s | 17.126s |
| 10000000 | 216.862s | 221.034s | 171.312s |

v1.0 (antra strategija su optimizuotais vector konteineriais)

1. Atsidarome **SarasoGen.cpp** faila, ji sukompiliuojame ir parasome, kiek studentu norime sugerenuoti ir kiek pazymiu;

2. Tada atisdarome tam tikra faila : jei norite programos su deque konteineriu - DeQueMain.cpp, jei su list - listMain.cpp, o jeigu su vector - vectorMain.cpp;

3. Suvedame, kas yra prasoma, o paprasius failo, is kurio skaityti duomenis, iveski **kursiokai.txt**.

Failo generavimas su 10 pazymiu

| Įrašų kiekis | Laikas |
|--|--|
| 1000 | 0,03452s |
| 10000 | 0,98574s | 
| 100000 | 1,5652s |
| 1000000 | 12.45678s |
| 10000000 | 120,54512s |

Nuskaitymas is failu (10 pazymiu)

| Įrašų kiekis | std::vector | std::deque | std::list |
|--|--|--|--|
| 1000 | 0.009s | 0.009s | 0.01s |
| 10000 |  0.094s| 0.086s | 0.09s |
| 100000 |  0.942s | 0.883s | 0.8502s |
| 1000000 | 9.452s | 8.825s | 8.501s |
| 10000000 | 94.247s | 88.342s | 85.021s |


Rusiavimas ir isvedimas i failus (10 pazymiu)

| Įrašų kiekis | std::vector | std::deque | std::list |
|--|--|--|--|
| 1000 | 0.03s | 0.03s | 0.025s |
| 10000 |  0.216s | 0.242s | 0.167s |
| 100000 |  2.126s | 2.141s | 1.64872s |
| 1000000 | 21.272s | 21.7396s | 16.017 s |
| 10000000 | 212.625s | 219.526s | 162.5684s |

**Pirma strategija yra letesne, kai sukuriami du atskiri konteineriai ir i juos surusiuojama bendro konteinerio studentai, o antra strategija, kai sukuriamas atskiras konteineris, pvz, vargsiukams ir i ji sutalpinami vargsiukai ir is bendro konteinerio jie istrinami**

v0.5

1. Atsidarome **SarasoGen.cpp** faila, ji sukompiliuojame ir parasome, kiek studentu norime sugerenuoti ir kiek pazymiu;

2. Tada atisdarome tam tikra faila : jei norite programos su deque konteineriu - DeQueMain.cpp, jei su list - listMain.cpp, o jeigu su vector - vectorMain.cpp;

3. Suvedame, kas yra prasoma, o paprasius failo, is kurio skaityti duomenis, iveski **kursiokai.txt**.

Failu generavimas su 10 pazymiu

| Įrašų kiekis | Laikas |
|--|--|
| 1000 | 0,03452s |
| 10000 | 0,98574s | 
| 100000 | 1,5652s |
| 1000000 | 12.45678s |
| 10000000 | 120,54512s |

Failo skaitymas (10 pazymiu)

| Įrašų kiekis | std::vector | std::deque | std::list |
|--|--|--|--|
| 1000 | 0,01s | 0.009s | 0.009s |
| 10000 |  0.094s | 0.089s | 0.09s |
| 100000 |  0.969s | 0.886s | 0.904s |
| 1000000 | 11.994s | 9.573s | 9.072s |
| 10000000 | 112.852s | 96.542s | 91.852s |

Rusiavimas ir failo isvedimas (10 pazymiu)

| Įrašų kiekis | std::vector | std::deque | std::list |
|--|--|--|--|
| 1000 | 0.029s | 0.03s | 0.034s |
| 10000 |  0.211s | 0.211s | 0.19s |
| 100000 |  2.094s | 2.144s | 1.506s |
| 1000000 | 23.907s | 23.473s | 14.964s |
| 10000000 | 230.852s | 230.389s | 150.023s |

v0.4

1. Įveskite studentų kiekį bei pažymiu kiekį, kuris veliau bus naudojamas generuoti studentų sąrašui.

2. Palaukit, kol programa baigs savo darba.

3. Baigus darba, programa išmes bendrą informaciją, apie tai, kiek truko failų sudarymas ir studentų **sort'inimas**.

Failu generavimas su 10 pazymiu

| Įrašų kiekis | Laikas |
|--|--|
| 1000 | 0,03452s |
| 10000 | 0,98574s | 
| 100000 | 1,5652s |
| 1000000 | 12.45678s |
| 10000000 | 120,54512s |

Failo skaitymas (10 pazymiu)

| Įrašų kiekis | std::vector |
|--|--|
| 1000 | 0,01s | 
| 10000 |  0.094s |
| 100000 |  0.969s | 
| 1000000 | 11.994s | 
| 10000000 | 299.54395s | 

Rusiavimas ir failo isvedimas (10 pazymiu)

| Įrašų kiekis | std::vector |
|--|--|
| 1000 | 0.029s | 
| 10000 |  0.211s |
| 100000 |  2.094s | 
| 1000000 | 23.907s | 
| 10000000 | 230.852s | 

v0.3

1. Įveskite + arba - (atitinkamai skaityti iš failo ar pačiam įrašyti duomenis);

2. Jeigu pasirinkot skaitymą iš failo, tai viskas bus padaryta be papildomų pastangų (failo pavadinimas turi būti "Kursiokai.txt");

3. Jeigu pasirinkot duomenų įvedimą, tai sekite viską, kas bus nurodyta kompiliatoriuje;

4. Sukurtas sąrašas žmonių su ju vardais, galutiniais įvertinimais ir pažymių mediana!

v0.2

1. Įveskite + arba - (atitinkamai skaityti iš failo ar pačiam įrašyti duomenis);

2. Jeigu pasirinkot skaitymą iš failo, tai viskas bus padaryta be papildomų pastangų (failo pavadinimas turi būti "Kursiokai.txt");

3. Jeigu pasirinkot duomenų įvedimą, tai sekite viską, kas bus nurodyta kompiliatoriuje;

4. Sukurtas sąrašas žmonių su ju vardais, galutiniais įvertinimais ir pažymių mediana!

v0.1

1. Įveskite studentu kieki;

2. Iveskite studento varda / pavarde;

3. Iveskite atitinkama raide, t - ivesti pazymius, n - ivesti, bet be ribojimo (ivesti stop norint stabdyti ivedima), r - random sugeneruoti pazymiai;

4. Iveskite egzamino pazymi (jei pasirinkot random pazymius, jis bus sugeneruotas atsitiktinai).

# Releases

v1.0

Programa su dviem skirtingom strategijom, 1 - dvieju nauju konteineriu sukurimas ir isrusiavimas, 2 - vieno naujo konterinerio sukurimas kazkuriai studentu grupei, tada perkeliant i ji atitinkamus studentus, o is bendro konterinerio jie istrinami.

v0.5 

Programa skirta skaiciuoti laika su std::list, std::deque ir std::vector.

v0.4 

Programa, kurioje *random* sugeneruotus studentus įrašoma į du skirtingus failus (>=5 gal. balas, ir <5 gal. balas) ir apskaičiuoja programos veikimo laiką : kol sukuriami failai, įrašomi studentai į skirtingus failus.

v0.3 

Programa, kurioje yra galimybė skaityti iš failo bei naudojami header **.h** failai. Kartu yra ir skaitymas (v0.2) jos padarytos ir sukeltos bendroje v0.3 versijoje.

v0.2

Programa, kurioje yra galimybe skaityti studentu duomenu failus

v0.1

Programa, kuri skaiciuoja studentu galutini ivertinima, ivedant studento varda/pavarde, pazymiu kieki bei pacius pazymius
