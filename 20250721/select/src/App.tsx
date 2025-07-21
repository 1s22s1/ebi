import Select, { type SingleValue } from 'react-select'
import './App.css'
import { Stack } from '@mui/material'
import "tailwindcss";
import { useState } from 'react';

function App() {

  type OptionType = {
    value: string;
    label: string;
  }

  const options: OptionType[] = [
    {
      value: 'bg-red-500', label: '赤'
    },
    {
      value: 'bg-green-500', label: '緑'
    },
    {
      value: 'bg-blue-500', label: '青'
    },
  ]

  const [bgColor, setBgColor] = useState('bg-red-500')
  const onChange = (e: SingleValue<OptionType>) => {
    if (e) {
      setBgColor(e.value);
    }
  }

  return (
    <>
      <Stack spacing={2}>
        <Select options={options} defaultValue={{ value: 'bg-red-500', label: '赤' }} onChange={onChange} />

        <div className={`w-[32px] h-[32px] ${bgColor}`} />
      </Stack>
    </>
  )
}

export default App
