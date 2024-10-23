# Halloween Party Automation 🎃👻

Este é um projeto de automação que criei para dar um toque assustador à minha festa de Halloween! 

## O que faz:
- Detecta quando os convidados entram na festa;
- Envia um comando para o computador via Bluetooth;
- Ativa dois relés que acionam dispositivos assustadores;
- Toca um áudio assustador (.wav) no computador para um jumpscare.

## Como usei:
- Customizei uma caixa de som Bluetooth, disfarçando-a de fantasma;
- Conectei uma máquina de fumaça a um dos relés;
- Conectei um estrobo ao outro relé;
- Liguei a caixa de som e um Arduino ao meu computador;
- Posicionei um sensor na entrada da festa para detectar os convidados. A cada nova chegada, a caixa de som toca uma risada assustadora, a máquina de fumaça, escondida sob o fantasma, é ativada, e o estrobo ilumina a "criatura fantasmagórica". 🎶💨💀

## Do que você vai precisar:
- 1 Placa Arduino;
- 2 Relés;
- 1 Módulo Bluetooth;
- 1 Computador;
- 1 Caixa de som conectada ao computador (via cabo ou Bluetooth).

## Como instalar:
1. Carregue o código `ProjetoPlaca/Sensor/sensor.ino` no Arduino;
2. Conecte os módulos aos pinos corretos da sua placa, conforme indicado nos comentários do código;
3. Emparelhe o módulo Bluetooth com o seu computador;
   > **Nota:** O módulo Bluetooth é apenas *slave*, então ele só ficará conectado enquanto o programa estiver rodando;
4. Edite o caminho do seu arquivo de áudio e a porta de comunicação 'COM' no arquivo `halloweenProject.py`;
5. Instale o pacote `simpleaudio` no seu terminal:  
   ```bash
   pip install simpleaudio
   ```
6. Execute o programa:  
   ```bash
   py halloweenProject.py
   ```

Agora é só se preparar para ver os convidados se assustarem com seu fantasma animado! 🎃👻
