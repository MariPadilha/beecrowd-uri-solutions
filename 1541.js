const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');
while(true){
    let n = lines.shift().split(' ');
    if(n[0] == '0'){
        break;
    }
    console.log(parseInt(Math.sqrt(parseInt(n[0])*parseInt(n[1])*100/parseInt(n[2]))));
}
