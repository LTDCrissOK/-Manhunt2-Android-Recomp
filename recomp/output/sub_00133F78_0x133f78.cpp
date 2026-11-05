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

// Function: sub_00133F78
// Address: 0x133f78 - 0x133fc0
void sub_00133F78_0x133f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133F78_0x133f78");
#endif

    switch (ctx->pc) {
        case 0x133f90u: goto label_133f90;
        case 0x133fa8u: goto label_133fa8;
        default: break;
    }

    ctx->pc = 0x133f78u;

    // 0x133f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133f80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x133f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f88: 0xc04bbee  jal         func_12EFB8
    ctx->pc = 0x133F88u;
    SET_GPR_U32(ctx, 31, 0x133F90u);
    ctx->pc = 0x133F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F88u;
    // 0x133f8c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB8u, 0x133F88u, 0x133F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133F90u;
label_133f90:
    // 0x133f90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x133F90u;
    {
        const bool branch_taken_0x133f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133f90) {
            ctx->pc = 0x133F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133F90u;
            // 0x133f94: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133FA0u;
            goto label_133fa0;
        }
    }
    ctx->pc = 0x133F98u;
    // 0x133f98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x133F98u;
    {
        const bool branch_taken_0x133f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F98u;
        // 0x133f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f98) {
            ctx->pc = 0x133FB0u;
            goto label_133fb0;
        }
    }
    ctx->pc = 0x133FA0u;
label_133fa0:
    // 0x133fa0: 0xc04c710  jal         func_131C40
    ctx->pc = 0x133FA0u;
    SET_GPR_U32(ctx, 31, 0x133FA8u);
    ctx->pc = 0x133FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FA0u;
    // 0x133fa4: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C40u, 0x133FA0u, 0x133FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133FA8u;
label_133fa8:
    // 0x133fa8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x133fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x133fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133fb0:
    // 0x133fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133fb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x133FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FB8u;
        // 0x133fbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133FC0u;
}
