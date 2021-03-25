<?php

/**
 * @file
 * staff_committee.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function staff_committee_user_default_roles() {
  $roles = array();

  // Exported role: Committee Admin.
  $roles['Committee Admin'] = array(
    'name' => 'Committee Admin',
    'weight' => 35,
  );

  return $roles;
}
