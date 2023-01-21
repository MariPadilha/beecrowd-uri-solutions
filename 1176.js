const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let fibo = [0,1];
let p = 0; let s = 1;
for(var i = 0; i < 60; i++){
    let t = s + p;
    fibo.push(t);
    p = s;
    s = t;
}
let T= parseInt(lines.shift());
for(var i = 0; i < T; i++){
    let N = parseInt(lines.shift());
    console.log(`Fib(${N}) = ${fibo[N]}`);
}
