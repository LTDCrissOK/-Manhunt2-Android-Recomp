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

// Function: sub_003B1A48
// Address: 0x3b1a48 - 0x3b1ab8
void sub_003B1A48_0x3b1a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1A48_0x3b1a48");
#endif

    switch (ctx->pc) {
        case 0x3b1a7cu: goto label_3b1a7c;
        case 0x3b1a98u: goto label_3b1a98;
        default: break;
    }

    ctx->pc = 0x3b1a48u;

    // 0x3b1a48: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b1a4c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b1a50: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x3b1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x424C58u));
    // 0x3b1a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b1a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b1a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b1a60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b1a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b1a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b1a68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b1a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a6c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1A6Cu;
    {
        const bool branch_taken_0x3b1a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1A6Cu;
        // 0x3b1a70: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1a6c) {
            ctx->pc = 0x3B1A7Cu;
            goto label_3b1a7c;
        }
    }
    ctx->pc = 0x3B1A74u;
    // 0x3b1a74: 0xc0ec61a  jal         func_3B1868
    ctx->pc = 0x3B1A74u;
    SET_GPR_U32(ctx, 31, 0x3B1A7Cu);
    ctx->pc = 0x3B1868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1868u, 0x3B1A74u, 0x3B1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1A7Cu;
label_3b1a7c:
    // 0x3b1a7c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b1a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b1a80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b1a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a84: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3b1a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a88: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3b1a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a8c: 0x2484ff40  addiu       $a0, $a0, -0xC0
    ctx->pc = 0x3b1a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
    // 0x3b1a90: 0xc0ec624  jal         func_3B1890
    ctx->pc = 0x3B1A90u;
    SET_GPR_U32(ctx, 31, 0x3B1A98u);
    ctx->pc = 0x3B1A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1A90u;
    // 0x3b1a94: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1890u, 0x3B1A90u, 0x3B1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1A98u;
label_3b1a98:
    // 0x3b1a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b1aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b1aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1aa8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3b1aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b1aac: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1AACu;
        // 0x3b1ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1AB4u;
    // 0x3b1ab4: 0x0  nop
    ctx->pc = 0x3b1ab4u;
    // NOP
    ctx->pc = 0x3b1ab8u;
}
