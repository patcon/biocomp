<?php

/**
 * Implementation of hook_user_default_roles().
 */
function biocomp_user_default_roles() {
  $roles = array();

  // Exported role: admin
  $roles['admin'] = array(
    'name' => 'admin',
  );

  return $roles;
}
