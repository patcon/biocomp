<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function biocomp_school_result_importer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "data" && $api == "data_default") {
    return array("version" => 1);
  }
  elseif ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}
