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

// Function: sub_00276B48
// Address: 0x276b48 - 0x276b90
void sub_00276B48_0x276b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276B48_0x276b48");
#endif

    switch (ctx->pc) {
        case 0x276b5cu: goto label_276b5c;
        case 0x276b78u: goto label_276b78;
        default: break;
    }

    ctx->pc = 0x276b48u;

    // 0x276b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276b50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x276b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x276b54: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x276B54u;
    SET_GPR_U32(ctx, 31, 0x276B5Cu);
    ctx->pc = 0x276B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B54u;
    // 0x276b58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x276B54u, 0x276B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B5Cu;
label_276b5c:
    // 0x276b5c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x276b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x276b60: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x276b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x276b64: 0x24632b80  addiu       $v1, $v1, 0x2B80
    ctx->pc = 0x276b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11136));
    // 0x276b68: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x276b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x276b6c: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x276b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x276b70: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x276B70u;
    SET_GPR_U32(ctx, 31, 0x276B78u);
    ctx->pc = 0x276B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B70u;
    // 0x276b74: 0x24a581d8  addiu       $a1, $a1, -0x7E28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x276B70u, 0x276B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B78u;
label_276b78:
    // 0x276b78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x276b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b7c: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x276b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x276b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276b84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x276b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276b88: 0x3e00008  jr          $ra
    ctx->pc = 0x276B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B88u;
        // 0x276b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276B90u;
}
