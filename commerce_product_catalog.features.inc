<?php
/**
 * @file
 * commerce_product_catalog.features.inc
 */

/**
 * Implementation of hook_commerce_product_default_types().
 */
function commerce_product_catalog_commerce_product_default_types() {
  $items = array(
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'module' => 'commerce_product_ui',
    ),
  );
  return $items;
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
