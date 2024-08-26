// Script to run tests in the test/parsing folder

const { readFileSync, readdirSync } = require('node:fs');
const execSync = require('node:child_process').execSync;

(async () => {
  const failures = [];

  const parsingDir = 'test/parsing/';

  for (const entry of readdirSync(parsingDir)) {
    if (!entry.endsWith('.e')) {
      continue;
    }
    const outName = entry.split('.').slice(0, -1).join() + '.out';
    const expected = readFileSync(parsingDir + outName, 'utf8').trim();

    const cmd = `tree-sitter parse "${parsingDir}${entry}"`;
    const stdout  = execSync(cmd).toString();
    const out = stdout.trim();

    if (out === expected) {
      console.log(entry, 'passed');
    } else {
      console.log('=====');
      console.error(entry, 'failed');
      console.log('EXPECTED:');
      console.log(expected);
      console.log('ACTUAL:');
      console.error(out);

      failures.push(entry);
    }
  }

  if (failures.length > 0) {
    process.exit(1);
  }
})();
