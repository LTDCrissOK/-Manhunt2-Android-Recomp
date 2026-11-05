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

// Function: sub_00187580
// Address: 0x187580 - 0x187628
void sub_00187580_0x187580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187580_0x187580");
#endif

    switch (ctx->pc) {
        case 0x187580u: goto label_187580;
        case 0x187584u: goto label_187584;
        case 0x187588u: goto label_187588;
        case 0x18758cu: goto label_18758c;
        case 0x187590u: goto label_187590;
        case 0x187594u: goto label_187594;
        case 0x187598u: goto label_187598;
        case 0x18759cu: goto label_18759c;
        case 0x1875a0u: goto label_1875a0;
        case 0x1875a4u: goto label_1875a4;
        case 0x1875a8u: goto label_1875a8;
        case 0x1875acu: goto label_1875ac;
        case 0x1875b0u: goto label_1875b0;
        case 0x1875b4u: goto label_1875b4;
        case 0x1875b8u: goto label_1875b8;
        case 0x1875bcu: goto label_1875bc;
        case 0x1875c0u: goto label_1875c0;
        case 0x1875c4u: goto label_1875c4;
        case 0x1875c8u: goto label_1875c8;
        case 0x1875ccu: goto label_1875cc;
        case 0x1875d0u: goto label_1875d0;
        case 0x1875d4u: goto label_1875d4;
        case 0x1875d8u: goto label_1875d8;
        case 0x1875dcu: goto label_1875dc;
        case 0x1875e0u: goto label_1875e0;
        case 0x1875e4u: goto label_1875e4;
        case 0x1875e8u: goto label_1875e8;
        case 0x1875ecu: goto label_1875ec;
        case 0x1875f0u: goto label_1875f0;
        case 0x1875f4u: goto label_1875f4;
        case 0x1875f8u: goto label_1875f8;
        case 0x1875fcu: goto label_1875fc;
        case 0x187600u: goto label_187600;
        case 0x187604u: goto label_187604;
        case 0x187608u: goto label_187608;
        case 0x18760cu: goto label_18760c;
        case 0x187610u: goto label_187610;
        case 0x187614u: goto label_187614;
        case 0x187618u: goto label_187618;
        case 0x18761cu: goto label_18761c;
        case 0x187620u: goto label_187620;
        case 0x187624u: goto label_187624;
        default: break;
    }

    ctx->pc = 0x187580u;

label_187580:
    // 0x187580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_187584:
    // 0x187584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187588:
    // 0x187588: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x187588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_18758c:
    // 0x18758c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18758cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187590:
    // 0x187590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187594:
    // 0x187594: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x187594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_187598:
    // 0x187598: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x187598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18759c:
    // 0x18759c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1875a0:
    if (ctx->pc == 0x1875A0u) {
        ctx->pc = 0x1875A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18759Cu;
        // 0x1875a0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1875A4u;
        goto label_1875a4;
    }
    ctx->pc = 0x18759Cu;
    {
        const bool branch_taken_0x18759c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1875A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18759Cu;
        // 0x1875a0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18759c) {
            ctx->pc = 0x1875B4u;
            goto label_1875b4;
        }
    }
    ctx->pc = 0x1875A4u;
label_1875a4:
    // 0x1875a4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1875a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1875a8:
    // 0x1875a8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1875a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1875ac:
    // 0x1875ac: 0x40f809  jalr        $v0
label_1875b0:
    if (ctx->pc == 0x1875B0u) {
        ctx->pc = 0x1875B4u;
        goto label_1875b4;
    }
    ctx->pc = 0x1875ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1875B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1875ACu, 0x1875B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1875B4u;
label_1875b4:
    // 0x1875b4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1875b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1875b8:
    // 0x1875b8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1875bc:
    if (ctx->pc == 0x1875BCu) {
        ctx->pc = 0x1875BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875B8u;
        // 0x1875bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1875C0u;
        goto label_1875c0;
    }
    ctx->pc = 0x1875B8u;
    {
        const bool branch_taken_0x1875b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1875BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875B8u;
        // 0x1875bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875b8) {
            ctx->pc = 0x1875F8u;
            goto label_1875f8;
        }
    }
    ctx->pc = 0x1875C0u;
label_1875c0:
    // 0x1875c0: 0xc0f5240  jal         func_3D4900
label_1875c4:
    if (ctx->pc == 0x1875C4u) {
        ctx->pc = 0x1875C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875C0u;
        // 0x1875c4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1875C8u;
        goto label_1875c8;
    }
    ctx->pc = 0x1875C0u;
    SET_GPR_U32(ctx, 31, 0x1875C8u);
    ctx->pc = 0x1875C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1875C0u;
    // 0x1875c4: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1875C0u, 0x1875C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1875C8u;
label_1875c8:
    // 0x1875c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1875c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1875cc:
    // 0x1875cc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1875ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1875d0:
    // 0x1875d0: 0xc061a32  jal         func_1868C8
label_1875d4:
    if (ctx->pc == 0x1875D4u) {
        ctx->pc = 0x1875D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875D0u;
        // 0x1875d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1875D8u;
        goto label_1875d8;
    }
    ctx->pc = 0x1875D0u;
    SET_GPR_U32(ctx, 31, 0x1875D8u);
    ctx->pc = 0x1875D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1875D0u;
    // 0x1875d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x1875D0u, 0x1875D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1875D8u;
label_1875d8:
    // 0x1875d8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1875d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_1875dc:
    // 0x1875dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1875dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1875e0:
    // 0x1875e0: 0x24631080  addiu       $v1, $v1, 0x1080
    ctx->pc = 0x1875e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4224));
label_1875e4:
    // 0x1875e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1875e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1875e8:
    // 0x1875e8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1875e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1875ec:
    // 0x1875ec: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x1875ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_1875f0:
    // 0x1875f0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1875f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1875f4:
    // 0x1875f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1875f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1875f8:
    // 0x1875f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1875f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1875fc:
    // 0x1875fc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1875fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187600:
    // 0x187600: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x187600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_187604:
    // 0x187604: 0xc0f809  jalr        $a2
label_187608:
    if (ctx->pc == 0x187608u) {
        ctx->pc = 0x187608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187604u;
        // 0x187608: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18760Cu;
        goto label_18760c;
    }
    ctx->pc = 0x187604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x18760Cu);
        ctx->pc = 0x187608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187604u;
        // 0x187608: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187604u, 0x18760Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18760Cu;
label_18760c:
    // 0x18760c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18760cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187610:
    // 0x187610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187614:
    // 0x187614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187618:
    // 0x187618: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x187618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18761c:
    // 0x18761c: 0x3e00008  jr          $ra
label_187620:
    if (ctx->pc == 0x187620u) {
        ctx->pc = 0x187620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18761Cu;
        // 0x187620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187624u;
        goto label_187624;
    }
    ctx->pc = 0x18761Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18761Cu;
        // 0x187620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18761Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187624u;
label_187624:
    // 0x187624: 0x0  nop
    ctx->pc = 0x187624u;
    // NOP
    ctx->pc = 0x187628u;
}
