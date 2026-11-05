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

// Function: sub_002BEB08
// Address: 0x2beb08 - 0x2beb48
void sub_002BEB08_0x2beb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEB08_0x2beb08");
#endif

    switch (ctx->pc) {
        case 0x2beb24u: goto label_2beb24;
        default: break;
    }

    ctx->pc = 0x2beb08u;

    // 0x2beb08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2beb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2beb0c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2beb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2beb10: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2beb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2beb14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2beb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beb18: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2beb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2beb1c: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2BEB24u);
    ctx->pc = 0x2BEB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEB1Cu;
    // 0x2beb20: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BEB1Cu, 0x2BEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEB24u;
label_2beb24:
    // 0x2beb24: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2beb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2beb28: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2beb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2beb2c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2beb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2beb30: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x2beb30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2beb34: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2beb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2beb38: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2beb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2beb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB3Cu;
        // 0x2beb40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEB44u;
    // 0x2beb44: 0x0  nop
    ctx->pc = 0x2beb44u;
    // NOP
    ctx->pc = 0x2beb48u;
}
