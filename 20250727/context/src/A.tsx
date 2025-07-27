import { useContext } from "react";
import { MessageContext } from "./App";

function A() {
    const message = useContext(MessageContext);

    return (
        <>
            <p>Here is A.tsx.</p>
            <p>{message}</p>
        </>
    )
}

export default A;
