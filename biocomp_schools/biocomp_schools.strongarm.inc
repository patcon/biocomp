<?php

/**
 * Implementation of hook_strongarm().
 */
function biocomp_schools_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_school';
  $strongarm->value = '[field_schoolname-formatted] ([field_address-city], [field_address-province])';

  $export['ant_pattern_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_school';
  $strongarm->value = '1';

  $export['ant_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_school';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'comment_settings' => '3',
    'menu' => '-1',
  );

  $export['content_extra_weights_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_school';
  $strongarm->value = array(
    'weight' => '0',
    'user_display' => 'full',
    'edit_link' => 0,
    'edit_tab' => 'sub',
    'add_link' => 1,
    'registration_use' => 1,
    'admin_user_create_use' => 1,
    'registration_hide' => array(),
    'values' => array(
      0 => 2,
      1 => 5,
      2 => 3,
      3 => 4,
    ),
  );

  $export['content_profile_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_school';
  $strongarm->value = 1;

  $export['content_profile_use_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_school';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_school'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_default';
  $strongarm->value = 1;

  $export['vertical_tabs_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_default_tab_school';
  $strongarm->value = 'Account info';

  $export['vertical_tabs_default_tab_school'] = $strongarm;
  return $export;
}
