import { useEffect, useState } from 'react';
import './App.css';
import { DeviceInfo } from './components/device-info/DeviceInfo';
import { DeviceList } from './components/device-list/DeviceList';
import { MainContainer } from './components/main-container/MainContainer';

function App() {

  const [items, setItems] = useState([])

  useState(()=>{
    setItems([
    {
      "name": "Device List",
      "on": true,
      "contents": (<DeviceList></DeviceList>)
    },
    {
      "name": "Device Info",
      "on": false,
      "contents": (<DeviceInfo></DeviceInfo>)
    }
  ])
  }, null)

  return (
      <MainContainer items={items}>
      </MainContainer>
  );
}

export default App;
