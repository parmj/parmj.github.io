			
	$( ".event-type-select" ).change(function() {
	  var selectedEventType = this.options[this.selectedIndex].value;
	  console.log(selectedEventType);
	  if (selectedEventType == "all") {
	    $('.port-item').removeClass('hidden');
	  } else {
	    $('.port-item').addClass('hidden');
	    $('.portfolio div[data-eventtype="' + selectedEventType + '"]').removeClass('hidden');
	  }
	});