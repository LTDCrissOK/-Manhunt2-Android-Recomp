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

// Function: sub_002BFB30
// Address: 0x2bfb30 - 0x2bfb78
void sub_002BFB30_0x2bfb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFB30_0x2bfb30");
#endif

    switch (ctx->pc) {
        case 0x2bfb4cu: goto label_2bfb4c;
        default: break;
    }

    ctx->pc = 0x2bfb30u;

    // 0x2bfb30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bfb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bfb34: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bfb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bfb38: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bfb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bfb3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bfb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb40: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bfb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bfb44: 0xc0b0098  jal         func_2C0260
    ctx->pc = 0x2BFB44u;
    SET_GPR_U32(ctx, 31, 0x2BFB4Cu);
    ctx->pc = 0x2BFB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB44u;
    // 0x2bfb48: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0260u, 0x2BFB44u, 0x2BFB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB4Cu;
label_2bfb4c:
    // 0x2bfb4c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2bfb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfb50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfb54: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2bfb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfb58: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2bfb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2bfb5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfb60: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bfb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bfb64: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2bfb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2bfb68: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bfb68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB6Cu;
        // 0x2bfb70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFB74u;
    // 0x2bfb74: 0x0  nop
    ctx->pc = 0x2bfb74u;
    // NOP
    ctx->pc = 0x2bfb78u;
}
