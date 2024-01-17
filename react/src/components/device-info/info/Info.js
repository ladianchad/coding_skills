import './Info.css'
import { useState } from 'react'
import axios from 'axios';

export const Info = (props) =>{
  const [updateValue, setUpdateValue] = useState("");
  
  const onInputChange = (event) => {
    setUpdateValue(event.currentTarget.value);
  }

  const postData = ()=>{
    axios.patch(`https://study.lachani.com/v1/devices/${props.id}/${props.name}`, updateValue, {
      "headers": {
        "Content-type": "application/json"
      }
    });
  }

  return(
    <div className="Info" style={{
      ...props.style
    }}>
      <span className="name">{`${props.name} : ${props.data}`}</span>
      <input className="updateText" type="text" onChange={onInputChange}></input>
      <button className="update" onClick={postData}>Update</button>
    </div>
  )
}