let component = ReasonReact.statelessComponent("Card");

let style =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~justifyContent="center",
    ~alignItems="center",
    ~flexDirection="column",
    ~height="100px",
    ~width="100px",
    (),
  );

let make = (~title, _children) => {
  ...component,
  render: _ => <div style> title->ReasonReact.string </div>,
};