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

// Function: sub_003C2A28
// Address: 0x3c2a28 - 0x3c2aa8
void sub_003C2A28_0x3c2a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2A28_0x3c2a28");
#endif

    switch (ctx->pc) {
        case 0x3c2a48u: goto label_3c2a48;
        case 0x3c2a60u: goto label_3c2a60;
        case 0x3c2a6cu: goto label_3c2a6c;
        case 0x3c2a7cu: goto label_3c2a7c;
        case 0x3c2a88u: goto label_3c2a88;
        default: break;
    }

    ctx->pc = 0x3c2a28u;

    // 0x3c2a28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c2a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c2a2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c2a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c2a30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c2a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c2a34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c2a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c2a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c2a3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c2a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2a40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C2A40u;
    {
        const bool branch_taken_0x3c2a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A40u;
        // 0x3c2a44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a40) {
            ctx->pc = 0x3C2A4Cu;
            goto label_3c2a4c;
        }
    }
    ctx->pc = 0x3C2A48u;
label_3c2a48:
    // 0x3c2a48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c2a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3c2a4c:
    // 0x3c2a4c: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x3c2a4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c2a50: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C2A50u;
    {
        const bool branch_taken_0x3c2a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2a50) {
            ctx->pc = 0x3C2A74u;
            goto label_3c2a74;
        }
    }
    ctx->pc = 0x3C2A58u;
    // 0x3c2a58: 0xc0f1660  jal         func_3C5980
    ctx->pc = 0x3C2A58u;
    SET_GPR_U32(ctx, 31, 0x3C2A60u);
    ctx->pc = 0x3C5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5980u, 0x3C2A58u, 0x3C2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A60u;
label_3c2a60:
    // 0x3c2a60: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x3c2a60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c2a64: 0xc0f1660  jal         func_3C5980
    ctx->pc = 0x3C2A64u;
    SET_GPR_U32(ctx, 31, 0x3C2A6Cu);
    ctx->pc = 0x3C2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A64u;
    // 0x3c2a68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5980u, 0x3C2A64u, 0x3C2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A6Cu;
label_3c2a6c:
    // 0x3c2a6c: 0x5202fff6  beql        $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3C2A6Cu;
    {
        const bool branch_taken_0x3c2a6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c2a6c) {
            ctx->pc = 0x3C2A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2A6Cu;
            // 0x3c2a70: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2a48;
        }
    }
    ctx->pc = 0x3C2A74u;
label_3c2a74:
    // 0x3c2a74: 0xc0f1660  jal         func_3C5980
    ctx->pc = 0x3C2A74u;
    SET_GPR_U32(ctx, 31, 0x3C2A7Cu);
    ctx->pc = 0x3C2A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A74u;
    // 0x3c2a78: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5980u, 0x3C2A74u, 0x3C2A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A7Cu;
label_3c2a7c:
    // 0x3c2a7c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3c2a7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c2a80: 0xc0f1660  jal         func_3C5980
    ctx->pc = 0x3C2A80u;
    SET_GPR_U32(ctx, 31, 0x3C2A88u);
    ctx->pc = 0x3C2A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A80u;
    // 0x3c2a84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5980u, 0x3C2A80u, 0x3C2A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A88u;
label_3c2a88:
    // 0x3c2a88: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3c2a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3c2a8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c2a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c2a90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c2a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c2a94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c2a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c2a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c2a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A9Cu;
        // 0x3c2aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2AA4u;
    // 0x3c2aa4: 0x0  nop
    ctx->pc = 0x3c2aa4u;
    // NOP
    ctx->pc = 0x3c2aa8u;
}
