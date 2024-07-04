MacGyver má cvičenú opicu. Chcel ju naučiť vyhľadávať v texte, opica však nezvláda porovnávať slová. Nanajvýš tak vie porovnať písmenko s iným písmenkom. MacGyver preto zašiel do obchodu, kúpil päť žiaroviek a pomocou nich, opice a kancelárskej spinky už hravo potrebnú mašinu vyrobil. V tejto úlohe to budeš robiť aj ty.
Úloha, ktorú budeš riešiť: MacGyver má knihu. Tiež má reťazec písmen, o ktorom ho zaujíma, či sa niekde v knihe vyskytuje. Ak sa reťazec niekde v knihe vyskytuje, opica musí časom rozsvietiť naraz všetky žiarovky. Naopak, ak sa tam reťazec nevyskytuje, nesmú nikdy svietiť všetky žiarovky naraz.
Žiarovky sú očíslované od 1 do 5, na začiatku sú všetky vypnuté. Opica dokáže poslúchať príkazy tvaru “ak je práve žiarovka 3 vypnutá a žiarovka 5 zapnutá a nasledujúce písmeno knihy je x, prepni žiarovky 2 a 5”. (Prepnutie žiarovky zmení jej stav na opačný: ak svietila, prestane, ak nesvietila, začne.)

Úloha

Daný je reťazec, ktorý MacGyvera zaujíma. Vyrobte korektnú sadu inštrukcií pre jeho opicu.

Vstup

Prvý riadok vstupu obsahuje číslo n od 1 do 26, hovoriace, že v danom testovacom vstupe používame ako symboly prvých n znakov malej anglickej abecedy.
Druhý riadok vstupu obsahuje reťazec, tvorený 1 až 20 takýmito písmenami. Tento reťazec chceme vyhľa- dávať.

Výstup

Vypíšte sadu inštrukcií pre opicu. Každá inštrukcia bude jeden riadok tvaru “f1...fK xg1...gL”, pričom x je písmeno a ostatné objekty sú čísla žiaroviek. Čísla uvedené pred písmenom sú čísla žiaroviek, ktoré opica skontroluje. (Záporné číslo žiarovky znamená, že má byť vypnutá, kladné, že má byť zapnutá.) Čísla uvedené po písmene sú čísla žiaroviek, ktoré opica prepne, ak všetko pasovalo. Napríklad inštrukciu zo zadania by sme zapísali “−3 5 x 2 5”.
Opica bude vaše inštrukcie vykonávať, až kým sa jej neminú písmená knihy alebo sa nedostane do situácie, v ktorej sa žiadna inštrukcia nedá použiť. Pre každé písmeno knihy použije opica len jednu inštrukciu. Ak ich má na výber viac, použije tú, ktorá je vo vašom zozname uvedená skôr.
Váš program musí byť korektný: musí fungovať pre každú možnú knihu. Váš program tiež nesmie obsahovať viac ako 1 000 inštrukcií.
