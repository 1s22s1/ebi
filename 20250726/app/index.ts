import { PrismaClient } from './generated/prisma';

const prisma = new PrismaClient();

await prisma.user.create({ data: { name: "yuubi" } });

const count = await prisma.user.count();

console.log(count);
