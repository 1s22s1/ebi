const input = require("fs").readFileSync("/dev/stdin", "utf8").split("\n");

const [N, L, R] = input[0].split(" ").map(e => parseInt(e));

for (let i = L; i <= R; i++) {
    console.log(i);
}

for (let i = 0; i < L; i++) {
    console.log(i);
}

for (let i = R + 1; i < N; i++) {
    console.log(i);
}
