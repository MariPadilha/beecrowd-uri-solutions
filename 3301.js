var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(" ");
var H = n[0];var Z = n[1];var L = n[2]; 
if(Z > H && Z < L){
    console.log('zezinho')}
else if(Z < H && Z > L){
    console.log('zezinho')}
else if(L > H && L < Z){
    console.log('luisinho')}
else if(L < H && L > Z){
    console.log('luisinho')}
else if(H > Z && H < L){
    console.log('huguinho')}
else if(H < Z && H > L){
    console.log('huguinho')}
