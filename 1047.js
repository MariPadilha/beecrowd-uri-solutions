var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(" ");
var h0 = Number(n[0]); var m0 = Number(n[1]); var hf = Number(n[2]); var mf = Number(n[3]);

var horatotal= hf - h0;
var minutototal = mf - m0;
if (minutototal < 0){
    var minutototal = minutototal + 60
    var horatotal = horatotal - 1}
if (horatotal < 0){
    var horatotal = horatotal + 24}
else if (h0 == hf == mf == m0){
    var horatotal = 24
    var minutototal = 0}
console.log(`O JOGO DUROU ${horatotal} HORA(S) E ${minutototal} MINUTO(S)`);
