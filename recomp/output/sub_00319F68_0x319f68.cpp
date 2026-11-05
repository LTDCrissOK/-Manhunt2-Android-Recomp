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

// Function: sub_00319F68
// Address: 0x319f68 - 0x319fa8
void sub_00319F68_0x319f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319F68_0x319f68");
#endif

    switch (ctx->pc) {
        case 0x319f98u: goto label_319f98;
        default: break;
    }

    ctx->pc = 0x319f68u;

    // 0x319f68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x319f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x319f6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319f70: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x319f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x319f74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319F74u;
    {
        const bool branch_taken_0x319f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F74u;
        // 0x319f78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f74) {
            ctx->pc = 0x319F88u;
            goto label_319f88;
        }
    }
    ctx->pc = 0x319F7Cu;
    // 0x319f7c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x319f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x319f80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x319F80u;
    {
        const bool branch_taken_0x319f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F80u;
        // 0x319f84: 0x8c62bd28  lw          $v0, -0x42D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f80) {
            ctx->pc = 0x319F98u;
            goto label_319f98;
        }
    }
    ctx->pc = 0x319F88u;
label_319f88:
    // 0x319f88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x319f8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x319f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f90: 0xc0b58ee  jal         func_2D63B8
    ctx->pc = 0x319F90u;
    SET_GPR_U32(ctx, 31, 0x319F98u);
    ctx->pc = 0x319F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F90u;
    // 0x319f94: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D63B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D63B8u, 0x319F90u, 0x319F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F98u;
label_319f98:
    // 0x319f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x319F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F9Cu;
        // 0x319fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319FA4u;
    // 0x319fa4: 0x0  nop
    ctx->pc = 0x319fa4u;
    // NOP
    ctx->pc = 0x319fa8u;
}
