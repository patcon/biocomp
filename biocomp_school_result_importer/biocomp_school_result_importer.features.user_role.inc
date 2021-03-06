<?php

/**
 * Implementation of hook_user_default_roles().
 */
function biocomp_school_result_importer_user_default_roles() {
  $roles = array();

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
