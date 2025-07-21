import { Button, Stack } from '@mui/material'
import './App.css'
import { useState } from 'react'

function App() {
  const [weather, setWeather] = useState<string | null>(null);

  const fetchWeather = () => {
    fetch('https://weather.tsukumijima.net/api/forecast/city/390010')
      .then(response => response.json())
      .then(data => {
        setWeather(data.forecasts[0].telop)
      })
      .catch(error => console.log('error', error));
  };

  return (
    <>
      <Stack direction={'column'} spacing={2}>
        {weather && <p>天気は{weather}です。</p>}
        <Button variant='outlined' onClick={fetchWeather}>Click me!!1</Button>
      </Stack>
    </>
  )
}

export default App
