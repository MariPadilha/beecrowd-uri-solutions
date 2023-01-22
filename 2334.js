const input = require("fs").readFileSync("/dev/stdin", "utf8");
const lines = input.split("\n").map((e) => BigInt(e));

for (let P of lines) {
  if (P > 0n) {
    console.log(`${P - 1n}`);
  } 
  else if (P === 0n){
    console.log(`${P}`);
  } 
  else{
    break;
  }
}
