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

// Function: sub_0031EE80
// Address: 0x31ee80 - 0x31eeb8
void sub_0031EE80_0x31ee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EE80_0x31ee80");
#endif

    switch (ctx->pc) {
        case 0x31ee9cu: goto label_31ee9c;
        case 0x31eeacu: goto label_31eeac;
        default: break;
    }

    ctx->pc = 0x31ee80u;

    // 0x31ee80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ee84: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31EE84u;
    {
        const bool branch_taken_0x31ee84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE84u;
        // 0x31ee88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee84) {
            ctx->pc = 0x31EEA4u;
            goto label_31eea4;
        }
    }
    ctx->pc = 0x31EE8Cu;
    // 0x31ee8c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x31ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x31ee90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31ee90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ee94: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x31EE94u;
    SET_GPR_U32(ctx, 31, 0x31EE9Cu);
    ctx->pc = 0x31EE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EE94u;
    // 0x31ee98: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x31EE94u, 0x31EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE9Cu;
label_31ee9c:
    // 0x31ee9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31EE9Cu;
    {
        const bool branch_taken_0x31ee9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EE9Cu;
        // 0x31eea0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ee9c) {
            ctx->pc = 0x31EEB0u;
            goto label_31eeb0;
        }
    }
    ctx->pc = 0x31EEA4u;
label_31eea4:
    // 0x31eea4: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x31EEA4u;
    SET_GPR_U32(ctx, 31, 0x31EEACu);
    ctx->pc = 0x31EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EEA4u;
    // 0x31eea8: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x31EEA4u, 0x31EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EEACu;
label_31eeac:
    // 0x31eeac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31eeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31eeb0:
    // 0x31eeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x31EEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EEB0u;
        // 0x31eeb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EEB8u;
}
