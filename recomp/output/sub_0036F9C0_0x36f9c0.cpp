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

// Function: sub_0036F9C0
// Address: 0x36f9c0 - 0x36fa18
void sub_0036F9C0_0x36f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F9C0_0x36f9c0");
#endif

    switch (ctx->pc) {
        case 0x36f9f0u: goto label_36f9f0;
        default: break;
    }

    ctx->pc = 0x36f9c0u;

    // 0x36f9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36f9c4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x36f9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9c8: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x36f9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x36f9cc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x36f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x36f9d0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x36f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x36f9d4: 0x24c6f988  addiu       $a2, $a2, -0x678
    ctx->pc = 0x36f9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965640));
    // 0x36f9d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36f9dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36f9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9e0: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x36f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x36f9e4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36f9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f9e8: 0xc0c92ce  jal         func_324B38
    ctx->pc = 0x36F9E8u;
    SET_GPR_U32(ctx, 31, 0x36F9F0u);
    ctx->pc = 0x36F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F9E8u;
    // 0x36f9ec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324B38u, 0x36F9E8u, 0x36F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F9F0u;
label_36f9f0:
    // 0x36f9f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36f9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f9f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x36F9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F9F8u;
        // 0x36f9fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FA00u;
    // 0x36fa00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36fa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36fa04: 0x0  nop
    ctx->pc = 0x36fa04u;
    // NOP
    // 0x36fa08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36fa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36fa0c: 0x0  nop
    ctx->pc = 0x36fa0cu;
    // NOP
    // 0x36fa10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36fa14: 0x0  nop
    ctx->pc = 0x36fa14u;
    // NOP
    ctx->pc = 0x36fa18u;
}
