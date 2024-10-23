import serial
import simpleaudio as sa
import os
import time

# Conecta com o Bluetooth
def connect():
    ser = serial.Serial('COM8', 9600, timeout=1)  
    print("Conectado à porta serial.")
    listen(ser=ser) #Chama o loop de comunicação

# Toca o Som
def play_sound():
    print("Tentando tocar som...")
    # substitua "risada.wav" pelo áudio de sua preferência.
    file_path = os.path.join("assets", "risada.wav") #Achei mais facil fazer assim por causa da barra invertida do caminho
    wave_obj = sa.WaveObject.from_wave_file(file_path)
    wave_obj.play()
    print("Som tocado!")
    #Ajuste para o tamanho do seu áudio
    time.sleep(10)

# Inicia o loop que escuta a comunicação seria do bluetooth
def listen(ser):
    while True:
        if ser.in_waiting > 0:
            try:
                data = ser.readline().decode('utf-8').rstrip()  # Leitura dos dados recebidos
                print(f"Recebido: {data}")  # Adiciona mensagem de debug
                if data == "1":  # Verifica se o movimento foi detectado
                    print("Movimento detectado! Tocando som...")
                    ser.close() # Fecha a Conexão
                    play_sound() # Chama o método que toca o som
                    connect() # Abre a Conexão
                    time.sleep(1)  # Aguarda um segundo para evitar múltiplas detecções
            except Exception as e:
                print(f"Erro ao ler dados: {e}")



connect() # Abre a Conexão ao Iniciar o Programa 
print("Aguardando movimento...")


