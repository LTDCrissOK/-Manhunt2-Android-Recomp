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

// Function: sub_002BFBD8
// Address: 0x2bfbd8 - 0x2bfc20
void sub_002BFBD8_0x2bfbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFBD8_0x2bfbd8");
#endif

    switch (ctx->pc) {
        case 0x2bfbf4u: goto label_2bfbf4;
        default: break;
    }

    ctx->pc = 0x2bfbd8u;

    // 0x2bfbd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bfbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bfbdc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bfbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bfbe0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bfbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bfbe4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bfbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfbe8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bfbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bfbec: 0xc0b0098  jal         func_2C0260
    ctx->pc = 0x2BFBECu;
    SET_GPR_U32(ctx, 31, 0x2BFBF4u);
    ctx->pc = 0x2BFBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFBECu;
    // 0x2bfbf0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0260u, 0x2BFBECu, 0x2BFBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFBF4u;
label_2bfbf4:
    // 0x2bfbf4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2bfbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfbf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfbfc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2bfbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfc00: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2bfc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2bfc04: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2bfc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2bfc08: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2bfc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2bfc0c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bfc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfc10: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bfc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bfc14: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC14u;
        // 0x2bfc18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFC1Cu;
    // 0x2bfc1c: 0x0  nop
    ctx->pc = 0x2bfc1cu;
    // NOP
    ctx->pc = 0x2bfc20u;
}
