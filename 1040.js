var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(' ');
var n1 = Number(n[0]);var n2 = Number(n[1]);var n3 = Number(n[2]);var n4 = Number(n[3]);
var media = ((n1*2.0) + (n2*3.0) + (n3*4.0) + (n4*1.0))/10.0;
if (media >= 7.0){
    console.log(`Media: ${media.toFixed(1)}`);
    console.log('Aluno aprovado.');}

else if (media < 5.0){
    console.log(`Media: ${media.toFixed(1)}`);
    console.log('Aluno reprovado.');}

else if (5.0 <= media <= 6.9){
    var exame = Number(lines.shift());
    console.log(`Media: ${media.toFixed(1)}`);
    console.log('Aluno em exame.');
    console.log(`Nota do exame: ${exame.toFixed(1)}`);
    var nota = (media+exame)/2.0;
  
    if (nota >= 5.0){
        console.log('Aluno aprovado.');
        console.log(`Media final: ${nota.toFixed(1)}`);}
  
    else{
        console.log('Aluno reprovado.');
        console.log(`Media final: ${nota.toFixed(1)}`);}
}
