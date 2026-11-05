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

// Function: sub_0020AD78
// Address: 0x20ad78 - 0x20adc0
void sub_0020AD78_0x20ad78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AD78_0x20ad78");
#endif

    switch (ctx->pc) {
        case 0x20ad9cu: goto label_20ad9c;
        case 0x20ada4u: goto label_20ada4;
        default: break;
    }

    ctx->pc = 0x20ad78u;

    // 0x20ad78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ad78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ad7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ad80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20ad80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20ad84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20ad84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad88: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x20ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x20ad8c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20AD8Cu;
    {
        const bool branch_taken_0x20ad8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad8c) {
            ctx->pc = 0x20AD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AD8Cu;
            // 0x20ad90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ADACu;
            goto label_20adac;
        }
    }
    ctx->pc = 0x20AD94u;
    // 0x20ad94: 0xc075ae4  jal         func_1D6B90
    ctx->pc = 0x20AD94u;
    SET_GPR_U32(ctx, 31, 0x20AD9Cu);
    ctx->pc = 0x1D6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6B90u, 0x20AD94u, 0x20AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD9Cu;
label_20ad9c:
    // 0x20ad9c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x20AD9Cu;
    SET_GPR_U32(ctx, 31, 0x20ADA4u);
    ctx->pc = 0x20ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD9Cu;
    // 0x20ada0: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x20AD9Cu, 0x20ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ADA4u;
label_20ada4:
    // 0x20ada4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x20ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x20ada8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ada8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20adac:
    // 0x20adac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20adb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20adb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20adb4: 0x3e00008  jr          $ra
    ctx->pc = 0x20ADB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADB4u;
        // 0x20adb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ADBCu;
    // 0x20adbc: 0x0  nop
    ctx->pc = 0x20adbcu;
    // NOP
    ctx->pc = 0x20adc0u;
}
