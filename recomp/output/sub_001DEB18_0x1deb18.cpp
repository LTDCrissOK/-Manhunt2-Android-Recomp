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

// Function: sub_001DEB18
// Address: 0x1deb18 - 0x1deb78
void sub_001DEB18_0x1deb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEB18_0x1deb18");
#endif

    switch (ctx->pc) {
        case 0x1deb50u: goto label_1deb50;
        default: break;
    }

    ctx->pc = 0x1deb18u;

    // 0x1deb18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb1c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1deb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1deb20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1deb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1deb24: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x1deb24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x1deb28: 0x8c62d9a4  lw          $v0, -0x265C($v1)
    ctx->pc = 0x1deb28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x45D9A4u));
    // 0x1deb2c: 0x8e052b1c  lw          $a1, 0x2B1C($s0)
    ctx->pc = 0x1deb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1deb30: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DEB30u;
    {
        const bool branch_taken_0x1deb30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB30u;
        // 0x1deb34: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb30) {
            ctx->pc = 0x1DEB64u;
            goto label_1deb64;
        }
    }
    ctx->pc = 0x1DEB38u;
    // 0x1deb38: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1deb38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1deb3c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1deb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1deb40: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x1deb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x1deb44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1deb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1deb48: 0xc07a908  jal         func_1EA420
    ctx->pc = 0x1DEB48u;
    SET_GPR_U32(ctx, 31, 0x1DEB50u);
    ctx->pc = 0x1DEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB48u;
    // 0x1deb4c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA420u, 0x1DEB48u, 0x1DEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB50u;
label_1deb50:
    // 0x1deb50: 0x8e032b1c  lw          $v1, 0x2B1C($s0)
    ctx->pc = 0x1deb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11036)));
    // 0x1deb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1deb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1deb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1deb5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEB5Cu;
    {
        const bool branch_taken_0x1deb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB5Cu;
        // 0x1deb60: 0xae032b1c  sw          $v1, 0x2B1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb5c) {
            ctx->pc = 0x1DEB68u;
            goto label_1deb68;
        }
    }
    ctx->pc = 0x1DEB64u;
label_1deb64:
    // 0x1deb64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1deb64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1deb68:
    // 0x1deb68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1deb68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1deb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1deb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB70u;
        // 0x1deb74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB78u;
}
