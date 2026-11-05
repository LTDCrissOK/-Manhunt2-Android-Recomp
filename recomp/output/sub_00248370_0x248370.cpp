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

// Function: sub_00248370
// Address: 0x248370 - 0x248408
void sub_00248370_0x248370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248370_0x248370");
#endif

    switch (ctx->pc) {
        case 0x248370u: goto label_248370;
        case 0x248374u: goto label_248374;
        case 0x248378u: goto label_248378;
        case 0x24837cu: goto label_24837c;
        case 0x248380u: goto label_248380;
        case 0x248384u: goto label_248384;
        case 0x248388u: goto label_248388;
        case 0x24838cu: goto label_24838c;
        case 0x248390u: goto label_248390;
        case 0x248394u: goto label_248394;
        case 0x248398u: goto label_248398;
        case 0x24839cu: goto label_24839c;
        case 0x2483a0u: goto label_2483a0;
        case 0x2483a4u: goto label_2483a4;
        case 0x2483a8u: goto label_2483a8;
        case 0x2483acu: goto label_2483ac;
        case 0x2483b0u: goto label_2483b0;
        case 0x2483b4u: goto label_2483b4;
        case 0x2483b8u: goto label_2483b8;
        case 0x2483bcu: goto label_2483bc;
        case 0x2483c0u: goto label_2483c0;
        case 0x2483c4u: goto label_2483c4;
        case 0x2483c8u: goto label_2483c8;
        case 0x2483ccu: goto label_2483cc;
        case 0x2483d0u: goto label_2483d0;
        case 0x2483d4u: goto label_2483d4;
        case 0x2483d8u: goto label_2483d8;
        case 0x2483dcu: goto label_2483dc;
        case 0x2483e0u: goto label_2483e0;
        case 0x2483e4u: goto label_2483e4;
        case 0x2483e8u: goto label_2483e8;
        case 0x2483ecu: goto label_2483ec;
        case 0x2483f0u: goto label_2483f0;
        case 0x2483f4u: goto label_2483f4;
        case 0x2483f8u: goto label_2483f8;
        case 0x2483fcu: goto label_2483fc;
        case 0x248400u: goto label_248400;
        case 0x248404u: goto label_248404;
        default: break;
    }

    ctx->pc = 0x248370u;

label_248370:
    // 0x248370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_248374:
    // 0x248374: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_248378:
    // 0x248378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24837c:
    // 0x24837c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24837cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248380:
    // 0x248380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_248384:
    // 0x248384: 0x8e270334  lw          $a3, 0x334($s1)
    ctx->pc = 0x248384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_248388:
    // 0x248388: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x248388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_24838c:
    // 0x24838c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_248390:
    if (ctx->pc == 0x248390u) {
        ctx->pc = 0x248390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24838Cu;
        // 0x248390: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248394u;
        goto label_248394;
    }
    ctx->pc = 0x24838Cu;
    {
        const bool branch_taken_0x24838c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x248390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24838Cu;
        // 0x248390: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24838c) {
            ctx->pc = 0x2483BCu;
            goto label_2483bc;
        }
    }
    ctx->pc = 0x248394u;
label_248394:
    // 0x248394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248398:
    // 0x248398: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x248398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_24839c:
    // 0x24839c: 0x0  nop
    ctx->pc = 0x24839cu;
    // NOP
label_2483a0:
    // 0x2483a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2483a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2483a4:
    // 0x2483a4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2483a8:
    if (ctx->pc == 0x2483A8u) {
        ctx->pc = 0x2483A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483A4u;
        // 0x2483a8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483ACu;
        goto label_2483ac;
    }
    ctx->pc = 0x2483A4u;
    {
        const bool branch_taken_0x2483a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2483A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483A4u;
        // 0x2483a8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483a4) {
            ctx->pc = 0x2483BCu;
            goto label_2483bc;
        }
    }
    ctx->pc = 0x2483ACu;
label_2483ac:
    // 0x2483ac: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2483acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_2483b0:
    // 0x2483b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2483b4:
    if (ctx->pc == 0x2483B4u) {
        ctx->pc = 0x2483B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483B0u;
        // 0x2483b4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483B8u;
        goto label_2483b8;
    }
    ctx->pc = 0x2483B0u;
    {
        const bool branch_taken_0x2483b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2483B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483B0u;
        // 0x2483b4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483b0) {
            ctx->pc = 0x2483A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2483a0;
        }
    }
    ctx->pc = 0x2483B8u;
label_2483b8:
    // 0x2483b8: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x2483b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_2483bc:
    // 0x2483bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2483bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2483c0:
    // 0x2483c0: 0xc073fde  jal         func_1CFF78
label_2483c4:
    if (ctx->pc == 0x2483C4u) {
        ctx->pc = 0x2483C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483C0u;
        // 0x2483c4: 0x24a57b58  addiu       $a1, $a1, 0x7B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483C8u;
        goto label_2483c8;
    }
    ctx->pc = 0x2483C0u;
    SET_GPR_U32(ctx, 31, 0x2483C8u);
    ctx->pc = 0x2483C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483C0u;
    // 0x2483c4: 0x24a57b58  addiu       $a1, $a1, 0x7B58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2483C0u, 0x2483C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483C8u;
label_2483c8:
    // 0x2483c8: 0x8e30010c  lw          $s0, 0x10C($s1)
    ctx->pc = 0x2483c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2483cc:
    // 0x2483cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2483ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2483d0:
    // 0x2483d0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x2483d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_2483d4:
    // 0x2483d4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2483d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2483d8:
    // 0x2483d8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2483d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2483dc:
    // 0x2483dc: 0x60f809  jalr        $v1
label_2483e0:
    if (ctx->pc == 0x2483E0u) {
        ctx->pc = 0x2483E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483DCu;
        // 0x2483e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483E4u;
        goto label_2483e4;
    }
    ctx->pc = 0x2483DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2483E4u);
        ctx->pc = 0x2483E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483DCu;
        // 0x2483e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2483DCu, 0x2483E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2483E4u;
label_2483e4:
    // 0x2483e4: 0xc0b814e  jal         func_2E0538
label_2483e8:
    if (ctx->pc == 0x2483E8u) {
        ctx->pc = 0x2483E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483E4u;
        // 0x2483e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483ECu;
        goto label_2483ec;
    }
    ctx->pc = 0x2483E4u;
    SET_GPR_U32(ctx, 31, 0x2483ECu);
    ctx->pc = 0x2483E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483E4u;
    // 0x2483e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0538u, 0x2483E4u, 0x2483ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483ECu;
label_2483ec:
    // 0x2483ec: 0xc09209c  jal         func_248270
label_2483f0:
    if (ctx->pc == 0x2483F0u) {
        ctx->pc = 0x2483F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483ECu;
        // 0x2483f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483F4u;
        goto label_2483f4;
    }
    ctx->pc = 0x2483ECu;
    SET_GPR_U32(ctx, 31, 0x2483F4u);
    ctx->pc = 0x2483F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483ECu;
    // 0x2483f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248270u, 0x2483ECu, 0x2483F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483F4u;
label_2483f4:
    // 0x2483f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2483f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2483f8:
    // 0x2483f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2483f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2483fc:
    // 0x2483fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2483fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_248400:
    // 0x248400: 0x3e00008  jr          $ra
label_248404:
    if (ctx->pc == 0x248404u) {
        ctx->pc = 0x248404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248400u;
        // 0x248404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248408u;
        goto label_fallthrough_0x248400;
    }
    ctx->pc = 0x248400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248400u;
        // 0x248404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248400:
    ctx->pc = 0x248408u;
}
