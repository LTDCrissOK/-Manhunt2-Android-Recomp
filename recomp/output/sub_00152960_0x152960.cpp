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

// Function: sub_00152960
// Address: 0x152960 - 0x1529a0
void sub_00152960_0x152960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152960_0x152960");
#endif

    switch (ctx->pc) {
        case 0x152974u: goto label_152974;
        case 0x15298cu: goto label_15298c;
        default: break;
    }

    ctx->pc = 0x152960u;

    // 0x152960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x152968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x15296c: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x15296Cu;
    SET_GPR_U32(ctx, 31, 0x152974u);
    ctx->pc = 0x152970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15296Cu;
    // 0x152970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x15296Cu, 0x152974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152974u;
label_152974:
    // 0x152974: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x152974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x152978: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x152978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x15297c: 0x24630af8  addiu       $v1, $v1, 0xAF8
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2808));
    // 0x152980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152984: 0xc054b2e  jal         func_152CB8
    ctx->pc = 0x152984u;
    SET_GPR_U32(ctx, 31, 0x15298Cu);
    ctx->pc = 0x152988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152984u;
    // 0x152988: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152CB8u, 0x152984u, 0x15298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15298Cu;
label_15298c:
    // 0x15298c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15298cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152990: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x152990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152998: 0x3e00008  jr          $ra
    ctx->pc = 0x152998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152998u;
        // 0x15299c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1529A0u;
}
