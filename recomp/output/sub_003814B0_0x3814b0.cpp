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

// Function: sub_003814B0
// Address: 0x3814b0 - 0x381538
void sub_003814B0_0x3814b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003814B0_0x3814b0");
#endif

    switch (ctx->pc) {
        case 0x3814c8u: goto label_3814c8;
        default: break;
    }

    ctx->pc = 0x3814b0u;

    // 0x3814b0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3814b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3814b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3814b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3814b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3814b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3814bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3814bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3814c0: 0xc0e0344  jal         func_380D10
    ctx->pc = 0x3814C0u;
    SET_GPR_U32(ctx, 31, 0x3814C8u);
    ctx->pc = 0x3814C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3814C0u;
    // 0x3814c4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380D10u, 0x3814C0u, 0x3814C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3814C8u;
label_3814c8:
    // 0x3814c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3814c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3814cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3814CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3814D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814CCu;
        // 0x3814d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3814CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3814D4u;
    // 0x3814d4: 0x0  nop
    ctx->pc = 0x3814d4u;
    // NOP
    // 0x3814d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x3814d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3814dc: 0x0  nop
    ctx->pc = 0x3814dcu;
    // NOP
    // 0x3814e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x3814e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3814e4: 0x0  nop
    ctx->pc = 0x3814e4u;
    // NOP
    // 0x3814e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3814e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3814ec: 0x0  nop
    ctx->pc = 0x3814ecu;
    // NOP
    // 0x3814f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3814f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3814f4: 0x0  nop
    ctx->pc = 0x3814f4u;
    // NOP
    // 0x3814f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3814f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3814fc: 0x0  nop
    ctx->pc = 0x3814fcu;
    // NOP
    // 0x381500: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x381500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x381504: 0x0  nop
    ctx->pc = 0x381504u;
    // NOP
    // 0x381508: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x381508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38150c: 0x0  nop
    ctx->pc = 0x38150cu;
    // NOP
    // 0x381510: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x381510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x381514: 0x0  nop
    ctx->pc = 0x381514u;
    // NOP
    // 0x381518: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x381518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38151c: 0x0  nop
    ctx->pc = 0x38151cu;
    // NOP
    // 0x381520: 0xac8016c8  sw          $zero, 0x16C8($a0)
    ctx->pc = 0x381520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5832), GPR_U32(ctx, 0));
    // 0x381524: 0x0  nop
    ctx->pc = 0x381524u;
    // NOP
    // 0x381528: 0x0  nop
    ctx->pc = 0x381528u;
    // NOP
    // 0x38152c: 0x0  nop
    ctx->pc = 0x38152cu;
    // NOP
    // 0x381530: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x381530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x381534: 0x0  nop
    ctx->pc = 0x381534u;
    // NOP
    ctx->pc = 0x381538u;
}
