#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int N_aleatorios();
int main()
{
    ifstream capa, tema;
    string linha, palavra;
    int opTema;
    int random;
    do {
            int chances = 7;
            capa.open("Inicio.txt");
            if(capa.is_open()) {
                while(getline(capa,linha)) {
                    cout << linha << endl;
                }
            }
            capa.close();
            do {
                    cout << "\n\n";
                    cout << "Escolha o tema:\n\n";
                    cout << "1 - Animal\n2 - Objeto\n3 - Esporte\n4 - Profissao\n5 - Personagens\n6 - Encerrar Programa\n\n";
                    cout << "Opcao: ";
                    cin >> opTema;
            }while(opTema < 1 or opTema > 6);
            random = N_aleatorios();
            switch(opTema) {
            case 1:
                {
                    tema.open("Tema_animal.txt");
                    for(int i = 0; i < random; i++) {
                        getline(tema, palavra);
                    }
                    char *vetP, letra;
                    int tam = palavra.size();
                    vetP = new char [tam];
                    cout << "\n\nPalavra com " << tam << " letras\n";
                    for(int i = 0; i < tam; i++) {
                        vetP[i] = '_';
                        cout << vetP[i] << ' ';
                    }
                    int pbs = 0;//variavel para definir se acertou todas as letras
                    while(pbs != tam and chances != 0) {
                        int igual = 0, j;
                        cout << "\n\nChances: " << chances << endl;
                        cout << "Digite uma letra: ";
                        cin >> letra;
                        for(j = 0; j < tam; j++) {
                            if(letra == palavra[j]) {
                                vetP[j] = letra;
                                igual++;
                                pbs++;
                            }
                        }
                        if(igual == 0) {
                            chances--;
                            cout << "Tente de novo.\n";
                            for(int k = 0; k < tam; k++) {
                                cout << vetP[k] << ' ';
                            }
                        }
                        else {
                                    for(int k = 0; k < tam; k++) {
                                        cout << vetP[k] << ' ';
                                    }
                        }
                    }
                    if(pbs == tam) {
                        cout << "\n\nParabens!\n";
                        Sleep(1500);
                        system("cls");
                    }
                    else {
                        cout << "\n\nNao foi dessa vez!\n";
                        cout << "A palavra era: " << palavra << endl;
                        Sleep(1500);
                        system("cls");
                    }
                    tema.close();
                    break;
                }
            case 2:
                {
                    tema.open("Tema_objeto.txt");
                    for(int i = 0; i < random; i++) {
                        getline(tema, palavra);
                    }
                    char *vetP, letra;
                    int tam = palavra.size();
                    vetP = new char [tam];
                    cout << "\n\nPalavra com " << tam << " letras\n";
                    for(int i = 0; i < tam; i++) {
                        vetP[i] = '_';
                        cout << vetP[i] << ' ';
                    }
                    int pbs = 0;//variavel para definir se acertou todas as letras
                    while(pbs != tam and chances != 0) {
                        int igual = 0, j;
                        cout << "\n\nChances: " << chances << endl;
                        cout << "Digite uma letra: ";
                        cin >> letra;
                        for(j = 0; j < tam; j++) {
                            if(letra == palavra[j]) {
                                vetP[j] = letra;
                                igual++;
                                pbs++;
                            }
                        }
                        if(igual == 0) {
                            chances--;
                            cout << "Tente de novo.\n";
                            for(int k = 0; k < tam; k++) {
                                cout << vetP[k] << ' ';
                            }
                        }
                        else {
                                    for(int k = 0; k < tam; k++) {
                                        cout << vetP[k] << ' ';
                                    }
                        }
                    }
                    if(pbs == tam) {
                        cout << "\n\nParabens!\n";
                        Sleep(1500);
                        system("cls");
                    }
                    else {
                        cout << "\n\nNao foi dessa vez!\n";
                        cout << "A palavra era: " << palavra << endl;
                        Sleep(1500);
                        system("cls");
                    }
                    tema.close();
                    break;
                }
            case 3:
                {
                    tema.open("Tema_esporte.txt");
                    for(int i = 0; i < random; i++) {
                        getline(tema, palavra);
                    }
                    char *vetP, letra;
                    int tam = palavra.size();
                    vetP = new char [tam];
                    cout << "\n\nPalavra com " << tam << " letras\n";
                    for(int i = 0; i < tam; i++) {
                        vetP[i] = '_';
                        cout << vetP[i] << ' ';
                    }
                    int pbs = 0;//variavel para definir se acertou todas as letras
                    while(pbs != tam and chances != 0) {
                        int igual = 0, j;
                        cout << "\n\nChances: " << chances << endl;
                        cout << "Digite uma letra: ";
                        cin >> letra;
                        for(j = 0; j < tam; j++) {
                            if(letra == palavra[j]) {
                                vetP[j] = letra;
                                igual++;
                                pbs++;
                            }
                        }
                        if(igual == 0) {
                            chances--;
                            cout << "Tente de novo.\n";
                            for(int k = 0; k < tam; k++) {
                                cout << vetP[k] << ' ';
                            }
                        }
                        else {
                                    for(int k = 0; k < tam; k++) {
                                        cout << vetP[k] << ' ';
                                    }
                        }
                    }
                    if(pbs == tam) {
                        cout << "\n\nParabens!\n";
                        Sleep(1500);
                        system("cls");
                    }
                    else {
                        cout << "\n\nNao foi dessa vez!\n";
                        cout << "A palavra era: " << palavra << endl;
                        Sleep(1500);
                        system("cls");
                    }
                    tema.close();
                    break;
                }
            case 4:
                {
                    tema.open("Tema_profissao.txt");
                    for(int i = 0; i < random; i++) {
                        getline(tema, palavra);
                    }
                    char *vetP, letra;
                    int tam = palavra.size();
                    vetP = new char [tam];
                    cout << "\n\nPalavra com " << tam << " letras\n";
                    for(int i = 0; i < tam; i++) {
                        vetP[i] = '_';
                        cout << vetP[i] << ' ';
                    }
                    int pbs = 0;//variavel para definir se acertou todas as letras
                    while(pbs != tam and chances != 0) {
                        int igual = 0, j;
                        cout << "\n\nChances: " << chances << endl;
                        cout << "Digite uma letra: ";
                        cin >> letra;
                        for(j = 0; j < tam; j++) {
                            if(letra == palavra[j]) {
                                vetP[j] = letra;
                                igual++;
                                pbs++;
                            }
                        }
                        if(igual == 0) {
                            chances--;
                            cout << "Tente de novo.\n";
                            for(int k = 0; k < tam; k++) {
                                cout << vetP[k] << ' ';
                            }
                        }
                        else {
                                    for(int k = 0; k < tam; k++) {
                                        cout << vetP[k] << ' ';
                                    }
                        }
                    }
                    if(pbs == tam) {
                        cout << "\n\nParabens!\n";
                        Sleep(1500);
                        system("cls");
                    }
                    else {
                        cout << "\n\nNao foi dessa vez!\n";
                        cout << "A palavra era: " << palavra << endl;
                        Sleep(1500);
                        system("cls");
                    }
                    tema.close();
                    break;
                }
            case 5:
                {
                    tema.open("Tema_personagens.txt");
                    for(int i = 0; i < random; i++) {
                        getline(tema, palavra);
                    }
                    char *vetP, letra;
                    int tam = palavra.size();
                    vetP = new char [tam];
                    cout << "\n\nPalavra com " << tam << " letras\n";
                    for(int i = 0; i < tam; i++) {
                        vetP[i] = '_';
                        cout << vetP[i] << ' ';
                    }
                    int pbs = 0;//variavel para definir se acertou todas as letras
                    while(pbs != tam and chances != 0) {
                        int igual = 0, j;
                        cout << "\n\nChances: " << chances << endl;
                        cout << "Digite uma letra: ";
                        cin >> letra;
                        for(j = 0; j < tam; j++) {
                            if(letra == palavra[j]) {
                                vetP[j] = letra;
                                igual++;
                                pbs++;
                            }
                        }
                        if(igual == 0) {
                            chances--;
                            cout << "Tente de novo.\n";
                            for(int k = 0; k < tam; k++) {
                                cout << vetP[k] << ' ';
                            }
                        }
                        else {
                                    for(int k = 0; k < tam; k++) {
                                        cout << vetP[k] << ' ';
                                    }
                        }
                    }
                    if(pbs == tam) {
                        cout << "\n\nParabens!\n";
                        Sleep(1500);
                        system("cls");
                    }
                    else {
                        cout << "\n\nNao foi dessa vez!\n";
                        cout << "A palavra era: " << palavra << endl;
                        Sleep(1500);
                        system("cls");
                    }
                    tema.close();
                    break;
                }
            case 6:
                {
                    exit(0);
                }
            }
    }while(opTema != 6);
    return 0;
}
int N_aleatorios() {
    unsigned seed = time(0);
    srand(seed);
    return 1+rand()%50;
}
