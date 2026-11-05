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

// Function: sub_002BECF0
// Address: 0x2becf0 - 0x2bed30
void sub_002BECF0_0x2becf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BECF0_0x2becf0");
#endif

    switch (ctx->pc) {
        case 0x2bed0cu: goto label_2bed0c;
        default: break;
    }

    ctx->pc = 0x2becf0u;

    // 0x2becf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2becf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2becf4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2becf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2becf8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2becf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2becfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2becfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed00: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bed04: 0xc0b025a  jal         func_2C0968
    ctx->pc = 0x2BED04u;
    SET_GPR_U32(ctx, 31, 0x2BED0Cu);
    ctx->pc = 0x2BED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED04u;
    // 0x2bed08: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0968u, 0x2BED04u, 0x2BED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED0Cu;
label_2bed0c:
    // 0x2bed0c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2bed0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bed10: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2bed10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bed14: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2bed14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2bed18: 0xe601005c  swc1        $f1, 0x5C($s0)
    ctx->pc = 0x2bed18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2bed1c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bed1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bed20: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bed24: 0x3e00008  jr          $ra
    ctx->pc = 0x2BED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED24u;
        // 0x2bed28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED2Cu;
    // 0x2bed2c: 0x0  nop
    ctx->pc = 0x2bed2cu;
    // NOP
    ctx->pc = 0x2bed30u;
}
