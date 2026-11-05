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

// Function: sub_001CE988
// Address: 0x1ce988 - 0x1ce9f0
void sub_001CE988_0x1ce988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE988_0x1ce988");
#endif

    switch (ctx->pc) {
        case 0x1ce99cu: goto label_1ce99c;
        case 0x1ce9c8u: goto label_1ce9c8;
        default: break;
    }

    ctx->pc = 0x1ce988u;

    // 0x1ce988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ce990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ce994: 0xc089498  jal         func_225260
    ctx->pc = 0x1CE994u;
    SET_GPR_U32(ctx, 31, 0x1CE99Cu);
    ctx->pc = 0x1CE998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE994u;
    // 0x1ce998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225260u, 0x1CE994u, 0x1CE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE99Cu;
label_1ce99c:
    // 0x1ce99c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ce99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ce9a0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ce9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ce9a4: 0xc44189c0  lwc1        $f1, -0x7640($v0)
    ctx->pc = 0x1ce9a4u;
    { uint32_t bits = FAST_READ32(0x3F89C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce9a8: 0xc46289d0  lwc1        $f2, -0x7630($v1)
    ctx->pc = 0x1ce9a8u;
    { uint32_t bits = FAST_READ32(0x3F89D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce9ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ce9acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ce9b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1ce9b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce9b4: 0x0  nop
    ctx->pc = 0x1ce9b4u;
    // NOP
    // 0x1ce9b8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE9B8u;
    {
        const bool branch_taken_0x1ce9b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce9b8) {
            ctx->pc = 0x1CE9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE9B8u;
            // 0x1ce9bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE9E0u;
            goto label_1ce9e0;
        }
    }
    ctx->pc = 0x1CE9C0u;
    // 0x1ce9c0: 0xc073a7c  jal         func_1CE9F0
    ctx->pc = 0x1CE9C0u;
    SET_GPR_U32(ctx, 31, 0x1CE9C8u);
    ctx->pc = 0x1CE9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE9C0u;
    // 0x1ce9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE9F0u, 0x1CE9C0u, 0x1CE9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9C8u;
label_1ce9c8:
    // 0x1ce9c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE9C8u;
    {
        const bool branch_taken_0x1ce9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9C8u;
        // 0x1ce9cc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9c8) {
            ctx->pc = 0x1CE9D8u;
            goto label_1ce9d8;
        }
    }
    ctx->pc = 0x1CE9D0u;
    // 0x1ce9d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE9D0u;
    {
        const bool branch_taken_0x1ce9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9D0u;
        // 0x1ce9d4: 0xc4408a0c  lwc1        $f0, -0x75F4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9d0) {
            ctx->pc = 0x1CE9DCu;
            goto label_1ce9dc;
        }
    }
    ctx->pc = 0x1CE9D8u;
label_1ce9d8:
    // 0x1ce9d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce9dc:
    // 0x1ce9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce9e0:
    // 0x1ce9e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ce9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9E4u;
        // 0x1ce9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE9ECu;
    // 0x1ce9ec: 0x0  nop
    ctx->pc = 0x1ce9ecu;
    // NOP
    ctx->pc = 0x1ce9f0u;
}
