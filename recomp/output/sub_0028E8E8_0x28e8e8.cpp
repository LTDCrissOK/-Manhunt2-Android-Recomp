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

// Function: sub_0028E8E8
// Address: 0x28e8e8 - 0x28e930
void sub_0028E8E8_0x28e8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E8E8_0x28e8e8");
#endif

    switch (ctx->pc) {
        case 0x28e904u: goto label_28e904;
        case 0x28e918u: goto label_28e918;
        default: break;
    }

    ctx->pc = 0x28e8e8u;

    // 0x28e8e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28e8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28e8ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e8f0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x28e8f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28e8f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28e8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28e8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28e8fc: 0xc0a3948  jal         func_28E520
    ctx->pc = 0x28E8FCu;
    SET_GPR_U32(ctx, 31, 0x28E904u);
    ctx->pc = 0x28E900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8FCu;
    // 0x28e900: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E520u, 0x28E8FCu, 0x28E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E904u;
label_28e904:
    // 0x28e904: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E904u;
    {
        const bool branch_taken_0x28e904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E904u;
        // 0x28e908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e904) {
            ctx->pc = 0x28E918u;
            goto label_28e918;
        }
    }
    ctx->pc = 0x28E90Cu;
    // 0x28e90c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e910: 0xc0a3768  jal         func_28DDA0
    ctx->pc = 0x28E910u;
    SET_GPR_U32(ctx, 31, 0x28E918u);
    ctx->pc = 0x28E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E910u;
    // 0x28e914: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DDA0u, 0x28E910u, 0x28E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E918u;
label_28e918:
    // 0x28e918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28e918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e91c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28e91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e920: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x28e920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28e924: 0x3e00008  jr          $ra
    ctx->pc = 0x28E924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E924u;
        // 0x28e928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E92Cu;
    // 0x28e92c: 0x0  nop
    ctx->pc = 0x28e92cu;
    // NOP
    ctx->pc = 0x28e930u;
}
