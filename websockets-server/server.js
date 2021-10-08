import { WebSocketServer } from "ws";

const server = new WebSocketServer({
    port: 4000
});

server.on('connection', (socket) => {
    socket.on('message', (data) => {
        console.log('Message received: ', data.tostring());
    });
});