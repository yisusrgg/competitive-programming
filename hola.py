pip install numpy
import numpy as np

# Define el sistema de ecuaciones en forma matricial (Ax = b)
A = np.array([[2, 1, -1],
              [1, 3, 2],
              [3, 2, -3]])
b = np.array([8, 5, 0])

# Combinar A y b para formar la matriz aumentada Ab
Ab = np.column_stack((A, b))

# Verificar el rango de A y el rango de Ab
rank_A = np.linalg.matrix_rank(A)
rank_Ab = np.linalg.matrix_rank(Ab)

# Calcular el número de incógnitas (columnas) y ecuaciones (filas)
num_incognitas = A.shape[1]
num_ecuaciones = A.shape[0]

# Determinar el tipo de solución
if rank_A < rank_Ab:
    print("El sistema de ecuaciones es incompatible y no tiene solución.")
elif rank_A < num_incognitas:
    print("El sistema de ecuaciones tiene infinitas soluciones (soluciones paramétricas).")
else:
    # Resuelve el sistema de ecuaciones si tiene una única solución
    x = np.linalg.solve(A, b)
    print("El sistema de ecuaciones tiene una única solución:")
    print(x)
