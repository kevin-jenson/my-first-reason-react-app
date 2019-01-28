let component = ReasonReact.statelessComponent("Card");

let make = (~title, _children) => {
  ...component,
  render: _ => <div> title->ReasonReact.string </div>,
};