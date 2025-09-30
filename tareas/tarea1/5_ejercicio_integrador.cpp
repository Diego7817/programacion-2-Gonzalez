/*
 * EJERCICIO CLASE 1 - PUNTEROS Y MEMORIA DINÁMICA
 * ================================================
 *
 * ENUNCIADO SIMPLIFICADO:
 * Implementar un programa que permita:
 * 1. Crear un arreglo dinámico de números enteros
 * 2. Llenar el arreglo con valores ingresados por el usuario
 * 3. Mostrar todos los números del arreglo
 * 4. Encontrar el número mayor en el arreglo
 * 5. Calcular el promedio de todos los números
 * 6. Liberar la memoria correctamente
 *
 * REQUISITOS OBLIGATORIOS:
 * - Usar punteros y memoria dinámica (new/delete)
 * - Usar paso por referencia donde sea apropiado
 * - Validar entrada del usuario (tamaño del arreglo)
 * - Liberar toda la memoria asignada
 * - Asignar nullptr después de delete
 *
 * FUNCIONES QUE DEBE IMPLEMENTAR:
 * 1. int* crearArreglo(int tamanio)
 * 2. void llenarArreglo(int* arreglo, int tamanio)
 * 3. void mostrarArreglo(int* arreglo, int tamanio)
 * 4. int encontrarMayor(int* arreglo, int tamanio)
 * 5. float calcularPromedio(int* arreglo, int tamanio)
 * 6. void liberarArreglo(int*& arreglo)
 *
 * MENÚ SIMPLE:
 * 1. Crear y llenar arreglo
 * 2. Mostrar arreglo
 * 3. Encontrar número mayor
 * 4. Calcular promedio
 * 5. Salir
 *
 * NOTAS IMPORTANTES:
 * - Validar que el tamaño del arreglo sea positivo
 * - Verificar que new no retorne nullptr
 * - Usar buenas prácticas de programación
 * - Comentar el código apropiadamente
 *
 * CRITERIOS DE EVALUACIÓN:
 * - Correcta implementación de punteros (50%)
 * - Manejo correcto de memoria (30%)
 * - Funcionalidad del programa (20%)
 *
 * TIEMPO ESTIMADO: 1-2 horas
 * DIFICULTAD: Básica-Medio
 */

#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;

// Función para crear un arreglo dinámico
int* crearArreglo(int tamanio) {
    // Validar que tamanio sea positivo
    if (tamanio <= 0) {
        cout << "Error: El tamaño debe ser un número positivo." << endl;
        return nullptr;
    }

    // Crear arreglo dinámico con new
    int* nuevoArreglo = new int[tamanio];

    // Verificar que new no retorne nullptr
    if (nuevoArreglo == nullptr) {
        cout << "Error: No se pudo asignar memoria." << endl;
        return nullptr;
    }

    return nuevoArreglo;
}

// Función para llenar el arreglo con valores del usuario
void llenarArreglo(int* arreglo, int tamanio) {
    // Verificar que arreglo no sea nullptr
    if (arreglo == nullptr) {
        cout << "Error: El arreglo no ha sido creado." << endl;
        return;
    }

    // Pedir valores al usuario
    cout << "Ingrese " << tamanio << " valores para el arreglo:" << endl;
    for (int i = 0; i < tamanio; i++) {
        cout << "Valor [" << i << "]: ";
        cin >> arreglo[i];
    }
}

