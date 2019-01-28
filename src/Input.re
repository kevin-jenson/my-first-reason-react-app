let component = ReasonReact.statelessComponent("Input");

let make = (~onChange, ~value, ~add, _children) => {
  ...component,
  render: _ =>
    <div>
      <input value onChange />
      <button onClick=add> "Add"->ReasonReact.string </button>
    </div>,
};