<?php
/**
 * @file
 * commerce_product_catalog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function commerce_product_catalog_user_default_roles() {
  $roles = array();

  // Exported role: content manager
  $roles['content manager'] = array(
    'name' => 'content manager',
    'weight' => '3',
  );

  // Exported role: store manager
  $roles['store manager'] = array(
    'name' => 'store manager',
    'weight' => '4',
  );

  return $roles;
}
