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

// Function: sub_00162670
// Address: 0x162670 - 0x162870
void sub_00162670_0x162670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162670_0x162670");
#endif

    switch (ctx->pc) {
        case 0x16269cu: goto label_16269c;
        case 0x1626acu: goto label_1626ac;
        case 0x1626c4u: goto label_1626c4;
        case 0x1626d4u: goto label_1626d4;
        case 0x1626e4u: goto label_1626e4;
        case 0x1626fcu: goto label_1626fc;
        case 0x162714u: goto label_162714;
        case 0x162720u: goto label_162720;
        case 0x162734u: goto label_162734;
        case 0x162744u: goto label_162744;
        case 0x16275cu: goto label_16275c;
        case 0x162770u: goto label_162770;
        case 0x162784u: goto label_162784;
        case 0x162790u: goto label_162790;
        case 0x1627a4u: goto label_1627a4;
        case 0x1627acu: goto label_1627ac;
        case 0x1627b4u: goto label_1627b4;
        case 0x1627d8u: goto label_1627d8;
        case 0x1627fcu: goto label_1627fc;
        case 0x162810u: goto label_162810;
        case 0x162840u: goto label_162840;
        case 0x162848u: goto label_162848;
        case 0x162854u: goto label_162854;
        default: break;
    }

    ctx->pc = 0x162670u;

    // 0x162670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162674: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x162674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x162678: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x162678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16267c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16267cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162680: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x162680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162684: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x162684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x162688: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x162688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16268c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162694: 0xc058b2c  jal         func_162CB0
    ctx->pc = 0x162694u;
    SET_GPR_U32(ctx, 31, 0x16269Cu);
    ctx->pc = 0x162698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162694u;
    // 0x162698: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162CB0u, 0x162694u, 0x16269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16269Cu;
label_16269c:
    // 0x16269c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16269Cu;
    {
        const bool branch_taken_0x16269c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16269c) {
            ctx->pc = 0x1626CCu;
            goto label_1626cc;
        }
    }
    ctx->pc = 0x1626A4u;
    // 0x1626a4: 0xc058b04  jal         func_162C10
    ctx->pc = 0x1626A4u;
    SET_GPR_U32(ctx, 31, 0x1626ACu);
    ctx->pc = 0x1626A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626A4u;
    // 0x1626a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C10u, 0x1626A4u, 0x1626ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626ACu;
label_1626ac:
    // 0x1626ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1626acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1626b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1626b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626b4: 0xae02035c  sw          $v0, 0x35C($s0)
    ctx->pc = 0x1626b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
    // 0x1626b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1626b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626bc: 0xc058a8a  jal         func_162A28
    ctx->pc = 0x1626BCu;
    SET_GPR_U32(ctx, 31, 0x1626C4u);
    ctx->pc = 0x1626C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626BCu;
    // 0x1626c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A28u, 0x1626BCu, 0x1626C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626C4u;
label_1626c4:
    // 0x1626c4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1626C4u;
    {
        const bool branch_taken_0x1626c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1626C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626C4u;
        // 0x1626c8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626c4) {
            ctx->pc = 0x162858u;
            goto label_162858;
        }
    }
    ctx->pc = 0x1626CCu;
label_1626cc:
    // 0x1626cc: 0xc058bf0  jal         func_162FC0
    ctx->pc = 0x1626CCu;
    SET_GPR_U32(ctx, 31, 0x1626D4u);
    ctx->pc = 0x1626D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626CCu;
    // 0x1626d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162FC0u, 0x1626CCu, 0x1626D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626D4u;
label_1626d4:
    // 0x1626d4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1626D4u;
    {
        const bool branch_taken_0x1626d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1626d4) {
            ctx->pc = 0x1626D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1626D4u;
            // 0x1626d8: 0x8e020348  lw          $v0, 0x348($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162704u;
            goto label_162704;
        }
    }
    ctx->pc = 0x1626DCu;
    // 0x1626dc: 0xc058b04  jal         func_162C10
    ctx->pc = 0x1626DCu;
    SET_GPR_U32(ctx, 31, 0x1626E4u);
    ctx->pc = 0x1626E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626DCu;
    // 0x1626e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C10u, 0x1626DCu, 0x1626E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626E4u;
label_1626e4:
    // 0x1626e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1626e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1626e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1626e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626ec: 0xae02035c  sw          $v0, 0x35C($s0)
    ctx->pc = 0x1626ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
    // 0x1626f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1626f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626f4: 0xc058a8a  jal         func_162A28
    ctx->pc = 0x1626F4u;
    SET_GPR_U32(ctx, 31, 0x1626FCu);
    ctx->pc = 0x1626F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1626F4u;
    // 0x1626f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A28u, 0x1626F4u, 0x1626FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1626FCu;
