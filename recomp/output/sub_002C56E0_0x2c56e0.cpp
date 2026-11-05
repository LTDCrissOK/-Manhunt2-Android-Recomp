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

// Function: sub_002C56E0
// Address: 0x2c56e0 - 0x2c5740
void sub_002C56E0_0x2c56e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C56E0_0x2c56e0");
#endif

    switch (ctx->pc) {
        case 0x2c5708u: goto label_2c5708;
        case 0x2c5718u: goto label_2c5718;
        case 0x2c5724u: goto label_2c5724;
        default: break;
    }

    ctx->pc = 0x2c56e0u;

    // 0x2c56e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c56e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c56e4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c56e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c56e8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c56e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c56ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c56ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56f0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2c56f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c56f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c56f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c56f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c56fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c56fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5700: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C5700u;
    SET_GPR_U32(ctx, 31, 0x2C5708u);
    ctx->pc = 0x2C5704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5700u;
    // 0x2c5704: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C5700u, 0x2C5708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5708u;
label_2c5708:
    // 0x2c5708: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c5708u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c570c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5710: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x2C5710u;
    SET_GPR_U32(ctx, 31, 0x2C5718u);
    ctx->pc = 0x2C5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5710u;
    // 0x2c5714: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x2C5710u, 0x2C5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5718u;
label_2c5718:
    // 0x2c5718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c571c: 0xc0b1602  jal         func_2C5808
    ctx->pc = 0x2C571Cu;
    SET_GPR_U32(ctx, 31, 0x2C5724u);
    ctx->pc = 0x2C5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C571Cu;
    // 0x2c5720: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5808u, 0x2C571Cu, 0x2C5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5724u;
label_2c5724:
    // 0x2c5724: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c5724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5728: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c5728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c572c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c572cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5730: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c5730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5734: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5734u;
        // 0x2c5738: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C573Cu;
    // 0x2c573c: 0x0  nop
    ctx->pc = 0x2c573cu;
    // NOP
    ctx->pc = 0x2c5740u;
}
