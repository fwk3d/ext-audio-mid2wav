#if CODE

AUTORUN {
    recipe(
        // paths and extensions. final ziplevel
        "**.mid", 0,
        // conversion steps
        "ext/ext-audio-mid2wav/mid2wav.EXE INPUT OUTPUT.wav ext/ext-audio-mid2wav/FluidR3_GM.sf3\n"
    );
}

#endif
