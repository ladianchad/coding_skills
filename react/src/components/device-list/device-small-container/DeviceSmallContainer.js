import './DeviceSmallContainer.css'

export const DeviceSmallContainer = (props) => {
  return (
    <div id={"DeviceSmallContainer" + props.id} className="DeviceSmallContainer" onClick={props.onClick}>
      <p className="id">ID : {props.data.id}</p>
      <p className="data">value : {props.data.value || "none"}</p>
      <p className="data">command : {props.data.command || "none"}</p>
    </div>
  )
}