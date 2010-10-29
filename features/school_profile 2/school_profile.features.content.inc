<?php

/**
 * Implementation of hook_content_default_fields().
 */
function school_profile_content_default_fields() {
  $fields = array();

  // Exported field: field_address
  $fields['school-field_address'] = array(
    'field_name' => 'field_address',
    'type_name' => 'school',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_school',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'country' => array(
            'collect' => '2',
            'default' => 'ca',
            'weight' => '-100',
          ),
          'name' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '-99',
          ),
          'street' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '-98',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '-97',
          ),
          'city' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '-96',
          ),
          'province' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '-95',
          ),
          'postal_code' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '-94',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '-93',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'name' => 'name',
          'map_link' => 'map_link',
          'coords' => 'coords',
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
          'country' => 0,
          'locpick' => 0,
          'province_name' => 0,
          'country_name' => 0,
        ),
      ),
    ),
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'country' => 'us',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'lid' => array(
                  'default' => FALSE,
                ),
                'name' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 2,
                ),
                'street' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 4,
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 6,
                ),
                'city' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 8,
                ),
                'province' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 10,
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 12,
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => 1,
                  'weight' => 14,
                ),
                'locpick' => array(
                  'default' => FALSE,
                  'collect' => 1,
                  'weight' => 20,
                  'nodiff' => TRUE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mailing address',
      'weight' => '-1',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_fax
  $fields['school-field_fax'] = array(
    'field_name' => 'field_fax',
    'type_name' => 'school',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_school',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '30',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fax][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Fax',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name_first
  $fields['school-field_name_first'] = array(
    'field_name' => 'field_name_first',
    'type_name' => 'school',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_coord',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name_first][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First name',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name_last
  $fields['school-field_name_last'] = array(
    'field_name' => 'field_name_last',
    'type_name' => 'school',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_coord',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name_last][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Last name',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_phone
  $fields['school-field_phone'] = array(
    'field_name' => 'field_phone',
    'type_name' => 'school',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_school',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '30',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_schoolname
  $fields['school-field_schoolname'] = array(
    'field_name' => 'field_schoolname',
    'type_name' => 'school',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_school',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_schoolname][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'School',
      'weight' => '-2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Fax');
  t('First name');
  t('Last name');
  t('Mailing address');
  t('Phone');
  t('School');

  return $fields;
}
