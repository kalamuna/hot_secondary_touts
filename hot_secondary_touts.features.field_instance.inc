<?php
/**
 * @file
 * hot_secondary_touts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hot_secondary_touts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-hot_secondary_touts-field_basic_icon'
  $field_instances['fieldable_panels_pane-hot_secondary_touts-field_basic_icon'] = array(
    'bundle' => 'hot_secondary_touts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'icon_field',
        'settings' => array(
          'link_to_content' => 0,
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
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_secondary_touts-field_basic_link'
  $field_instances['fieldable_panels_pane-hot_secondary_touts-field_basic_link'] = array(
    'bundle' => 'hot_secondary_touts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_secondary_touts-field_hot_styles'
  $field_instances['fieldable_panels_pane-hot_secondary_touts-field_hot_styles'] = array(
    'bundle' => 'hot_secondary_touts',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Icon');
  t('Link');
  t('Style');

  return $field_instances;
}
