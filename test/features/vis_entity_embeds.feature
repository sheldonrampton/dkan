@api
Feature: Visualization entity embed test.

  @fixme @dkanBug
    #TODO: Waiting for visualizations to be added
    # And I wait for "Add new pane" - not found after 10 seconds
  Scenario: Module visualization entity embed enabled by default
      Given "dkan_data_story" content:
          | title                           | author      | status   |
          | DKAN Data Story Test Story Post | admin       | 0        |
      And "ve_chart" content:
          | title                           | author      | status   |
          | Viz Entity Test Chart           | admin       | 0        |
      And I am logged in as a user with the "site manager" role
      When I am on "story/dkan-data-story-test-story-post"
      And I wait for "Customize this page"
      And I click "Customize this page"
      And I wait for "Add new pane"
      And I click "Add new pane"
      And I wait for "Please select a category from the left"
      Then I should see "Visualizations"

  @fixme @dkanBug
    #TODO: Waiting for visualizations to be added
    # When I click "Visualizations" - link not found
  Scenario: Use autocomplete field when adding viz_entity to a data story
      When I click "Visualizations"
      Then I wait for "Visualization embed"
      When I click "Visualization embed"
      Then I should see "Configure new Visualization embed"
      When I fill in "edit-local-source" with "Viz"
      And I wait for "2" seconds
      Then I should see "Viz Entity Test Chart"

  @fixme @dkanBug
    #TODO: Waiting for visualizations to be added
    #  When I click "Viz Entity Test Chart" - link not found
  Scenario: Embed ve_chart to a data story
      When I click "Viz Entity Test Chart"
      And I press "edit-return"
      Then I should see "Visualization embed"
