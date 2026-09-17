/*
 * de_mac.h — Keycodes für das deutsche Tastaturlayout unter macOS
 *
 * ZMK sendet HID-Positionscodes (US-Belegung). Ist am Mac "Deutsch" als
 * Eingabequelle gewählt, ergibt z. B. &kp Y ein "z" und &kp SEMI ein "ö".
 * Dieser Header übersetzt lesbare Namen (DE_…) in die richtigen Codes.
 *
 * Hinweis: joelspadins keys_de.h ist für Windows/Linux (AltGr). Auf dem Mac
 * liegen @ [ ] { } \ | ~ € auf Option-Kombinationen — deshalb dieser Header.
 *
 * Bekannte Stolperfalle (ISO-Swap): macOS vertauscht bei Nicht-Apple-
 * Tastaturen die Tasten "<" (HID GRAVE) und "^" (HID NON_US_BSLH).
 * Sollten < > und ^ ° vertauscht erscheinen: die beiden Blöcke unten tauschen.
 */

#pragma once
#include <dt-bindings/zmk/keys.h>

/* ---- Buchstaben ---------------------------------------------------- */
#define DE_Y      Z
#define DE_Z      Y
#define DE_AE     SQT      /* ä */
#define DE_OE     SEMI     /* ö */
#define DE_UE     LBKT     /* ü */
#define DE_SZ     MINUS    /* ß */

/* ---- Ohne Modifier ------------------------------------------------- */
#define DE_PLUS   RBKT     /* + */
#define DE_HASH   BSLH     /* # */
#define DE_MINUS  SLASH    /* - */
#define DE_COMMA  COMMA    /* , */
#define DE_DOT    DOT      /* . */
#define DE_LT     GRAVE    /* <  (ISO-Swap, s. o.) */
#define DE_CARET_DEAD  NON_US_BSLH  /* ^ (Dead Key, ISO-Swap) */
#define DE_ACUTE_DEAD  EQUAL        /* ´ (Dead Key) */

/* ---- Shift --------------------------------------------------------- */
#define DE_EXCL   LS(N1)   /* ! */
#define DE_DQT    LS(N2)   /* " */
#define DE_SECT   LS(N3)   /* § */
#define DE_DLLR   LS(N4)   /* $ */
#define DE_PRCNT  LS(N5)   /* % */
#define DE_AMPS   LS(N6)   /* & */
#define DE_SLASH  LS(N7)   /* / */
#define DE_LPAR   LS(N8)   /* ( */
#define DE_RPAR   LS(N9)   /* ) */
#define DE_EQUAL  LS(N0)   /* = */
#define DE_QMARK  LS(MINUS)  /* ? */
#define DE_STAR   LS(RBKT)   /* * */
#define DE_SQT    LS(BSLH)   /* ' */
#define DE_SEMI   LS(COMMA)  /* ; */
#define DE_COLON  LS(DOT)    /* : */
#define DE_UNDER  LS(SLASH)  /* _ */
#define DE_GT     LS(GRAVE)  /* >  (ISO-Swap) */
#define DE_DEG    LS(NON_US_BSLH) /* ° (ISO-Swap) */
#define DE_GRAVE_DEAD LS(EQUAL)   /* ` (Dead Key) */

/* ---- Option (⌥) — macOS-spezifisch --------------------------------- */
#define DE_AT     LA(L)    /* @ */
#define DE_LBKT   LA(N5)   /* [ */
#define DE_RBKT   LA(N6)   /* ] */
#define DE_LBRC   LA(N8)   /* { */
#define DE_RBRC   LA(N9)   /* } */
#define DE_PIPE   LA(N7)   /* | */
#define DE_BSLH   LS(LA(N7)) /* \ */
#define DE_EURO   LA(E)    /* € */
#define DE_TILDE_DEAD LA(N) /* ~ (Dead Key) */
