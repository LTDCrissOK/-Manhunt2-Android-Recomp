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

// Function: sub_00291C58
// Address: 0x291c58 - 0x291cb8
void sub_00291C58_0x291c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291C58_0x291c58");
#endif

    switch (ctx->pc) {
        case 0x291c80u: goto label_291c80;
        case 0x291ca0u: goto label_291ca0;
        default: break;
    }

    ctx->pc = 0x291c58u;

    // 0x291c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291c5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291c60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291c64: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x291c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x291c68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291c6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x291c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x291c70: 0xa2020061  sb          $v0, 0x61($s0)
    ctx->pc = 0x291c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x291c74: 0xa2000060  sb          $zero, 0x60($s0)
    ctx->pc = 0x291c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x291c78: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x291c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x291c7c: 0x0  nop
    ctx->pc = 0x291c7cu;
    // NOP
label_291c80:
    // 0x291c80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x291c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x291c84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x291c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x291c88: 0x0  nop
    ctx->pc = 0x291c88u;
    // NOP
    // 0x291c8c: 0x0  nop
    ctx->pc = 0x291c8cu;
    // NOP
    // 0x291c90: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x291C90u;
    {
        const bool branch_taken_0x291c90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x291C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C90u;
        // 0x291c94: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c90) {
            ctx->pc = 0x291C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291c80;
        }
    }
    ctx->pc = 0x291C98u;
    // 0x291c98: 0xc0a51b8  jal         func_2946E0
    ctx->pc = 0x291C98u;
    SET_GPR_U32(ctx, 31, 0x291CA0u);
    ctx->pc = 0x291C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C98u;
    // 0x291c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2946E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2946E0u, 0x291C98u, 0x291CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CA0u;
label_291ca0:
    // 0x291ca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x291ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x291ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291cac: 0x3e00008  jr          $ra
    ctx->pc = 0x291CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CACu;
        // 0x291cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291CB4u;
    // 0x291cb4: 0x0  nop
    ctx->pc = 0x291cb4u;
    // NOP
    ctx->pc = 0x291cb8u;
}
