<?php

/**
 * Implementation of hook_strongarm().
 */
function biocomp_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_settings';
  $strongarm->value = array(
    'view' => array(
      'competition' => array(
        0 => 1,
        1 => 2,
      ),
      'school' => array(
        0 => 1,
        1 => 2,
      ),
    ),
    'view_own' => array(
      'competition' => array(
        0 => 1,
        1 => 2,
      ),
      'school' => array(
        0 => 1,
        1 => 2,
      ),
    ),
    'per_node' => array(
      'competition' => 0,
      'school' => 0,
    ),
    'priority' => array(
      'competition' => '0',
      'school' => '0',
    ),
  );

  $export['content_access_settings'] = $strongarm;
  return $export;
}
