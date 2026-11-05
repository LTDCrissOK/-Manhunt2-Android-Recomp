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

// Function: sub_0023F250
// Address: 0x23f250 - 0x23f2a0
void sub_0023F250_0x23f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F250_0x23f250");
#endif

    switch (ctx->pc) {
        case 0x23f270u: goto label_23f270;
        case 0x23f278u: goto label_23f278;
        case 0x23f284u: goto label_23f284;
        default: break;
    }

    ctx->pc = 0x23f250u;

    // 0x23f250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f254: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x23f254u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23f258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f25c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23f25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23f260: 0x24900718  addiu       $s0, $a0, 0x718
    ctx->pc = 0x23f260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1816));
    // 0x23f264: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x23f264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x23f268: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x23F268u;
    SET_GPR_U32(ctx, 31, 0x23F270u);
    ctx->pc = 0x23F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F268u;
    // 0x23f26c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x23F268u, 0x23F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F270u;
label_23f270:
    // 0x23f270: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x23F270u;
    SET_GPR_U32(ctx, 31, 0x23F278u);
    ctx->pc = 0x23F274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F270u;
    // 0x23f274: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x23F270u, 0x23F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F278u;
label_23f278:
    // 0x23f278: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23f278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23f27c: 0xc076934  jal         func_1DA4D0
    ctx->pc = 0x23F27Cu;
    SET_GPR_U32(ctx, 31, 0x23F284u);
    ctx->pc = 0x23F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F27Cu;
    // 0x23f280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA4D0u, 0x23F27Cu, 0x23F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F284u;
label_23f284:
    // 0x23f284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f288: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23f288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x23f28c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23f28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f290: 0x3e00008  jr          $ra
    ctx->pc = 0x23F290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F290u;
        // 0x23f294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F298u;
    // 0x23f298: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23f298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23f29c: 0x0  nop
    ctx->pc = 0x23f29cu;
    // NOP
    ctx->pc = 0x23f2a0u;
}