// Función para mostrar todos los elementos del arreglo
void mostrarArreglo(int* arreglo, int tamanio) {
    // Verificar que arreglo no sea nullptr
    if (arreglo == nullptr) {
        cout << "Error: El arreglo no ha sido creado." << endl;
        return;
    }

    // Manejar caso de arreglo vacío
    if (tamanio == 0) {
        cout << "El arreglo está vacío." << endl;
        return;
    }

    // Mostrar todos los elementos del arreglo
    cout << "Elementos del arreglo: ";
    for (int i = 0; i < tamanio; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

// Función para encontrar el número mayor
int encontrarMayor(int* arreglo, int tamanio) {
    // Verificar que arreglo no sea nullptr y tamanio > 0
    if (arreglo == nullptr || tamanio <= 0) {
        cout << "Error: Arreglo no válido para buscar el mayor." << endl;
        return 0;
    }

    // Buscar el número mayor en el arreglo
    int mayor = arreglo[0];
    for (int i = 1; i < tamanio; i++) {
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
    }

    return mayor;
}

// Función para calcular el promedio
float calcularPromedio(int* arreglo, int tamanio) {
    // Verificar que arreglo no sea nullptr y tamanio > 0
    if (arreglo == nullptr || tamanio <= 0) {
        cout << "Error: Arreglo no válido para calcular promedio." << endl;
        return 0.0f;
    }

    // Sumar todos los elementos
    int suma = 0;
    for (int i = 0; i < tamanio; i++) {
        suma += arreglo[i];
    }

    // Dividir por el tamaño y retornar el promedio
    return static_cast<float>(suma) / tamanio;
}

// Función para liberar la memoria del arreglo
void liberarArreglo(int*& arreglo) {
    // Verificar que arreglo no sea nullptr
    if (arreglo != nullptr) {
        // Liberar memoria con delete[]
        delete[] arreglo;
        // Asignar nullptr al puntero
        arreglo = nullptr;
        cout << "Memoria liberada correctamente." << endl;
    }
}

// Función para llenar el arreglo con valores del usuario
void llenarArreglo(int* arreglo, int tamanio) {
    // TODO: Implementar esta función
    // - Verificar que arreglo no sea nullptr
    // - Pedir valores al usuario
    // - Llenar el arreglo con los valores ingresados
}

// Función para mostrar todos los elementos del arreglo
void mostrarArreglo(int* arreglo, int tamanio) {
    // TODO: Implementar esta función
    // - Verificar que arreglo no sea nullptr
    // - Mostrar todos los elementos del arreglo
    // - Manejar caso de arreglo vacío
}

// Función para encontrar el número mayor
int encontrarMayor(int* arreglo, int tamanio) {
    // TODO: Implementar esta función
    // - Verificar que arreglo no sea nullptr y tamanio > 0
    // - Buscar el número mayor en el arreglo
    // - Retornar el número mayor
    return 0; // Placeholder
}

// Función para calcular el promedio
float calcularPromedio(int* arreglo, int tamanio) {
    // TODO: Implementar esta función
    // - Verificar que arreglo no sea nullptr y tamanio > 0
    // - Sumar todos los elementos
    // - Dividir por el tamaño
    // - Retornar el promedio
    return 0.0f; // Placeholder
}

// Función para liberar la memoria del arreglo
void liberarArreglo(int*& arreglo) {
    // TODO: Implementar esta función
    // - Verificar que arreglo no sea nullptr
    // - Liberar memoria con delete[]
    // - Asignar nullptr al puntero
}

// Función para mostrar el menú
void mostrarMenu() {
    cout << "\n=== GESTIÓN DE ARREGLOS DINÁMICOS ===" << endl;
    cout << "1. Crear y llenar arreglo" << endl;
    cout << "2. Mostrar arreglo" << endl;
    cout << "3. Encontrar número mayor" << endl;
    cout << "4. Calcular promedio" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccione una opción: ";
}

int main() {
    setlocale(LC_ALL, "spanish");

    // Variables principales
    int* arreglo = nullptr;
    int tamanio = 0;

    cout << "=== GESTIÓN DE ARREGLOS DINÁMICOS ===" << endl;
    cout << "Implemente las funciones marcadas con TODO para completar el ejercicio." << endl;

    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Crear y llenar arreglo
                cout << "Ingrese el tamaño del arreglo: ";
                cin >> tamanio;

                arreglo = crearArreglo(tamanio);
                if (arreglo != nullptr) {
                    llenarArreglo(arreglo, tamanio);
                    cout << "Arreglo creado y llenado correctamente." << endl;
                } else {
                    cout << "Error al crear el arreglo." << endl;
                }
                break;
            }

            case 2: {
                // Mostrar arreglo
                if (arreglo != nullptr) {
                    mostrarArreglo(arreglo, tamanio);
                } else {
                    cout << "No hay arreglo creado. Use la opción 1 primero." << endl;
                }
                break;
            }

            case 3: {
                // Encontrar número mayor
                if (arreglo != nullptr && tamanio > 0) {
                    int mayor = encontrarMayor(arreglo, tamanio);
                    cout << "El número mayor es: " << mayor << endl;
                } else {
                    cout << "No hay arreglo creado o está vacío." << endl;
                }
                break;
            }

            case 4: {
                // Calcular promedio
                if (arreglo != nullptr && tamanio > 0) {
                    float promedio = calcularPromedio(arreglo, tamanio);
                    cout << "El promedio es: " << fixed << setprecision(2) << promedio << endl;
                } else {
                    cout << "No hay arreglo creado o está vacío." << endl;
                }
                break;
            }

            case 5: {
                cout << "Saliendo del programa..." << endl;
                break;
            }

            default: {
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
            }
        }
    } while (opcion != 5);

    // Liberar memoria antes de salir
    liberarArreglo(arreglo);

    cout << "Programa finalizado. Memoria liberada." << endl;
    return 0;
}

/*
 * PISTAS PARA LA IMPLEMENTACIÓN:
 *
 * 1. crearArreglo(int tamanio):
 *    - Verificar que tamanio > 0
 *    - Crear arreglo con: int* nuevoArreglo = new int[tamanio];
 *    - Verificar que new no retorne nullptr
 *    - Retornar puntero al arreglo
 *
 * 2. llenarArreglo(int* arreglo, int tamanio):
 *    - Verificar que arreglo != nullptr
 *    - Usar un ciclo for para pedir valores
 *    - Usar cin para leer cada valor
 *    - Asignar a arreglo[i]
 *
 * 3. mostrarArreglo(int* arreglo, int tamanio):
 *    - Verificar que arreglo != nullptr
 *    - Usar un ciclo for para mostrar valores
 *    - Mostrar cada elemento con cout
 *
 * 4. encontrarMayor(int* arreglo, int tamanio):
 *    - Verificar que arreglo != nullptr y tamanio > 0
 *    - Inicializar variable mayor con arreglo[0]
 *    - Usar ciclo for para comparar con el resto
 *    - Actualizar mayor si encuentra uno más grande
 *    - Retornar mayor
 *
 * 5. calcularPromedio(int* arreglo, int tamanio):
 *    - Verificar que arreglo != nullptr y tamanio > 0
 *    - Inicializar variable suma = 0
 *    - Usar ciclo for para sumar todos los elementos
 *    - Dividir suma entre tamanio
 *    - Retornar promedio como float
 *
 * 6. liberarArreglo(int*& arreglo):
 *    - Verificar que arreglo != nullptr
 *    - Usar: delete[] arreglo;
 *    - Asignar: arreglo = nullptr;
 *
 * CONCEPTOS CLAVE:
 * - new int[tamanio] crea un arreglo dinámico
 * - delete[] libera memoria de arreglos
 * - nullptr indica que un puntero no apunta a nada
 * - Paso por referencia (&) permite modificar el puntero
 * - Siempre verificar punteros antes de usar
 */
