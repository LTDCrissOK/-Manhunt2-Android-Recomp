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

// Function: sub_00142F88
// Address: 0x142f88 - 0x142ff0
void sub_00142F88_0x142f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142F88_0x142f88");
#endif

    switch (ctx->pc) {
        case 0x142fc8u: goto label_142fc8;
        case 0x142fd0u: goto label_142fd0;
        default: break;
    }

    ctx->pc = 0x142f88u;

    // 0x142f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142f8c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x142f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x142f90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x142f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x142f94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x142f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142f9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x142f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142fa0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x142fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x142fa4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x142fa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x142fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142fac: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x142facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x142fb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x142fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x142fb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142fb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x142fbc: 0x8c90020c  lw          $s0, 0x20C($a0)
    ctx->pc = 0x142fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x142fc0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x142FC0u;
    SET_GPR_U32(ctx, 31, 0x142FC8u);
    ctx->pc = 0x142FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FC0u;
    // 0x142fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x142FC0u, 0x142FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FC8u;
label_142fc8:
    // 0x142fc8: 0xc043e8e  jal         func_10FA38
    ctx->pc = 0x142FC8u;
    SET_GPR_U32(ctx, 31, 0x142FD0u);
    ctx->pc = 0x142FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FC8u;
    // 0x142fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA38u, 0x142FC8u, 0x142FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FD0u;
label_142fd0:
    // 0x142fd0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x142fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x142fd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x142fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142fd8: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x142fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x142fdc: 0xae030268  sw          $v1, 0x268($s0)
    ctx->pc = 0x142fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 3));
    // 0x142fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x142FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142FE4u;
        // 0x142fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142FECu;
    // 0x142fec: 0x0  nop
    ctx->pc = 0x142fecu;
    // NOP
    ctx->pc = 0x142ff0u;
}
