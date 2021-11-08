var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var ossos = lines.shift();
var animal = lines.shift();
var alimento = lines.shift();
if (ossos === 'vertebrado'){
    if (animal === 'ave'){
        if (alimento === 'carnivoro'){
            console.log('aguia');}
        else if (alimento === 'onivoro'){
            console.log('pomba')}}
    else if (animal === 'mamifero'){
        if (alimento === 'onivoro'){
            console.log('homem')}
        else if (alimento === 'herbivoro'){
            console.log('vaca')}}}

else if (ossos === 'invertebrado'){
    if (animal === 'inseto'){
        if (alimento === 'hematofago'){
            console.log('pulga')}
        else if (alimento === 'herbivoro'){
            console.log('lagarta')}}
    else if (animal === 'anelideo'){
        if (alimento === 'hematofago'){
            console.log('sanguessuga')}
        else if (alimento === 'onivoro'){
            console.log('minhoca')}}}
