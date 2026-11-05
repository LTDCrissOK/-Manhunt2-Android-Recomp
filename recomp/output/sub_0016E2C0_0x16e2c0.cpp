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

// Function: sub_0016E2C0
// Address: 0x16e2c0 - 0x16e328
void sub_0016E2C0_0x16e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E2C0_0x16e2c0");
#endif

    switch (ctx->pc) {
        case 0x16e30cu: goto label_16e30c;
        case 0x16e31cu: goto label_16e31c;
        default: break;
    }

    ctx->pc = 0x16e2c0u;

    // 0x16e2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e2c8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x16e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x16e2cc: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x16e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16e2d0: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x16e2d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16e2d4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16E2D4u;
    {
        const bool branch_taken_0x16e2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e2d4) {
            ctx->pc = 0x16E2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E2D4u;
            // 0x16e2d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E2F4u;
            goto label_16e2f4;
        }
    }
    ctx->pc = 0x16E2DCu;
    // 0x16e2dc: 0x1ca00009  bgtz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16E2DCu;
    {
        const bool branch_taken_0x16e2dc = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x16e2dc) {
            ctx->pc = 0x16E304u;
            goto label_16e304;
        }
    }
    ctx->pc = 0x16E2E4u;
    // 0x16e2e4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x16E2E4u;
    {
        const bool branch_taken_0x16e2e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2E4u;
        // 0x16e2e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2e4) {
            ctx->pc = 0x16E314u;
            goto label_16e314;
        }
    }
    ctx->pc = 0x16E2ECu;
    // 0x16e2ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16E2ECu;
    {
        const bool branch_taken_0x16e2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e2ec) {
            ctx->pc = 0x16E320u;
            goto label_16e320;
        }
    }
    ctx->pc = 0x16E2F4u;
label_16e2f4:
    // 0x16e2f4: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16E2F4u;
    {
        const bool branch_taken_0x16e2f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2F4u;
        // 0x16e2f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e2f4) {
            ctx->pc = 0x16E314u;
            goto label_16e314;
        }
    }
    ctx->pc = 0x16E2FCu;
    // 0x16e2fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16E2FCu;
    {
        const bool branch_taken_0x16e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e2fc) {
            ctx->pc = 0x16E320u;
            goto label_16e320;
        }
    }
    ctx->pc = 0x16E304u;
label_16e304:
    // 0x16e304: 0xc05b8ec  jal         func_16E3B0
    ctx->pc = 0x16E304u;
    SET_GPR_U32(ctx, 31, 0x16E30Cu);
    ctx->pc = 0x16E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E3B0u, 0x16E304u, 0x16E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E30Cu;
label_16e30c:
    // 0x16e30c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16E30Cu;
    {
        const bool branch_taken_0x16e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E30Cu;
        // 0x16e310: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e30c) {
            ctx->pc = 0x16E320u;
            goto label_16e320;
        }
    }
    ctx->pc = 0x16E314u;
label_16e314:
    // 0x16e314: 0xc05b8ca  jal         func_16E328
    ctx->pc = 0x16E314u;
    SET_GPR_U32(ctx, 31, 0x16E31Cu);
    ctx->pc = 0x16E328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E328u, 0x16E314u, 0x16E31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E31Cu;
label_16e31c:
    // 0x16e31c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e320:
    // 0x16e320: 0x3e00008  jr          $ra
    ctx->pc = 0x16E320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E320u;
        // 0x16e324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E328u;
}
