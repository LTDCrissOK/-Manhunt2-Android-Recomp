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

// Function: sub_001D7510
// Address: 0x1d7510 - 0x1d77f8
void sub_001D7510_0x1d7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7510_0x1d7510");
#endif

    switch (ctx->pc) {
        case 0x1d7530u: goto label_1d7530;
        case 0x1d754cu: goto label_1d754c;
        case 0x1d755cu: goto label_1d755c;
        case 0x1d7564u: goto label_1d7564;
        case 0x1d756cu: goto label_1d756c;
        case 0x1d7574u: goto label_1d7574;
        case 0x1d757cu: goto label_1d757c;
        case 0x1d7584u: goto label_1d7584;
        case 0x1d758cu: goto label_1d758c;
        case 0x1d7594u: goto label_1d7594;
        case 0x1d75a4u: goto label_1d75a4;
        case 0x1d75acu: goto label_1d75ac;
        case 0x1d75b4u: goto label_1d75b4;
        case 0x1d75bcu: goto label_1d75bc;
        case 0x1d75c4u: goto label_1d75c4;
        case 0x1d75d4u: goto label_1d75d4;
        case 0x1d761cu: goto label_1d761c;
        case 0x1d767cu: goto label_1d767c;
        case 0x1d76ccu: goto label_1d76cc;
        case 0x1d7720u: goto label_1d7720;
        case 0x1d7754u: goto label_1d7754;
        case 0x1d7764u: goto label_1d7764;
        case 0x1d7774u: goto label_1d7774;
        case 0x1d777cu: goto label_1d777c;
        case 0x1d7784u: goto label_1d7784;
        case 0x1d779cu: goto label_1d779c;
        case 0x1d77a4u: goto label_1d77a4;
        case 0x1d77acu: goto label_1d77ac;
        case 0x1d77b8u: goto label_1d77b8;
        case 0x1d77c0u: goto label_1d77c0;
        case 0x1d77c8u: goto label_1d77c8;
        case 0x1d77d0u: goto label_1d77d0;
        case 0x1d77d8u: goto label_1d77d8;
        default: break;
    }

    ctx->pc = 0x1d7510u;

    // 0x1d7510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7514: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d7518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d751c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d751cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7520: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d7520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d7524: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d7528: 0xc0a0394  jal         func_280E50
    ctx->pc = 0x1D7528u;
    SET_GPR_U32(ctx, 31, 0x1D7530u);
    ctx->pc = 0x280E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E50u, 0x1D7528u, 0x1D7530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7530u;
label_1d7530:
    // 0x1d7530: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d7530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d7534: 0x8c62a324  lw          $v0, -0x5CDC($v1)
    ctx->pc = 0x1d7534u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA324u));
    // 0x1d7538: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7538u;
    {
        const bool branch_taken_0x1d7538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7538u;
        // 0x1d753c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7538) {
            ctx->pc = 0x1D755Cu;
            goto label_1d755c;
        }
    }
    ctx->pc = 0x1D7540u;
    // 0x1d7540: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d7540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d7544: 0xc075eae  jal         func_1D7AB8
    ctx->pc = 0x1D7544u;
    SET_GPR_U32(ctx, 31, 0x1D754Cu);
    ctx->pc = 0x1D7548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7544u;
    // 0x1d7548: 0x8c449160  lw          $a0, -0x6EA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7AB8u, 0x1D7544u, 0x1D754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D754Cu;
label_1d754c:
    // 0x1d754c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D754Cu;
    {
        const bool branch_taken_0x1d754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D754Cu;
        // 0x1d7550: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d754c) {
            ctx->pc = 0x1D755Cu;
            goto label_1d755c;
        }
    }
    ctx->pc = 0x1D7554u;
    // 0x1d7554: 0xc07f494  jal         func_1FD250
    ctx->pc = 0x1D7554u;
    SET_GPR_U32(ctx, 31, 0x1D755Cu);
    ctx->pc = 0x1D7558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7554u;
    // 0x1d7558: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD250u, 0x1D7554u, 0x1D755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D755Cu;
