<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function school_profile_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_coord
  $groups['school-group_coord'] = array(
    'group_type' => 'standard',
    'type_name' => 'school',
    'group_name' => 'group_coord',
    'label' => 'Coordinator Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_name_first',
      '1' => 'field_name_last',
    ),
  );

  // Exported group: group_school
  $groups['school-group_school'] = array(
    'group_type' => 'standard',
    'type_name' => 'school',
    'group_name' => 'group_school',
    'label' => 'School Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_schoolname',
      '1' => 'field_address',
      '2' => 'field_phone',
      '3' => 'field_fax',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Coordinator Information');
  t('School Information');

  return $groups;
}
