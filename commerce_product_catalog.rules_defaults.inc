<?php
/**
 * @file
 * commerce_product_catalog.rules_defaults.inc
 */

/**
 * Implementation of hook_default_rules_configuration().
 */
function commerce_product_catalog_default_rules_configuration() {
  $items = array();
  $items['rules_auto_delete_product_display'] = entity_import('rules_config', '{ "rules_auto_delete_product_display" : {
      "LABEL" : "Auto delete product display",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "commerce_product" ],
      "ON" : [ "commerce_product_delete" ],
      "DO" : [
        { "drupal_message" : { "message" : "\\u041e\\u0442\\u043e\\u0431\\u0440\\u0430\\u0436\\u0435\\u043d\\u0438\\u0435 \\u043f\\u0440\\u043e\\u0434\\u0443\\u043a\\u0442\\u0430 [product:type] \\u0443\\u0434\\u0430\\u043b\\u0451\\u043d\\u043e" } },
        { "entity_fetch" : {
            "USING" : { "type" : "commerce_product", "id" : [ "product:product-id" ] },
            "PROVIDE" : { "entity_fetched" : { "fetched_product" : "Fetched product" } }
          }
        }
      ]
    }
  }');
  $items['rules_create_a_product_display'] = entity_import('rules_config', '{ "rules_create_a_product_display" : {
      "LABEL" : "Create a product display",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "commerce_product" ],
      "ON" : [ "commerce_product_insert" ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "product_display",
              "param_title" : "[product:title]",
              "param_author" : [ "product:creator" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-commerce-ref" ],
            "value" : [ "product" ]
          }
        }
      ]
    }
  }');
  return $items;
}
