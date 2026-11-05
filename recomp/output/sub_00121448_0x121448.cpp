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

// Function: sub_00121448
// Address: 0x121448 - 0x121498
void sub_00121448_0x121448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121448_0x121448");
#endif

    switch (ctx->pc) {
        case 0x121468u: goto label_121468;
        case 0x12147cu: goto label_12147c;
        default: break;
    }

    ctx->pc = 0x121448u;

    // 0x121448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12144c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121454: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121458: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12145c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x121460: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121460u;
    SET_GPR_U32(ctx, 31, 0x121468u);
    ctx->pc = 0x121464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121460u;
    // 0x121464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121460u, 0x121468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121468u;
label_121468:
    // 0x121468: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121468u;
    {
        const bool branch_taken_0x121468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121468u;
        // 0x12146c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121468) {
            ctx->pc = 0x121480u;
            goto label_121480;
        }
    }
    ctx->pc = 0x121470u;
    // 0x121470: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x121470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x121474: 0xc042550  jal         func_109540
    ctx->pc = 0x121474u;
    SET_GPR_U32(ctx, 31, 0x12147Cu);
    ctx->pc = 0x121478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121474u;
    // 0x121478: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109540u, 0x121474u, 0x12147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12147Cu;
label_12147c:
    // 0x12147c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121480:
    // 0x121480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12148c: 0x3e00008  jr          $ra
    ctx->pc = 0x12148Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12148Cu;
        // 0x121490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12148Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121494u;
    // 0x121494: 0x0  nop
    ctx->pc = 0x121494u;
    // NOP
    ctx->pc = 0x121498u;
}
