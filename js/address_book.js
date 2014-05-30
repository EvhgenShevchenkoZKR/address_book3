(function ($) {
//    always wroute this strings
    Drupal.behaviors.addressBook = {
        attach: function (context, settings) {
            if (context == document) {

                $('.field-name-field-first-name, .field-name-field-last-name, .field-name-field-category')
                .wrapAll($('<div>', {
                   class: 'addressbook_step',
                   id: 'addressbook_step_1'
                }));

                $('.field-name-field-photo')
                .wrapAll($('<div>', {
                    class: 'addressbook_step',
                    id: 'addressbook_step_2'
                }));

                $('.field-name-field-email, .field-name-field-phone, .field-name-field-birthday, .field-name-field-notes, #edit-actions')
                .wrapAll($('<div>', {
                    class: 'addressbook_step',
                    id: 'addressbook_step_3'
                }));


                $('#addressbook_step_1').insertBefore('#addressbook_step_2').append($('<input>', {
                    class: 'addressbook_next',
                    type: 'submit',
                    value: 'Next'
                }));

                $('#addressbook_step_3').insertAfter('#addressbook_step_2');

                $('#addressbook_step_2').append($('<input>', {
                    class: 'addressbook_prev',
                    type: 'submit',
                    value: 'Previous'
                })).append($('<input>', {
                    class: 'addressbook_next',
                    type: 'submit',
                    value: 'Next'
                }));

                $('<input>', {
                    class: 'addressbook_prev',
                    type: 'submit',
                    value: 'Previous'
                }).insertBefore('#edit-actions');


                $('#addressbook_step_2, #addressbook_step_3').hide();

                $('.addressbook_next').bind('click', function (e) {
                    $(this).parent().hide().next('.addressbook_step').show();
                    e.preventDefault();
                    return false;
                });

                $('.addressbook_prev').bind('click', function (e) {
                    $(this).parent().hide().prev('.addressbook_step').show();
                    e.preventDefault();
                    return false;
                });


            }
        }
    }

})(jQuery);