<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function biocomp_schools_user_default_permissions() {
  $permissions = array();

  // Exported permission: create school content
  $permissions['create school content'] = array(
    'name' => 'create school content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any school content
  $permissions['delete any school content'] = array(
    'name' => 'delete any school content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any school content
  $permissions['edit any school content'] = array(
    'name' => 'edit any school content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own school content
  $permissions['edit own school content'] = array(
    'name' => 'edit own school content',
    'roles' => array(
      '0' => 'school',
    ),
  );

  return $permissions;
}
