# Complexidade

A complexidade de um algoritmo descreve como o tempo de execução (ou o uso de memória) cresce com o tamanho da entrada `n`. Usamos a notação **Big-O**, que ignora constantes e termos de menor ordem.

Como referência, um computador moderno executa cerca de **10^8 operações simples por segundo**. Isso permite estimar, pelo valor de `n`, quais complexidades são viáveis:

| n | complexidade que passa |
|---|---|
| ≤ 10 | O(n!) |
| ≤ 20 | O(2^n) |
| ≤ 500 | O(n^3) |
| ≤ 5000 | O(n^2) |
| ≤ 10^6 | O(n log n) |
| ≤ 10^7+ | O(n) |

## Dicas rápidas

- Sempre estime a complexidade antes de implementar; ela decide a abordagem.
- Constantes importam na prática: `O(n log n)` com fator alto pode ser mais lento que `O(n)`.
- Memória também conta: limites típicos são da ordem de 10^8 bytes.
