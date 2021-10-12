var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = lines.shift();
var n = n1; 
var valor100 = Math.floor(n / 100);var n = n - valor100*100; var valor50 = Math.floor(n / 50); var n = n - valor50*50; var valor20 = Math.floor(n / 20); var n = n - valor20*20; var valor10 = Math.floor(n / 10); var n = n - valor10*10; var valor5 = Math.floor(n / 5); var n = n - valor5*5; var valor2 = Math.floor(n / 2); var n = n - valor2*2; var valor1 = Math.floor(n / 1);var n = n - valor1*1; var valor050 = Math.floor(n / 0.50); var n = n - valor050*0.50; var valor025 = Math.floor(n / 0.25); var n = n - valor025*0.25; var valor010 = Math.floor(n / 0.10); var n = n - valor010*0.10; var valor05 = Math.floor(n / 0.05); var n = n - valor05*0.05; 
console.log(`NOTAS:
${valor100} nota(s) de R$ 100.00
${valor50} nota(s) de R$ 50.00
${valor20} nota(s) de R$ 20.00
${valor10} nota(s) de R$ 10.00
${valor5} nota(s) de R$ 5.00
${valor2} nota(s) de R$ 2.00
MOEDAS:
${valor1} moeda(s) de R$ 1.00
${valor050} moeda(s) de R$ 0.50
${valor025} moeda(s) de R$ 0.25
${valor010} moeda(s) de R$ 0.10
${valor05} moeda(s) de R$ 0.05
${(n*100).toFixed(0)} moeda(s) de R$ 0.01`);
