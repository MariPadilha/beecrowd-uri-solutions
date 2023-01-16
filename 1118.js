const input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
let nota_soma = 0;
let cont = 0;
let continuar = true;

while(continuar === true){
  let nota = parseFloat(lines.shift());
  if(nota>=0.0 && nota <=10){
    nota_soma += nota;
    cont += 1;
    if(cont === 2){
      console.log(`media = ${(nota_soma/2).toFixed(2)}`);
      cont = 0;
      nota_soma = 0;
      while(true){
        console.log("novo calculo (1-sim 2-nao)");
        let novo = parseInt(lines.shift());
        if(novo === 2){
          continuar = false;
          break;}
        else if(novo === 1){
          continuar = true;
          break;}
      }
    }      
  }
  else{
    console.log("nota invalida");}
}
