import { IndexItem } from "./IndexItem"

export const Index = (props) => {

  const creatIndexItems = () => {
    return props.items.map(item => {
        return(
          <IndexItem id={item.name} key={item.name} name={item.name} on={item.on} onClick={props.onClick}></IndexItem>
        )
      }
    )
  }

  return(
    <div className="Index">
        <p className="header">Contents</p>
        {creatIndexItems()}
        <p className="footer">
          <a href="https://study.lachani.com/api">API Docs</a>
        </p>
    </div>
  )
}