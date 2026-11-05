#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024C458
// Address: 0x24c458 - 0x24c580
void sub_0024C458_0x24c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C458_0x24c458");
#endif

    switch (ctx->pc) {
        case 0x24c4acu: goto label_24c4ac;
        case 0x24c4b4u: goto label_24c4b4;
        case 0x24c4c8u: goto label_24c4c8;
        case 0x24c4d4u: goto label_24c4d4;
        case 0x24c4e0u: goto label_24c4e0;
        case 0x24c4ecu: goto label_24c4ec;
        case 0x24c510u: goto label_24c510;
        case 0x24c51cu: goto label_24c51c;
        case 0x24c538u: goto label_24c538;
        case 0x24c544u: goto label_24c544;
        case 0x24c54cu: goto label_24c54c;
        case 0x24c558u: goto label_24c558;
        case 0x24c560u: goto label_24c560;
        default: break;
    }

    ctx->pc = 0x24c458u;

    // 0x24c458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24c45c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c468: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c46c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x24c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x24c470: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24c474: 0x24120063  addiu       $s2, $zero, 0x63
    ctx->pc = 0x24c474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x24c478: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24c478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24c47c: 0x263001d0  addiu       $s0, $s1, 0x1D0
    ctx->pc = 0x24c47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x24c480: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x24c480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x24c484: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x24c484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c488: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x24c488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x24c48c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x24c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x24c490: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x24c490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x24c494: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x24c494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x24c498: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x24c498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x24c49c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x24c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x24c4a0: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x24c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x24c4a4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24C4A4u;
    SET_GPR_U32(ctx, 31, 0x24C4ACu);
    ctx->pc = 0x24C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C4A4u;
    // 0x24c4a8: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24C4A4u, 0x24C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4ACu;
label_24c4ac:
    // 0x24c4ac: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24C4ACu;
    SET_GPR_U32(ctx, 31, 0x24C4B4u);
    ctx->pc = 0x24C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C4ACu;
    // 0x24c4b0: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24C4ACu, 0x24C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4B4u;
label_24c4b4:
    // 0x24c4b4: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x24c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x24c4b8: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x24c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x24c4bc: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x24c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x24c4c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24C4C0u;
    SET_GPR_U32(ctx, 31, 0x24C4C8u);
    ctx->pc = 0x24C4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C4C0u;
    // 0x24c4c4: 0xae2000fc  sw          $zero, 0xFC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24C4C0u, 0x24C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4C8u;
label_24c4c8:
    // 0x24c4c8: 0xa2200110  sb          $zero, 0x110($s1)
    ctx->pc = 0x24c4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c4cc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24C4CCu;
    SET_GPR_U32(ctx, 31, 0x24C4D4u);
    ctx->pc = 0x24C4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C4CCu;
    // 0x24c4d0: 0x26240120  addiu       $a0, $s1, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24C4CCu, 0x24C4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4D4u;
label_24c4d4:
    // 0x24c4d4: 0xae200134  sw          $zero, 0x134($s1)
    ctx->pc = 0x24c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
    // 0x24c4d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24C4D8u;
    SET_GPR_U32(ctx, 31, 0x24C4E0u);
    ctx->pc = 0x24C4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C4D8u;
    // 0x24c4dc: 0x26240140  addiu       $a0, $s1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24C4D8u, 0x24C4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4E0u;
label_24c4e0:
    // 0x24c4e0: 0xae200154  sw          $zero, 0x154($s1)
    ctx->pc = 0x24c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 0));
    // 0x24c4e4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24C4E4u;
    SET_GPR_U32(ctx, 31, 0x24C4ECu);
    ctx->pc = 0x24C4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C4E4u;
    // 0x24c4e8: 0x26240160  addiu       $a0, $s1, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24C4E4u, 0x24C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4ECu;
label_24c4ec:
    // 0x24c4ec: 0xa22001c0  sb          $zero, 0x1C0($s1)
    ctx->pc = 0x24c4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 448), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c4f0: 0xa22001c1  sb          $zero, 0x1C1($s1)
    ctx->pc = 0x24c4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 449), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c4f4: 0xae2001c4  sw          $zero, 0x1C4($s1)
    ctx->pc = 0x24c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
    // 0x24c4f8: 0xa22001c8  sb          $zero, 0x1C8($s1)
    ctx->pc = 0x24c4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 456), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c4fc: 0xa22001c9  sb          $zero, 0x1C9($s1)
    ctx->pc = 0x24c4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 457), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c500: 0xa22001ca  sb          $zero, 0x1CA($s1)
    ctx->pc = 0x24c500u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 458), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c504: 0xa22001cb  sb          $zero, 0x1CB($s1)
    ctx->pc = 0x24c504u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 459), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c508: 0xae2001cc  sw          $zero, 0x1CC($s1)
    ctx->pc = 0x24c508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 0));
    // 0x24c50c: 0x0  nop
    ctx->pc = 0x24c50cu;
    // NOP
label_24c510:
    // 0x24c510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c514: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24C514u;
    SET_GPR_U32(ctx, 31, 0x24C51Cu);
    ctx->pc = 0x24C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C514u;
    // 0x24c518: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24C514u, 0x24C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C51Cu;
label_24c51c:
    // 0x24c51c: 0x0  nop
    ctx->pc = 0x24c51cu;
    // NOP
    // 0x24c520: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24C520u;
    {
        const bool branch_taken_0x24c520 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x24C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C520u;
        // 0x24c524: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c520) {
            ctx->pc = 0x24C510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c510;
        }
    }
    ctx->pc = 0x24C528u;
    // 0x24c528: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24c528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24c52c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x24c52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24c530: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x24C530u;
    SET_GPR_U32(ctx, 31, 0x24C538u);
    ctx->pc = 0x24C534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C530u;
    // 0x24c534: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x24C530u, 0x24C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C538u;
label_24c538:
    // 0x24c538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c53c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x24C53Cu;
    SET_GPR_U32(ctx, 31, 0x24C544u);
    ctx->pc = 0x24C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C53Cu;
    // 0x24c540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x24C53Cu, 0x24C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C544u;
label_24c544:
    // 0x24c544: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x24C544u;
    SET_GPR_U32(ctx, 31, 0x24C54Cu);
    ctx->pc = 0x24C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C544u;
    // 0x24c548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x24C544u, 0x24C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C54Cu;
label_24c54c:
    // 0x24c54c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x24c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x24c550: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x24C550u;
    SET_GPR_U32(ctx, 31, 0x24C558u);
    ctx->pc = 0x24C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C550u;
    // 0x24c554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x24C550u, 0x24C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C558u;
label_24c558:
    // 0x24c558: 0xc094372  jal         func_250DC8
    ctx->pc = 0x24C558u;
    SET_GPR_U32(ctx, 31, 0x24C560u);
    ctx->pc = 0x24C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C558u;
    // 0x24c55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250DC8u, 0x24C558u, 0x24C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C560u;
label_24c560:
    // 0x24c560: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24c560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c56c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c570: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24c570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24c574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c578: 0x3e00008  jr          $ra
    ctx->pc = 0x24C578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C578u;
        // 0x24c57c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C580u;
}
