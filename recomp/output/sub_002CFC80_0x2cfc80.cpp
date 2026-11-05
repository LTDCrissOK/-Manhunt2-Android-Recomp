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

// Function: sub_002CFC80
// Address: 0x2cfc80 - 0x2cfcc0
void sub_002CFC80_0x2cfc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFC80_0x2cfc80");
#endif

    switch (ctx->pc) {
        case 0x2cfc98u: goto label_2cfc98;
        case 0x2cfca0u: goto label_2cfca0;
        default: break;
    }

    ctx->pc = 0x2cfc80u;

    // 0x2cfc80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cfc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfc88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cfc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cfc90: 0xc0b3d7e  jal         func_2CF5F8
    ctx->pc = 0x2CFC90u;
    SET_GPR_U32(ctx, 31, 0x2CFC98u);
    ctx->pc = 0x2CFC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFC90u;
    // 0x2cfc94: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF5F8u, 0x2CFC90u, 0x2CFC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC98u;
label_2cfc98:
    // 0x2cfc98: 0xc0e17ba  jal         func_385EE8
    ctx->pc = 0x2CFC98u;
    SET_GPR_U32(ctx, 31, 0x2CFCA0u);
    ctx->pc = 0x2CFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFC98u;
    // 0x2cfc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385EE8u, 0x2CFC98u, 0x2CFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFCA0u;
label_2cfca0:
    // 0x2cfca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfca8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cfca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cfcac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFCACu;
        // 0x2cfcb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFCB4u;
    // 0x2cfcb4: 0x0  nop
    ctx->pc = 0x2cfcb4u;
    // NOP
    // 0x2cfcb8: 0xac8200a8  sw          $v0, 0xA8($a0)
    ctx->pc = 0x2cfcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 2));
    // 0x2cfcbc: 0x0  nop
    ctx->pc = 0x2cfcbcu;
    // NOP
    ctx->pc = 0x2cfcc0u;
}
