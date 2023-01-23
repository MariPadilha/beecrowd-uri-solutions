const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

let bonecos = 0; let arquitetos = 0; let musicos = 0; let desenhistas = 0;
let j = parseInt(lines.shift());
for(var i = 0; i < j; i++){
    let[nome, area, horas] = lines.shift().split(' ')
    if(area === 'bonecos'){
        bonecos += parseInt(horas)
    }
    if(area === 'arquitetos'){
        arquitetos += parseInt(horas)
    }
    if(area === 'musicos'){
        musicos += parseInt(horas)
    }
    if(area === 'desenhistas'){
        desenhistas += parseInt(horas)
    }
}
console.log(Math.trunc(bonecos/8)+Math.trunc(arquitetos/4)+Math.trunc(musicos/6)+Math.trunc(desenhistas/12));
