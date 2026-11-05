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

// Function: sub_00399D80
// Address: 0x399d80 - 0x399db0
void sub_00399D80_0x399d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399D80_0x399d80");
#endif

    switch (ctx->pc) {
        case 0x399d94u: goto label_399d94;
        case 0x399d9cu: goto label_399d9c;
        default: break;
    }

    ctx->pc = 0x399d80u;

    // 0x399d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399d8c: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399D8Cu;
    SET_GPR_U32(ctx, 31, 0x399D94u);
    ctx->pc = 0x399D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D8Cu;
    // 0x399d90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399D8Cu, 0x399D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D94u;
label_399d94:
    // 0x399d94: 0xc0e676c  jal         func_399DB0
    ctx->pc = 0x399D94u;
    SET_GPR_U32(ctx, 31, 0x399D9Cu);
    ctx->pc = 0x399D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D94u;
    // 0x399d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399DB0u, 0x399D94u, 0x399D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D9Cu;
label_399d9c:
    // 0x399d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399da0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x399da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399da4: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x399DA4u;
    ctx->pc = 0x399DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399DA4u;
    // 0x399da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x399DACu;
    // 0x399dac: 0x0  nop
    ctx->pc = 0x399dacu;
    // NOP
    ctx->pc = 0x399db0u;
}
