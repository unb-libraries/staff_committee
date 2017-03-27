<?php
/**
 * @file
 * staff_committee.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function staff_committee_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create committee_announcements content'.
  $permissions['create committee_announcements content'] = array(
    'name' => 'create committee_announcements content',
    'roles' => array(
      'Committee Admin' => 'Committee Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create committee_child_page content'.
  $permissions['create committee_child_page content'] = array(
    'name' => 'create committee_child_page content',
    'roles' => array(
      'Committee Admin' => 'Committee Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create committee_parent_page content'.
  $permissions['create committee_parent_page content'] = array(
    'name' => 'create committee_parent_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any committee_announcements content'.
  $permissions['delete any committee_announcements content'] = array(
    'name' => 'delete any committee_announcements content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any committee_child_page content'.
  $permissions['delete any committee_child_page content'] = array(
    'name' => 'delete any committee_child_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any committee_parent_page content'.
  $permissions['delete any committee_parent_page content'] = array(
    'name' => 'delete any committee_parent_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own committee_announcements content'.
  $permissions['delete own committee_announcements content'] = array(
    'name' => 'delete own committee_announcements content',
    'roles' => array(
      'Committee Admin' => 'Committee Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own committee_child_page content'.
  $permissions['delete own committee_child_page content'] = array(
    'name' => 'delete own committee_child_page content',
    'roles' => array(
      'Committee Admin' => 'Committee Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own committee_parent_page content'.
  $permissions['delete own committee_parent_page content'] = array(
    'name' => 'delete own committee_parent_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any committee_announcements content'.
  $permissions['edit any committee_announcements content'] = array(
    'name' => 'edit any committee_announcements content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any committee_child_page content'.
  $permissions['edit any committee_child_page content'] = array(
    'name' => 'edit any committee_child_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any committee_parent_page content'.
  $permissions['edit any committee_parent_page content'] = array(
    'name' => 'edit any committee_parent_page content',
    'roles' => array(
      'Committee Admin' => 'Committee Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own committee_announcements content'.
  $permissions['edit own committee_announcements content'] = array(
    'name' => 'edit own committee_announcements content',
    'roles' => array(
      'Committee Admin' => 'Committee Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own committee_child_page content'.
  $permissions['edit own committee_child_page content'] = array(
    'name' => 'edit own committee_child_page content',
    'roles' => array(
      'Committee Admin' => 'Committee Admin',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own committee_parent_page content'.
  $permissions['edit own committee_parent_page content'] = array(
    'name' => 'edit own committee_parent_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
