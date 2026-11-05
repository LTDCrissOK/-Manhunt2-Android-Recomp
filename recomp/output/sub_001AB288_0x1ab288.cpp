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

// Function: sub_001AB288
// Address: 0x1ab288 - 0x1ab2f0
void sub_001AB288_0x1ab288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB288_0x1ab288");
#endif

    switch (ctx->pc) {
        case 0x1ab2a4u: goto label_1ab2a4;
        case 0x1ab2d4u: goto label_1ab2d4;
        case 0x1ab2e0u: goto label_1ab2e0;
        default: break;
    }

    ctx->pc = 0x1ab288u;

    // 0x1ab288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab28c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab294: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab29c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB29Cu;
    SET_GPR_U32(ctx, 31, 0x1AB2A4u);
    ctx->pc = 0x1AB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB29Cu;
    // 0x1ab2a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB29Cu, 0x1AB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2A4u;
label_1ab2a4:
    // 0x1ab2a4: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1ab2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1ab2a8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1AB2A8u;
    {
        const bool branch_taken_0x1ab2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab2a8) {
            ctx->pc = 0x1AB2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB2A8u;
            // 0x1ab2ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB2E4u;
            goto label_1ab2e4;
        }
    }
    ctx->pc = 0x1AB2B0u;
    // 0x1ab2b0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1ab2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1ab2b4: 0x284204ec  slti        $v0, $v0, 0x4EC
    ctx->pc = 0x1ab2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1260) ? 1 : 0);
    // 0x1ab2b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB2B8u;
    {
        const bool branch_taken_0x1ab2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2B8u;
        // 0x1ab2bc: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab2b8) {
            ctx->pc = 0x1AB2E0u;
            goto label_1ab2e0;
        }
    }
    ctx->pc = 0x1AB2C0u;
    // 0x1ab2c0: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1ab2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1ab2c4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB2C4u;
    {
        const bool branch_taken_0x1ab2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab2c4) {
            ctx->pc = 0x1AB2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB2C4u;
            // 0x1ab2c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB2E4u;
            goto label_1ab2e4;
        }
    }
    ctx->pc = 0x1AB2CCu;
    // 0x1ab2cc: 0xc069ab8  jal         func_1A6AE0
    ctx->pc = 0x1AB2CCu;
    SET_GPR_U32(ctx, 31, 0x1AB2D4u);
    ctx->pc = 0x1AB2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB2CCu;
    // 0x1ab2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6AE0u, 0x1AB2CCu, 0x1AB2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2D4u;
label_1ab2d4:
    // 0x1ab2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab2d8: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1AB2D8u;
    SET_GPR_U32(ctx, 31, 0x1AB2E0u);
    ctx->pc = 0x1AB2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB2D8u;
    // 0x1ab2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1AB2D8u, 0x1AB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB2E0u;
label_1ab2e0:
    // 0x1ab2e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab2e4:
    // 0x1ab2e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB2E8u;
        // 0x1ab2ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB2F0u;
}
