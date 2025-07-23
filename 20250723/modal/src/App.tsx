import { useState } from 'react'
import './App.css'
import ReactModal from 'react-modal';



function App() {
  const [isOpen, setIsOpen] = useState(false);

  const openModal = () => {
    setIsOpen(true);
  }

  const closeModal = () => {
    setIsOpen(false);
  }

  return (
    <>
      <button onClick={openModal}>Open Modal!!1</button>
      <ReactModal isOpen={isOpen} onRequestClose={closeModal}>
        <p>ゾット族</p>
        <button onClick={closeModal}>Close Modal</button>
      </ReactModal>
    </>
  )
}

export default App
