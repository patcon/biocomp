<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function biocomp_schools_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'school',
    ),
  );

  return $permissions;
}
