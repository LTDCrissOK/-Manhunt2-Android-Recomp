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

// Function: sub_002A1BD8
// Address: 0x2a1bd8 - 0x2a1c28
void sub_002A1BD8_0x2a1bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1BD8_0x2a1bd8");
#endif

    switch (ctx->pc) {
        case 0x2a1bf4u: goto label_2a1bf4;
        default: break;
    }

    ctx->pc = 0x2a1bd8u;

    // 0x2a1bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a1be0: 0x8c820318  lw          $v0, 0x318($a0)
    ctx->pc = 0x2a1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x2a1be4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1be8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a1bec: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x2A1BECu;
    SET_GPR_U32(ctx, 31, 0x2A1BF4u);
    ctx->pc = 0x2A1BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1BECu;
    // 0x2a1bf0: 0x8c440324  lw          $a0, 0x324($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x2A1BECu, 0x2A1BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BF4u;
label_2a1bf4:
    // 0x2a1bf4: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x2a1bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x2a1bf8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2a1bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2a1bfc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2a1bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a1c00: 0x24632508  addiu       $v1, $v1, 0x2508
    ctx->pc = 0x2a1c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9480));
    // 0x2a1c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a1c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1c0c: 0x244200ec  addiu       $v0, $v0, 0xEC
    ctx->pc = 0x2a1c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 236));
    // 0x2a1c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1c14: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a1c14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1c18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a1c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a1c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C1Cu;
        // 0x2a1c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1C24u;
    // 0x2a1c24: 0x0  nop
    ctx->pc = 0x2a1c24u;
    // NOP
    ctx->pc = 0x2a1c28u;
}
