const input = require("fs").readFileSync("/dev/stdin", "utf8").split("\n");

const [A, B] = input[0].split(" ").map(e => parseInt(e));

console.log(Math.floor(A / B));
