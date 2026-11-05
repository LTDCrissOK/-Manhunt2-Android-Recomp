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

// Function: sub_00319FA8
// Address: 0x319fa8 - 0x319fe8
void sub_00319FA8_0x319fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319FA8_0x319fa8");
#endif

    switch (ctx->pc) {
        case 0x319fd8u: goto label_319fd8;
        default: break;
    }

    ctx->pc = 0x319fa8u;

    // 0x319fa8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x319fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x319fac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319fb0: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x319fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x319fb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319FB4u;
    {
        const bool branch_taken_0x319fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FB4u;
        // 0x319fb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fb4) {
            ctx->pc = 0x319FC8u;
            goto label_319fc8;
        }
    }
    ctx->pc = 0x319FBCu;
    // 0x319fbc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x319fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x319fc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x319FC0u;
    {
        const bool branch_taken_0x319fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FC0u;
        // 0x319fc4: 0x8c62bd28  lw          $v0, -0x42D8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fc0) {
            ctx->pc = 0x319FD8u;
            goto label_319fd8;
        }
    }
    ctx->pc = 0x319FC8u;
label_319fc8:
    // 0x319fc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x319fcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x319fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319fd0: 0xc0b58de  jal         func_2D6378
    ctx->pc = 0x319FD0u;
    SET_GPR_U32(ctx, 31, 0x319FD8u);
    ctx->pc = 0x319FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319FD0u;
    // 0x319fd4: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6378u, 0x319FD0u, 0x319FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319FD8u;
label_319fd8:
    // 0x319fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x319FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FDCu;
        // 0x319fe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319FE4u;
    // 0x319fe4: 0x0  nop
    ctx->pc = 0x319fe4u;
    // NOP
    ctx->pc = 0x319fe8u;
}
