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

// Function: sub_003A6E10
// Address: 0x3a6e10 - 0x3a6e50
void sub_003A6E10_0x3a6e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6E10_0x3a6e10");
#endif

    switch (ctx->pc) {
        case 0x3a6e2cu: goto label_3a6e2c;
        case 0x3a6e38u: goto label_3a6e38;
        default: break;
    }

    ctx->pc = 0x3a6e10u;

    // 0x3a6e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a6e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a6e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a6e20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a6e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a6e24: 0xc0e9d26  jal         func_3A7498
    ctx->pc = 0x3A6E24u;
    SET_GPR_U32(ctx, 31, 0x3A6E2Cu);
    ctx->pc = 0x3A6E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E24u;
    // 0x3a6e28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7498u, 0x3A6E24u, 0x3A6E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E2Cu;
label_3a6e2c:
    // 0x3a6e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e30: 0xc0e9b94  jal         func_3A6E50
    ctx->pc = 0x3A6E30u;
    SET_GPR_U32(ctx, 31, 0x3A6E38u);
    ctx->pc = 0x3A6E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E30u;
    // 0x3a6e34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E50u, 0x3A6E30u, 0x3A6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E38u;
label_3a6e38:
    // 0x3a6e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a6e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6e3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a6e3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a6e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6e44: 0x80e9d28  j           func_3A74A0
    ctx->pc = 0x3A6E44u;
    ctx->pc = 0x3A6E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E44u;
    // 0x3a6e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A0u;
    sub_003A74A0_0x3a74a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A6E4Cu;
    // 0x3a6e4c: 0x0  nop
    ctx->pc = 0x3a6e4cu;
    // NOP
    ctx->pc = 0x3a6e50u;
}
