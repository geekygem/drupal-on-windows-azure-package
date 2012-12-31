<?php
/**
 * @file
 * drupal_on_windows_azure_packages.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function drupal_on_windows_azure_packages_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'home_layout';
  $delta->name = 'home_layout';
  $delta->description = 'homepage layout';
  $delta->theme = 'bootstrap';
  $delta->mode = 'override';
  $delta->parent = '';
  $delta->settings = array();
  $export['home_layout'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'sidebar_layout';
  $delta->name = 'sidebar_layout';
  $delta->description = '';
  $delta->theme = 'bootstrap';
  $delta->mode = 'override';
  $delta->parent = '';
  $delta->settings = array();
  $export['sidebar_layout'] = $delta;

  return $export;
}
