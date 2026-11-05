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

// Function: sub_00123A30
// Address: 0x123a30 - 0x123a80
void sub_00123A30_0x123a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123A30_0x123a30");
#endif

    switch (ctx->pc) {
        case 0x123a50u: goto label_123a50;
        case 0x123a64u: goto label_123a64;
        default: break;
    }

    ctx->pc = 0x123a30u;

    // 0x123a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123a38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123a3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123a48: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123A48u;
    SET_GPR_U32(ctx, 31, 0x123A50u);
    ctx->pc = 0x123A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A48u;
    // 0x123a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123A48u, 0x123A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A50u;
label_123a50:
    // 0x123a50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123A50u;
    {
        const bool branch_taken_0x123a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A50u;
        // 0x123a54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a50) {
            ctx->pc = 0x123A6Cu;
            goto label_123a6c;
        }
    }
    ctx->pc = 0x123A58u;
    // 0x123a58: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123a5c: 0xc042d04  jal         func_10B410
    ctx->pc = 0x123A5Cu;
    SET_GPR_U32(ctx, 31, 0x123A64u);
    ctx->pc = 0x123A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123A5Cu;
    // 0x123a60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B410u, 0x123A5Cu, 0x123A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A64u;
label_123a64:
    // 0x123a64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x123A64u;
    {
        const bool branch_taken_0x123a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A64u;
        // 0x123a68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a64) {
            ctx->pc = 0x123A70u;
            goto label_123a70;
        }
    }
    ctx->pc = 0x123A6Cu;
label_123a6c:
    // 0x123a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123a70:
    // 0x123a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123a78: 0x3e00008  jr          $ra
    ctx->pc = 0x123A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123A78u;
        // 0x123a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123A80u;
}
