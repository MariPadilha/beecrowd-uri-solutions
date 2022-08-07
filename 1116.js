var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
let n = Number(lines.shift())
for(var i = 0; i<n; i++){
    let [a, b] = lines.shift().split(' ')
    if(isFinite(parseFloat(a) / parseFloat(b)) === false){
        console.log('divisao impossivel')
    }    
    else{    
        console.log(`${(parseFloat(a)/parseFloat(b)).toFixed(1)}`)
    }    
}
