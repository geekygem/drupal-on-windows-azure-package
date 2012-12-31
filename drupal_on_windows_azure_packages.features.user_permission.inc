<?php
/**
 * @file
 * drupal_on_windows_azure_packages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupal_on_windows_azure_packages_user_default_permissions() {
  $permissions = array();

  // Exported permission: view disqus comments.
  $permissions['view disqus comments'] = array(
    'name' => 'view disqus comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'disqus',
  );

  return $permissions;
}