label_1d755c:
    // 0x1d755c: 0xc0b28aa  jal         func_2CA2A8
    ctx->pc = 0x1D755Cu;
    SET_GPR_U32(ctx, 31, 0x1D7564u);
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x1D755Cu, 0x1D7564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7564u;
label_1d7564:
    // 0x1d7564: 0xc0b2a14  jal         func_2CA850
    ctx->pc = 0x1D7564u;
    SET_GPR_U32(ctx, 31, 0x1D756Cu);
    ctx->pc = 0x1D7568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7564u;
    // 0x1d7568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA850u, 0x1D7564u, 0x1D756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D756Cu;
label_1d756c:
    // 0x1d756c: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x1D756Cu;
    SET_GPR_U32(ctx, 31, 0x1D7574u);
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x1D756Cu, 0x1D7574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7574u;
label_1d7574:
    // 0x1d7574: 0xc0c54a0  jal         func_315280
    ctx->pc = 0x1D7574u;
    SET_GPR_U32(ctx, 31, 0x1D757Cu);
    ctx->pc = 0x315280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315280u, 0x1D7574u, 0x1D757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D757Cu;
label_1d757c:
    // 0x1d757c: 0xc0760da  jal         func_1D8368
    ctx->pc = 0x1D757Cu;
    SET_GPR_U32(ctx, 31, 0x1D7584u);
    ctx->pc = 0x1D8368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8368u, 0x1D757Cu, 0x1D7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7584u;
label_1d7584:
    // 0x1d7584: 0xc0760ea  jal         func_1D83A8
    ctx->pc = 0x1D7584u;
    SET_GPR_U32(ctx, 31, 0x1D758Cu);
    ctx->pc = 0x1D83A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D83A8u, 0x1D7584u, 0x1D758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D758Cu;
label_1d758c:
    // 0x1d758c: 0xc0d4c9e  jal         func_353278
    ctx->pc = 0x1D758Cu;
    SET_GPR_U32(ctx, 31, 0x1D7594u);
    ctx->pc = 0x353278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353278u, 0x1D758Cu, 0x1D7594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7594u;
label_1d7594:
    // 0x1d7594: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1D7594u;
    {
        const bool branch_taken_0x1d7594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7594u;
        // 0x1d7598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7594) {
            ctx->pc = 0x1D77DCu;
            goto label_1d77dc;
        }
    }
    ctx->pc = 0x1D759Cu;
    // 0x1d759c: 0xc0d27ce  jal         func_349F38
    ctx->pc = 0x1D759Cu;
    SET_GPR_U32(ctx, 31, 0x1D75A4u);
    ctx->pc = 0x1D75A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D759Cu;
    // 0x1d75a0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349F38u, 0x1D759Cu, 0x1D75A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75A4u;
label_1d75a4:
    // 0x1d75a4: 0xc0cfbea  jal         func_33EFA8
    ctx->pc = 0x1D75A4u;
    SET_GPR_U32(ctx, 31, 0x1D75ACu);
    ctx->pc = 0x1D75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75A4u;
    // 0x1d75a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EFA8u, 0x1D75A4u, 0x1D75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75ACu;
label_1d75ac:
    // 0x1d75ac: 0xc0c5808  jal         func_316020
    ctx->pc = 0x1D75ACu;
    SET_GPR_U32(ctx, 31, 0x1D75B4u);
    ctx->pc = 0x1D75B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75ACu;
    // 0x1d75b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316020u, 0x1D75ACu, 0x1D75B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75B4u;
label_1d75b4:
    // 0x1d75b4: 0xc0c5846  jal         func_316118
    ctx->pc = 0x1D75B4u;
    SET_GPR_U32(ctx, 31, 0x1D75BCu);
    ctx->pc = 0x1D75B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75B4u;
    // 0x1d75b8: 0x260490e0  addiu       $a0, $s0, -0x6F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316118u, 0x1D75B4u, 0x1D75BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75BCu;
label_1d75bc:
    // 0x1d75bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D75BCu;
    {
        const bool branch_taken_0x1d75bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75BCu;
        // 0x1d75c0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75bc) {
            ctx->pc = 0x1D75CCu;
            goto label_1d75cc;
        }
    }
    ctx->pc = 0x1D75C4u;
