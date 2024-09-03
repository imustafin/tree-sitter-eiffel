const assert = require("node:assert");
const { test } = require("node:test");
const { readFileSync, readdirSync } = require('node:fs');
const execSync = require('node:child_process').execSync;

const parsingDir = 'test/parsing/';
for (const entry of readdirSync(parsingDir)) {
  if (!entry.endsWith('.e')) {
    continue;
  }
  test(`test parsing/${entry}`, () => {
    const outName = entry.split('.').slice(0, -1).join() + '.out';
    const expected = readFileSync(parsingDir + outName, 'utf8').trim();

    const cmd = `tree-sitter parse "${parsingDir}${entry}"`;
    const stdout  = execSync(cmd).toString();
    const out = stdout.trim();

    assert.strictEqual(out, expected);
  });
}
