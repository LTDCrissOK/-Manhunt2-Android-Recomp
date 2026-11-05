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

// Function: sub_001DE090
// Address: 0x1de090 - 0x1de0f8
void sub_001DE090_0x1de090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE090_0x1de090");
#endif

    switch (ctx->pc) {
        case 0x1de0e8u: goto label_1de0e8;
        default: break;
    }

    ctx->pc = 0x1de090u;

    // 0x1de090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de094: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1de094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de09c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1de09cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1de0a0: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x1de0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x1de0a4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1de0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1de0a8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1de0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1de0ac: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1de0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1de0b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1de0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de0b4: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1de0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1de0b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1de0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de0bc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1de0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1de0c0: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1de0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1de0c4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1de0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1de0c8: 0xc4e0d844  lwc1        $f0, -0x27BC($a3)
    ctx->pc = 0x1de0c8u;
    { uint32_t bits = FAST_READ32(0x45D844u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de0cc: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1de0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1de0d0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1de0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1de0d4: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1de0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1de0d8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1de0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1de0dc: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1de0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1de0e0: 0xc077a50  jal         func_1DE940
    ctx->pc = 0x1DE0E0u;
    SET_GPR_U32(ctx, 31, 0x1DE0E8u);
    ctx->pc = 0x1DE0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0E0u;
    // 0x1de0e4: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE940u, 0x1DE0E0u, 0x1DE0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0E8u;
label_1de0e8:
    // 0x1de0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0ECu;
        // 0x1de0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0F4u;
    // 0x1de0f4: 0x0  nop
    ctx->pc = 0x1de0f4u;
    // NOP
    ctx->pc = 0x1de0f8u;
}
