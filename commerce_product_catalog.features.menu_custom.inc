<?php
/**
 * @file
 * commerce_product_catalog.features.menu_custom.inc
 */

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function commerce_product_catalog_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-tovari
  $menus['menu-tovari'] = array(
    'menu_name' => 'menu-tovari',
    'title' => 'Товары',
    'description' => 'Разделы каталога',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Разделы каталога');
  t('Товары');


  return $menus;
}
