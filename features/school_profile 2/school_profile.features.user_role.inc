<?php

/**
 * Implementation of hook_user_default_roles().
 */
function school_profile_user_default_roles() {
  $roles = array();

  // Exported role: school
  $roles['school'] = array(
    'name' => 'school',
  );

  return $roles;
}
