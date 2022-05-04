import gravedad
import gravedadCy
import time
import csv 

#Variables globales
time_span = 600

#Inicializacion planeta para python
tierra = gravedad.Planet(100e3,300e3,700e3,2e3,24.87e3,0.034e3,5.9736e24)

#Inicializacion planeta para Cypython
tierraCy = gravedadCy.Planet(100e3,300e3,700e3,2e3,24.87e3,0.034e3,5.9736e24)

#******************************************************************************

#inicializacion de vector que será la cabecera de un archivo csv
cabecera = ['n_steps','tiempo_python','tiempo_cython','speedup']

#Inicializamos el archivo csv para escribir los resultados
myFile = open('resultados.csv', 'w',encoding='utf8')
writer = csv.writer(myFile)

#En el archivo csv escribimos la cabecera
writer.writerow(cabecera)

#******************************************************************************

#Bucle en diferentes n_steps para la funcion step_time
vector_time_span = [x for x in range (100000,3300000,100000)]

for n_steps in vector_time_span:
	#Tiempos de ejecucion para python
	initTime = time.time()
	gravedad.step_time(tierra, time_span, n_steps)
	endTime = time.time()
	TotalTimePy = endTime - initTime

	#Tiempos de ejecucion para Cython
	initTimeCy = time.time()
	gravedadCy.step_time(tierraCy, time_span, n_steps)
	endTimeCy = time.time()
	TotalTimeCy= endTimeCy - initTimeCy

	#speed_up es cuantas veces cyton es mas rapido que python
	speed_up = TotalTimePy/TotalTimeCy

	#Guardamos los resultados en un vector
	resultados = [n_steps,TotalTimePy,TotalTimeCy,speed_up]

	#Escribimos los resultados en el archivo csv
	writer.writerow(resultados)
	
myFile.close()
