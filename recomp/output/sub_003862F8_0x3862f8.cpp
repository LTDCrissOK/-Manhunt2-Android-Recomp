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

// Function: sub_003862F8
// Address: 0x3862f8 - 0x386368
void sub_003862F8_0x3862f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003862F8_0x3862f8");
#endif

    switch (ctx->pc) {
        case 0x386354u: goto label_386354;
        default: break;
    }

    ctx->pc = 0x3862f8u;

    // 0x3862f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3862f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3862fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3862fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386304: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x386304u;
    {
        const bool branch_taken_0x386304 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x386304) {
            ctx->pc = 0x386308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386304u;
            // 0x386308: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38630Cu;
            goto label_38630c;
        }
    }
    ctx->pc = 0x38630Cu;
label_38630c:
    // 0x38630c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x38630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386310: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x386310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386314: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x386314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x386318: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x386318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38631c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386320: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x386320u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x386324: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x386324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x386328: 0x1012  mflo        $v0
    ctx->pc = 0x386328u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x38632c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x38632cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x386330: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x386330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x386334: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x386334u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x386338: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x386338u;
    {
        const bool branch_taken_0x386338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x386338) {
            ctx->pc = 0x38633Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386338u;
            // 0x38633c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386348u;
            goto label_386348;
        }
    }
    ctx->pc = 0x386340u;
    // 0x386340: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x386340u;
    {
        const bool branch_taken_0x386340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386340u;
        // 0x386344: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386340) {
            ctx->pc = 0x386358u;
            goto label_386358;
        }
    }
    ctx->pc = 0x386348u;
label_386348:
    // 0x386348: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x386348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38634c: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38634Cu;
    SET_GPR_U32(ctx, 31, 0x386354u);
    ctx->pc = 0x386350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38634Cu;
    // 0x386350: 0x24a59358  addiu       $a1, $a1, -0x6CA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38634Cu, 0x386354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386354u;
label_386354:
    // 0x386354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x386354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386358:
    // 0x386358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38635c: 0x3e00008  jr          $ra
    ctx->pc = 0x38635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38635Cu;
        // 0x386360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38635Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386364u;
    // 0x386364: 0x0  nop
    ctx->pc = 0x386364u;
    // NOP
    ctx->pc = 0x386368u;
}
