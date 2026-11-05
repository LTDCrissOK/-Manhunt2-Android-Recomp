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

// Function: sub_001AB368
// Address: 0x1ab368 - 0x1ab3d0
void sub_001AB368_0x1ab368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB368_0x1ab368");
#endif

    switch (ctx->pc) {
        case 0x1ab384u: goto label_1ab384;
        case 0x1ab3b4u: goto label_1ab3b4;
        case 0x1ab3c0u: goto label_1ab3c0;
        default: break;
    }

    ctx->pc = 0x1ab368u;

    // 0x1ab368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab36c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab37c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB37Cu;
    SET_GPR_U32(ctx, 31, 0x1AB384u);
    ctx->pc = 0x1AB380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB37Cu;
    // 0x1ab380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB37Cu, 0x1AB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB384u;
label_1ab384:
    // 0x1ab384: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1ab384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1ab388: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1AB388u;
    {
        const bool branch_taken_0x1ab388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab388) {
            ctx->pc = 0x1AB38Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB388u;
            // 0x1ab38c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB3C4u;
            goto label_1ab3c4;
        }
    }
    ctx->pc = 0x1AB390u;
    // 0x1ab390: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1ab390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1ab394: 0x2842051e  slti        $v0, $v0, 0x51E
    ctx->pc = 0x1ab394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1310) ? 1 : 0);
    // 0x1ab398: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB398u;
    {
        const bool branch_taken_0x1ab398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB398u;
        // 0x1ab39c: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab398) {
            ctx->pc = 0x1AB3C0u;
            goto label_1ab3c0;
        }
    }
    ctx->pc = 0x1AB3A0u;
    // 0x1ab3a0: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1ab3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1ab3a4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB3A4u;
    {
        const bool branch_taken_0x1ab3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab3a4) {
            ctx->pc = 0x1AB3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB3A4u;
            // 0x1ab3a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB3C4u;
            goto label_1ab3c4;
        }
    }
    ctx->pc = 0x1AB3ACu;
    // 0x1ab3ac: 0xc069ab8  jal         func_1A6AE0
    ctx->pc = 0x1AB3ACu;
    SET_GPR_U32(ctx, 31, 0x1AB3B4u);
    ctx->pc = 0x1AB3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3ACu;
    // 0x1ab3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AE0u, 0x1AB3ACu, 0x1AB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3B4u;
label_1ab3b4:
    // 0x1ab3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3b8: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1AB3B8u;
    SET_GPR_U32(ctx, 31, 0x1AB3C0u);
    ctx->pc = 0x1AB3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3B8u;
    // 0x1ab3bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1AB3B8u, 0x1AB3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3C0u;
label_1ab3c0:
    // 0x1ab3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab3c4:
    // 0x1ab3c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB3C8u;
        // 0x1ab3cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB3D0u;
}
