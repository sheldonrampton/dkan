<?php
/**
 * @file
 * dkan_sitewide_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dkan_sitewide_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'datasets';
  $page->task = 'page';
  $page->admin_title = 'Datasets';
  $page->admin_description = '';
  $page->path = 'dataset';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Datasets',
    'name' => 'main-menu',
    'weight' => '-6',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_datasets_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'datasets';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_bryant';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'sidebar_left' => array(
        'type' => 'region',
        'title' => 'sidebar-left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar_left' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
    'sidebar' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1ebec5e-aed7-4ebc-82de-7e9eac72c35a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1ee5d84c-1ea4-4726-ba4d-291779f9c493';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'dkan_datasets-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ee5d84c-1ea4-4726-ba4d-291779f9c493';
    $display->content['new-1ee5d84c-1ea4-4726-ba4d-291779f9c493'] = $pane;
    $display->panels['contentmain'][0] = 'new-1ee5d84c-1ea4-4726-ba4d-291779f9c493';
    $pane = new stdClass();
    $pane->pid = 'new-af542600-62f2-4baf-b2c3-12b9ee1d59ba';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-dqCRnp6cKP1cSzAsNB6zqFtY9AVEa0mp';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'af542600-62f2-4baf-b2c3-12b9ee1d59ba';
    $display->content['new-af542600-62f2-4baf-b2c3-12b9ee1d59ba'] = $pane;
    $display->panels['sidebar'][0] = 'new-af542600-62f2-4baf-b2c3-12b9ee1d59ba';
    $pane = new stdClass();
    $pane->pid = 'new-549159dd-e073-4e10-9307-b13fad742409';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-yW6mJ3GaJF0LypnLPa433Bf9GI8QdWd9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '549159dd-e073-4e10-9307-b13fad742409';
    $display->content['new-549159dd-e073-4e10-9307-b13fad742409'] = $pane;
    $display->panels['sidebar'][1] = 'new-549159dd-e073-4e10-9307-b13fad742409';
    $pane = new stdClass();
    $pane->pid = 'new-6d7e00a0-22d3-4c44-b96e-f4a08ef807ef';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-NbnMlu4YH5xxKGpioOhBeBZI0jn060c0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6d7e00a0-22d3-4c44-b96e-f4a08ef807ef';
    $display->content['new-6d7e00a0-22d3-4c44-b96e-f4a08ef807ef'] = $pane;
    $display->panels['sidebar'][2] = 'new-6d7e00a0-22d3-4c44-b96e-f4a08ef807ef';
    $pane = new stdClass();
    $pane->pid = 'new-b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-VBBDnNWYupC3PxCnXOq4e4ds4sAU4W7s';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345';
    $display->content['new-b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345'] = $pane;
    $display->panels['sidebar'][3] = 'new-b0fb8ba0-c78f-4b2e-9ae3-e4cc61f06345';
    $pane = new stdClass();
    $pane->pid = 'new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-wsVI1ENUXwf4Rz08n9fg2WvfQ0Gs5h2a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
    $display->content['new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8'] = $pane;
    $display->panels['sidebar'][4] = 'new-51f2a5b5-ab6a-474a-b0f8-4a0b297160a8';
    $pane = new stdClass();
    $pane->pid = 'new-6c414a50-f4f5-4a1d-a7dd-e552e12a208a';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-n9S7gglvd3lMrVMu760QrIyeZAKByKsX';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '6c414a50-f4f5-4a1d-a7dd-e552e12a208a';
    $display->content['new-6c414a50-f4f5-4a1d-a7dd-e552e12a208a'] = $pane;
    $display->panels['sidebar'][5] = 'new-6c414a50-f4f5-4a1d-a7dd-e552e12a208a';
    $pane = new stdClass();
    $pane->pid = 'new-0541c9a5-2e8c-488f-8db4-4cd064bdc903';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-y0bmt1wN50B9oCuMeoazc1hpKiMkSQ2A';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0541c9a5-2e8c-488f-8db4-4cd064bdc903';
    $display->content['new-0541c9a5-2e8c-488f-8db4-4cd064bdc903'] = $pane;
    $display->panels['sidebar'][6] = 'new-0541c9a5-2e8c-488f-8db4-4cd064bdc903';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['datasets'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'welcome';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'full_width';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
      'footer' => NULL,
      'top-first' => NULL,
      'top-second' => NULL,
      'bottom-first' => NULL,
      'bottom-second' => NULL,
      'bottom-third' => NULL,
      'bottom-fourth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '53a00d34-5bc4-4b11-aad6-a5615c73e388';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8aa431e2-a9e8-4d73-b043-aa57ecbf0947';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-front_page_group_grid-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8aa431e2-a9e8-4d73-b043-aa57ecbf0947';
    $display->content['new-8aa431e2-a9e8-4d73-b043-aa57ecbf0947'] = $pane;
    $display->panels['middle'][0] = 'new-8aa431e2-a9e8-4d73-b043-aa57ecbf0947';
    $pane = new stdClass();
    $pane->pid = 'new-d3655ff2-8c3c-4a0b-b492-8aa98ea1b7f3';
    $pane->panel = 'top-first';
    $pane->type = 'block';
    $pane->subtype = 'dkan_sitewide_demo_front-dkan_demo_front';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd3655ff2-8c3c-4a0b-b492-8aa98ea1b7f3';
    $display->content['new-d3655ff2-8c3c-4a0b-b492-8aa98ea1b7f3'] = $pane;
    $display->panels['top-first'][0] = 'new-d3655ff2-8c3c-4a0b-b492-8aa98ea1b7f3';
    $pane = new stdClass();
    $pane->pid = 'new-e9a59ddf-15b0-4a29-8ef6-ef460ba539e0';
    $pane->panel = 'top-second';
    $pane->type = 'block';
    $pane->subtype = 'dkan_sitewide_demo_front-dkan_add_front';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e9a59ddf-15b0-4a29-8ef6-ef460ba539e0';
    $display->content['new-e9a59ddf-15b0-4a29-8ef6-ef460ba539e0'] = $pane;
    $display->panels['top-second'][0] = 'new-e9a59ddf-15b0-4a29-8ef6-ef460ba539e0';
    $pane = new stdClass();
    $pane->pid = 'new-949696cf-520f-40a4-af80-725bca8b2f13';
    $pane->panel = 'top-second';
    $pane->type = 'block';
    $pane->subtype = 'views-popular_tags-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '949696cf-520f-40a4-af80-725bca8b2f13';
    $display->content['new-949696cf-520f-40a4-af80-725bca8b2f13'] = $pane;
    $display->panels['top-second'][1] = 'new-949696cf-520f-40a4-af80-725bca8b2f13';
    $pane = new stdClass();
    $pane->pid = 'new-11969a4b-795a-40df-8d66-91f6daec6c20';
    $pane->panel = 'top-second';
    $pane->type = 'block';
    $pane->subtype = 'dkan_sitewide-dkan_sitewide_search_bar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '11969a4b-795a-40df-8d66-91f6daec6c20';
    $display->content['new-11969a4b-795a-40df-8d66-91f6daec6c20'] = $pane;
    $display->panels['top-second'][2] = 'new-11969a4b-795a-40df-8d66-91f6daec6c20';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-e9a59ddf-15b0-4a29-8ef6-ef460ba539e0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'groups';
  $page->task = 'page';
  $page->admin_title = 'Groups';
  $page->admin_description = '';
  $page->path = 'groups';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Groups',
    'name' => 'main-menu',
    'weight' => '2',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_groups_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'groups';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Groups';
  $display->uuid = 'a3180d51-5e38-4887-8a53-9f3561b1a654';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-510a2eff-125e-4cf3-a465-976055bf58a4';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'views-dkan_groups-block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '510a2eff-125e-4cf3-a465-976055bf58a4';
    $display->content['new-510a2eff-125e-4cf3-a465-976055bf58a4'] = $pane;
    $display->panels['contentmain'][0] = 'new-510a2eff-125e-4cf3-a465-976055bf58a4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['groups'] = $page;

  return $pages;

}
