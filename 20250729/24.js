const input = require("fs").readFileSync("/dev/stdin", "utf8").split("\n");

const [a, b] = input[0].split(" ");
console.log(parseInt(a) + parseInt(b));
