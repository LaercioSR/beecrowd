horaI, minI, horaF, minF = input().split(' ')
horaI = int(horaI)
minI = int(minI)
horaF = int(horaF)
minF = int(minF)

tempoI = horaI * 60 + minI
tempoF = horaF * 60 + minF

if tempoF >= tempoI:
    tempoTotal = tempoF - tempoI
else:
    tempoTotal = 1440 - tempoI + tempoF

horaD = tempoTotal//60
minD = tempoTotal % 60

if horaD == 0 and minD == 0 or horaD > 24 or (horaD == 24 and minD > 0):
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
else:
    print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" % (horaD, minD))
