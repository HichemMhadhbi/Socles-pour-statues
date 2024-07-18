/*
Les habitants d'Algor�a aiment bien �riger des statues et les poser sur des socles majestueux. Selon les dimensions de la statue, le socle doit �tre plus ou moins haut et offrir une surface plus ou moins grande pour y poser la statue. Cependant, les constructeurs de statues ont souvent du mal � estimer la quantit� de b�ton n�cessaire � la construction de chaque socle. Vous souhaitez �crire un programme pour les aider.
Example :Le volume du premier �tage est 7 � 7 = 49, le volume du second est 6 � 6 = 36, etc. et le volume du dernier �tage est 3 � 3 = 9. Le volume total est donc : 7 � 7 + 6 � 6 + 5 � 5 + 4 � 4 + 3 � 3 = 135.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int Volume1Etage, VderniereEtage, TotalVolume, i;
    TotalVolume = 0;
    printf("Donne la nombre de la volume du premier �tage et la dernier �tage:\n");
    scanf("%d%d", &Volume1Etage, &VderniereEtage);

    for (i = Volume1Etage; i >= VderniereEtage; i--) {
        TotalVolume = TotalVolume + i * i;
    }

    printf("Le volume total du socle est : %d\n", TotalVolume);

    return 0;
}
