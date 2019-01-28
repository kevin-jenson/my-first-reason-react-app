type state = {input: string};

type action('a) =
  | HasInput('a)
  | Add;

let component = ReasonReact.reducerComponent("Input");

let make = _ => {
  ...component,
  initialState: () => {input: ""},
  reducer: (action, _) => {
    switch (action) {
    | HasInput(value) => ReasonReact.Update({input: value})
    | Add => ReasonReact.Update({input: ""})
    };
  },
  render: ({state, send}) =>
    <div>
      <input
        value={state.input}
        onChange={event =>
          send(HasInput(event->ReactEvent.Form.target##value))
        }
      />
      <button> "Add"->ReasonReact.string </button>
    </div>,
};