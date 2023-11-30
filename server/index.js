const { SerialPort } = require("serialport");
const Readline = require('@serialport/parser-readline');
const parser = new Readline(); // Asegúrate de que la "R" sea minúscula

const mySerial = new SerialPort('COM9', {
    baudRate: 115200
});

mySerial.on('open', function () {
    console.log('Puerto serial abierto');
});
