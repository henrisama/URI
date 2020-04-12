#include <iostream>
#define MAX 100100

using namespace std;

typedef struct player{
    int totalPoints;
    int wins;
    struct player* father;
}player;

player players[MAX];

player* find(player* x){
    while(x != x->father) x = x->father->father;
    return x;
}

void join(int a, int b){
    player* auxA = find(&(players[a]));
    player* auxB = find(&(players[b]));

    auxA->totalPoints += auxB->totalPoints;
    auxB->father = auxA;
}

void battle(int a, int b){
    player* auxA = find(&(players[a]));
    player* auxB = find(&(players[b]));

    if(auxA->totalPoints > auxB->totalPoints) auxA->wins += 1;
    if(auxA->totalPoints < auxB->totalPoints) auxB->wins += 1;
}

int main(void){
    int n, m, q, a, b;
    player* aux;
    while(1){
        cin >> n >> m;
        if(n == 0 && m == 0) break;

        for (int i = 0; i < n; i++){
            cin >> players[i].totalPoints;
            players[i].wins = 0;
            players[i].father = &(players[i]);
        }

        for (int j = 0; j < m; j++){
            cin >> q >> a >> b;
            (q == 1)? join(a - 1, b - 1) : battle(a - 1, b - 1);
        }

        aux = find(&(players[0]));
        cout << aux->wins << endl;
    }
}