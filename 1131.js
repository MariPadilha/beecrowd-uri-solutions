const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
let gremio = 0; let inter = 0; let empate = 0; let vezes = 0;
let vez = 1; let j = 'oi';
while(true){
  let [a, b] = lines.shift().split(" ");
  a = parseInt(a); b = parseInt(b);
  if(a > b){
    inter += 1;}
  if(a < b){
    gremio += 1;}
  if(a === b){
    empate += 1;}
  vezes += 1;
  let escolha = lines.shift();
  if(escolha === '1'){
    vez += 1;}
  if(escolha === '2'){
    break;}
}
for(let i = 0; i < vez; i++){
  console.log('Novo grenal (1-sim 2-nao)');}
if(inter > gremio && inter > empate){
  j = 'Inter';}
if(gremio > inter && gremio > empate){
    j = 'Gremio';}
if(empate > gremio && empate > inter){
    j = 'Nao houve vencedor';}
console.log(`${vezes} grenais
Inter:${inter}
Gremio:${gremio}
Empates:${empate}
${j} venceu mais`);
