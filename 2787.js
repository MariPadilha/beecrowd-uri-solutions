var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
let a1 = parseInt(lines.shift());
let a2 = parseInt(lines.shift());
if(a2 % 2 !== 0){
    if(a1 % 2 !== 0){
        console.log(1);
    }
    else{
        console.log(0);
    }
}
if(a2 % 2 === 0){
    if(a1 % 2 !== 0){
        console.log(0);
    }
    else{
        console.log(1);
    }
}
