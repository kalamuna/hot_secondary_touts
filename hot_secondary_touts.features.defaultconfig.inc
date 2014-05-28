<?php
/**
 * @file
 * hot_secondary_touts.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hot_secondary_touts_defaultconfig_features() {
  return array(
    'hot_secondary_touts' => array(
      'field_default_fields' => 'field_default_fields',
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_field_default_fields().
 */
function hot_secondary_touts_defaultconfig_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-hot_secondary_touts-field_basic_icon'.
  $fields['fieldable_panels_pane-hot_secondary_touts-field_basic_icon'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_basic_icon',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'icon_field',
      'settings' => array(
        'bundle' => NULL,
        'icon' => NULL,
      ),
      'translatable' => 0,
      'type' => 'icon_field',
    ),
    'field_instance' => array(
      'bundle' => 'hot_secondary_touts',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'icon_field',
          'settings' => array(
            'link_to_content' => FALSE,
          ),
          'type' => 'icon_field_default',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_icon',
      'label' => 'Icon',
      'required' => 0,
      'settings' => array(
        'bundle' => NULL,
        'icon' => NULL,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'icon_field',
        'settings' => array(),
        'type' => 'icon_field',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hot_secondary_touts-field_basic_link'.
  $fields['fieldable_panels_pane-hot_secondary_touts-field_basic_link'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_basic_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => 0,
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => 0,
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'hot_secondary_touts',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_basic_link',
      'label' => 'Link',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'linkit' => array(
          'enable' => 1,
          'insert_plugin' => 'raw_url',
        ),
        'rel_remove' => 'default',
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => 3,
      ),
    ),
  );

  // Exported field: 'fieldable_panels_pane-hot_secondary_touts-field_hot_styles'.
  $fields['fieldable_panels_pane-hot_secondary_touts-field_hot_styles'] = array(
    'field_config' => array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'field_hot_styles',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'student-parent' => '<span class="text-student-parent">Students & Parents</span>',
          'adult' => '<span class="text-adult">Adult Readers</span>',
          'educator' => '<span class="text-educator">Educators</span>',
          'volunteer' => '<span class="text-volunteer">Volunteer</span>',
          'about' => '<span class="text-about">About/Help</span>',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => 0,
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'hot_secondary_touts',
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'field_hot_styles',
      'label' => 'Style',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => 1,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Icon');
  t('Link');
  t('Style');

  return $fields;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function hot_secondary_touts_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_fieldable_panels_pane__hot_secondary_touts';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_fieldable_panels_pane__hot_secondary_touts'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hot_secondary_touts_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fieldable hot_secondary_touts'.
  $permissions['create fieldable hot_secondary_touts'] = array(
    'name' => 'create fieldable hot_secondary_touts',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'delete fieldable hot_secondary_touts'.
  $permissions['delete fieldable hot_secondary_touts'] = array(
    'name' => 'delete fieldable hot_secondary_touts',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: 'edit fieldable hot_secondary_touts'.
  $permissions['edit fieldable hot_secondary_touts'] = array(
    'name' => 'edit fieldable hot_secondary_touts',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
