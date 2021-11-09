var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(" ");
var h0 = Number(n[0]); var hf = Number(n[1]);
var horatotal= hf - h0;
if (horatotal < 0){
    var horatotal = horatotal + 24}
else if (h0 == hf){
    var horatotal = 24}
console.log(`O JOGO DUROU ${horatotal} HORA(S)`);
