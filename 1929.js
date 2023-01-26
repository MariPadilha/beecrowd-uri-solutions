const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");
let [n1, n2, n3, n4] = lines.shift().split(" ");
n1 = parseInt(n1); n2 = parseInt(n2); n3 = parseInt(n3); n4 = parseInt(n4);
if(n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
    console.log('S');
}
else if(n1 < n2 + n4 && n2 < n1 + n4 && n4 < n1 + n2){
    console.log('S');
}
else if(n1 < n3 + n4 && n3 < n1 + n4 && n4 < n1 + n3){
    console.log('S');
}
else if(n2 < n3 + n4 && n3 < n2 + n4 && n4 < n2 + n3){
    console.log('S');
}
else{
    console.log('N');
}
