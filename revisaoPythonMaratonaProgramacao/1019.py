entradaEmSegundos = int(input())

horas = int(entradaEmSegundos / 3600)
entradaEmSegundos = entradaEmSegundos % 3600

minutos = int(entradaEmSegundos / 60)
entradaEmSegundos = entradaEmSegundos % 60

print("{}:{}:{}".format(horas, minutos, entradaEmSegundos))