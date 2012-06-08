<?php

/**
 * @file
 * magic360.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function magic360_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|magic360|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'magic360';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|magic360|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function magic360_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|magic360|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'magic360';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_magic360_images',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_magic360_images' => 'ds_content',
      'title' => 'ds_content',
    ),
    'limit' => array(
      'field_magic360_images' => '1',
    ),
    'classes' => array(),
  );
  $export['node|magic360|teaser'] = $ds_layout;

  return $export;
}