label_1d75c4:
    // 0x1d75c4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1D75C4u;
    {
        const bool branch_taken_0x1d75c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75C4u;
        // 0x1d75c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75c4) {
            ctx->pc = 0x1D77DCu;
            goto label_1d77dc;
        }
    }
    ctx->pc = 0x1D75CCu;
label_1d75cc:
    // 0x1d75cc: 0xc075e56  jal         func_1D7958
    ctx->pc = 0x1D75CCu;
    SET_GPR_U32(ctx, 31, 0x1D75D4u);
    ctx->pc = 0x1D75D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75CCu;
    // 0x1d75d0: 0xa0409168  sb          $zero, -0x6E98($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294938984), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7958u, 0x1D75CCu, 0x1D75D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75D4u;
label_1d75d4:
    // 0x1d75d4: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D75D4u;
    {
        const bool branch_taken_0x1d75d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75D4u;
        // 0x1d75d8: 0x8e42a324  lw          $v0, -0x5CDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75d4) {
            ctx->pc = 0x1D75C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d75c4;
        }
    }
    ctx->pc = 0x1D75DCu;
    // 0x1d75dc: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1D75DCu;
    {
        const bool branch_taken_0x1d75dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75DCu;
        // 0x1d75e0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75dc) {
            ctx->pc = 0x1D775Cu;
            goto label_1d775c;
        }
    }
    ctx->pc = 0x1D75E4u;
    // 0x1d75e4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1d75e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1d75e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d75e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75ec: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x1d75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x1d75f0: 0x24422508  addiu       $v0, $v0, 0x2508
    ctx->pc = 0x1d75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x1d75f4: 0x34630998  ori         $v1, $v1, 0x998
    ctx->pc = 0x1d75f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2456);
    // 0x1d75f8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d75f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d75fc: 0x2484a358  addiu       $a0, $a0, -0x5CA8
    ctx->pc = 0x1d75fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943576));
    // 0x1d7600: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1d7600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1d7604: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1d7604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1d7608: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D7608u;
    {
        const bool branch_taken_0x1d7608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7608u;
        // 0x1d760c: 0x24620400  addiu       $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7608) {
            ctx->pc = 0x1D7670u;
            goto label_1d7670;
        }
    }
    ctx->pc = 0x1D7610u;
    // 0x1d7610: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1d7610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x1d7614: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1d7614u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1d7618: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1d7618u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_1d761c:
    // 0x1d761c: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x1d761cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1d7620: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x1d7620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1d7624: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x1d7624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1d7628: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x1d7628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1d762c: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x1d762cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1d7630: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x1d7630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1d7634: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x1d7634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1d7638: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x1d7638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1d763c: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x1d763cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d7640: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x1d7640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d7644: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x1d7644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d7648: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x1d7648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d764c: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x1d764cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d7650: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x1d7650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d7654: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x1d7654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d7658: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x1d7658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d765c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d7660: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D7660u;
    {
        const bool branch_taken_0x1d7660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7660u;
        // 0x1d7664: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7660) {
            ctx->pc = 0x1D761Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d761c;
        }
    }
    ctx->pc = 0x1D7668u;
    // 0x1d7668: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D7668u;
    {
        const bool branch_taken_0x1d7668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7668u;
        // 0x1d766c: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7668) {
            ctx->pc = 0x1D76ACu;
            goto label_1d76ac;
        }
    }
    ctx->pc = 0x1D7670u;
