#if CODE

AUTORUN {
    recipe(
        // paths and extensions. expected errorlevel
        "**.mid", 0,
        // conversion steps
        "ext/ext-audio-mid2wav/mid2wav.EXE INPUT OUTPUT ext/ext-audio-mid2wav/FluidR3_GM.sf3\n"
    );
}

#endif
