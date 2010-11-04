<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function biocomp_schools_importer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "feeds_tamper" && $api == "feeds_tamper_default_instances") {
    return array("version" => 1);
  }
}
