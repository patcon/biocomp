<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function biocomp_schools_fieldgroup_default_groups() {
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
      '1' => 'field_school_code',
      '2' => 'field_address',
      '3' => 'field_phone',
      '4' => 'field_fax',
    ),
  );

  // Exported group: group_name_alt
  $groups['student-group_name_alt'] = array(
    'group_type' => 'standard',
    'type_name' => 'student',
    'group_name' => 'group_name_alt',
    'label' => 'Alternate name',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
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
    'weight' => '0',
    'fields' => array(),
  );

  // Exported group: group_student_name
  $groups['student-group_student_name'] = array(
    'group_type' => 'standard',
    'type_name' => 'student',
    'group_name' => 'group_student_name',
    'label' => 'Legal name',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => 'We\'ll use this full name to issue a cheque if you place, so please keep it formal!',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-1',
    'fields' => array(),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alternate name');
  t('Coordinator Information');
  t('Legal name');
  t('School Information');

  return $groups;
}
