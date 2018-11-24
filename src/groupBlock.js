function _groupBlocks(statements) {
	let ret = []
	let stmt
	while (stmt = statements.shift()) {
		if (stmt.t == 'BlankLine') return ret
		ret.push(stmt)
		if (stmt.t == 'If' || stmt.t == 'Else' || stmt.t == 'Loop' || stmt.t == 'FunctionDeclaration') {
			ret.push({
				t: 'Block',
				s: _groupBlocks(statements),
			})
		}
	}
	return ret
}

module.exports = function groupBlocks(statements) {
	const ret = []
	while (statements.length !== 0) {
		_groupBlocks(statements).forEach(s => ret.push(s))
	}
	return ret
}
