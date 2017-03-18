var http = require("http");
http.createServer(function(request,response){
    //send the HTTP header
    //HTTP Status:200 :OK
    //Content type:text/plain
    response.writeHead(200,{'Content-type':'text-plain'});

    //send the response body as "Hello World"
    response.end('Hello World');
}).listen(8081);

//Console will print the message
console.log('Server running at http://127.0.0.1:8081');
