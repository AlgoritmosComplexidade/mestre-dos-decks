#include <stdio.h>
#include <string.h> // Necessário para a função strcmp() no Nível Mestre

// ALGORITMOS DE ORDENAÇÃO AVANÇADOS - Desafio Mestre dos Decks
// Escolha o nível que deseja focar (Novato, Aventureiro ou Mestre)
// e implemente a lógica correspondente.

// ====================================================================
// ESTRUTURA DE DADOS COMPARTILHADA
// ====================================================================

struct Carta {
    int id;
    char nome[50];
    int ataque;
    int defesa;
    int energia;
    int raridade;
};

// Função auxiliar para exibir uma lista de cartas
void imprimirCartas(struct Carta lista[], int tamanho) {
    printf("%-5s | %-25s | %-7s | %-7s | %-8s | %-8s\n", 
           "ID", "Nome", "Ataque", "Defesa", "Energia", "Raridade");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%-5d | %-25s | %-7d | %-7d | %-8d | %-8d\n",
               lista[i].id, lista[i].nome, lista[i].ataque, 
               lista[i].defesa, lista[i].energia, lista[i].raridade);
    }
    printf("\n");
}


// ====================================================================
// PROTÓTIPOS DAS FUNÇÕES DE ORDENAÇÃO (IMPLEMENTE AQUI)
// ====================================================================

// NÍVEL NOVATO: Insertion Sort (Ordenação por Energia - Crescente)
void insertionSortEnergia(struct Carta mao[], int n) {
    // Dica: Crie um laço a partir do índice 1.
    // Salve a carta atual em uma variável chave.
    // Desloque as cartas anteriores que tiverem energia MAIOR que a chave para a direita.
    // Insira a chave na posição correta.
}

// NÍVEL AVENTUREIRO: Shell Sort (Ordenação por Ataque - Decrescente)
void shellSortAtaque(struct Carta deck[], int n) {
    // Dica 1: Calcule o gap (h) inicial usando a sequência de Knuth (h = 3*h + 1).
    // Dica 2: Crie um laço diminuindo o gap (h /= 3).
    // Dica 3: Adapte a lógica do Insertion Sort para comparar elementos separados por 'h'.
    // Cuidado: A ordem é DECRESCENTE (maior ataque primeiro).
}

// NÍVEL MESTRE: Quick Sort com Múltiplos Critérios
// 1º Raridade (Decrescente) -> 2º Nome (Alfabética Crescente)

// Função de comparação customizada
int compararCartas(const struct Carta* c1, const struct Carta* c2) {
    // Dica: Compare primeiro c1->raridade e c2->raridade.
    // Se forem diferentes, retorne quem deve vir primeiro.
    // Se forem iguais (empate), use strcmp(c1->nome, c2->nome).
    return 0; // Altere este retorno!
}

// Função de particionamento (Quick Sort)
int particionar(struct Carta registro[], int baixo, int alto) {
    // Dica: Escolha um pivô. Use a função compararCartas() dentro do laço 
    // para decidir se o elemento atual deve ir para a esquerda do pivô.
    return 0; // Retorne o novo índice do pivô
}

// Função principal do Quick Sort
void quickSortRegistro(struct Carta registro[], int baixo, int alto) {
    // Dica: Verifique se baixo < alto (Caso base da recursão).
    // Chame particionar(), depois chame quickSortRegistro() recursivamente 
    // para a metade esquerda e direita.
}


// ====================================================================
// FUNÇÃO PRINCIPAL
// ====================================================================

int main() {
    printf("=== ARENA DE CODIGO - MESTRE DOS DECKS ===\n\n");

    // ---------------------------------------------------------
    // NÍVEL NOVATO
    // ---------------------------------------------------------
    /*
    struct Carta mao_inicial[7] = {
        {105, "Ogro Esmagador", 5, 4, 5, 2}, 
        {102, "Elfa Arqueira", 2, 1, 2, 1}, 
        {107, "Anjo da Furia", 6, 5, 6, 3}, 
        {101, "Goblin Batedor", 1, 1, 1, 1}, 
        {103, "Guardiao de Pedra", 2, 5, 4, 1}, 
        {106, "Cavaleiro de Aco", 3, 3, 3, 2}, 
        {104, "Dragao das Cinzas", 7, 7, 8, 3} 
    };

    printf("--- Nivel Novato: Mao Inicial (Desordenada) ---\n");
    imprimirCartas(mao_inicial, 7);

    // Chame a funcao insertionSortEnergia() aqui
    
    printf("--- Nivel Novato: Mao Organizada (Por Energia) ---\n");
    imprimirCartas(mao_inicial, 7);
    printf("Mao organizada! Pronto para a batalha!\n\n");
    */

    // ---------------------------------------------------------
    // NÍVEL AVENTUREIRO
    // ---------------------------------------------------------
    // Dica: Para este nível, crie um vetor deck_torneio[40]. 
    // Você pode usar os dados base fornecidos no nível Mestre ou criar os seus,
    // garantindo que tenha 40 elementos para provar a eficiência do Shell Sort.
    /*
    printf("--- Nivel Aventureiro: Deck do Torneio (Desordenado) ---\n");
    // imprimirCartas(...)
    
    // Chame a funcao shellSortAtaque() aqui
    
    printf("--- Nivel Aventureiro: Deck Otimizado (Por Ataque Decrescente) ---\n");
    // imprimirCartas(...)
    printf("Deck otimizado e pronto para o torneio!\n\n");
    */

    // ---------------------------------------------------------
    // NÍVEL MESTRE
    // ---------------------------------------------------------
    /*
    struct Carta grande_registro[20] = {
        {225, "Elemental de Fogo", 6, 2, 5, 2},
        {105, "Ogro Esmagador", 5, 4, 5, 2},
        {102, "Elfa Arqueira", 2, 1, 2, 1},
        {315, "Paladino da Ordem", 5, 7, 7, 3},
        {201, "Lobo das Sombras", 3, 2, 2, 1},
        {401, "Lich King", 10, 10, 10, 4},
        {107, "Anjo da Furia", 6, 5, 6, 3},
        {301, "Mago de Gelo", 2, 4, 3, 2},
        {101, "Goblin Batedor", 1, 1, 1, 1},
        {205, "Ciclope Brutal", 7, 5, 6, 2},
        {103, "Guardiao de Pedra", 2, 5, 4, 1},
        {305, "Hidra de Nove Cabecas", 8, 8, 9, 4},
        {106, "Cavaleiro de Aco", 3, 3, 3, 2},
        {210, "Grifo Veloz", 4, 3, 4, 1},
        {104, "Dragao das Cinzas", 7, 7, 8, 3},
        {215, "Minotauro Guerreiro", 5, 6, 5, 2},
        {310, "Feiticeira Arcana", 4, 2, 5, 3},
        {220, "Basilisco Petrificante", 3, 5, 4, 2},
        {110, "Clerigo Iluminado", 1, 3, 2, 1},
        {405, "Fenix Imortal", 9, 9, 9, 4}
    };

    printf("--- Nivel Mestre: Grande Registro (Caos Primordial) ---\n");
    imprimirCartas(grande_registro, 20);

    // Chame a funcao quickSortRegistro(grande_registro, 0, 19) aqui

    printf("--- Nivel Mestre: Grande Registro Restaurado (Raridade -> Nome) ---\n");
    imprimirCartas(grande_registro, 20);
    printf("O grande registro da arena foi restaurado!\n\n");
    */

    return 0;
}
