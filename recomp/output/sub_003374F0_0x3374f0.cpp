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

// Function: sub_003374F0
// Address: 0x3374f0 - 0x337548
void sub_003374F0_0x3374f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003374F0_0x3374f0");
#endif

    switch (ctx->pc) {
        case 0x337510u: goto label_337510;
        default: break;
    }

    ctx->pc = 0x3374f0u;

    // 0x3374f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3374f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3374f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3374f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3374f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3374f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3374fc: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x3374fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x337500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337504: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x337504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x337508: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x337508u;
    SET_GPR_U32(ctx, 31, 0x337510u);
    ctx->pc = 0x33750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337508u;
    // 0x33750c: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x337508u, 0x337510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337510u;
label_337510:
    // 0x337510: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x337510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x337514: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x337514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x337518: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x337518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x33751c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x33751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x337520: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x337520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x337524: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x337524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x337528: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x337528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x33752c: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x33752cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x337530: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x337530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x337534: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x337534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x337538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33753c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33753cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337540: 0x3e00008  jr          $ra
    ctx->pc = 0x337540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337540u;
        // 0x337544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337548u;
}
