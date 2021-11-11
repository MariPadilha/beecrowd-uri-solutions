var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var N = Number(lines.shift())
let lista = []
for (var i = 0;i < N; i++){
    o = Number(lines.shift());
    if(o < 0){
        if(o % 2 !== 0){
            lista.push('ODD NEGATIVE')}
        if(o % 2 === 0){
            lista.push('EVEN NEGATIVE')}}
    if (o === 0){
        lista.push('NULL')}
    if(o > 0){
        if(o % 2 !== 0){
            lista.push('ODD POSITIVE')}
        if (o % 2 === 0){
            lista.push('EVEN POSITIVE')}}}
for (var w = 0;w<N;w++){
    console.log(`${lista[w]}`)}
