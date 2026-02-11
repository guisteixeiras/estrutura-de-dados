
// Algoritmo O(log n) - Logarítmica

int buscaBinaria(int v[], int n, int x)
{
    int ini = 0, fim = n - 1;

    while (ini <= fim)
    {
        int meio = (ini + fim) / 2; // Divide a busca pela metade
        if (v[meio] == x)
            return meio;
        else if (v[meio] < x)
            ini = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

// Algoritmo O(log n) - Logarítmica

int contarDivisoes(int n)
{
    int cont = 0;
    while (n > 1)
    {
        n = n / 2; // Divide a busca pela metade
        cont++;
    }
    return cont;
}

// O(1) - Constante

void atribuirValor(int *x)
{
    *x = 10; //Só atribui valor e encerra
}

// O(n) - Linear

int maiorValor(int v[], int n)
{
    int maior = v[0];
    for (int i = 1; i < n; i++) // varre o vetor todo, um por vez
    {
        if (v[i] > maior)
            maior = v[i];
    }
    return maior;
}

//  O(n) - Linear

void imprimirVetor(int v[], int n)
{
    for (int i = 0; i < n; i++) // varre o vetor também, casa por casa
    {
        printf("%d ", v[i]);
    }
}

//O(n log n) - Linearítmica

void mergeSort(int v[], int ini, int fim)
{
    if (ini < fim)
    {
        int meio = (ini + fim) / 2; // divide ao meio
        mergeSort(v, ini, meio);
        mergeSort(v, meio + 1, fim);
        // ...
    }
}

// O(1) - Constante 

int primeiroElemento(int v[])
{
    return v[0]; // retorna o valor
}

// O(n log n) -  Ordenação

void ordenar(int v[], int n)
{
    for (int passo = n; passo > 1; passo /= 2)
    {
        for (int i = 0; i < passo; i++)
        {
            // ...
        }
    }
}

void imprimirMatriz(int m[][3], int linhas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
    }
}

// O(n^2) Quadrática

void bubbleSort(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

// O(2^n) - Exponencial 

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// O(2^n) - Exponencial - semelhante a de fibonnaci

void gerarSubconjuntos(int n)
{
    if (n == 0)
        return;
    gerarSubconjuntos(n - 1);
    gerarSubconjuntos(n - 1);
}