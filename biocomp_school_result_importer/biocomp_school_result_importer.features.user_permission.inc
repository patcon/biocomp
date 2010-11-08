<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function biocomp_school_result_importer_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear results_school feeds
  $permissions['clear results_school feeds'] = array(
    'name' => 'clear results_school feeds',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: import results_school feeds
  $permissions['import results_school feeds'] = array(
    'name' => 'import results_school feeds',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  return $permissions;
}
