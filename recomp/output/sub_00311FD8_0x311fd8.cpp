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

// Function: sub_00311FD8
// Address: 0x311fd8 - 0x312020
void sub_00311FD8_0x311fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311FD8_0x311fd8");
#endif

    switch (ctx->pc) {
        case 0x311ff8u: goto label_311ff8;
        case 0x312008u: goto label_312008;
        default: break;
    }

    ctx->pc = 0x311fd8u;

    // 0x311fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x311fdc: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x311fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x311fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x311fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x311fe4: 0x24a51fd8  addiu       $a1, $a1, 0x1FD8
    ctx->pc = 0x311fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8152));
    // 0x311fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x311fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311fec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x311fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x311ff0: 0xc0c4898  jal         func_312260
    ctx->pc = 0x311FF0u;
    SET_GPR_U32(ctx, 31, 0x311FF8u);
    ctx->pc = 0x311FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311FF0u;
    // 0x311ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x311FF0u, 0x311FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311FF8u;
label_311ff8:
    // 0x311ff8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311FF8u;
    {
        const bool branch_taken_0x311ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x311FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311FF8u;
        // 0x311ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ff8) {
            ctx->pc = 0x312008u;
            goto label_312008;
        }
    }
    ctx->pc = 0x312000u;
    // 0x312000: 0xc0c4858  jal         func_312160
    ctx->pc = 0x312000u;
    SET_GPR_U32(ctx, 31, 0x312008u);
    ctx->pc = 0x312004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312000u;
    // 0x312004: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x312000u, 0x312008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312008u;
label_312008:
    // 0x312008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x312008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31200c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x312010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312014: 0x3e00008  jr          $ra
    ctx->pc = 0x312014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312014u;
        // 0x312018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31201Cu;
    // 0x31201c: 0x0  nop
    ctx->pc = 0x31201cu;
    // NOP
    ctx->pc = 0x312020u;
}
