import { PrismaClient } from './generated/prisma'

const prisma = new PrismaClient()

await prisma.user.create({
    data: {
        email: `john-${Math.random()}@example.com`,
    },
})

const count = await prisma.user.count();
console.log(count)
