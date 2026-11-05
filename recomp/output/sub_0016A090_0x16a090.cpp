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

// Function: sub_0016A090
// Address: 0x16a090 - 0x16a0d0
void sub_0016A090_0x16a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A090_0x16a090");
#endif

    switch (ctx->pc) {
        case 0x16a0a4u: goto label_16a0a4;
        case 0x16a0bcu: goto label_16a0bc;
        default: break;
    }

    ctx->pc = 0x16a090u;

    // 0x16a090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a098: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16a09c: 0xc05ab66  jal         func_16AD98
    ctx->pc = 0x16A09Cu;
    SET_GPR_U32(ctx, 31, 0x16A0A4u);
    ctx->pc = 0x16A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A09Cu;
    // 0x16a0a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD98u, 0x16A09Cu, 0x16A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0A4u;
label_16a0a4:
    // 0x16a0a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0a8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x16a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16a0ac: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A0ACu;
    {
        const bool branch_taken_0x16a0ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16a0ac) {
            ctx->pc = 0x16A0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A0ACu;
            // 0x16a0b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A0C0u;
            goto label_16a0c0;
        }
    }
    ctx->pc = 0x16A0B4u;
    // 0x16a0b4: 0xc05aaf2  jal         func_16ABC8
    ctx->pc = 0x16A0B4u;
    SET_GPR_U32(ctx, 31, 0x16A0BCu);
    ctx->pc = 0x16A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A0B4u;
    // 0x16a0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABC8u, 0x16A0B4u, 0x16A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0BCu;
label_16a0bc:
    // 0x16a0bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a0c0:
    // 0x16a0c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16a0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0C4u;
        // 0x16a0c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A0CCu;
    // 0x16a0cc: 0x0  nop
    ctx->pc = 0x16a0ccu;
    // NOP
    ctx->pc = 0x16a0d0u;
}
