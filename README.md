#Užduotis: Žodžių pasikartojimų skaičiavimas ir URL paieška.

##Ši programa demonstruoja, kaip asociatyvūs konteineriai (pvz., `std::map`) gali būti efektyvesni už sekos konteinerius atliekant tekstines užduotis:
- Žodžių dažnio skaičiavimas.
- Cross-reference tipo lentelės sudarymas.
- URL adresų paieška tekste.

###Funkcijos

1.**Žodžių dažnio skaičiavimas:**
   Skaičiuojama, kiek kartų kiekvienas skirtingas žodis pasikartoja tekste, ignoruojant skirybos ženklus.
   
2.**Cross-reference tipo lentelė:**
Sudaroma lentelė, kurioje nurodoma, kuriose teksto eilutėse paminėtas kiekvienas daugiau nei vieną kartą pasikartojantis žodis.

3.**URL adresų suradimas:**
Tekste surandami visi pilni ir sutrumpinti URL adresai ir išvedami į failą.


##Norint naudotis programa, reikia atlikti šiuos veiksmus:

•	Įdėti į text.txt failą norimą tekstą su nemažiau kaip 1000 žodžių bei URL adresais arba naudotis jau įkeltu text.txt failu.

•	Paleisti kodą.

#Rezultatas : Programa sugeneruoja šiuos failus:
- Pasikartojantys_zodziai.txt - Žodžiai, pasikartoję daugiau nei vieną kartą, ir jų pasirodymų skaičius.
- Cross_reference_lentele.txt - Lentelė, nurodanti, kuriose eilutėse minimi pasikartojantys žodžiai.
- Rasti_url_adresai.txt

#Naudotos bibliotekos:

- `<iostream>`
- `<fstream>`
- `<sstream>`
- `<map>`
- `<set>`
- `<regex>`
- `<vector>`
- `<algorithm>`
- `<string>`
