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

// Function: sub_00110BC8
// Address: 0x110bc8 - 0x110c08
void sub_00110BC8_0x110bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110BC8_0x110bc8");
#endif

    switch (ctx->pc) {
        case 0x110becu: goto label_110bec;
        case 0x110bfcu: goto label_110bfc;
        default: break;
    }

    ctx->pc = 0x110bc8u;

    // 0x110bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110bcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110bd0: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110bd4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110BD4u;
    {
        const bool branch_taken_0x110bd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x110bd4) {
            ctx->pc = 0x110BF4u;
            goto label_110bf4;
        }
    }
    ctx->pc = 0x110BDCu;
    // 0x110bdc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x110BDCu;
    {
        const bool branch_taken_0x110bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BDCu;
        // 0x110be0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bdc) {
            ctx->pc = 0x110C00u;
            goto label_110c00;
        }
    }
    ctx->pc = 0x110BE4u;
    // 0x110be4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x110BE4u;
    SET_GPR_U32(ctx, 31, 0x110BECu);
    ctx->pc = 0x110BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BE4u;
    // 0x110be8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x110BE4u, 0x110BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BECu;
label_110bec:
    // 0x110bec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110BECu;
    {
        const bool branch_taken_0x110bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BECu;
        // 0x110bf0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bec) {
            ctx->pc = 0x110C00u;
            goto label_110c00;
        }
    }
    ctx->pc = 0x110BF4u;
label_110bf4:
    // 0x110bf4: 0xc05a906  jal         func_16A418
    ctx->pc = 0x110BF4u;
    SET_GPR_U32(ctx, 31, 0x110BFCu);
    ctx->pc = 0x16A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A418u, 0x110BF4u, 0x110BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BFCu;
label_110bfc:
    // 0x110bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110c00:
    // 0x110c00: 0x3e00008  jr          $ra
    ctx->pc = 0x110C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C00u;
        // 0x110c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110C08u;
}
