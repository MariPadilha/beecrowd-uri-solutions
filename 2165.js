var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var a = lines.shift()
var b = a.length
if(b <= 140){
    console.log('TWEET')}
else{
    console.log('MUTE')}
