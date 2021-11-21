var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift())
let lista = []
for(var i = 0;i < n; i++){
    var A = lines.shift().split(" ")
    var a = Number(A[0]); var b = Number(A[1])
    var c = a + b
    if(c === 0){
        lista.push('PROXYCITY')}
    else if(c === 1){
        lista.push('P.Y.N.G.')}
    else if(c === 2){
        lista.push('DNSUEY!')}
    else if(c === 3){
        lista.push('SERVERS')}
    else if(c === 4){
        lista.push('HOST!')}
    else if(c === 5){
        lista.push('CRIPTONIZE')}
    else if(c === 6){
        lista.push('OFFLINE DAY')}
    else if(c === 7){
        lista.push('SALT')}
    else if(c === 8){
        lista.push('ANSWER!')}
    else if(c === 9){
        lista.push('RAR?')}
    else if(c === 10){
        lista.push('WIFI ANTENNAS')}}
for(var k = 0;k < n;k++){
    console.log(`${lista[k]}`)}
