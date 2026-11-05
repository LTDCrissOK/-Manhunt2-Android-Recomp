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

// Function: sub_00133FC0
// Address: 0x133fc0 - 0x134008
void sub_00133FC0_0x133fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133FC0_0x133fc0");
#endif

    switch (ctx->pc) {
        case 0x133fd8u: goto label_133fd8;
        case 0x133ff0u: goto label_133ff0;
        default: break;
    }

    ctx->pc = 0x133fc0u;

    // 0x133fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133fc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x133fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fd0: 0xc04bbf4  jal         func_12EFD0
    ctx->pc = 0x133FD0u;
    SET_GPR_U32(ctx, 31, 0x133FD8u);
    ctx->pc = 0x133FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FD0u;
    // 0x133fd4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFD0u, 0x133FD0u, 0x133FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FD8u;
label_133fd8:
    // 0x133fd8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x133FD8u;
    {
        const bool branch_taken_0x133fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133fd8) {
            ctx->pc = 0x133FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133FD8u;
            // 0x133fdc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133FE8u;
            goto label_133fe8;
        }
    }
    ctx->pc = 0x133FE0u;
    // 0x133fe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x133FE0u;
    {
        const bool branch_taken_0x133fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FE0u;
        // 0x133fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133fe0) {
            ctx->pc = 0x133FF8u;
            goto label_133ff8;
        }
    }
    ctx->pc = 0x133FE8u;
label_133fe8:
    // 0x133fe8: 0xc04c740  jal         func_131D00
    ctx->pc = 0x133FE8u;
    SET_GPR_U32(ctx, 31, 0x133FF0u);
    ctx->pc = 0x133FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FE8u;
    // 0x133fec: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D00u, 0x133FE8u, 0x133FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FF0u;
label_133ff0:
    // 0x133ff0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x133ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x133ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133ff8:
    // 0x133ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133ffc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134000: 0x3e00008  jr          $ra
    ctx->pc = 0x134000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134000u;
        // 0x134004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134008u;
}
