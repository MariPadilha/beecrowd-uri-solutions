var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = lines.shift().split(" ");
var A =  Number(n[0]); var B =  Number(n[1]); var C =  Number(n[2]);

if (A == 0){
    console.log('Impossivel calcular')
}
if (A > 0){
    delta = B**2-4*A*C
    if (delta < 0){
        console.log('Impossivel calcular')
    }
    if (delta > 0){
        quadra = Math.sqrt(delta)
        x1 = (-B + quadra)/(2*A)
        if (x1 == 0){
            console.log('Impossivel calcular')
        }
        else{
           console.log(`R1 = ${(x1).toFixed(5)}`)
        }
        x2 = (-B - quadra) / (2 * A)
        if (x2 == 0){
            console.log('Impossivel calcular')}
        else{
            console.log(`R2 = ${(x2).toFixed(5)}`)}
    }
}
