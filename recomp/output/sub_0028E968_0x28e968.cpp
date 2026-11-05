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

// Function: sub_0028E968
// Address: 0x28e968 - 0x28e9c0
void sub_0028E968_0x28e968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E968_0x28e968");
#endif

    switch (ctx->pc) {
        case 0x28e98cu: goto label_28e98c;
        case 0x28e9a4u: goto label_28e9a4;
        default: break;
    }

    ctx->pc = 0x28e968u;

    // 0x28e968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28e968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28e96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e970: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x28e970u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28e974: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28e974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e978: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x28e978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28e97c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x28e97cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x28e980: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28e980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28e984: 0xc0a3948  jal         func_28E520
    ctx->pc = 0x28E984u;
    SET_GPR_U32(ctx, 31, 0x28E98Cu);
    ctx->pc = 0x28E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E984u;
    // 0x28e988: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E520u, 0x28E984u, 0x28E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E98Cu;
label_28e98c:
    // 0x28e98c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E98Cu;
    {
        const bool branch_taken_0x28e98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E98Cu;
        // 0x28e990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e98c) {
            ctx->pc = 0x28E9A4u;
            goto label_28e9a4;
        }
    }
    ctx->pc = 0x28E994u;
    // 0x28e994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e998: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28e998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28e99c: 0xc0a3786  jal         func_28DE18
    ctx->pc = 0x28E99Cu;
    SET_GPR_U32(ctx, 31, 0x28E9A4u);
    ctx->pc = 0x28E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E99Cu;
    // 0x28e9a0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE18u, 0x28E99Cu, 0x28E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9A4u;
label_28e9a4:
    // 0x28e9a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28e9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e9a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28e9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e9ac: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x28e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28e9b0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x28e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28E9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9B4u;
        // 0x28e9b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E9BCu;
    // 0x28e9bc: 0x0  nop
    ctx->pc = 0x28e9bcu;
    // NOP
    ctx->pc = 0x28e9c0u;
}
