var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
while(true){
    let pa = 0;let pb = 0;
    let n = Number(lines.shift());
    if(n === 0){
        break;}
    for(var i=0; i<n; i++){
        ba = lines.shift().split(' ')
        let a=parseInt(ba[0]);let b=parseInt(ba[1])
        if(a == b){
            pa+=0}
        else if(a>b){
            pa+=1}
        else if(a<b){
            pb+=1}}
    console.log(pa,pb)
}
