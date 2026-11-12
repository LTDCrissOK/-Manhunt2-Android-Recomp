# SNDSCRM / SIF sound research notes (USA PC-port reference)

## Resumen (ES)
Notas de investigación del port de PC basado en **SLUS-21613 (USA)**. Este proyecto Android usa **SLES-54819 (PAL)**: verificar sus propios módulos, tablas e instrucciones antes de aplicar cualquier identificador o supuesto. No es un arreglo de pantalla rosa, audio ni arranque. No cambia el runtime, el selector ISO ni el código generado.

## Current result
**Proven in the USA diagnostic:** Checkpoint 305 exits 2 in 0.406 seconds on an unsupported SNDSCRM call. Five native regression checks passed with zero mismatches. This is CPU/startup research, not a playable port.

The observed sound service sid is 0x0000BCF7. Its RPC fno is ignored by the inspected handler; commands are selected from records. Header fields are type:u8, total_length_words:u8, command_id:u16 (little-endian). Total length includes the header; payload has length minus one words. The observed 108-byte CALL contains six records plus a zero terminator and requests 1472 reply bytes. First record: type 1, ID 0x100A, total length 4 words, payload [0,0,0]. Unknown required effects stop explicitly; they are not converted into success.

**Correction:** Earlier analysis assigned this ID to the wrong case handler. The USA jump table instead reaches a gain-conversion helper and Scream group updates for groups 0, 12 and 13. Original zero input scales to 1024. An early 109 value was incorrect and has been superseded. Do not transplant USA function addresses to PAL.

## What needs to be represented
Original Scream group updates can invoke an installed callback, synchronize through a semaphore, suspend interrupts, examine 48 voice records, update qualifying voice parameters through libsd, restore interrupt state and release synchronization. Unchanged numeric gain does not by itself prove a no-op.

The inspected imports can be named using public PS2SDK declarations:
- thsemap ordinal 8: WaitSema; ordinal 6: SignalSema.
- intrman ordinal 17: CpuSuspendIntr; ordinal 18: CpuResumeIntr.
- libsd ordinal 5: sceSdSetParam; ordinal 26: sceSdSetTransIntrHandler.
- sysmem ordinal 7: QueryMaxFreeMemSize, reached earlier on a queued worker path.

Sources: [thsemap](https://github.com/ps2dev/ps2sdk/blob/master/iop/system/threadman/include/thsemap.h), [intrman](https://github.com/ps2dev/ps2sdk/blob/master/iop/system/intrman/include/intrman.h), [libsd](https://github.com/ps2dev/ps2sdk/blob/master/iop/sound/libsd/include/libsd.h), [sysmem](https://github.com/ps2dev/ps2sdk/blob/master/iop/system/sysmem/include/sysmem.h).

## Bounded evidence and limits
The local gain-slice checker matched an independent integer reference in 65,545 cases. Original-instruction fixture checks cover clamp/callback/voice branches, initializer state, controlled worker wakeups and selected follow-on calls. They use deterministic import test doubles and a diagnostic interpreter, not independently validated hardware execution. General R3000 load-delay timing, module relocation, actual IOP low-memory contents, concurrency and hardware side effects are not established. Recorded sound-parameter writes do not prove audible output.

A separate SNDSCRM helper calls libsd initialization and writes 12 sound parameters plus two core attributes. Its requested sequence is checked, but reset/transfer-handler/timing effects must still be implemented or measured. Both Scream and SNDSCRM have workers; testing one does not cover both.

Two initial SNDSCRM fixture loaders copied non-loadable ELF trailing data into guest BSS. Corrected successor checks use PT_LOAD file/memory sizes and zero-fill BSS; ten helper cases and three worker branches retained their results. Preserve failed/superseded receipts. Never load section/relocation payload as initialized guest RAM.

## Separate CDVD correction
Do not call sid 0x80000593 a sector-read service: it is SCMD/control in the inspected protocol. NCMD sid 0x80000595, fno 1, is the sector-read path, with 2048-byte sectors. A completed control or initialization RPC is not evidence that a file or sector was read.

## Suggested validation before changing runtime
1. Verify the exact PAL ELF and module identities locally, then inspect its dispatch tables and record lengths.
2. Capture the first unsupported record from actual logs; do not infer command ID from RPC fno.
3. Check reset, callbacks, voice state and synchronization against a trustworthy execution reference.
4. Model allocator queries from actual represented state; do not invent free-memory replies.
5. Test required effects and explicit missing-effect refusals before enabling a command.
6. Re-run cold startup and regressions, and describe compilation, startup, rendering and gameplay separately.

**Unknown:** Full live initialization and hardware compatibility. The native PC probe still refuses command 0x100A; this note supplies research leads, not a replacement implementation. No game/module bytes, generated code, commercial SDK content or SDK binaries accompany this document.

Public research summary: [Manhunt 2 Native PC status](https://github.com/richard1222/Manhunt-2-Native-PC/blob/main/docs/STATUS.md).