label_1626fc:
    // 0x1626fc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1626FCu;
    {
        const bool branch_taken_0x1626fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626FCu;
        // 0x162700: 0xae000338  sw          $zero, 0x338($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626fc) {
            ctx->pc = 0x162854u;
            goto label_162854;
        }
    }
    ctx->pc = 0x162704u;
label_162704:
    // 0x162704: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x162704u;
    {
        const bool branch_taken_0x162704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162704) {
            ctx->pc = 0x162708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162704u;
            // 0x162708: 0x8e020344  lw          $v0, 0x344($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 836)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162774u;
            goto label_162774;
        }
    }
    ctx->pc = 0x16270Cu;
    // 0x16270c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16270Cu;
    SET_GPR_U32(ctx, 31, 0x162714u);
    ctx->pc = 0x162710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16270Cu;
    // 0x162710: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16270Cu, 0x162714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162714u;
label_162714:
    // 0x162714: 0x8e050348  lw          $a1, 0x348($s0)
    ctx->pc = 0x162714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
    // 0x162718: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x162718u;
    SET_GPR_U32(ctx, 31, 0x162720u);
    ctx->pc = 0x16271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162718u;
    // 0x16271c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x162718u, 0x162720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162720u;
label_162720:
    // 0x162720: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x162720u;
    {
        const bool branch_taken_0x162720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162720u;
        // 0x162724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162720) {
            ctx->pc = 0x162764u;
            goto label_162764;
        }
    }
    ctx->pc = 0x162728u;
    // 0x162728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16272c: 0xc058b2c  jal         func_162CB0
    ctx->pc = 0x16272Cu;
    SET_GPR_U32(ctx, 31, 0x162734u);
    ctx->pc = 0x162730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16272Cu;
    // 0x162730: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162CB0u, 0x16272Cu, 0x162734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162734u;
label_162734:
    // 0x162734: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x162734u;
    {
        const bool branch_taken_0x162734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162734u;
        // 0x162738: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162734) {
            ctx->pc = 0x162768u;
            goto label_162768;
        }
    }
    ctx->pc = 0x16273Cu;
    // 0x16273c: 0xc058b04  jal         func_162C10
    ctx->pc = 0x16273Cu;
    SET_GPR_U32(ctx, 31, 0x162744u);
    ctx->pc = 0x162740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16273Cu;
    // 0x162740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C10u, 0x16273Cu, 0x162744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162744u;
label_162744:
    // 0x162744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16274c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16274cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162750: 0xae02035c  sw          $v0, 0x35C($s0)
    ctx->pc = 0x162750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
    // 0x162754: 0xc058a8a  jal         func_162A28
    ctx->pc = 0x162754u;
    SET_GPR_U32(ctx, 31, 0x16275Cu);
    ctx->pc = 0x162758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162754u;
    // 0x162758: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162A28u, 0x162754u, 0x16275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16275Cu;
label_16275c:
    // 0x16275c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16275Cu;
    {
        const bool branch_taken_0x16275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16275Cu;
        // 0x162760: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16275c) {
            ctx->pc = 0x16279Cu;
            goto label_16279c;
        }
    }
    ctx->pc = 0x162764u;
label_162764:
    // 0x162764: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_162768:
    // 0x162768: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x162768u;
    SET_GPR_U32(ctx, 31, 0x162770u);
    ctx->pc = 0x16276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162768u;
    // 0x16276c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x162768u, 0x162770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162770u;
label_162770:
    // 0x162770: 0x8e020344  lw          $v0, 0x344($s0)
    ctx->pc = 0x162770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 836)));
label_162774:
    // 0x162774: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x162774u;
    {
        const bool branch_taken_0x162774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162774) {
            ctx->pc = 0x162778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162774u;
            // 0x162778: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162858u;
            goto label_162858;
        }
    }
    ctx->pc = 0x16277Cu;
    // 0x16277c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16277Cu;
    SET_GPR_U32(ctx, 31, 0x162784u);
    ctx->pc = 0x162780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16277Cu;
    // 0x162780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16277Cu, 0x162784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162784u;
label_162784:
    // 0x162784: 0x8e050344  lw          $a1, 0x344($s0)
    ctx->pc = 0x162784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x162788: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x162788u;
    SET_GPR_U32(ctx, 31, 0x162790u);
    ctx->pc = 0x16278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162788u;
    // 0x16278c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x162788u, 0x162790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162790u;
label_162790:
    // 0x162790: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x162790u;
    {
        const bool branch_taken_0x162790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162790u;
        // 0x162794: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162790) {
            ctx->pc = 0x1627BCu;
            goto label_1627bc;
        }
    }
    ctx->pc = 0x162798u;
    // 0x162798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16279c:
    // 0x16279c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16279Cu;
    SET_GPR_U32(ctx, 31, 0x1627A4u);
    ctx->pc = 0x1627A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16279Cu;
    // 0x1627a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16279Cu, 0x1627A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1627A4u;
