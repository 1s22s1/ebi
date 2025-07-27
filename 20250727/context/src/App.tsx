import { createContext } from 'react'
import A from './A'
import './App.css'

export const MessageContext = createContext('Pass massage');

function App() {
  return (
    <>
      <p>Here is App.tsx</p>
      <A />
    </>
  )
}

export default App
