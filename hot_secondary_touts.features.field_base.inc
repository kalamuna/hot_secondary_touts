<?php
/**
 * @file
 * hot_secondary_touts.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hot_secondary_touts_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_basic_icon'
  $field_bases['field_basic_icon'] = array(
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
  );

  // Exported field_base: 'field_basic_link'
  $field_bases['field_basic_link'] = array(
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
  );

  return $field_bases;
}
