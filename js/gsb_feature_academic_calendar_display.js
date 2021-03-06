(function ($) {

  Drupal.behaviors.gsb_feature_academic_calendar_display = {
    attach: function (context, settings) {
      var total_div, item;
      total_div = $('div.view-grouping').length;
      item = 1;
      $previous = '<a class="calendar-prev" href="#">Current Academic Year</a>';
      $next = '<a class="calendar-next" href="#">Next Academic Year</a>';

      $('.view-id-academic_calendar .view-content').append($previous);
      $('.view-id-academic_calendar .view-content').append($next);

      $('div.view-grouping:not(:eq(0))').hide();
      $('.calendar-prev').hide();
      if (total_div === 1)
      {
        $('.calendar-prev').hide();
        $('.calendar-next').hide();

      }
      $('.calendar-prev').click(function(e) {
        e.preventDefault();
        item--;
        $('.calendar-next').show();
        if (item === 1) {
          $(this).hide();
        }
        if (item > 1) {
          $(this).show();
        }
        $('div.view-grouping').hide();
        $('div.view-grouping:eq(' + (item - 1) + ')').show();
        $('html, body').animate({ scrollTop: 0 }, 'slow');

      });
      $('.calendar-next').click(function(e) {
        e.preventDefault();
        item++;
        $('.calendar-prev').show();
        if (item === total_div) {
          $(this).hide();
        }
        if (item < total_div) {
          $(this).show();
        }
        $('div.view-grouping').hide();
        $('div.view-grouping:eq(' + (item - 1) + ')').show();
        $('html, body').animate({ scrollTop: 0 }, 'slow');

      });



    }
  };

})(jQuery);

