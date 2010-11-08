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

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: school
  $roles['school'] = array(
    'name' => 'school',
  );

  // Exported role: student
  $roles['student'] = array(
    'name' => 'student',
  );

  return $roles;
}
