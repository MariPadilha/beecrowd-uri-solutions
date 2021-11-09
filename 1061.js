const { Console } = require('console');

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var dia_i = lines.shift().split(" ");
var hora_i = lines.shift().split(" ");
var dia_f = lines.shift().split(" ");
var hora_f = lines.shift().split(" ");
var di = Number(dia_i[1]); var df = Number(dia_f[1]);
var hi = Number(hora_i[0]); var mi = Number(hora_i[2]); var si = Number(hora_i[4]);
var hf = Number(hora_f[0]); var mf = Number(hora_f[2]); var sf = Number(hora_f[4]);
var minuto_seg = 60
var hora_seg = minuto_seg * 60
var dia_seg = hora_seg * 24
var i = si + mi*minuto_seg + hi*hora_seg + di*dia_seg
var f = sf + mf*minuto_seg + hf*hora_seg + df*dia_seg
if (i < f){
    var tempo = f - i
    var dias = Number(tempo/dia_seg)
    var tempo = tempo%dia_seg
    var horas = Number(tempo/hora_seg)
    var tempo = tempo%hora_seg
    var minutos = Number(tempo/minuto_seg)
    var tempo = tempo%minuto_seg
    var segundos = tempo}
W = dias
X = horas
Y = minutos
Z = segundos
console.log(`${parseInt(W)} dia(s)
${parseInt(X)} hora(s)
${parseInt(Y)} minuto(s)
${parseInt(Z)} segundo(s)`)
