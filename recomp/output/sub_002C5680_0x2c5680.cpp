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

// Function: sub_002C5680
// Address: 0x2c5680 - 0x2c56e0
void sub_002C5680_0x2c5680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5680_0x2c5680");
#endif

    switch (ctx->pc) {
        case 0x2c56a8u: goto label_2c56a8;
        case 0x2c56b8u: goto label_2c56b8;
        case 0x2c56c4u: goto label_2c56c4;
        default: break;
    }

    ctx->pc = 0x2c5680u;

    // 0x2c5680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c5680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c5684: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c5684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c5688: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c5688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c568c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c568cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5690: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2c5690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c5694: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c5694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5698: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c5698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c569c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c569cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56a0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C56A0u;
    SET_GPR_U32(ctx, 31, 0x2C56A8u);
    ctx->pc = 0x2C56A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C56A0u;
    // 0x2c56a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C56A0u, 0x2C56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56A8u;
label_2c56a8:
    // 0x2c56a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c56a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c56ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c56acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56b0: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x2C56B0u;
    SET_GPR_U32(ctx, 31, 0x2C56B8u);
    ctx->pc = 0x2C56B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C56B0u;
    // 0x2c56b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x2C56B0u, 0x2C56B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56B8u;
label_2c56b8:
    // 0x2c56b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c56b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c56bc: 0xc0b1602  jal         func_2C5808
    ctx->pc = 0x2C56BCu;
    SET_GPR_U32(ctx, 31, 0x2C56C4u);
    ctx->pc = 0x2C56C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C56BCu;
    // 0x2c56c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5808u, 0x2C56BCu, 0x2C56C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C56C4u;
label_2c56c4:
    // 0x2c56c4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c56c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c56c8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c56c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c56cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c56ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c56d0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c56d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c56d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C56D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C56D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56D4u;
        // 0x2c56d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C56D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C56DCu;
    // 0x2c56dc: 0x0  nop
    ctx->pc = 0x2c56dcu;
    // NOP
    ctx->pc = 0x2c56e0u;
}
