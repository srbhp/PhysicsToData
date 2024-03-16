

## Data Types 

### Scalar Types

 - Signed integers: i8, i16, i32, i64, i128 and isize (pointer size)
 - Unsigned integers: u8, u16, u32, u64, u128 and usize (pointer size)
 - Floating point: f32, f64
 - char Unicode scalar values like 'a', 'α' and '∞' (4 bytes each)
 - bool either true or false
 - The unit type (), whose only possible value is an empty tuple: ()



### Compound Types

 - Arrays like [1, 2, 3]
 - Tuples like (1, true)

    ``` rust
    fn main() {
        // Variables can be type annotated.
        let logical: bool = true;

        let a_float: f64 = 1.0;  // Regular annotation
        let an_integer   = 5i32; // Suffix annotation

        // Or a default will be used.
        let default_float   = 3.0; // `f64`
        let default_integer = 7;   // `i32`

        // A type can also be inferred from context.
        let mut inferred_type = 12; // Type i64 is inferred from another line.
        inferred_type = 4294967296i64;

        // A mutable variable's value can be changed.
        let mut mutable = 12; // Mutable `i32`
        mutable = 21;

        // Error! The type of a variable can't be changed.
        mutable = true;

        // Variables can be overwritten with shadowing.
        let mutable = true;
    }
    ```

### Custom Types

Rust custom data types are formed mainly through the two keywords:

 - struct: define a structure
    ```rust 
    struct Person{
        name : str , 
        age : u8 , 
    }
    ```
 - enum: define an enumeration
    ```rust 
    enum WebEvent {
        // An `enum` variant may either be `unit-like`,
        PageLoad,
        PageUnload,
        // like tuple structs,
        KeyPress(char),
        Paste(String),
        // or c-like structures.
        Click { x: i64, y: i64 },
    }
    ```

### Flow control 
 
 - `if/else`
    ```rust 
        if n < 0 {
            print!("{} is negative", n);
        } else if n > 0 {
            print!("{} is positive", n);
        } else {
            print!("{} is zero", n);
        }
    ```
 - `loop`
    ```rust
     for n in 1..10 {
        println!("{}", n);
     }
    ```
### Function 

 - ```rust
    hello_fn(n:u32)->(){
        println!("Hello {}", n);
    }
    ```

 - Associated functions & Methods
    ```rust 
    struct Point {
        x: f64,
        y: f64,
    }
    // Implementation block, all `Point` associated functions & methods go in here
    impl Point {
        // This is an "associated function" because this function is associated with
        // a particular type, that is, Point.
        //
        // Associated functions don't need to be called with an instance.
        // These functions are generally used like constructors.
        fn origin() -> Point {
            Point { x: 0.0, y: 0.0 }
        }

        // Another associated function, taking two arguments:
        fn new(x: f64, y: f64) -> Point {
            Point { x: x, y: y }
        }
    }
    ```

### Generics

 - a generic function named foo that takes an argument T of any type:
    `fn foo<T>(arg: T) { ... }`
