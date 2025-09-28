algoritmo "Variacao_de_Precos_Otimizado"
var
    nome: vetor [1..3] de caractere
    preco_anterior: vetor [1..3] de real
    preco_atual: vetor [1..3] de real
    variacao: vetor [1..3] de real
    situacao: vetor [1..3] de caractere
    i: inteiro

inicio
    para i de 1 ate 3 faca
        escreval("--- Produto ", i, " ---")
        escreva("Digite o nome do produto: ")
        leia(nome[i])
        escreva("Preco do mes anterior: ")
        leia(preco_anterior[i])
        escreva("Preco do mes atual: ")
        leia(preco_atual[i])
    fimpara

    para i de 1 ate 3 faca
        variacao[i] := ((preco_atual[i] - preco_anterior[i]) / preco_anterior[i]) * 100
        se variacao[i] > 0 entao
            situacao[i] <- "Aumento"
         se variacao[i] > 10 entao
            situacao[i] <- "Aumento Abusivo"
            fimse
        senao
           se variacao[i] < 0 entao
            situacao[i] <- "Queda"
        senao
            situacao[i] <- "Estavel"
        fimse
        fimse
    fimpara

    escreval()
    escreval("=== Resumo de Variacao de Precos ===")
    para i de 1 ate 3 faca
        escreval("------------------------------------")
        escreval("Produto: ", nome[i])
        escreval("Pre o anterior R$: ",preco_anterior[i]:2:2)
        escreval("Pre o atual R$: ",preco_atual[i]:2:2)
        escreval("Varia  o: ",variacao[i]:2:2, "%")
        escreval("Situa  o: ", situacao[i])
        escreval()
    fimpara
fimalgoritmo
