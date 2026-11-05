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

// Function: sub_00312BE0
// Address: 0x312be0 - 0x312c28
void sub_00312BE0_0x312be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312BE0_0x312be0");
#endif

    switch (ctx->pc) {
        case 0x312c00u: goto label_312c00;
        case 0x312c10u: goto label_312c10;
        default: break;
    }

    ctx->pc = 0x312be0u;

    // 0x312be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x312be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x312be4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x312be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x312be8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x312be8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x312bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312bf0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x312bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x312bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x312bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312bf8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x312BF8u;
    SET_GPR_U32(ctx, 31, 0x312C00u);
    ctx->pc = 0x312BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312BF8u;
    // 0x312bfc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x312BF8u, 0x312C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C00u;
label_312c00:
    // 0x312c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312c04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x312c04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x312c08: 0xc0c4ac6  jal         func_312B18
    ctx->pc = 0x312C08u;
    SET_GPR_U32(ctx, 31, 0x312C10u);
    ctx->pc = 0x312C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312C08u;
    // 0x312c0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B18u, 0x312C08u, 0x312C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C10u;
label_312c10:
    // 0x312c10: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x312c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312c14: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x312c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312c18: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x312c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x312c1c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x312c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x312c20: 0x3e00008  jr          $ra
    ctx->pc = 0x312C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C20u;
        // 0x312c24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312C28u;
}
