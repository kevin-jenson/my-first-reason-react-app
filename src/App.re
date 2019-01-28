let component = ReasonReact.statelessComponent("App");

let style =
  ReactDOMRe.Style.make(
    ~display="flex",
    ~justifyContent="center",
    ~alignItems="center",
    ~flexDirection="column",
    ~height="100vh",
    ~width="100vw",
    (),
  );

let make = _ => {
  ...component,
  render: _ =>
    <div style>
      {ReasonReact.string("This will be a todo list")}
      <Input />
    </div>,
};