const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let x = parseInt(lines.shift());
let v = lines.shift().split(" ");
let mul2 = 0; let mul3 = 0; let mul4 = 0; let mul5 = 0;
for(var i = 0; i < x; i++){
    let f = v[i];
    let h = parseInt(f);
    if(h % 2 === 0){
        mul2 += 1;
    }
    if(h % 3 === 0){
        mul3 += 1;
    }
    if(h % 4 === 0){
        mul4 += 1;
    }
    if(h % 5 === 0){
        mul5 += 1;
    }
}
console.log(`${mul2} Multiplo(s) de 2
${mul3} Multiplo(s) de 3
${mul4} Multiplo(s) de 4
${mul5} Multiplo(s) de 5`);
