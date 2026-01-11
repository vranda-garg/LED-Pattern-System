🔵LED Pattern System

## 📌 Overview
This project implements a *Bluetooth-based LED pattern control system* using *Arduino Uno* and the *HC-05 Bluetooth module*.  
The system allows wireless control of multiple LED patterns through a mobile device, demonstrating basic embedded systems and Bluetooth communication.

---

## 🧠 Project Description
The project uses a smartphone as a wireless input device.  
Bluetooth communication is established between the mobile phone and the Arduino via the *HC-05 module*. Based on the received data, the Arduino switches between different LED patterns using five LEDs of different colors.

This project focuses on *simplicity, **real-time response, and **ease of implementation*.

---

## 🔧 Components Used
- Arduino Uno  
- HC-05 Bluetooth Module  
- 5 LEDs (Different colors)  
- Breadboard  
- Jumper wires  
- Android smartphone  

---

## ⚙️ Working Principle
- The HC-05 module establishes a Bluetooth connection with a mobile device.
- Data is transmitted wirelessly using serial communication.
- Arduino continuously monitors incoming data.
- Based on the received input, different LED patterns are executed.
- The system runs in real time, allowing instant pattern changes.

---

## 💻 Software & Tools
- Arduino IDE  
- Serial Bluetooth Terminal Application  
- USB cable for Arduino programming  

---

## 🛠 Algorithm
1. Initialize the system  
2. Start serial communication  
3. Configure LED pins as OUTPUT  
4. Continuously listen for Bluetooth data  
5. Process received input  
6. Update LED patterns accordingly  
7. Repeat the process  

---

## ▶️ How to Run the Project

Follow the steps below to set up and run the project successfully:

### 1️⃣ Hardware Setup

* Assemble the circuit using *Arduino Uno, HC-05 Bluetooth module, LEDs, jumper wires and breadboard*.
* Ensure all components are connected properly.
* Power the Arduino using a USB cable.

---

### 2️⃣ Upload the Code

1. Open *Arduino IDE*.
2. Connect the Arduino Uno to your computer.
3. Select the correct *Board* and *COM Port* from the Tools menu.
4. Open the .ino file from the code/ folder.
5. Click *Upload* to upload the code to Arduino.

---

### 3️⃣ Bluetooth Pairing

1. Power ON the Arduino.
2. Enable Bluetooth on your smartphone.
3. Search for available devices and pair with *HC-05*.
4. Enter the default pairing password (1234 or 0000).

---

### 4️⃣ Run the Project

1. Open a *Serial Bluetooth Terminal App* on your phone.
2. Connect to the *HC-05* module.
3. Send input values from the app.
4. Observe the LED patterns changing in real time.

---

### 5️⃣ Troubleshooting (Optional but Professional)

* Ensure correct COM port selection in Arduino IDE.
* Check Bluetooth pairing status.
* Verify power supply and wiring.
* Close Serial Monitor before using Bluetooth.

---

## ✅ Expected Outcome

The LED patterns change wirelessly based on the input received from the mobile phone via Bluetooth.

---

## 🚀 Applications
- Wireless lighting control  
- Home automation basics  
- Arduino and Bluetooth learning projects  
- Embedded systems experimentation  

---

## ✅ Advantages
- Wireless and user-friendly control  
- Low-cost hardware implementation  
- Easy to modify and extend  

---

## 🔮 Future Enhancements
- Integration with IoT platforms  
- Control of external appliances  
- Custom mobile application development  
- Voice-controlled operation  


