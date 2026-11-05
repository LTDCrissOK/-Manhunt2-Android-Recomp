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

// Function: sub_0016AAC8
// Address: 0x16aac8 - 0x16ab08
void sub_0016AAC8_0x16aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AAC8_0x16aac8");
#endif

    switch (ctx->pc) {
        case 0x16aae0u: goto label_16aae0;
        default: break;
    }

    ctx->pc = 0x16aac8u;

    // 0x16aac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16aac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16aacc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16aaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16aad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16aad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aad4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16aad8: 0xc05aacc  jal         func_16AB30
    ctx->pc = 0x16AAD8u;
    SET_GPR_U32(ctx, 31, 0x16AAE0u);
    ctx->pc = 0x16AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAD8u;
    // 0x16aadc: 0x26050108  addiu       $a1, $s0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AB30u, 0x16AAD8u, 0x16AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AAE0u;
label_16aae0:
    // 0x16aae0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16aae4: 0x24042ee0  addiu       $a0, $zero, 0x2EE0
    ctx->pc = 0x16aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
    // 0x16aae8: 0x240232c8  addiu       $v0, $zero, 0x32C8
    ctx->pc = 0x16aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13000));
    // 0x16aaec: 0xae030108  sw          $v1, 0x108($s0)
    ctx->pc = 0x16aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
    // 0x16aaf0: 0xa602011e  sh          $v0, 0x11E($s0)
    ctx->pc = 0x16aaf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x16aaf4: 0xa604011c  sh          $a0, 0x11C($s0)
    ctx->pc = 0x16aaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 4));
    // 0x16aaf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16aaf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aafc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16aafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ab00: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB00u;
        // 0x16ab04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AB08u;
}
