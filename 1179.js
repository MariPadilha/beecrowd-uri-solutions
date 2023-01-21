const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
function clear(n){
    while(n.length){
        n.pop();
    }
    return n;
}

let par = []; let impar = [];
for(var i = 0; i < 15; i++){
    let n = parseInt(lines.shift());
    if(n % 2 !== 0){
        impar.push(n);
        if(impar.length === 5){
            for(var m = 0; m <  5; m++){
                console.log(`impar[${m}] = ${impar[m]}`);
            }
            clear(impar);
        }
    }
    else{
        par.push(n);
        if(par.length === 5){
            for(var m = 0; m < 5; m++){
                console.log(`par[${m}] = ${par[m]}`);
            }
            clear(par);
        }
    }
}
if(impar.length !== 0){
    for(var i = 0; i < impar.length; i++){
        console.log(`impar[${i}] = ${impar[i]}`);
    }
}
if(par.length !== 0){
    for(var i = 0; i < par.length; i++){
        console.log(`par[${i}] = ${par[i]}`);
    }
}
