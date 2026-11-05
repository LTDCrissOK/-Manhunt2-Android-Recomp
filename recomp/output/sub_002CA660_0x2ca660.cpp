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

// Function: sub_002CA660
// Address: 0x2ca660 - 0x2ca6d8
void sub_002CA660_0x2ca660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA660_0x2ca660");
#endif

    switch (ctx->pc) {
        case 0x2ca690u: goto label_2ca690;
        default: break;
    }

    ctx->pc = 0x2ca660u;

    // 0x2ca660: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ca660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2ca664: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ca664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2ca668: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2ca668u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2ca66c: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x2ca66cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ca670: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CA670u;
    {
        const bool branch_taken_0x2ca670 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA670u;
        // 0x2ca674: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca670) {
            ctx->pc = 0x2CA6D0u;
            goto label_2ca6d0;
        }
    }
    ctx->pc = 0x2CA678u;
    // 0x2ca678: 0x11040015  beq         $t0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CA678u;
    {
        const bool branch_taken_0x2ca678 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CA67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA678u;
        // 0x2ca67c: 0x3c093fff  lui         $t1, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16383 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca678) {
            ctx->pc = 0x2CA6D0u;
            goto label_2ca6d0;
        }
    }
    ctx->pc = 0x2CA680u;
    // 0x2ca680: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2ca680u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca684: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2ca684u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2ca688: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2ca688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ca68c: 0x0  nop
    ctx->pc = 0x2ca68cu;
    // NOP
label_2ca690:
    // 0x2ca690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ca690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ca694: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2ca694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ca698: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x2ca698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2ca69c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2ca69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ca6a0: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x2ca6a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x2ca6a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ca6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ca6a8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2ca6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2ca6ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2ca6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ca6b0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2ca6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ca6b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CA6B4u;
    {
        const bool branch_taken_0x2ca6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6b4) {
            ctx->pc = 0x2CA6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA6B4u;
            // 0x2ca6b8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA6BCu;
            goto label_2ca6bc;
        }
    }
    ctx->pc = 0x2CA6BCu;
label_2ca6bc:
    // 0x2ca6bc: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x2ca6bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2ca6c0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA6C0u;
    {
        const bool branch_taken_0x2ca6c0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca6c0) {
            ctx->pc = 0x2CA6D0u;
            goto label_2ca6d0;
        }
    }
    ctx->pc = 0x2CA6C8u;
    // 0x2ca6c8: 0x550afff1  bnel        $t0, $t2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CA6C8u;
    {
        const bool branch_taken_0x2ca6c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        if (branch_taken_0x2ca6c8) {
            ctx->pc = 0x2CA6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA6C8u;
            // 0x2ca6cc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca690;
        }
    }
    ctx->pc = 0x2CA6D0u;
label_2ca6d0:
    // 0x2ca6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA6D8u;
}
