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

// Function: sub_00399758
// Address: 0x399758 - 0x399788
void sub_00399758_0x399758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399758_0x399758");
#endif

    switch (ctx->pc) {
        case 0x39976cu: goto label_39976c;
        case 0x399774u: goto label_399774;
        default: break;
    }

    ctx->pc = 0x399758u;

    // 0x399758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39975c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399760: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399764: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399764u;
    SET_GPR_U32(ctx, 31, 0x39976Cu);
    ctx->pc = 0x399768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399764u;
    // 0x399768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399764u, 0x39976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39976Cu;
label_39976c:
    // 0x39976c: 0xc0e65e2  jal         func_399788
    ctx->pc = 0x39976Cu;
    SET_GPR_U32(ctx, 31, 0x399774u);
    ctx->pc = 0x399770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39976Cu;
    // 0x399770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399788u, 0x39976Cu, 0x399774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399774u;
label_399774:
    // 0x399774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399778: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x399778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39977c: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x39977Cu;
    ctx->pc = 0x399780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39977Cu;
    // 0x399780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x399784u;
    // 0x399784: 0x0  nop
    ctx->pc = 0x399784u;
    // NOP
    ctx->pc = 0x399788u;
}
