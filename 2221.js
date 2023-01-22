const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let n = parseInt(lines.shift());
let lista = [];
let golpe1 = 0; let golpe2 = 0;
for(var i = 0; i < n; i++){
    let w = parseInt(lines.shift());
    let [a, b, c] = lines.shift().split(" ");
    let [d, e, f] = lines.shift().split(" ");
    a = parseInt(a); b = parseInt(b); c = parseInt(c); d = parseInt(d); e = parseInt(e); f = parseInt(f);
    if(c % 2 === 0){
        golpe1 = ((a + b) / 2) + w;
    }
    if(c % 2 !== 0){
        golpe1 = ((a + b) / 2);
    }
    if(f % 2 === 0){
        golpe2 = ((d + e) / 2) + w;
    }
    if(f % 2 !== 0){
        golpe2 = ((d + e) / 2);
    }
    if(golpe1 > golpe2){
        lista.push('Dabriel');
    }
    if(golpe1 < golpe2){
        lista.push('Guarte');
    }
    if(golpe1 == golpe2){
        lista.push('Empate');
    }
}
for(var o = 0; o < n; o++){
    console.log(`${lista[o]}`);
}
