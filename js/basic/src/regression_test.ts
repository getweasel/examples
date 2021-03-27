/**
 * Copyright 2018-2020 Pejman Ghorbanzade. All rights reserved.
 */

import * as weasel from '@getweasel/node'
import { parse_profile } from './code_under_test'

weasel.configure({
  version: '1.0'
})

for (const username of [ 'rweasley', 'hpotter', 'hgranger' ]) {
  weasel.declare_testcase(username)

  const wizard = parse_profile(username)
  weasel.add_result('fullname', wizard.username)
  weasel.add_result('height', wizard.height)
  weasel.add_result('weight', wizard.weight)
  weasel.add_result('birth_date', wizard.dob)
}

weasel.post().then(console.log)
