var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
while(true){
    var j = lines.shift().split(" ")
    var a = parseInt(j[0])
    var b = parseInt(j[1])
    if(a===b & a===0){
        break}
    console.log(a+b);
}
