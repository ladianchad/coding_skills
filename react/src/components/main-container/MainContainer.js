import './MainContainer.css'
import { Index } from './index/Index';
import { useEffect, useState } from 'react';
import { Content } from './content/Content';

export const MainContainer = (props) =>{
  const [items, setItems] = useState(props.items);
  const [contents,setContents] = useState();

  useEffect(() => {
    items.forEach(item => {
      if(item.on){
        setContents(item.contents)
      }
    });
  })

  const onIndexButtonClick = (event) => {
    const newItems = items.map(item => {
      return {
        "name": item.name,
        "on": item.name == event.target.id,
        "contents": item.contents
      }
    });
    setItems(newItems);
  };

  return (
    <div className="MainContainer">
      <Index items={items} onClick={onIndexButtonClick}></Index>
      <Content>
        {contents}
      </Content>
    </div>
  )
}