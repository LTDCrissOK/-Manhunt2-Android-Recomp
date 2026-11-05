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

// Function: sub_002C5740
// Address: 0x2c5740 - 0x2c57a0
void sub_002C5740_0x2c5740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5740_0x2c5740");
#endif

    switch (ctx->pc) {
        case 0x2c5768u: goto label_2c5768;
        case 0x2c5778u: goto label_2c5778;
        case 0x2c5784u: goto label_2c5784;
        default: break;
    }

    ctx->pc = 0x2c5740u;

    // 0x2c5740: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c5740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c5744: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c5744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c5748: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c5748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c574c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c574cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5750: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2c5750u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c5754: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c5754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5758: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c5758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c575c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c575cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5760: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C5760u;
    SET_GPR_U32(ctx, 31, 0x2C5768u);
    ctx->pc = 0x2C5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5760u;
    // 0x2c5764: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C5760u, 0x2C5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5768u;
label_2c5768:
    // 0x2c5768: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c5768u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c576c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c576cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5770: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x2C5770u;
    SET_GPR_U32(ctx, 31, 0x2C5778u);
    ctx->pc = 0x2C5774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5770u;
    // 0x2c5774: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x2C5770u, 0x2C5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5778u;
label_2c5778:
    // 0x2c5778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c577c: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x2C577Cu;
    SET_GPR_U32(ctx, 31, 0x2C5784u);
    ctx->pc = 0x2C5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C577Cu;
    // 0x2c5780: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x2C577Cu, 0x2C5784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5784u;
label_2c5784:
    // 0x2c5784: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c5784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5788: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c5788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c578c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c578cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5790: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c5790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5794: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5794u;
        // 0x2c5798: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C579Cu;
    // 0x2c579c: 0x0  nop
    ctx->pc = 0x2c579cu;
    // NOP
    ctx->pc = 0x2c57a0u;
}
