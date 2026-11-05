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

// Function: sub_0030BAE8
// Address: 0x30bae8 - 0x30bb28
void sub_0030BAE8_0x30bae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BAE8_0x30bae8");
#endif

    switch (ctx->pc) {
        case 0x30bb0cu: goto label_30bb0c;
        default: break;
    }

    ctx->pc = 0x30bae8u;

    // 0x30bae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30bae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30baec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30baecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30baf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30baf4: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x30baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x30baf8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x30baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x30bafc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30bafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30bb00: 0x2445ba90  addiu       $a1, $v0, -0x4570
    ctx->pc = 0x30bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949520));
    // 0x30bb04: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30BB04u;
    SET_GPR_U32(ctx, 31, 0x30BB0Cu);
    ctx->pc = 0x30BB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BB04u;
    // 0x30bb08: 0xae00bb9c  sw          $zero, -0x4464($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949788), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30BB04u, 0x30BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BB0Cu;
label_30bb0c:
    // 0x30bb0c: 0x8e02bb9c  lw          $v0, -0x4464($s0)
    ctx->pc = 0x30bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949788)));
    // 0x30bb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30bb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30bb14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30bb18: 0x3e00008  jr          $ra
    ctx->pc = 0x30BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BB18u;
        // 0x30bb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BB20u;
    // 0x30bb20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x30bb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30bb24: 0x0  nop
    ctx->pc = 0x30bb24u;
    // NOP
    ctx->pc = 0x30bb28u;
}
