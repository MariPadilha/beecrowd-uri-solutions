var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n1 = lines.shift();
var n = n1; var valor100 = Math.floor(n / 100); var n = n - valor100*100; var valor50 = Math.floor(n / 50); var n = n - valor50*50; var valor20 = Math.floor(n / 20); var n = n - valor20*20; var valor10 = Math.floor(n / 10); var n = n - valor10*10; var valor5 = Math.floor(n / 5); var n = n - valor5*5; var valor2 = Math.floor(n / 2); var n = n - valor2*2; var valor1 = Math.floor(n / 1);
console.log(`${n1}
${valor100} nota(s) de R$ 100,00
${valor50} nota(s) de R$ 50,00
${valor20} nota(s) de R$ 20,00
${valor10} nota(s) de R$ 10,00
${valor5} nota(s) de R$ 5,00
${valor2} nota(s) de R$ 2,00
${valor1} nota(s) de R$ 1,00`);
