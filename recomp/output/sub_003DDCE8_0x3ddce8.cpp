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

// Function: sub_003DDCE8
// Address: 0x3ddce8 - 0x3ddd28
void sub_003DDCE8_0x3ddce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDCE8_0x3ddce8");
#endif

    ctx->pc = 0x3ddce8u;

    // 0x3ddce8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDCE8u;
    {
        const bool branch_taken_0x3ddce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCE8u;
        // 0x3ddcec: 0x8c8200c0  lw          $v0, 0xC0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddce8) {
            ctx->pc = 0x3DDCF8u;
            goto label_3ddcf8;
        }
    }
    ctx->pc = 0x3DDCF0u;
    // 0x3ddcf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDCF0u;
    {
        const bool branch_taken_0x3ddcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCF0u;
        // 0x3ddcf4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddcf0) {
            ctx->pc = 0x3DDD00u;
            goto label_3ddd00;
        }
    }
    ctx->pc = 0x3DDCF8u;
label_3ddcf8:
    // 0x3ddcf8: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x3ddcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3ddcfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ddcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ddd00:
    // 0x3ddd00: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDD00u;
    {
        const bool branch_taken_0x3ddd00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD00u;
        // 0x3ddd04: 0xac8200c0  sw          $v0, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddd00) {
            ctx->pc = 0x3DDD14u;
            goto label_3ddd14;
        }
    }
    ctx->pc = 0x3DDD08u;
    // 0x3ddd08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ddd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ddd0c: 0x8c4395a0  lw          $v1, -0x6A60($v0)
    ctx->pc = 0x3ddd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F95A0u));
    // 0x3ddd10: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x3ddd10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
label_3ddd14:
    // 0x3ddd14: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDD1Cu;
    // 0x3ddd1c: 0x0  nop
    ctx->pc = 0x3ddd1cu;
    // NOP
    // 0x3ddd20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ddd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3ddd24: 0x0  nop
    ctx->pc = 0x3ddd24u;
    // NOP
    ctx->pc = 0x3ddd28u;
}
