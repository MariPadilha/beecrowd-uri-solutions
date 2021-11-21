var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift());
var vezes = 0
let win = []
while(true){
    if(vezes === n){
        break;}
    var A1 = lines.shift().split(" ")
    var a1 = Number(A1[0]); var a2 = Number(A1[1]);
    var A2 = lines.shift().split(" ")
    var a3 = Number(A2[0]); var a4 = Number(A2[1]);
    var A3 = lines.shift().split(" ")
    var a5 = Number(A3[0]); var a6 = Number(A3[1]);
    var B1 = lines.shift().split(" ")
    var b1 = Number(B1[0]); var b2 = Number(B1[1]);
    var B2 = lines.shift().split(" ")
    var b3 = Number(B2[0]); var b4 = Number(B2[1]);
    var B3 = lines.shift().split(" ")
    var b5 = Number(B3[0]); var b6 = Number(B3[1]);
    var a11 = a1 * a2
    var a21 = a3 * a4
    var a31 = a5 * a6
    var joao = a11 + a21 + a31
    var b11 = b1 * b2
    var b21 = b3 * b4
    var b31 = b5 * b6
    var maria = b11 + b21 + b31
    if(joao > maria){
        win.push('JOAO')}
    if(joao < maria){
        win.push('MARIA')}
    var vezes = vezes + 1}
for(var i = 0;i < n; i++){
    console.log(`${win[i]}`)}
