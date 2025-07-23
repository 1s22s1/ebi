import { useState } from 'react'
import './App.css'
import Child from './Child';

function App() {
  const [appCount, setAppCount] = useState(0);
  const [childCount, setChildCount] = useState(0);

  console.log('App.tsxが描写されました。')

  const plus = () => {
    setAppCount(appCount + 1);
  }

  const childPlus = () => {
    setChildCount(childCount + 1);
  }

  return (
    <>
      <p>Count1: {appCount}</p>
      <button onClick={plus}>+1</button>

      <Child count={childCount} />
      <button onClick={childPlus}>+1</button>
    </>
  )
}

export default App
