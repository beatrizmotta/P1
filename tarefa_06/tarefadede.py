# Função para criar e ler os valores da matriz, retornado-a

def ler():
    linhas = int(input("Inserir o número de linhas da matriz: "))
    colunas = int(input("Inserir o número de colunas da matriz: "))

    matriz = list()

    for l in range(0, linhas):
        matriz.append([])

    
    for i in range(0, linhas):
        for k in range(0, colunas):
            valor = int(input(f'Digite o valor da casa [{i+1}, {k+1}]: '))
            linha = matriz[i][k]
            linha.append(valor)

    return matriz

# Criar uma função que calcule a sua transposta, retornando

def transposta(matriz):
    linhas = len(matriz)
    colunas = len(matriz[0])

    nova_matriz = list()

    for i in range(0, colunas):
        nova_matriz.append([])

    for k in range(0, colunas):
        for m in range(0, linhas):
            nova_matriz[k][m] = matriz[m][k]
    
    return nova_matriz

aux = ler()
print(aux)
aux2 = transposta(aux)
print(aux2)
    


# Criar uma função que calule e retorne um vetor vontendo a soma dos elementos de cada coluna
# da matriz A

# Criar uma função que calcule e retorne a matriz triangular inferior
# obtida a partir de A, além do determinante de B

# Criar uma função que imprima os resultados dos items b, c e d 

# Criar o modulo principal do programa