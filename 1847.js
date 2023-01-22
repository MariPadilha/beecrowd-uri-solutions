const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let [a, b, c] = lines.shift().split(" ");
a = parseInt(a); b = parseInt(b); c = parseInt(c);
if(b < a && c >= b){
    console.log(':)');
}
if(b > a && c <= b){
    console.log(':(');
}
if(b > a && c > b && c - b < b - a){
    console.log(':(');
}
if(b > a && c > b && c - b >= b - a){
    console.log(':)');
}
if(b < a && c < b && b - c < a - b){
    console.log(':)');
}
if(b < a && c < b && b - c >= a - b){
    console.log(':(');
}
if(a === b){
    if(c > b){
        console.log(':)');
    }
    else{
        console.log(':(');
    }
}
