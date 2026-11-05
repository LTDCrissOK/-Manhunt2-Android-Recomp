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

// Function: sub_002CE018
// Address: 0x2ce018 - 0x2ce0e0
void sub_002CE018_0x2ce018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE018_0x2ce018");
#endif

    switch (ctx->pc) {
        case 0x2ce044u: goto label_2ce044;
        case 0x2ce050u: goto label_2ce050;
        case 0x2ce058u: goto label_2ce058;
        case 0x2ce088u: goto label_2ce088;
        case 0x2ce0c0u: goto label_2ce0c0;
        default: break;
    }

    ctx->pc = 0x2ce018u;

    // 0x2ce018: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ce018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ce01c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2ce01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2ce020: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2ce020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2ce024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ce024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce028: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ce028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ce02c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ce02cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce030: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ce030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ce034: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ce034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ce038: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2ce038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2ce03c: 0xc0f3272  jal         func_3CC9C8
    ctx->pc = 0x2CE03Cu;
    SET_GPR_U32(ctx, 31, 0x2CE044u);
    ctx->pc = 0x2CE040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE03Cu;
    // 0x2ce040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC9C8u, 0x2CE03Cu, 0x2CE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE044u;
label_2ce044:
    // 0x2ce044: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x2ce044u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x2ce048: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE048u;
    {
        const bool branch_taken_0x2ce048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE048u;
        // 0x2ce04c: 0x3c120058  lui         $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce048) {
            ctx->pc = 0x2CE070u;
            goto label_2ce070;
        }
    }
    ctx->pc = 0x2CE050u;
label_2ce050:
    // 0x2ce050: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x2ce050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2ce054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ce054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ce058:
    // 0x2ce058: 0x0  nop
    ctx->pc = 0x2ce058u;
    // NOP
    // 0x2ce05c: 0x0  nop
    ctx->pc = 0x2ce05cu;
    // NOP
    // 0x2ce060: 0x0  nop
    ctx->pc = 0x2ce060u;
    // NOP
    // 0x2ce064: 0x0  nop
    ctx->pc = 0x2ce064u;
    // NOP
    // 0x2ce068: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CE068u;
    {
        const bool branch_taken_0x2ce068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE068u;
        // 0x2ce06c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce068) {
            ctx->pc = 0x2CE058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce058;
        }
    }
    ctx->pc = 0x2CE070u;
label_2ce070:
    // 0x2ce070: 0x2630a640  addiu       $s0, $s1, -0x59C0
    ctx->pc = 0x2ce070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944320));
    // 0x2ce074: 0x3c056568  lui         $a1, 0x6568
    ctx->pc = 0x2ce074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25960 << 16));
    // 0x2ce078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce07c: 0x34a56577  ori         $a1, $a1, 0x6577
    ctx->pc = 0x2ce07cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25975);
    // 0x2ce080: 0xc0f3404  jal         func_3CD010
    ctx->pc = 0x2CE080u;
    SET_GPR_U32(ctx, 31, 0x2CE088u);
    ctx->pc = 0x2CE084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE080u;
    // 0x2ce084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD010u, 0x2CE080u, 0x2CE088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE088u;
label_2ce088:
    // 0x2ce088: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2ce088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ce08c: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2CE08Cu;
    {
        const bool branch_taken_0x2ce08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE08Cu;
        // 0x2ce090: 0x2647a680  addiu       $a3, $s2, -0x5980 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce08c) {
            ctx->pc = 0x2CE050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce050;
        }
    }
    ctx->pc = 0x2CE094u;
    // 0x2ce094: 0xae53a680  sw          $s3, -0x5980($s2)
    ctx->pc = 0x2ce094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294944384), GPR_U32(ctx, 19));
    // 0x2ce098: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x2ce098u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x2ce09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ce09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2ce0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2ce0a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0ac: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2ce0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ce0b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ce0b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ce0b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce0b8: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x2CE0B8u;
    SET_GPR_U32(ctx, 31, 0x2CE0C0u);
    ctx->pc = 0x2CE0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE0B8u;
    // 0x2ce0bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x2CE0B8u, 0x2CE0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0C0u;
label_2ce0c0:
    // 0x2ce0c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ce0c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce0c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ce0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ce0c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ce0c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce0cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ce0ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ce0d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2ce0d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce0d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ce0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ce0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0D8u;
        // 0x2ce0dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE0E0u;
}
