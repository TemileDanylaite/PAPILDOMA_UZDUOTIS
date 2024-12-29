#Ši programa skirta patyrinėti, kaip asociatyvūs konteineriai yra efektyvesni už sekos konteinerius, atliekant tam tikras tekstines operacijas.

Kodo dalys:

1.	Žodžių dažnio skaičiavimas:Skaičiuojama, kiek kartų kiekvienas skirtingas žodis pasikartoja tekste.
2.	Cross-reference tipo lenteles kūrimas:Sudaroma lentelė, kurioje nurodoma, kuriose teksto eilutėse paminėtas kiekvienas daugiau nei vieną kartą pasikartojantis žodis.
3.	URL adresų suradimas:Tekste surandami visi URL adresai ir išvedami į failą.

#Norint naudotis programa, reikia atlikti šiuos veiksmus:

•	Įdėti į text.txt failą norimą tekstą su nemažiau kaip 1000 žodžių bei URL adresais.

•	Paleisti kodą.

Pagrindinės funkcijos:

•	countWords(const std::string& text):Skaičiuoja žodžių dažnį tekste ir gražina žodžius, pasikartojančius daugiau nei vieną kartą, kartu su jų skaičiumi.

•	generateCrossReference(const std::string& text):  Sudaro cross-reference tipo lentelę, nurodant, kuriose eilutėse paminėti pasikartojantys žodžiai.

•	findURLs(const std::string& text): Naudoja reguliarias išraiškas URL adresams rasti tekste.

Naudojami tinkami asociatyvūs konteineriai: std::map ir std::set, kurie užtikrina gerą veikimą.

#Rezultatas : txt failuose bus išvedami pasikartojantys žodžiai, cross—reference lentelė bei URL adresai rasti tekste.


#Naudotos bibliotekos:
•	`<iostream>`
•	`<fstream>`
•	`<sstream>`
•	`<map>`
•	`<set>`
•	`<regex>`
•	`<vector>`
•	`<algorithm>`
•	`<string>`
