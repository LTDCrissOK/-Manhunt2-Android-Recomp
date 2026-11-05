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

// Function: sub_0033D7B0
// Address: 0x33d7b0 - 0x33d808
void sub_0033D7B0_0x33d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D7B0_0x33d7b0");
#endif

    ctx->pc = 0x33d7b0u;

    // 0x33d7b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33d7b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x33d7b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d7b8: 0x8c44c34c  lw          $a0, -0x3CB4($v0)
    ctx->pc = 0x33d7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FC34Cu));
    // 0x33d7bc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33D7BCu;
    {
        const bool branch_taken_0x33d7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7BCu;
        // 0x33d7c0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d7bc) {
            ctx->pc = 0x33D800u;
            goto label_33d800;
        }
    }
    ctx->pc = 0x33D7C4u;
    // 0x33d7c4: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x33d7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33d7c8: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x33d7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x33d7cc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33d7d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33D7D0u;
    {
        const bool branch_taken_0x33d7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7D0u;
        // 0x33d7d4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d7d0) {
            ctx->pc = 0x33D800u;
            goto label_33d800;
        }
    }
    ctx->pc = 0x33D7D8u;
    // 0x33d7d8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x33d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d7dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x33d7e0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x33d7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33d7e4: 0x2463d1e0  addiu       $v1, $v1, -0x2E20
    ctx->pc = 0x33d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955488));
    // 0x33d7e8: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x33d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x33d7ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33d7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33d7f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d7f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33d7f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33d7fc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x33d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_33d800:
    // 0x33d800: 0x3e00008  jr          $ra
    ctx->pc = 0x33D800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D808u;
}
