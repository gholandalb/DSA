<h2><a href="https://codeforces.com/contest/1883/problem/A" target="_blank" rel="noopener noreferrer">1883A — Morning</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1883A](https://codeforces.com/contest/1883/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Morning</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a four-digit pin code consisting of digits from $$$0$$$ to $$$9$$$ that needs to be entered. Initially, the cursor points to the digit $$$1$$$. In one second, you can perform exactly one of the following two actions:</p><ul><li> Press the cursor to display the current digit,</li><li> Move the cursor to any adjacent digit.</li></ul><center> <img class="tex-graphics" src="https://espresso.codeforces.com/c4411622f09de0cbd488d8ce5e86c51e2223ee17.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>The image above shows the device you are using to enter the pin code. For example, for the digit $$$5$$$, the adjacent digits are $$$4$$$ and $$$6$$$, and for the digit $$$0$$$, there is only one adjacent digit, $$$9$$$.</p><p>Determine the minimum number of seconds required to enter the given four-digit pin code.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) - the number of the test cases. This is followed by their description.</p><p>The single line of each test case describes the pin code as a string of length $$$4$$$, consisting of digits from $$$0$$$ to $$$9$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum number of seconds required to enter the given pin code.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0041402287876339483" id="id0017496252678307345" class="input-output-copier">Copy</div></div><pre id="id0041402287876339483"><div class="test-example-line test-example-line-even test-example-line-0">10</div><div class="test-example-line test-example-line-odd test-example-line-1">1111</div><div class="test-example-line test-example-line-even test-example-line-2">1236</div><div class="test-example-line test-example-line-odd test-example-line-3">1010</div><div class="test-example-line test-example-line-even test-example-line-4">1920</div><div class="test-example-line test-example-line-odd test-example-line-5">9273</div><div class="test-example-line test-example-line-even test-example-line-6">0000</div><div class="test-example-line test-example-line-odd test-example-line-7">7492</div><div class="test-example-line test-example-line-even test-example-line-8">8543</div><div class="test-example-line test-example-line-odd test-example-line-9">0294</div><div class="test-example-line test-example-line-even test-example-line-10">8361</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005795497364896102" id="id005653937650289055" class="input-output-copier">Copy</div></div><pre id="id005795497364896102">4
9
31
27
28
13
25
16
33
24
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the cursor needs to be pressed $$$4$$$ times.</p><p>In the second test case, it can be done in $$$9$$$ seconds as follows:</p><ul><li> Press the cursor.</li><li> Move the cursor to the digit $$$2$$$.</li><li> Press the cursor.</li><li> Move the cursor to the digit $$$3$$$.</li><li> Press the cursor.</li><li> Move the cursor to the digit $$$4$$$.</li><li> Move the cursor to the digit $$$5$$$.</li><li> Move the cursor to the digit $$$6$$$.</li><li> Press the cursor.</li></ul></div>