import random

def elegir_palabra():
    palabras = ["python", "programacion", "ahorcado", "juego", "computadora"]
    return random.choice(palabras)

def jugar():
    palabra = elegir_palabra()
    letras_adivinadas = []
    intentos_restantes = 6

    print("Bienvenido al juego del ahorcado!")
    
    while intentos_restantes > 0 and set(palabra) != set(letras_adivinadas):
        print("\nPalabra: ", ' '.join([letra if letra in letras_adivinadas else '_' for letra in palabra]))
        print(f"Letras adivinadas: {', '.join(letras_adivinadas)}")
        print(f"Intentos restantes: {intentos_restantes}")

        letra = input("Adivina una letra: ").lower()
        if letra in letras_adivinadas:
            print("Ya adivinaste esa letra.")
        elif letra in palabra:
            letras_adivinadas.append(letra)
            print("¡Correcto!")
        else:
            letras_adivinadas.append(letra)
            intentos_restantes -= 1
            print("Incorrecto.")

    if set(palabra) == set(letras_adivinadas):
        print(f"¡Felicidades! Has adivinado la palabra: {palabra}")
    else:
        print(f"¡Has perdido! La palabra era: {palabra}")

if __name__ == "__main__":
    jugar()
