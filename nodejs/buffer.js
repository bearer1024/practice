var buffer1 = new Buffer('hello');
var buffer2 = new Buffer('world');
var buffer3 = Buffer.concat([buffer1,buffer2],5);
console.log("buffer3 content:"+buffer3.toString());