label_1d7670:
    // 0x1d7670: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1d7670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x1d7674: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1d7674u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1d7678: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1d7678u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_1d767c:
    // 0x1d767c: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x1d767cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7680: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x1d7680u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d7684: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x1d7684u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d7688: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x1d7688u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1d768c: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x1d768cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x1d7690: 0xfc880008  sd          $t0, 0x8($a0)
    ctx->pc = 0x1d7690u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x1d7694: 0xfc890010  sd          $t1, 0x10($a0)
    ctx->pc = 0x1d7694u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 9));
    // 0x1d7698: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x1d7698u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x1d769c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1d76a0: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D76A0u;
    {
        const bool branch_taken_0x1d76a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76A0u;
        // 0x1d76a4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76a0) {
            ctx->pc = 0x1D767Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d767c;
        }
    }
    ctx->pc = 0x1D76A8u;
    // 0x1d76a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1d76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1d76ac:
    // 0x1d76ac: 0x24c42508  addiu       $a0, $a2, 0x2508
    ctx->pc = 0x1d76acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 9480));
    // 0x1d76b0: 0x34420d98  ori         $v0, $v0, 0xD98
    ctx->pc = 0x1d76b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3480);
    // 0x1d76b4: 0x24a5a758  addiu       $a1, $a1, -0x58A8
    ctx->pc = 0x1d76b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944600));
    // 0x1d76b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d76bc: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x1d76bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1d76c0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1d76c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d76c4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D76C4u;
    {
        const bool branch_taken_0x1d76c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76C4u;
        // 0x1d76c8: 0x24432000  addiu       $v1, $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76c4) {
            ctx->pc = 0x1D7720u;
            goto label_1d7720;
        }
    }
    ctx->pc = 0x1D76CCu;
label_1d76cc:
    // 0x1d76cc: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x1d76ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d76d0: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x1d76d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d76d4: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1d76d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1d76d8: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1d76d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1d76dc: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x1d76dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1d76e0: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x1d76e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1d76e4: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x1d76e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1d76e8: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x1d76e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1d76ec: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x1d76ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d76f0: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x1d76f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d76f4: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x1d76f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d76f8: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x1d76f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d76fc: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x1d76fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d7700: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x1d7700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d7704: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x1d7704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d7708: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x1d7708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d770c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1d770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d7710: 0x1443ffee  bne         $v0, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D7710u;
    {
        const bool branch_taken_0x1d7710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7710u;
        // 0x1d7714: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7710) {
            ctx->pc = 0x1D76CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d76cc;
        }
    }
    ctx->pc = 0x1D7718u;
    // 0x1d7718: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D7718u;
    {
        const bool branch_taken_0x1d7718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7718) {
            ctx->pc = 0x1D774Cu;
            goto label_1d774c;
        }
    }
    ctx->pc = 0x1D7720u;
label_1d7720:
    // 0x1d7720: 0xdc490000  ld          $t1, 0x0($v0)
    ctx->pc = 0x1d7720u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d7724: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x1d7724u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d7728: 0xdc440010  ld          $a0, 0x10($v0)
    ctx->pc = 0x1d7728u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d772c: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x1d772cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d7730: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x1d7730u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x1d7734: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x1d7734u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x1d7738: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x1d7738u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x1d773c: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x1d773cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x1d7740: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1d7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d7744: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D7744u;
    {
        const bool branch_taken_0x1d7744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7744u;
        // 0x1d7748: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7744) {
            ctx->pc = 0x1D7720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7720;
        }
    }
    ctx->pc = 0x1D774Cu;
label_1d774c:
    // 0x1d774c: 0xc0cdaa2  jal         func_336A88
    ctx->pc = 0x1D774Cu;
    SET_GPR_U32(ctx, 31, 0x1D7754u);
    ctx->pc = 0x1D7750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D774Cu;
    // 0x1d7750: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A88u, 0x1D774Cu, 0x1D7754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7754u;
label_1d7754:
    // 0x1d7754: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7754u;
    {
        const bool branch_taken_0x1d7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7754u;
        // 0x1d7758: 0x8e45a324  lw          $a1, -0x5CDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7754) {
            ctx->pc = 0x1D776Cu;
            goto label_1d776c;
        }
    }
    ctx->pc = 0x1D775Cu;
label_1d775c:
    // 0x1d775c: 0xc0ab156  jal         func_2AC558
    ctx->pc = 0x1D775Cu;
    SET_GPR_U32(ctx, 31, 0x1D7764u);
    ctx->pc = 0x1D7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D775Cu;
    // 0x1d7760: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC558u, 0x1D775Cu, 0x1D7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7764u;
label_1d7764:
    // 0x1d7764: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1d7764u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1d7768: 0x8e45a324  lw          $a1, -0x5CDC($s2)
    ctx->pc = 0x1d7768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943524)));
