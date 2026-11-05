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

// Function: sub_0016A9B8
// Address: 0x16a9b8 - 0x16aa00
void sub_0016A9B8_0x16a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A9B8_0x16a9b8");
#endif

    switch (ctx->pc) {
        case 0x16a9d0u: goto label_16a9d0;
        default: break;
    }

    ctx->pc = 0x16a9b8u;

    // 0x16a9b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a9bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a9c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16a9c8: 0xc05aacc  jal         func_16AB30
    ctx->pc = 0x16A9C8u;
    SET_GPR_U32(ctx, 31, 0x16A9D0u);
    ctx->pc = 0x16A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9C8u;
    // 0x16a9cc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB30u, 0x16A9C8u, 0x16A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9D0u;
label_16a9d0:
    // 0x16a9d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a9d4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x16a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16a9d8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x16a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x16a9dc: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x16a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x16a9e0: 0xa60300e4  sh          $v1, 0xE4($s0)
    ctx->pc = 0x16a9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 228), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a9e4: 0xa60400e6  sh          $a0, 0xE6($s0)
    ctx->pc = 0x16a9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 230), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a9e8: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x16a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x16a9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a9f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16a9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A9F4u;
        // 0x16a9f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A9FCu;
    // 0x16a9fc: 0x0  nop
    ctx->pc = 0x16a9fcu;
    // NOP
    ctx->pc = 0x16aa00u;
}
