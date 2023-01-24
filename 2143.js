const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
while(true){
    let n = parseInt(lines.shift());
    if(n === 0){
        break;
    }
    for(var i = 0; i < n; i++){
        let a = parseInt(lines.shift());
        if(a % 2 === 0){
            console.log(a * 2 - 2);
        }
        else{
            console.log(a*2-1);
        }
    }
}
