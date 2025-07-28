import { useReducer } from 'react';
import './App.css'
import { Button, ButtonGroup } from '@mui/material';

function App() {
  const reducerCount = (count: number, action: string) => {
    switch (action) {
      case 'plus':
        return count + 1
      case 'minus':
        return count - 1
    }
  }

  const [count, dispatch] = useReducer(reducerCount, 0)

  return (
    <>
      <p>{count}</p>

      <ButtonGroup color='primary'>
        <Button onClick={() => dispatch('plus')}>+1</Button>
        <Button onClick={() => dispatch('minus')}>-1</Button>
      </ButtonGroup>
    </>
  )
}

export default App