label_1d776c:
    // 0x1d776c: 0xc0cd830  jal         func_3360C0
    ctx->pc = 0x1D776Cu;
    SET_GPR_U32(ctx, 31, 0x1D7774u);
    ctx->pc = 0x1D7770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D776Cu;
    // 0x1d7770: 0x266490e0  addiu       $a0, $s3, -0x6F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3360C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3360C0u, 0x1D776Cu, 0x1D7774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7774u;
label_1d7774:
    // 0x1d7774: 0xc0a03e8  jal         func_280FA0
    ctx->pc = 0x1D7774u;
    SET_GPR_U32(ctx, 31, 0x1D777Cu);
    ctx->pc = 0x280FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280FA0u, 0x1D7774u, 0x1D777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D777Cu;
label_1d777c:
    // 0x1d777c: 0xc0a4758  jal         func_291D60
    ctx->pc = 0x1D777Cu;
    SET_GPR_U32(ctx, 31, 0x1D7784u);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x1D777Cu, 0x1D7784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7784u;
label_1d7784:
    // 0x1d7784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7788: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x1d7788u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d778c: 0x8e02bd50  lw          $v0, -0x42B0($s0)
    ctx->pc = 0x1d778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x1d7790: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d7790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d7794: 0xc07306a  jal         func_1CC1A8
    ctx->pc = 0x1D7794u;
    SET_GPR_U32(ctx, 31, 0x1D779Cu);
    ctx->pc = 0x1D7798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7794u;
    // 0x1d7798: 0xae22bd64  sw          $v0, -0x429C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950244), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC1A8u, 0x1D7794u, 0x1D779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D779Cu;
label_1d779c:
    // 0x1d779c: 0xc0cfbee  jal         func_33EFB8
    ctx->pc = 0x1D779Cu;
    SET_GPR_U32(ctx, 31, 0x1D77A4u);
    ctx->pc = 0x33EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EFB8u, 0x1D779Cu, 0x1D77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77A4u;
label_1d77a4:
    // 0x1d77a4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1D77A4u;
    SET_GPR_U32(ctx, 31, 0x1D77ACu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D77A4u, 0x1D77ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77ACu;
label_1d77ac:
    // 0x1d77ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d77acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d77b0: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x1D77B0u;
    SET_GPR_U32(ctx, 31, 0x1D77B8u);
    ctx->pc = 0x1D77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77B0u;
    // 0x1d77b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x1D77B0u, 0x1D77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77B8u;
label_1d77b8:
    // 0x1d77b8: 0xc0968a2  jal         func_25A288
    ctx->pc = 0x1D77B8u;
    SET_GPR_U32(ctx, 31, 0x1D77C0u);
    ctx->pc = 0x25A288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A288u, 0x1D77B8u, 0x1D77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77C0u;
label_1d77c0:
    // 0x1d77c0: 0xc0b28aa  jal         func_2CA2A8
    ctx->pc = 0x1D77C0u;
    SET_GPR_U32(ctx, 31, 0x1D77C8u);
    ctx->pc = 0x2CA2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2A8u, 0x1D77C0u, 0x1D77C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77C8u;
label_1d77c8:
    // 0x1d77c8: 0xc0b2a32  jal         func_2CA8C8
    ctx->pc = 0x1D77C8u;
    SET_GPR_U32(ctx, 31, 0x1D77D0u);
    ctx->pc = 0x1D77CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77C8u;
    // 0x1d77cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8C8u, 0x1D77C8u, 0x1D77D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77D0u;
label_1d77d0:
    // 0x1d77d0: 0xc06d5b6  jal         func_1B56D8
    ctx->pc = 0x1D77D0u;
    SET_GPR_U32(ctx, 31, 0x1D77D8u);
    ctx->pc = 0x1B56D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B56D8u, 0x1D77D0u, 0x1D77D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77D8u;
label_1d77d8:
    // 0x1d77d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d77dc:
    // 0x1d77dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d77dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d77e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d77e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d77e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d77e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d77e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d77e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d77ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d77ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d77f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D77F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77F0u;
        // 0x1d77f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D77F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D77F8u;
}
