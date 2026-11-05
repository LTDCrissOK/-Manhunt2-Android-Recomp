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

// Function: sub_00156F88
// Address: 0x156f88 - 0x156fc8
void sub_00156F88_0x156f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156F88_0x156f88");
#endif

    switch (ctx->pc) {
        case 0x156f9cu: goto label_156f9c;
        case 0x156fb4u: goto label_156fb4;
        default: break;
    }

    ctx->pc = 0x156f88u;

    // 0x156f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156f90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x156f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x156f94: 0xc04ef70  jal         func_13BDC0
    ctx->pc = 0x156F94u;
    SET_GPR_U32(ctx, 31, 0x156F9Cu);
    ctx->pc = 0x156F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F94u;
    // 0x156f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BDC0u, 0x156F94u, 0x156F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F9Cu;
label_156f9c:
    // 0x156f9c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x156f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x156fa0: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x156fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x156fa4: 0x24630bd0  addiu       $v1, $v1, 0xBD0
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3024));
    // 0x156fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fac: 0xc055cae  jal         func_1572B8
    ctx->pc = 0x156FACu;
    SET_GPR_U32(ctx, 31, 0x156FB4u);
    ctx->pc = 0x156FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FACu;
    // 0x156fb0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1572B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1572B8u, 0x156FACu, 0x156FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FB4u;
label_156fb4:
    // 0x156fb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x156fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x156fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x156FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FC0u;
        // 0x156fc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156FC8u;
}
