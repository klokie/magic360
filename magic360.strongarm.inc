<?php

/**
 * @file
 * magic360.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function magic360_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_magic360';
  $strongarm->value = 0;
  $export['comment_anonymous_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_magic360';
  $strongarm->value = 1;
  $export['comment_defaulmagic360t_mode_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_magic360';
  $strongarm->value = '50';
  $export['comment_default_per_page_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_magic360';
  $strongarm->value = 1;
  $export['comment_form_location_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_magic360';
  $strongarm->value = '1';
  $export['comment_preview_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_magic360';
  $strongarm->value = '0';
  $export['comment_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_magic360';
  $strongarm->value = 1;
  $export['comment_subject_field_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_magic360';
  $strongarm->value = array();
  $export['menu_options_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_magic360';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_magic360';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_magic360';
  $strongarm->value = '1';
  $export['node_preview_magic360'] = $strongarm;

  $strongarm = new stdClass();
  /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->disabled = FALSE;
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_magic360';
  $strongarm->value = 0;
  $export['node_submitted_magic360'] = $strongarm;

  return $export;
}

