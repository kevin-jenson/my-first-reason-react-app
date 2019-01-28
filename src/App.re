type state = {
  input: string,
  todos: list(string),
};

type action('a) =
  | HasInput('a)
  | Add;

let component = ReasonReact.reducerComponent("App");

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
  initialState: () => {input: "", todos: []},
  reducer: (action, state) => {
    switch (action) {
    | HasInput(value) => ReasonReact.Update({...state, input: value})
    | Add =>
      ReasonReact.Update({todos: [state.input, ...state.todos], input: ""})
    };
  },
  render: ({state, send}) =>
    <div style>
      {ReasonReact.string("This will be a todo list")}
      <Input
        onChange={event =>
          send(HasInput(event->ReactEvent.Form.target##value))
        }
        value={state.input}
        add={_ => send(Add)}
      />
      {List.map(todo => <Card title=todo />, state.todos)}
    </div>,
};