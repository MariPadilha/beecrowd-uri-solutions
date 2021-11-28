var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift())
let nomes = []
var a = 0;var b = 0;var c = 0;var saque = 0;var bloqueio = 0;var ataque = 0;
for(var i = 0;i < n;i++){
    var nome = lines.shift()
    nomes.push(nome)
    var D = lines.shift().split(" ")
    var E = lines.shift().split(" ")
    var S = parseInt(D[0])
    var a = a + S
    var B = parseInt(D[1])
    var b = b + B
    var A = parseInt(D[2])
    var c = c + A
    var S1 = parseInt(E[0])
    var saque = saque + S1
    var B1 = parseInt(E[1])
    var bloqueio = bloqueio + B1
    var A1 = parseInt(E[2])
    var ataque = ataque + A1}
var persaque = (saque * 100.00) / a
var perbloqueio = (bloqueio * 100.00) / b
var perataque = (ataque * 100.00) / c
console.log(`Pontos de Saque: ${persaque.toFixed(2)} %.
Pontos de Bloqueio: ${perbloqueio.toFixed(2)} %.
Pontos de Ataque: ${perataque.toFixed(2)} %.`)
