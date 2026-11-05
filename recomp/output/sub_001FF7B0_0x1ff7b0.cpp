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

// Function: sub_001FF7B0
// Address: 0x1ff7b0 - 0x1ff810
void sub_001FF7B0_0x1ff7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF7B0_0x1ff7b0");
#endif

    switch (ctx->pc) {
        case 0x1ff7c8u: goto label_1ff7c8;
        case 0x1ff7f4u: goto label_1ff7f4;
        default: break;
    }

    ctx->pc = 0x1ff7b0u;

    // 0x1ff7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff7b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ff7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ff7b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ff7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff7bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ff7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ff7c0: 0xc09c682  jal         func_271A08
    ctx->pc = 0x1FF7C0u;
    SET_GPR_U32(ctx, 31, 0x1FF7C8u);
    ctx->pc = 0x1FF7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF7C0u;
    // 0x1ff7c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A08u, 0x1FF7C0u, 0x1FF7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7C8u;
label_1ff7c8:
    // 0x1ff7c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ff7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ff7cc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1ff7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1ff7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ff7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff7d4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1ff7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ff7d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF7D8u;
    {
        const bool branch_taken_0x1ff7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7D8u;
        // 0x1ff7dc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7d8) {
            ctx->pc = 0x1FF800u;
            goto label_1ff800;
        }
    }
    ctx->pc = 0x1FF7E0u;
    // 0x1ff7e0: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x1ff7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1ff7e4: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1ff7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1ff7e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ff7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff7ec: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1FF7ECu;
    SET_GPR_U32(ctx, 31, 0x1FF7F4u);
    ctx->pc = 0x1FF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF7ECu;
    // 0x1ff7f0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1FF7ECu, 0x1FF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7F4u;
label_1ff7f4:
    // 0x1ff7f4: 0x0  nop
    ctx->pc = 0x1ff7f4u;
    // NOP
    // 0x1ff7f8: 0x0  nop
    ctx->pc = 0x1ff7f8u;
    // NOP
    // 0x1ff7fc: 0x46000004  c1          0x4
    ctx->pc = 0x1ff7fcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1ff800:
    // 0x1ff800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ff800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff804: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ff804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ff808: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF808u;
        // 0x1ff80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF810u;
}
