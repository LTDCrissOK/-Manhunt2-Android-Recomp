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

// Function: sub_00394F38
// Address: 0x394f38 - 0x394f68
void sub_00394F38_0x394f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394F38_0x394f38");
#endif

    switch (ctx->pc) {
        case 0x394f4cu: goto label_394f4c;
        case 0x394f54u: goto label_394f54;
        default: break;
    }

    ctx->pc = 0x394f38u;

    // 0x394f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x394f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x394f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x394f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x394f40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x394f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x394f44: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x394F44u;
    SET_GPR_U32(ctx, 31, 0x394F4Cu);
    ctx->pc = 0x394F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394F44u;
    // 0x394f48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x394F44u, 0x394F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F4Cu;
label_394f4c:
    // 0x394f4c: 0xc0e53da  jal         func_394F68
    ctx->pc = 0x394F4Cu;
    SET_GPR_U32(ctx, 31, 0x394F54u);
    ctx->pc = 0x394F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394F4Cu;
    // 0x394f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394F68u, 0x394F4Cu, 0x394F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F54u;
label_394f54:
    // 0x394f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x394f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394f58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x394f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x394f5c: 0x80e579c  j           func_395E70
    ctx->pc = 0x394F5Cu;
    ctx->pc = 0x394F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394F5Cu;
    // 0x394f60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    sub_00395E70_0x395e70(rdram, ctx, runtime); return;
    ctx->pc = 0x394F64u;
    // 0x394f64: 0x0  nop
    ctx->pc = 0x394f64u;
    // NOP
    ctx->pc = 0x394f68u;
}
