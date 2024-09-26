const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let alfabeto = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'];
let final = ''; let frase = ''; let n = 0; let g = parseInt(lines.shift());
for(var i = 0; i < g; i++){
    final = '';
    frase = lines.shift();
    n = parseInt(lines.shift());
    for(var j = 0; j < frase.length; j++){
        if(alfabeto.indexOf(frase[j]) - n < 0){
            final += alfabeto[alfabeto.indexOf(frase[j]) - n + 26];
        }
        else{
            final += alfabeto[alfabeto.indexOf(frase[j]) - n];
        }
    }
    console.log(final);
}
