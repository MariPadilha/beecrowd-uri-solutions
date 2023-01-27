const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");

let [j1, n1, n2, r, a] = lines.shift().split(' ');
let soma = parseInt(n1)+parseInt(n2);
if(soma % 2 === 0){
    if(j1 === '1'){
        if(r == '1' && a == '1'){
            console.log('Jogador 2 ganha!');
        }
        else{
            console.log('Jogador 1 ganha!');
        }
    }
    if(j1 === '0'){
        if(r === '0'){
            if(a === '1'){
                console.log('Jogador 1 ganha!');
            }
            else{
                console.log('Jogador 2 ganha!');
            }
        }
        if(r === '1'){
            if(a === '0'){
                console.log('Jogador 1 ganha!');
            }
            else{
                console.log('Jogador 2 ganha!');
            }
        }
    }    
}
if(soma % 2 !== 0){
    if(j1 === '0'){
        if(r === '1' && a == '1'){
            console.log('Jogador 2 ganha!');
        }
        else{
            console.log('Jogador 1 ganha!');
        }
    }
    if(j1 === '1'){
        if(r === '0'){
            if(a === '1'){
                console.log('Jogador 1 ganha!');
            }
            else{
                console.log('Jogador 2 ganha!');
            }
        }
        if(r === '1'){
            if(a === '0'){
                console.log('Jogador 1 ganha!');
            }
            else{
                console.log('Jogador 2 ganha!');
            }
        }
    }
}
