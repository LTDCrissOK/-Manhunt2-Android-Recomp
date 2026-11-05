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

// Function: sub_003524F0
// Address: 0x3524f0 - 0x352548
void sub_003524F0_0x3524f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003524F0_0x3524f0");
#endif

    switch (ctx->pc) {
        case 0x352508u: goto label_352508;
        default: break;
    }

    ctx->pc = 0x3524f0u;

    // 0x3524f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3524f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3524f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3524f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3524f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3524f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3524fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3524fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x352500: 0xc0d1404  jal         func_345010
    ctx->pc = 0x352500u;
    SET_GPR_U32(ctx, 31, 0x352508u);
    ctx->pc = 0x352504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352500u;
    // 0x352504: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345010u, 0x352500u, 0x352508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352508u;
label_352508:
    // 0x352508: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x352508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x35250c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x35250cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x352510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x352510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352514: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x352514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x352518: 0x24634500  addiu       $v1, $v1, 0x4500
    ctx->pc = 0x352518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17664));
    // 0x35251c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35251cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352520: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x352520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x352524: 0xe6000144  swc1        $f0, 0x144($s0)
    ctx->pc = 0x352524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x352528: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x352528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x35252c: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x35252cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x352530: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x352530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x352534: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x352534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x352538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x352538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35253c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x352540: 0x3e00008  jr          $ra
    ctx->pc = 0x352540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352540u;
        // 0x352544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352548u;
}
