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

// Function: sub_0024B2B8
// Address: 0x24b2b8 - 0x24b330
void sub_0024B2B8_0x24b2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B2B8_0x24b2b8");
#endif

    switch (ctx->pc) {
        case 0x24b2d4u: goto label_24b2d4;
        case 0x24b2e8u: goto label_24b2e8;
        case 0x24b30cu: goto label_24b30c;
        case 0x24b31cu: goto label_24b31c;
        default: break;
    }

    ctx->pc = 0x24b2b8u;

    // 0x24b2b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b2bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b2c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b2c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24b2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b2c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b2cc: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24B2CCu;
    SET_GPR_U32(ctx, 31, 0x24B2D4u);
    ctx->pc = 0x24B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B2CCu;
    // 0x24b2d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24B2CCu, 0x24B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B2D4u;
label_24b2d4:
    // 0x24b2d4: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x24b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x24b2d8: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x24B2D8u;
    {
        const bool branch_taken_0x24b2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2D8u;
        // 0x24b2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2d8) {
            ctx->pc = 0x24B304u;
            goto label_24b304;
        }
    }
    ctx->pc = 0x24B2E0u;
    // 0x24b2e0: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x24b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x24b2e4: 0x0  nop
    ctx->pc = 0x24b2e4u;
    // NOP
label_24b2e8:
    // 0x24b2e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b2ec: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B2ECu;
    {
        const bool branch_taken_0x24b2ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2ECu;
        // 0x24b2f0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2ec) {
            ctx->pc = 0x24B304u;
            goto label_24b304;
        }
    }
    ctx->pc = 0x24B2F4u;
    // 0x24b2f4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x24b2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24b2f8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24B2F8u;
    {
        const bool branch_taken_0x24b2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B2F8u;
        // 0x24b2fc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b2f8) {
            ctx->pc = 0x24B2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b2e8;
        }
    }
    ctx->pc = 0x24B300u;
    // 0x24b300: 0x8e0401e8  lw          $a0, 0x1E8($s0)
    ctx->pc = 0x24b300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_24b304:
    // 0x24b304: 0xc074152  jal         func_1D0548
    ctx->pc = 0x24B304u;
    SET_GPR_U32(ctx, 31, 0x24B30Cu);
    ctx->pc = 0x1D0548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0548u, 0x24B304u, 0x24B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B30Cu;
label_24b30c:
    // 0x24b30c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B30Cu;
    {
        const bool branch_taken_0x24b30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b30c) {
            ctx->pc = 0x24B310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B30Cu;
            // 0x24b310: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B320u;
            goto label_24b320;
        }
    }
    ctx->pc = 0x24B314u;
    // 0x24b314: 0xc092bd0  jal         func_24AF40
    ctx->pc = 0x24B314u;
    SET_GPR_U32(ctx, 31, 0x24B31Cu);
    ctx->pc = 0x24B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B314u;
    // 0x24b318: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AF40u, 0x24B314u, 0x24B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B31Cu;
label_24b31c:
    // 0x24b31c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b31cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b320:
    // 0x24b320: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b324: 0x3e00008  jr          $ra
    ctx->pc = 0x24B324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B324u;
        // 0x24b328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B32Cu;
    // 0x24b32c: 0x0  nop
    ctx->pc = 0x24b32cu;
    // NOP
    ctx->pc = 0x24b330u;
}
