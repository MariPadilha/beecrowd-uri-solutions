var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
let n = Number(lines.shift())
for(var i = 0; i<n; i++){
    let a = lines.shift()
    if(a[0] === a[2]){
        console.log(parseInt(a[0]) * parseInt(a[2]))}
    else if(a[1]===a[1].toLowerCase()){
        console.log(parseInt(a[0]) + parseInt(a[2]))}
    else{
        console.log(parseInt(a[2]) - parseInt(a[0]))}
}
