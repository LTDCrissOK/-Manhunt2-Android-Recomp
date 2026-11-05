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

// Function: sub_00248480
// Address: 0x248480 - 0x248518
void sub_00248480_0x248480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248480_0x248480");
#endif

    switch (ctx->pc) {
        case 0x248480u: goto label_248480;
        case 0x248484u: goto label_248484;
        case 0x248488u: goto label_248488;
        case 0x24848cu: goto label_24848c;
        case 0x248490u: goto label_248490;
        case 0x248494u: goto label_248494;
        case 0x248498u: goto label_248498;
        case 0x24849cu: goto label_24849c;
        case 0x2484a0u: goto label_2484a0;
        case 0x2484a4u: goto label_2484a4;
        case 0x2484a8u: goto label_2484a8;
        case 0x2484acu: goto label_2484ac;
        case 0x2484b0u: goto label_2484b0;
        case 0x2484b4u: goto label_2484b4;
        case 0x2484b8u: goto label_2484b8;
        case 0x2484bcu: goto label_2484bc;
        case 0x2484c0u: goto label_2484c0;
        case 0x2484c4u: goto label_2484c4;
        case 0x2484c8u: goto label_2484c8;
        case 0x2484ccu: goto label_2484cc;
        case 0x2484d0u: goto label_2484d0;
        case 0x2484d4u: goto label_2484d4;
        case 0x2484d8u: goto label_2484d8;
        case 0x2484dcu: goto label_2484dc;
        case 0x2484e0u: goto label_2484e0;
        case 0x2484e4u: goto label_2484e4;
        case 0x2484e8u: goto label_2484e8;
        case 0x2484ecu: goto label_2484ec;
        case 0x2484f0u: goto label_2484f0;
        case 0x2484f4u: goto label_2484f4;
        case 0x2484f8u: goto label_2484f8;
        case 0x2484fcu: goto label_2484fc;
        case 0x248500u: goto label_248500;
        case 0x248504u: goto label_248504;
        case 0x248508u: goto label_248508;
        case 0x24850cu: goto label_24850c;
        case 0x248510u: goto label_248510;
        case 0x248514u: goto label_248514;
        default: break;
    }

    ctx->pc = 0x248480u;

label_248480:
    // 0x248480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_248484:
    // 0x248484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_248488:
    // 0x248488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24848c:
    // 0x24848c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24848cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248490:
    // 0x248490: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_248494:
    // 0x248494: 0x8e270334  lw          $a3, 0x334($s1)
    ctx->pc = 0x248494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_248498:
    // 0x248498: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x248498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_24849c:
    // 0x24849c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_2484a0:
    if (ctx->pc == 0x2484A0u) {
        ctx->pc = 0x2484A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24849Cu;
        // 0x2484a0: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484A4u;
        goto label_2484a4;
    }
    ctx->pc = 0x24849Cu;
    {
        const bool branch_taken_0x24849c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2484A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24849Cu;
        // 0x2484a0: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24849c) {
            ctx->pc = 0x2484CCu;
            goto label_2484cc;
        }
    }
    ctx->pc = 0x2484A4u;
label_2484a4:
    // 0x2484a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2484a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2484a8:
    // 0x2484a8: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x2484a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_2484ac:
    // 0x2484ac: 0x0  nop
    ctx->pc = 0x2484acu;
    // NOP
label_2484b0:
    // 0x2484b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2484b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2484b4:
    // 0x2484b4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2484b8:
    if (ctx->pc == 0x2484B8u) {
        ctx->pc = 0x2484B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484B4u;
        // 0x2484b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484BCu;
        goto label_2484bc;
    }
    ctx->pc = 0x2484B4u;
    {
        const bool branch_taken_0x2484b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2484B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484B4u;
        // 0x2484b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484b4) {
            ctx->pc = 0x2484CCu;
            goto label_2484cc;
        }
    }
    ctx->pc = 0x2484BCu;
label_2484bc:
    // 0x2484bc: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2484bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_2484c0:
    // 0x2484c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2484c4:
    if (ctx->pc == 0x2484C4u) {
        ctx->pc = 0x2484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C0u;
        // 0x2484c4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484C8u;
        goto label_2484c8;
    }
    ctx->pc = 0x2484C0u;
    {
        const bool branch_taken_0x2484c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C0u;
        // 0x2484c4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484c0) {
            ctx->pc = 0x2484B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2484b0;
        }
    }
    ctx->pc = 0x2484C8u;
label_2484c8:
    // 0x2484c8: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x2484c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_2484cc:
    // 0x2484cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2484ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2484d0:
    // 0x2484d0: 0xc073fde  jal         func_1CFF78
label_2484d4:
    if (ctx->pc == 0x2484D4u) {
        ctx->pc = 0x2484D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484D0u;
        // 0x2484d4: 0x24a57b80  addiu       $a1, $a1, 0x7B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484D8u;
        goto label_2484d8;
    }
    ctx->pc = 0x2484D0u;
    SET_GPR_U32(ctx, 31, 0x2484D8u);
    ctx->pc = 0x2484D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484D0u;
    // 0x2484d4: 0x24a57b80  addiu       $a1, $a1, 0x7B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2484D0u, 0x2484D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484D8u;
label_2484d8:
    // 0x2484d8: 0x8e30010c  lw          $s0, 0x10C($s1)
    ctx->pc = 0x2484d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2484dc:
    // 0x2484dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2484dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2484e0:
    // 0x2484e0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x2484e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_2484e4:
    // 0x2484e4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2484e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2484e8:
    // 0x2484e8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x2484e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2484ec:
    // 0x2484ec: 0x60f809  jalr        $v1
label_2484f0:
    if (ctx->pc == 0x2484F0u) {
        ctx->pc = 0x2484F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484ECu;
        // 0x2484f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484F4u;
        goto label_2484f4;
    }
    ctx->pc = 0x2484ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2484F4u);
        ctx->pc = 0x2484F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484ECu;
        // 0x2484f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2484ECu, 0x2484F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2484F4u;
label_2484f4:
    // 0x2484f4: 0xc0b814e  jal         func_2E0538
label_2484f8:
    if (ctx->pc == 0x2484F8u) {
        ctx->pc = 0x2484F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484F4u;
        // 0x2484f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484FCu;
        goto label_2484fc;
    }
    ctx->pc = 0x2484F4u;
    SET_GPR_U32(ctx, 31, 0x2484FCu);
    ctx->pc = 0x2484F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484F4u;
    // 0x2484f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0538u, 0x2484F4u, 0x2484FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484FCu;
label_2484fc:
    // 0x2484fc: 0xc09209c  jal         func_248270
label_248500:
    if (ctx->pc == 0x248500u) {
        ctx->pc = 0x248500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484FCu;
        // 0x248500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248504u;
        goto label_248504;
    }
    ctx->pc = 0x2484FCu;
    SET_GPR_U32(ctx, 31, 0x248504u);
    ctx->pc = 0x248500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484FCu;
    // 0x248500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248270u, 0x2484FCu, 0x248504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248504u;
label_248504:
    // 0x248504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248508:
    // 0x248508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24850c:
    // 0x24850c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24850cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_248510:
    // 0x248510: 0x3e00008  jr          $ra
label_248514:
    if (ctx->pc == 0x248514u) {
        ctx->pc = 0x248514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248510u;
        // 0x248514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248518u;
        goto label_fallthrough_0x248510;
    }
    ctx->pc = 0x248510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248510u;
        // 0x248514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248510:
    ctx->pc = 0x248518u;
}
