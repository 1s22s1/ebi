const input = require("fs").readFileSync("/dev/stdin", "utf8").split("\n");

const N = parseInt(input[0]);
const S = input[1];

for (let i = 0; i < N; i++) {
    if (S[i] == 'a') {
        console.log(i);
    }
}
