open Async;

test("Async.test", t =>
  t.cb()
);
test_failing("Async.test_failing", t => {
  let error: Js.Exn.t = [%raw {| new Error("Oh no") |}];
  t.cb(~error, ());
});
after(t => t.cb());
after_always(t => t.cb());
after_each(t => t.cb());
after_each_always(t => t.cb());
before(t => t.cb());

before_each(t => t.cb());
todo("Async.todo");
