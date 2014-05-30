(function ($) {
//    always wroute this strings
    Drupal.behaviors.addressBookConfirm = {
        attach: function (context, settings) {
            if (context == document) {

                $('.delete-button, #edit-actionviews-bulk-operations-delete-item').click(function(e){
                    console.log(e);
                    if(!confirm('Are you absolutely sure?')) {
                        e.preventDefault();
                    }
                });

            }
        }
    }

})(jQuery);