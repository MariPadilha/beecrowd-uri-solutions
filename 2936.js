var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var curupira = 300;var boitata = 1500;var boto = 600;var mapinguari = 1000;var lara = 150;
var a = Number(lines.shift());var b = Number(lines.shift());var c = Number(lines.shift());
var d = Number(lines.shift());var e = Number(lines.shift());
var ai = a * curupira
var bi = b * boitata
var ci = c * boto
var di = d * mapinguari
var ei = e * lara
console.log(ai + bi + ci +di+ei+225)
