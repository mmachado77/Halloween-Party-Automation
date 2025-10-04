# Halloween Party Automation 🎃👻  

Bring your Halloween party to life — or to *undeath*!  
This project adds a spooky interactive touch to any Halloween setup through motion detection, Bluetooth communication, and synchronized sound and light effects.

---

## 🧠 What It Does  
- Detects when guests enter the party area.  
- Sends a Bluetooth signal to a computer.  
- Activates two relays connected to scary devices.  
- Plays a spooky `.wav` sound on the computer for an instant jumpscare.  

---

## ⚙️ How I Used It  
- I disguised a Bluetooth speaker as a ghost.  
- One relay controls a **fog machine**.  
- The other relay controls a **strobe light**.  
- The speaker and Arduino are connected to the computer.  
- A PIR motion sensor at the entrance triggers everything:  

When someone walks in, the ghost laughs maniacally, the fog machine bursts into action, and the strobe flashes, revealing the “haunting creature.” 🎶💨💀  

---

## 🔧 Hardware Required  
- 1 × Arduino board  
- 2 × Relay modules  
- 1 × Bluetooth module (e.g., HC-06)  
- 1 × Computer  
- 1 × Speaker connected to the computer (via cable or Bluetooth)  

---

## 💻 Installation  

1. Upload the Arduino sketch from:  
   ```bash
   ProjetoPlaca/Sensor/sensor.ino
   ```  

2. Connect the modules to the appropriate Arduino pins (see comments in the code).  

3. Pair the Bluetooth module with your computer.  
   > **Note:** The Bluetooth module operates as a *slave device*, so it remains connected only while the program is running.  

4. Edit `halloweenProject.py` to update:  
   - The **audio file path** (your spooky sound).  
   - The **COM port** for your Bluetooth module.  

5. Install the required dependency:  
   ```bash
   pip install simpleaudio
   ```  

6. Run the project:  
   ```bash
   python halloweenProject.py
   ```  

---

## 👀 Demo Idea  
Place the “ghost speaker” near the entrance.  
When motion is detected — the ghost laughs, smoke rises, and lights flicker.  
Perfect for Halloween parties or haunted house setups!  

---

## 🧩 Technologies Used  
- **Arduino (C++)** — for hardware control.  
- **Python 3** — for PC-side automation and sound playback.  
- **Bluetooth (HC-06)** — for wireless communication between Arduino and PC.  

---

## 🕸️ Author  
**Matheus Machado** — [GitHub @mmachado77](https://github.com/mmachado77)  
Halloween enthusiast and automation tinkerer 👨‍💻🎃  

---

> *“It’s alive... ALIVE!” — Dr. Frankenstein (and probably me testing the relays at 2 AM.)*
> 
