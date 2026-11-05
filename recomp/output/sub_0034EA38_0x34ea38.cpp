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

// Function: sub_0034EA38
// Address: 0x34ea38 - 0x34eae0
void sub_0034EA38_0x34ea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EA38_0x34ea38");
#endif

    switch (ctx->pc) {
        case 0x34ea68u: goto label_34ea68;
        case 0x34ea74u: goto label_34ea74;
        case 0x34ea7cu: goto label_34ea7c;
        case 0x34ea84u: goto label_34ea84;
        case 0x34ea98u: goto label_34ea98;
        case 0x34eaa4u: goto label_34eaa4;
        case 0x34eab8u: goto label_34eab8;
        case 0x34eac4u: goto label_34eac4;
        default: break;
    }

    ctx->pc = 0x34ea38u;

    // 0x34ea38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34ea38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34ea3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34ea3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34ea40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34ea44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34ea44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34ea48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34ea4c: 0x14a2001d  bne         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34EA4Cu;
    {
        const bool branch_taken_0x34ea4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x34EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA4Cu;
        // 0x34ea50: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea4c) {
            ctx->pc = 0x34EAC4u;
            goto label_34eac4;
        }
    }
    ctx->pc = 0x34EA54u;
    // 0x34ea54: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x34EA54u;
    {
        const bool branch_taken_0x34ea54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA54u;
        // 0x34ea58: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea54) {
            ctx->pc = 0x34EAC4u;
            goto label_34eac4;
        }
    }
    ctx->pc = 0x34EA5Cu;
    // 0x34ea5c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x34ea5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x34ea60: 0x2450b610  addiu       $s0, $v0, -0x49F0
    ctx->pc = 0x34ea60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x34ea64: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x34ea64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34ea68:
    // 0x34ea68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ea68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea6c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34EA6Cu;
    SET_GPR_U32(ctx, 31, 0x34EA74u);
    ctx->pc = 0x34EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EA6Cu;
    // 0x34ea70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34EA6Cu, 0x34EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA74u;
label_34ea74:
    // 0x34ea74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34EA74u;
    SET_GPR_U32(ctx, 31, 0x34EA7Cu);
    ctx->pc = 0x34EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EA74u;
    // 0x34ea78: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34EA74u, 0x34EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA7Cu;
label_34ea7c:
    // 0x34ea7c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34EA7Cu;
    SET_GPR_U32(ctx, 31, 0x34EA84u);
    ctx->pc = 0x34EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EA7Cu;
    // 0x34ea80: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34EA7Cu, 0x34EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA84u;
label_34ea84:
    // 0x34ea84: 0x1632fff8  bne         $s1, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x34EA84u;
    {
        const bool branch_taken_0x34ea84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x34EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EA84u;
        // 0x34ea88: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ea84) {
            ctx->pc = 0x34EA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34ea68;
        }
    }
    ctx->pc = 0x34EA8Cu;
    // 0x34ea8c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x34ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x34ea90: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34EA90u;
    SET_GPR_U32(ctx, 31, 0x34EA98u);
    ctx->pc = 0x34EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EA90u;
    // 0x34ea94: 0x2484be10  addiu       $a0, $a0, -0x41F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34EA90u, 0x34EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EA98u;
label_34ea98:
    // 0x34ea98: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x34ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x34ea9c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34EA9Cu;
    SET_GPR_U32(ctx, 31, 0x34EAA4u);
    ctx->pc = 0x34EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EA9Cu;
    // 0x34eaa0: 0x2484be20  addiu       $a0, $a0, -0x41E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34EA9Cu, 0x34EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EAA4u;
label_34eaa4:
    // 0x34eaa4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34eaa8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x34eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x34eaac: 0x2484be30  addiu       $a0, $a0, -0x41D0
    ctx->pc = 0x34eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950448));
    // 0x34eab0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x34EAB0u;
    SET_GPR_U32(ctx, 31, 0x34EAB8u);
    ctx->pc = 0x34EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EAB0u;
    // 0x34eab4: 0x24a56668  addiu       $a1, $a1, 0x6668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x34EAB0u, 0x34EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EAB8u;
label_34eab8:
    // 0x34eab8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x34eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x34eabc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34EABCu;
    SET_GPR_U32(ctx, 31, 0x34EAC4u);
    ctx->pc = 0x34EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EABCu;
    // 0x34eac0: 0x2484be40  addiu       $a0, $a0, -0x41C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34EABCu, 0x34EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EAC4u;
label_34eac4:
    // 0x34eac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34eac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34eac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34eac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34eacc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34eaccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ead0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34ead0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ead4: 0x3e00008  jr          $ra
    ctx->pc = 0x34EAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EAD4u;
        // 0x34ead8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EADCu;
    // 0x34eadc: 0x0  nop
    ctx->pc = 0x34eadcu;
    // NOP
    ctx->pc = 0x34eae0u;
}
