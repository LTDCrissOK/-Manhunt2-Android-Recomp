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

// Function: sub_00280478
// Address: 0x280478 - 0x2804e8
void sub_00280478_0x280478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280478_0x280478");
#endif

    ctx->pc = 0x280478u;

    // 0x280478: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x280478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28047c: 0x24a4a348  addiu       $a0, $a1, -0x5CB8
    ctx->pc = 0x28047cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943560));
    // 0x280480: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x280480u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA354u));
    // 0x280484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280488: 0x2843001e  slti        $v1, $v0, 0x1E
    ctx->pc = 0x280488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x28048c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28048Cu;
    {
        const bool branch_taken_0x28048c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28048Cu;
        // 0x280490: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28048c) {
            ctx->pc = 0x2804E0u;
            goto label_2804e0;
        }
    }
    ctx->pc = 0x280494u;
    // 0x280494: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x280494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x280498: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x280498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28049c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28049cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2804a0: 0x2843003c  slti        $v1, $v0, 0x3C
    ctx->pc = 0x2804a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2804a4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2804A4u;
    {
        const bool branch_taken_0x2804a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2804A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804A4u;
        // 0x2804a8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804a4) {
            ctx->pc = 0x2804E0u;
            goto label_2804e0;
        }
    }
    ctx->pc = 0x2804ACu;
    // 0x2804ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2804acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2804b0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2804b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2804b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2804b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2804b8: 0x2843003c  slti        $v1, $v0, 0x3C
    ctx->pc = 0x2804b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2804bc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2804BCu;
    {
        const bool branch_taken_0x2804bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2804C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804BCu;
        // 0x2804c0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804bc) {
            ctx->pc = 0x2804E0u;
            goto label_2804e0;
        }
    }
    ctx->pc = 0x2804C4u;
    // 0x2804c4: 0x8ca2a348  lw          $v0, -0x5CB8($a1)
    ctx->pc = 0x2804c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943560)));
    // 0x2804c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2804c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2804cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2804ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2804d0: 0x28430064  slti        $v1, $v0, 0x64
    ctx->pc = 0x2804d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2804d4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2804D4u;
    {
        const bool branch_taken_0x2804d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2804D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2804D4u;
        // 0x2804d8: 0xaca2a348  sw          $v0, -0x5CB8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294943560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2804d4) {
            ctx->pc = 0x2804E0u;
            goto label_2804e0;
        }
    }
    ctx->pc = 0x2804DCu;
    // 0x2804dc: 0xaca0a348  sw          $zero, -0x5CB8($a1)
    ctx->pc = 0x2804dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943560), GPR_U32(ctx, 0));
label_2804e0:
    // 0x2804e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2804E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2804E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2804E8u;
}
