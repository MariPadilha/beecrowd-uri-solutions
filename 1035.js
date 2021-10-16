var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(" ");
var A =  Number(n[0]); var B =  Number(n[1]); var C =  Number(n[2]); var D =  Number(n[3]);
if (B>C && D>A && C+D > A+B && C>0 && D>0 && A%2===0){
    console.log("Valores aceitos");
}
else{
    console.log("Valores nao aceitos");
}
