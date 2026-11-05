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

// Function: sub_002C57A0
// Address: 0x2c57a0 - 0x2c5808
void sub_002C57A0_0x2c57a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C57A0_0x2c57a0");
#endif

    switch (ctx->pc) {
        case 0x2c57c8u: goto label_2c57c8;
        case 0x2c57d8u: goto label_2c57d8;
        case 0x2c57e4u: goto label_2c57e4;
        default: break;
    }

    ctx->pc = 0x2c57a0u;

    // 0x2c57a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c57a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c57a4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c57a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c57a8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c57a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c57ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c57acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57b0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2c57b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c57b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c57b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c57b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c57bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c57bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57c0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C57C0u;
    SET_GPR_U32(ctx, 31, 0x2C57C8u);
    ctx->pc = 0x2C57C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C57C0u;
    // 0x2c57c4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C57C0u, 0x2C57C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C57C8u;
label_2c57c8:
    // 0x2c57c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c57c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c57cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c57ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57d0: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x2C57D0u;
    SET_GPR_U32(ctx, 31, 0x2C57D8u);
    ctx->pc = 0x2C57D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C57D0u;
    // 0x2c57d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x2C57D0u, 0x2C57D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C57D8u;
label_2c57d8:
    // 0x2c57d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c57d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57dc: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x2C57DCu;
    SET_GPR_U32(ctx, 31, 0x2C57E4u);
    ctx->pc = 0x2C57E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C57DCu;
    // 0x2c57e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x2C57DCu, 0x2C57E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C57E4u;
label_2c57e4:
    // 0x2c57e4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c57e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c57e8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c57e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c57ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c57ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c57f0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c57f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c57f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C57F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57F4u;
        // 0x2c57f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C57F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C57FCu;
    // 0x2c57fc: 0x0  nop
    ctx->pc = 0x2c57fcu;
    // NOP
    // 0x2c5800: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c5800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c5804: 0x0  nop
    ctx->pc = 0x2c5804u;
    // NOP
    ctx->pc = 0x2c5808u;
}
