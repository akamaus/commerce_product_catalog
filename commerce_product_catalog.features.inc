<?php
/**
 * @file
 * commerce_product_catalog.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function commerce_product_catalog_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function commerce_product_catalog_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Отображение продукта'),
      'base' => 'node_content',
      'description' => t('Фронтенд продукта, который показывается пользователям в каталоге'),
      'has_title' => '1',
      'title_label' => t('Наименование'),
      'help' => '',
    ),
  );
  return $items;
}
