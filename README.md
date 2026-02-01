# Loading Bar

A program for loading bars in the terminal using text symbols.

- It will take the given time and randomize the bar speed accordingly, to show the illusion of progress.
- No requirements.

Usage:

<code style="color : green">run(10.0, "Loading", "Finished", 1, 1, 1, 1);</code>

- For a ten second loading bar
- with "Loading" as the message displayed while loading
- And "Finished" as the message displayed when finished.
- The 1s (or 0s) after that toggle the following in order:
    - displaying the percentage
    - dispalying message 1
    - displaying message 2
    - displaying how long it took


So the result would be the following:

[================================================= ] (Loading) 100.0% <br>
Finished (in 10s)