const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");

let b = parseInt(lines.shift());
let lista = lines.shift().split(' ');
let s = [];
while(true){
    for(var i = 0; i < b-1; i++){
        if(lista[i] == lista[i+1]){
            s.push(1);
        }
        else{
            s.push(-1);
        }
    }
    if(b == 2){
        break;
    }
    b-=1;
    lista = s;
    s = [];
}
s[0] == -1 ? console.log('branca') : console.log('preta');
