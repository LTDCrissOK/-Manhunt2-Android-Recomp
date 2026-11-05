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

// Function: sub_003AB9C0
// Address: 0x3ab9c0 - 0x3aba20
void sub_003AB9C0_0x3ab9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB9C0_0x3ab9c0");
#endif

    ctx->pc = 0x3ab9c0u;

    // 0x3ab9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab9c4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB9C4u;
    {
        const bool branch_taken_0x3ab9c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9C4u;
        // 0x3ab9c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab9c4) {
            ctx->pc = 0x3AB9E8u;
            goto label_3ab9e8;
        }
    }
    ctx->pc = 0x3AB9CCu;
    // 0x3ab9cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ab9d0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3ab9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab9d8: 0x2484f108  addiu       $a0, $a0, -0xEF8
    ctx->pc = 0x3ab9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963464));
    // 0x3ab9dc: 0x24a5f098  addiu       $a1, $a1, -0xF68
    ctx->pc = 0x3ab9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
    // 0x3ab9e0: 0x80ead68  j           func_3AB5A0
    ctx->pc = 0x3AB9E0u;
    ctx->pc = 0x3AB9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9E0u;
    // 0x3ab9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB9E8u;
label_3ab9e8:
    // 0x3ab9e8: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x3ab9e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ab9ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB9ECu;
    {
        const bool branch_taken_0x3ab9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9ECu;
        // 0x3ab9f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab9ec) {
            ctx->pc = 0x3ABA10u;
            goto label_3aba10;
        }
    }
    ctx->pc = 0x3AB9F4u;
    // 0x3ab9f4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ab9f8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3ab9fc: 0x2484f118  addiu       $a0, $a0, -0xEE8
    ctx->pc = 0x3ab9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963480));
    // 0x3aba00: 0x24a5f0c8  addiu       $a1, $a1, -0xF38
    ctx->pc = 0x3aba00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
    // 0x3aba04: 0x80ead68  j           func_3AB5A0
    ctx->pc = 0x3ABA04u;
    ctx->pc = 0x3ABA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA04u;
    // 0x3aba08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABA0Cu;
    // 0x3aba0c: 0x0  nop
    ctx->pc = 0x3aba0cu;
    // NOP
label_3aba10:
    // 0x3aba10: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x3aba10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x3aba14: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x3aba14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x3aba18: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA18u;
        // 0x3aba1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABA20u;
}