label_1627a4:
    // 0x1627a4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1627A4u;
    {
        const bool branch_taken_0x1627a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627A4u;
        // 0x1627a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627a4) {
            ctx->pc = 0x162858u;
            goto label_162858;
        }
    }
    ctx->pc = 0x1627ACu;
label_1627ac:
    // 0x1627ac: 0xc058e30  jal         func_1638C0
    ctx->pc = 0x1627ACu;
    SET_GPR_U32(ctx, 31, 0x1627B4u);
    ctx->pc = 0x1627B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1627ACu;
    // 0x1627b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1638C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1638C0u, 0x1627ACu, 0x1627B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1627B4u;
label_1627b4:
    // 0x1627b4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1627B4u;
    {
        const bool branch_taken_0x1627b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1627b4) {
            ctx->pc = 0x162838u;
            goto label_162838;
        }
    }
    ctx->pc = 0x1627BCu;
label_1627bc:
    // 0x1627bc: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1627bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1627c0: 0xae000344  sw          $zero, 0x344($s0)
    ctx->pc = 0x1627c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 0));
    // 0x1627c4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1627C4u;
    {
        const bool branch_taken_0x1627c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627C4u;
        // 0x1627c8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627c4) {
            ctx->pc = 0x162838u;
            goto label_162838;
        }
    }
    ctx->pc = 0x1627CCu;
    // 0x1627cc: 0x2413000b  addiu       $s3, $zero, 0xB
    ctx->pc = 0x1627ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1627d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1627d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1627d4: 0x0  nop
    ctx->pc = 0x1627d4u;
    // NOP
label_1627d8:
    // 0x1627d8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1627d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1627dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1627dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1627e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1627e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1627e4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1627E4u;
    {
        const bool branch_taken_0x1627e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1627E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627E4u;
        // 0x1627e8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627e4) {
            ctx->pc = 0x162818u;
            goto label_162818;
        }
    }
    ctx->pc = 0x1627ECu;
    // 0x1627ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1627ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627f0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1627f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1627f4: 0xc04f112  jal         func_13C448
    ctx->pc = 0x1627F4u;
    SET_GPR_U32(ctx, 31, 0x1627FCu);
    ctx->pc = 0x1627F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1627F4u;
    // 0x1627f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x1627F4u, 0x1627FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1627FCu;
label_1627fc:
    // 0x1627fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1627FCu;
    {
        const bool branch_taken_0x1627fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1627FCu;
        // 0x162800: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1627fc) {
            ctx->pc = 0x16281Cu;
            goto label_16281c;
        }
    }
    ctx->pc = 0x162804u;
    // 0x162804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162808: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x162808u;
    SET_GPR_U32(ctx, 31, 0x162810u);
    ctx->pc = 0x16280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162808u;
    // 0x16280c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x162808u, 0x162810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162810u;
label_162810:
    // 0x162810: 0x5053ffe6  beql        $v0, $s3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x162810u;
    {
        const bool branch_taken_0x162810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x162810) {
            ctx->pc = 0x162814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162810u;
            // 0x162814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1627ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1627ac;
        }
    }
    ctx->pc = 0x162818u;
label_162818:
    // 0x162818: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x162818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16281c:
    // 0x16281c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16281cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x162820: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x162820u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x162824: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x162824u;
    {
        const bool branch_taken_0x162824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162824) {
            ctx->pc = 0x162838u;
            goto label_162838;
        }
    }
    ctx->pc = 0x16282Cu;
    // 0x16282c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x16282cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x162830: 0x5642ffe9  bnel        $s2, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x162830u;
    {
        const bool branch_taken_0x162830 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x162830) {
            ctx->pc = 0x162834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162830u;
            // 0x162834: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1627D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1627d8;
        }
    }
    ctx->pc = 0x162838u;
label_162838:
    // 0x162838: 0xc058b04  jal         func_162C10
    ctx->pc = 0x162838u;
    SET_GPR_U32(ctx, 31, 0x162840u);
    ctx->pc = 0x16283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162838u;
    // 0x16283c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162C10u, 0x162838u, 0x162840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162840u;
label_162840:
    // 0x162840: 0xc04f478  jal         func_13D1E0
    ctx->pc = 0x162840u;
    SET_GPR_U32(ctx, 31, 0x162848u);
    ctx->pc = 0x162844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162840u;
    // 0x162844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D1E0u, 0x162840u, 0x162848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162848u;
label_162848:
    // 0x162848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x162848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16284c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16284Cu;
    SET_GPR_U32(ctx, 31, 0x162854u);
    ctx->pc = 0x162850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16284Cu;
    // 0x162850: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16284Cu, 0x162854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162854u;
label_162854:
    // 0x162854: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x162854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162858:
    // 0x162858: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x162858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16285c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16285cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162860: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x162860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x162864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162868: 0x3e00008  jr          $ra
    ctx->pc = 0x162868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162868u;
        // 0x16286c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162870u;
}
