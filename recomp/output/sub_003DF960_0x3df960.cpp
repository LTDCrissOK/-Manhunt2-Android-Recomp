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

// Function: sub_003DF960
// Address: 0x3df960 - 0x3df9c8
void sub_003DF960_0x3df960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF960_0x3df960");
#endif

    switch (ctx->pc) {
        case 0x3df970u: goto label_3df970;
        default: break;
    }

    ctx->pc = 0x3df960u;

    // 0x3df960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3df960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3df964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3df964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3df968: 0xc0989a0  jal         func_262680
    ctx->pc = 0x3DF968u;
    SET_GPR_U32(ctx, 31, 0x3DF970u);
    ctx->pc = 0x3DF96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF968u;
    // 0x3df96c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262680u, 0x3DF968u, 0x3DF970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF970u;
label_3df970:
    // 0x3df970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3df970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3df974: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF974u;
        // 0x3df978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF97Cu;
    // 0x3df97c: 0x0  nop
    ctx->pc = 0x3df97cu;
    // NOP
    // 0x3df980: 0xac820280  sw          $v0, 0x280($a0)
    ctx->pc = 0x3df980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 2));
    // 0x3df984: 0x0  nop
    ctx->pc = 0x3df984u;
    // NOP
    // 0x3df988: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3df98c: 0x0  nop
    ctx->pc = 0x3df98cu;
    // NOP
    // 0x3df990: 0xe48c0224  swc1        $f12, 0x224($a0)
    ctx->pc = 0x3df990u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 548), bits); }
    // 0x3df994: 0x0  nop
    ctx->pc = 0x3df994u;
    // NOP
    // 0x3df998: 0xe48c02b0  swc1        $f12, 0x2B0($a0)
    ctx->pc = 0x3df998u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x3df99c: 0x0  nop
    ctx->pc = 0x3df99cu;
    // NOP
    // 0x3df9a0: 0xe48c02c0  swc1        $f12, 0x2C0($a0)
    ctx->pc = 0x3df9a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 704), bits); }
    // 0x3df9a4: 0x0  nop
    ctx->pc = 0x3df9a4u;
    // NOP
    // 0x3df9a8: 0xe48c02c4  swc1        $f12, 0x2C4($a0)
    ctx->pc = 0x3df9a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 708), bits); }
    // 0x3df9ac: 0x0  nop
    ctx->pc = 0x3df9acu;
    // NOP
    // 0x3df9b0: 0xa082028c  sb          $v0, 0x28C($a0)
    ctx->pc = 0x3df9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 652), (uint8_t)GPR_U32(ctx, 2));
    // 0x3df9b4: 0x0  nop
    ctx->pc = 0x3df9b4u;
    // NOP
    // 0x3df9b8: 0xa082028d  sb          $v0, 0x28D($a0)
    ctx->pc = 0x3df9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 653), (uint8_t)GPR_U32(ctx, 2));
    // 0x3df9bc: 0x0  nop
    ctx->pc = 0x3df9bcu;
    // NOP
    // 0x3df9c0: 0xa080028d  sb          $zero, 0x28D($a0)
    ctx->pc = 0x3df9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 653), (uint8_t)GPR_U32(ctx, 0));
    // 0x3df9c4: 0x0  nop
    ctx->pc = 0x3df9c4u;
    // NOP
    ctx->pc = 0x3df9c8u;
}
