# API Test Note - API调试笔记

Author: Cai Dingkun <caidingkun@outlook.com>

Three parts: Communication, API Sample, API Guidelines

---

## Communication

### NDI device Default Parameter

- Baud rate: 9600
- Data bits: 8
- Parity: 0
- Stop bits: 0
- Hardware handshaking: Off

### Prerequisites

- USB driver installed
- NDI device powered up, USB connected, and make sure no other serial port or NDI software connected to NDI device
- Select NDI USB Serial port with default parameters
- Set Line ending as `CR`

### Test Communication

- Send message "RESET " (Note: the message contains space, 6 characters in total)
- If successful, will receive "RESETBE6F", where 'BE6F' is CRC16 for data verification
- If not successful, try send again, or reboot NDI(reset NDI serial communication to default parameters)
- Send message "BEEP 2" (Note: in this message BEEP is command and 2 is parameter)
- If successful, will beep 2 times

---

## API Sample

- Usage provided in readme.txt
- After sample finished running, see terminal log for serial communication for insights

## API Guidelines

- See manuals in folder ./Manual
