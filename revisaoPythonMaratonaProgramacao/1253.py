alfabeto = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y', 'Z']

chave = int(input())
mensagem = input()
mensagemDescriptografa = []

for i in range(len(mensagem)):
    for j in range(26):
        if mensagem[i] == alfabeto[j]:
            if j + chave > 26:
                aux = chave + j
                chave2 = chave - aux
                if chave2 < 0:
                    chave2  = chave2 * (-1)
                mensagemDescriptografa.append(alfabeto[chave2 - chave])     
            else :
                mensagemDescriptografa.append(alfabeto[j - chave])

print(*mensagemDescriptografa, sep='')

