import './Index.css'

export const IndexItem = (props) => {
  return(
    <div id={props.id} className={`IndexItem-${props.on}`} onClick={props.onClick}>
      {props.name}
    </div>
  )
}