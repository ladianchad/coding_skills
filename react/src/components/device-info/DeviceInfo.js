import './DeviceInfo.css'
import { useState } from "react"
import { useInterval } from "../../util/useInterval";
import axios from "axios";
import { Info } from './info/Info';

export const DeviceInfo = (props) =>{
  const [deviceId, setDeviceID] = useState(0);
  const [device, setDevice] = useState({
    "id": null,
    "value": null,
    "command": null
  });
  
  const onInputChange = (event) =>{
    setDeviceID(event.currentTarget.value);
  }

  const onShowClicked = (event) => {
    setDevice({
      "id": deviceId,
      "value": null,
      "command": null
    })
  }

  useInterval(() => {
    if(device.id){
      axios.get(`https://study.lachani.com/v1/devices/${device.id}`).then(res => {
        setDevice(res.data);
        console.log(res.data);
      }).catch(()=>{
        setDevice({
          "id": null,
          "value": null,
          "command": null
        })
      });
    }
  },300);

  return (
    <div className="DeviceInfo">
      <div className="header">
        <span className="Id">ID : </span>
        <input className="IdInput" type="number" min="1" onChange={onInputChange}></input>
        <button className="show" onClick={onShowClicked}>Show</button>
      </div>
      <Info key="value"
        id={device.id}
        name="value" 
        style={{
          "backgroundColor": "#005178"
        }}
        data={device.value}  
      ></Info>
      <Info key="command"
        id={device.id}
        name="command" 
        style={{
          "backgroundColor": "#435178"
        }}
        data={device.command}  
      ></Info>
    </div>
  )
}