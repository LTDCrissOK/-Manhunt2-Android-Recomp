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

// Function: sub_00396D68
// Address: 0x396d68 - 0x396db8
void sub_00396D68_0x396d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396D68_0x396d68");
#endif

    switch (ctx->pc) {
        case 0x396d84u: goto label_396d84;
        case 0x396da8u: goto label_396da8;
        default: break;
    }

    ctx->pc = 0x396d68u;

    // 0x396d68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396d6c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x396d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x396d70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396d74: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x396D74u;
    {
        const bool branch_taken_0x396d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D74u;
        // 0x396d78: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d74) {
            ctx->pc = 0x396DA8u;
            goto label_396da8;
        }
    }
    ctx->pc = 0x396D7Cu;
    // 0x396d7c: 0xc0f262c  jal         func_3C98B0
    ctx->pc = 0x396D7Cu;
    SET_GPR_U32(ctx, 31, 0x396D84u);
    ctx->pc = 0x396D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396D7Cu;
    // 0x396d80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98B0u, 0x396D7Cu, 0x396D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396D84u;
label_396d84:
    // 0x396d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396d88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x396d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396d8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x396d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x396d90: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x396D90u;
    {
        const bool branch_taken_0x396d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x396D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D90u;
        // 0x396d94: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d90) {
            ctx->pc = 0x396DA0u;
            goto label_396da0;
        }
    }
    ctx->pc = 0x396D98u;
    // 0x396d98: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x396D98u;
    {
        const bool branch_taken_0x396d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x396D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D98u;
        // 0x396d9c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d98) {
            ctx->pc = 0x396DACu;
            goto label_396dac;
        }
    }
    ctx->pc = 0x396DA0u;
label_396da0:
    // 0x396da0: 0xc0f29c4  jal         func_3CA710
    ctx->pc = 0x396DA0u;
    SET_GPR_U32(ctx, 31, 0x396DA8u);
    ctx->pc = 0x3CA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA710u, 0x396DA0u, 0x396DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396DA8u;
label_396da8:
    // 0x396da8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x396da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_396dac:
    // 0x396dac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x396dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x396db0: 0x3e00008  jr          $ra
    ctx->pc = 0x396DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DB0u;
        // 0x396db4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396DB8u;
}
