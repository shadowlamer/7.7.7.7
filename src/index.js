import $ from 'jquery';
import Keyboard from 'simple-keyboard';
import 'simple-keyboard/build/css/index.css';
import 'font-awesome/css/font-awesome.css'
import './index.css';

const origSpeccyWidth = 320;
const origSpeccyHeight = 240;
const keyboardHeight = 200;
const keyboardElement = $('#keyboard');
const speccyElement = $('#speccy');
const spacerElement = $('#spacer');

const keyCodes = {
    '{back}':  37,
    '{up}':    38,
    '{down}':  40,
    '{enter}': 13,
    '{break}': 48,
    '{run}':   82,
    1: 49,
    2: 50,
    3: 51,
    4: 52,
    5: 53,
    6: 54,
    7: 55,
    8: 56,
    9: 57
};

const keyboard = new Keyboard({
    onKeyPress: button => onKeyPress(button),
    layoutName: 'default',
    layout: {
        'default': [
            ' 3 ',
            '1 5 2',
            ' 4 ',
        ]
    },
    display: {
        '{1}': '<i class="fa fa-backward"></i>',
        '{2}': '<i class="fa fa-forward"></i>',
        '{3}': '<i class="fa fa-arrow-up"></i>',
        '{4}': '<i class="fa fa-arrow-down"></i>',
        '{5}': '<i class="fa fa-stop-circle-o"></i>',
    }

});

console.log(speccyElement);

const speccy = JSSpeccy(speccyElement[0], {
    autoLoadTapes: true,
    autoStart: true,
    machine: 128,
    zoom: 2,
    openUrl: 'tap/7777.tap',
});

keyboardElement.width(speccyElement.width() * 0.8);

function onKeyPress(button) {
    document.dispatchEvent(new KeyboardEvent('keydown', {
        keyCode: keyCodes[button]
    }));
    setTimeout(() => {
        document.dispatchEvent(new KeyboardEvent('keyup', {
            keyCode: keyCodes[button]
        }));
    }, 100);
}

function calcScaleFactor() {
    const scaleFactor = Math.min(
        ($(window).height() - keyboardHeight) / origSpeccyHeight,
        $(window).width() / origSpeccyWidth
    );
    spacerElement.height($(window).height() - keyboardHeight - origSpeccyHeight * scaleFactor + 24);
    return scaleFactor;
}
