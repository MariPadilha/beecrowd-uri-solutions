var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = Number(lines.shift())
var hobbit = 0;var humano = 0;var elfo = 0;var anao = 0;var mago = 0;
for(var i = 0;i < n; i++){
    var k = lines.shift().split(" ")
    var b = k[1]
    if(b === 'X'){
        var hobbit = hobbit + 1}
    else if(b === 'H'){
        var humano = humano + 1}
    else if(b === 'E'){
        var elfo = elfo + 1}
    else if(b === 'A'){
        var anao = anao + 1}
    else if(b === 'M'){
        var mago = mago + 1}}
console.log(`${hobbit} Hobbit(s)
${humano} Humano(s)
${elfo} Elfo(s)
${anao} Anao(s)
${mago} Mago(s)`)
