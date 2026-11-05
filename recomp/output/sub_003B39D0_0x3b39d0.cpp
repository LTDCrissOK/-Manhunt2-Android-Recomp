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

// Function: sub_003B39D0
// Address: 0x3b39d0 - 0x3b3a20
void sub_003B39D0_0x3b39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B39D0_0x3b39d0");
#endif

    switch (ctx->pc) {
        case 0x3b39f0u: goto label_3b39f0;
        case 0x3b3a04u: goto label_3b3a04;
        case 0x3b3a0cu: goto label_3b3a0c;
        default: break;
    }

    ctx->pc = 0x3b39d0u;

    // 0x3b39d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b39d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b39d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b39d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b39dc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x3b39dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3b39e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b39e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b39e4: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3B39E4u;
    ctx->pc = 0x3B39E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B39E4u;
    // 0x3b39e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3B39ECu;
    // 0x3b39ec: 0x0  nop
    ctx->pc = 0x3b39ecu;
    // NOP
label_3b39f0:
    // 0x3b39f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b39f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b39f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b39f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b39f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b39f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3b39fc: 0xc0ecdba  jal         func_3B36E8
    ctx->pc = 0x3B39FCu;
    SET_GPR_U32(ctx, 31, 0x3B3A04u);
    ctx->pc = 0x3B3A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B39FCu;
    // 0x3b3a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B36E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B36E8u, 0x3B39FCu, 0x3B3A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A04u;
label_3b3a04:
    // 0x3b3a04: 0xc0ece88  jal         func_3B3A20
    ctx->pc = 0x3B3A04u;
    SET_GPR_U32(ctx, 31, 0x3B3A0Cu);
    ctx->pc = 0x3B3A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A04u;
    // 0x3b3a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A20u, 0x3B3A04u, 0x3B3A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A0Cu;
label_3b3a0c:
    // 0x3b3a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3a10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b3a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b3a14: 0x80ecdc0  j           func_3B3700
    ctx->pc = 0x3B3A14u;
    ctx->pc = 0x3B3A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A14u;
    // 0x3b3a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3700u;
    sub_003B3700_0x3b3700(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3A1Cu;
    // 0x3b3a1c: 0x0  nop
    ctx->pc = 0x3b3a1cu;
    // NOP
    ctx->pc = 0x3b3a20u;
}
