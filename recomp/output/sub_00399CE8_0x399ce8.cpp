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

// Function: sub_00399CE8
// Address: 0x399ce8 - 0x399d18
void sub_00399CE8_0x399ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399CE8_0x399ce8");
#endif

    switch (ctx->pc) {
        case 0x399cfcu: goto label_399cfc;
        case 0x399d04u: goto label_399d04;
        default: break;
    }

    ctx->pc = 0x399ce8u;

    // 0x399ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399cf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399cf4: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399CF4u;
    SET_GPR_U32(ctx, 31, 0x399CFCu);
    ctx->pc = 0x399CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399CF4u;
    // 0x399cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399CF4u, 0x399CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399CFCu;
label_399cfc:
    // 0x399cfc: 0xc0e6746  jal         func_399D18
    ctx->pc = 0x399CFCu;
    SET_GPR_U32(ctx, 31, 0x399D04u);
    ctx->pc = 0x399D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399CFCu;
    // 0x399d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D18u, 0x399CFCu, 0x399D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D04u;
label_399d04:
    // 0x399d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x399d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399d0c: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x399D0Cu;
    ctx->pc = 0x399D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D0Cu;
    // 0x399d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x399D14u;
    // 0x399d14: 0x0  nop
    ctx->pc = 0x399d14u;
    // NOP
    ctx->pc = 0x399d18u;
}
