import { WebSocketServer } from "ws";

const server = new WebSocketServer({
    port: 4000
});

server.on('connection', (socket) => {

    console.log('Socket connected!!');

    socket.on('message', (data) => {
        console.log('Message received: ', data.toString());
    });
});

server.on('listening', () => console.log('Websocket server listen on port: ', server.options.port));