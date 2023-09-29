#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RtAudio.h"
#include "SKINImsg.h"
#include "SKINI.cpp"
#include "FileWvOut.h"
#include "FileWvIn.h"
#include "DelayL.h"
#include "Blit.h"

using namespace stk;

int main()
{
    // Initialize random seed
    srand(time(nullptr));

    // Initialize RtAudio
    RtAudio audio;
    if (audio.getDeviceCount() < 1) {
        std::cout << "No audio devices found!" << std::endl;
        return 1;
    }

    // Set up the audio stream parameters
    RtAudio::StreamParameters parameters;
    parameters.deviceId = audio.getDefaultOutputDevice();
    parameters.nChannels = 1; // Mono output
    parameters.firstChannel = 0;
    unsigned int bufferFrames = 256;
    double sampleRate = 44100.0;

    // Initialize RtAudio stream
    try {
        audio.openStream(&parameters, nullptr, RTAUDIO_FLOAT64, sampleRate, &bufferFrames, nullptr, nullptr);
        audio.startStream();
    } catch (RtAudioError& e) {
        e.printMessage();
        return 1;
    }

    // Initialize STK objects
    FileWvOut output;
    DelayL delay;
    Blit catSound, dogSound;

    catSound.setFrequency(500); // Adjust the frequency for the cat sound
    dogSound.setFrequency(400); // Adjust the frequency for the dog sound

    while (true) {
        char choice;
        std::cout << "Choose an animal sound: (c)at or (d)og (q to quit): ";
        std::cin >> choice;

        if (choice == 'q') {
            break;
        } else if (choice == 'c') {
            catSound.noteOn(60); // Play the cat sound
        } else if (choice == 'd') {
            dogSound.noteOn(60); // Play the dog sound
        }

        // Run the audio stream for a short duration
        try {
            audio.tick();
        } catch (RtAudioError& e) {
            e.printMessage();
            break;
        }
    }

    // Stop and close the audio stream
    audio.stopStream();
    audio.closeStream();

    return 0;
}
