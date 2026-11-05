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

// Function: sub_003D0E60
// Address: 0x3d0e60 - 0x3d0eb8
void sub_003D0E60_0x3d0e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0E60_0x3d0e60");
#endif

    switch (ctx->pc) {
        case 0x3d0e78u: goto label_3d0e78;
        case 0x3d0e80u: goto label_3d0e80;
        case 0x3d0e90u: goto label_3d0e90;
        default: break;
    }

    ctx->pc = 0x3d0e60u;

    // 0x3d0e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d0e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d0e64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d0e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d0e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d0e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d0e6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d0e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d0e70: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3D0E70u;
    SET_GPR_U32(ctx, 31, 0x3D0E78u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3D0E70u, 0x3D0E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0E78u;
label_3d0e78:
    // 0x3d0e78: 0xc0f437c  jal         func_3D0DF0
    ctx->pc = 0x3D0E78u;
    SET_GPR_U32(ctx, 31, 0x3D0E80u);
    ctx->pc = 0x3D0E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0E78u;
    // 0x3d0e7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0DF0u, 0x3D0E78u, 0x3D0E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0E80u;
label_3d0e80:
    // 0x3d0e80: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D0E80u;
    {
        const bool branch_taken_0x3d0e80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0E80u;
        // 0x3d0e84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0e80) {
            ctx->pc = 0x3D0E90u;
            goto label_3d0e90;
        }
    }
    ctx->pc = 0x3D0E88u;
    // 0x3d0e88: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3D0E88u;
    SET_GPR_U32(ctx, 31, 0x3D0E90u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3D0E88u, 0x3D0E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0E90u;
label_3d0e90:
    // 0x3d0e90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3d0e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0e94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d0e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0e98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d0e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d0e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d0e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0EA0u;
        // 0x3d0ea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0EA8u;
    // 0x3d0ea8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3d0ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d0eac: 0x0  nop
    ctx->pc = 0x3d0eacu;
    // NOP
    // 0x3d0eb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3d0eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d0eb4: 0x0  nop
    ctx->pc = 0x3d0eb4u;
    // NOP
    ctx->pc = 0x3d0eb8u;
}
