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

// Function: sub_00299588
// Address: 0x299588 - 0x2995d8
void sub_00299588_0x299588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299588_0x299588");
#endif

    switch (ctx->pc) {
        case 0x2995b0u: goto label_2995b0;
        case 0x2995c0u: goto label_2995c0;
        default: break;
    }

    ctx->pc = 0x299588u;

    // 0x299588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29958c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299590: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x299590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x299594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29959c: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x29959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2995a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2995a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2995a4: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x2995a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2995a8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2995A8u;
    SET_GPR_U32(ctx, 31, 0x2995B0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2995A8u, 0x2995B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995B0u;
label_2995b0:
    // 0x2995b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2995b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2995b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995b8: 0xc0a7272  jal         func_29C9C8
    ctx->pc = 0x2995B8u;
    SET_GPR_U32(ctx, 31, 0x2995C0u);
    ctx->pc = 0x2995BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2995B8u;
    // 0x2995bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C9C8u, 0x2995B8u, 0x2995C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995C0u;
label_2995c0:
    // 0x2995c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2995c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2995c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2995c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2995c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2995c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2995cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2995CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2995CCu;
        // 0x2995d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2995CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2995D4u;
    // 0x2995d4: 0x0  nop
    ctx->pc = 0x2995d4u;
    // NOP
    ctx->pc = 0x2995d8u;
}
