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

// Function: sub_003DE3E0
// Address: 0x3de3e0 - 0x3de470
void sub_003DE3E0_0x3de3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE3E0_0x3de3e0");
#endif

    switch (ctx->pc) {
        case 0x3de464u: goto label_3de464;
        default: break;
    }

    ctx->pc = 0x3de3e0u;

    // 0x3de3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3de3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3de3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3de3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3de3e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3de3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3de3ec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3de3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3de3f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3de3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3de3f4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE3F4u;
    {
        const bool branch_taken_0x3de3f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DE3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3F4u;
        // 0x3de3f8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de3f4) {
            ctx->pc = 0x3DE404u;
            goto label_3de404;
        }
    }
    ctx->pc = 0x3DE3FCu;
    // 0x3de3fc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3de3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3de400: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3de400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3de404:
    // 0x3de404: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3de404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3de408: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE408u;
    {
        const bool branch_taken_0x3de408 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de408) {
            ctx->pc = 0x3DE40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE408u;
            // 0x3de40c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE41Cu;
            goto label_3de41c;
        }
    }
    ctx->pc = 0x3DE410u;
    // 0x3de410: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3de410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3de414: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3de414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3de418: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3de418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3de41c:
    // 0x3de41c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE41Cu;
    {
        const bool branch_taken_0x3de41c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de41c) {
            ctx->pc = 0x3DE420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE41Cu;
            // 0x3de420: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE430u;
            goto label_3de430;
        }
    }
    ctx->pc = 0x3DE424u;
    // 0x3de424: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3de424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3de428: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3de428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3de42c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3de42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3de430:
    // 0x3de430: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE430u;
    {
        const bool branch_taken_0x3de430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de430) {
            ctx->pc = 0x3DE434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE430u;
            // 0x3de434: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE444u;
            goto label_3de444;
        }
    }
    ctx->pc = 0x3DE438u;
    // 0x3de438: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3de438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3de43c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3de43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3de440: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3de440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3de444:
    // 0x3de444: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DE444u;
    {
        const bool branch_taken_0x3de444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de444) {
            ctx->pc = 0x3DE454u;
            goto label_3de454;
        }
    }
    ctx->pc = 0x3DE44Cu;
    // 0x3de44c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3de44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3de450: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3de450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3de454:
    // 0x3de454: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DE454u;
    {
        const bool branch_taken_0x3de454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE454u;
        // 0x3de458: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de454) {
            ctx->pc = 0x3DE468u;
            goto label_3de468;
        }
    }
    ctx->pc = 0x3DE45Cu;
    // 0x3de45c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DE45Cu;
    SET_GPR_U32(ctx, 31, 0x3DE464u);
    ctx->pc = 0x3DE460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE45Cu;
    // 0x3de460: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DE45Cu, 0x3DE464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE464u;
label_3de464:
    // 0x3de464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3de464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3de468:
    // 0x3de468: 0x3e00008  jr          $ra
    ctx->pc = 0x3DE468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE468u;
        // 0x3de46c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE470u;
}
