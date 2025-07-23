import { memo } from "react";

const Child = ({ count }: { count: number }) => {

    console.log('Child.tsxが描写されました。')

    return (
        <>
            <p>Count2: {count}</p>
        </>
    )
}

export default memo(Child);
