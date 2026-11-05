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

// Function: sub_002D6190
// Address: 0x2d6190 - 0x2d6220
void sub_002D6190_0x2d6190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6190_0x2d6190");
#endif

    switch (ctx->pc) {
        case 0x2d61d0u: goto label_2d61d0;
        default: break;
    }

    ctx->pc = 0x2d6190u;

    // 0x2d6190: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d6190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6198: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x2d6198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2d619c: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x2d619cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d61a0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2d61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2d61a4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2d61a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d61a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d61ac: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2d61acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d61b0: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D61B0u;
    {
        const bool branch_taken_0x2d61b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61B0u;
        // 0x2d61b4: 0x24420098  addiu       $v0, $v0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61b0) {
            ctx->pc = 0x2D6218u;
            goto label_2d6218;
        }
    }
    ctx->pc = 0x2D61B8u;
    // 0x2d61b8: 0x8caa002c  lw          $t2, 0x2C($a1)
    ctx->pc = 0x2d61b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2d61bc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2d61bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d61c0: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x2d61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2d61c4: 0x240901c4  addiu       $t1, $zero, 0x1C4
    ctx->pc = 0x2d61c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d61c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d61c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d61cc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2d61ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d61d0:
    // 0x2d61d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d61d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d61d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d61dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d61e0: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x2d61e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d61e4: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x2d61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2d61e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d61ec: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D61ECu;
    {
        const bool branch_taken_0x2d61ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2D61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61ECu;
        // 0x2d61f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61ec) {
            ctx->pc = 0x2D61F8u;
            goto label_2d61f8;
        }
    }
    ctx->pc = 0x2D61F4u;
    // 0x2d61f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d61f8:
    // 0x2d61f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d61f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d61fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D61FCu;
    {
        const bool branch_taken_0x2d61fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61FCu;
        // 0x2d6200: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61fc) {
            ctx->pc = 0x2D620Cu;
            goto label_2d620c;
        }
    }
    ctx->pc = 0x2D6204u;
    // 0x2d6204: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6204u;
        // 0x2d6208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D620Cu;
label_2d620c:
    // 0x2d620c: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2d620cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d6210: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2D6210u;
    {
        const bool branch_taken_0x2d6210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6210u;
        // 0x2d6214: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6210) {
            ctx->pc = 0x2D61D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d61d0;
        }
    }
    ctx->pc = 0x2D6218u;
label_2d6218:
    // 0x2d6218: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6218u;
        // 0x2d621c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6220u;
}
