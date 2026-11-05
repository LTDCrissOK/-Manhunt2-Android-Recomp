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

// Function: sub_0027D7A0
// Address: 0x27d7a0 - 0x27d838
void sub_0027D7A0_0x27d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D7A0_0x27d7a0");
#endif

    switch (ctx->pc) {
        case 0x27d7dcu: goto label_27d7dc;
        case 0x27d800u: goto label_27d800;
        case 0x27d80cu: goto label_27d80c;
        case 0x27d81cu: goto label_27d81c;
        default: break;
    }

    ctx->pc = 0x27d7a0u;

    // 0x27d7a0: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x27d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x27d7a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x27d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x27d7a8: 0xffb10218  sd          $s1, 0x218($sp)
    ctx->pc = 0x27d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 17));
    // 0x27d7ac: 0x2463b2e0  addiu       $v1, $v1, -0x4D20
    ctx->pc = 0x27d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947552));
    // 0x27d7b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27d7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7b4: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x27d7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x27d7b8: 0xe7b40230  swc1        $f20, 0x230($sp)
    ctx->pc = 0x27d7b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x27d7bc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x27d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x27d7c0: 0xffbf0220  sd          $ra, 0x220($sp)
    ctx->pc = 0x27d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 31));
    // 0x27d7c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x27d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d7c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27d7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27d7ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27d7d0: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x27d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x27d7d4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x27D7D4u;
    SET_GPR_U32(ctx, 31, 0x27D7DCu);
    ctx->pc = 0x27D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7D4u;
    // 0x27d7d8: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27D7D4u, 0x27D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D7DCu;
label_27d7dc:
    // 0x27d7dc: 0x2c420101  sltiu       $v0, $v0, 0x101
    ctx->pc = 0x27d7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x27d7e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D7E0u;
    {
        const bool branch_taken_0x27d7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d7e0) {
            ctx->pc = 0x27D7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D7E0u;
            // 0x27d7e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D804u;
            goto label_27d804;
        }
    }
    ctx->pc = 0x27D7E8u;
    // 0x27d7e8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x27d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x27d7ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27d7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27d7f0: 0x2484b0e0  addiu       $a0, $a0, -0x4F20
    ctx->pc = 0x27d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947040));
    // 0x27d7f4: 0x24a59858  addiu       $a1, $a1, -0x67A8
    ctx->pc = 0x27d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940760));
    // 0x27d7f8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x27D7F8u;
    SET_GPR_U32(ctx, 31, 0x27D800u);
    ctx->pc = 0x27D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D7F8u;
    // 0x27d7fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27D7F8u, 0x27D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D800u;
label_27d800:
    // 0x27d800: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27d800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27d804:
    // 0x27d804: 0xc0a0c4c  jal         func_283130
    ctx->pc = 0x27D804u;
    SET_GPR_U32(ctx, 31, 0x27D80Cu);
    ctx->pc = 0x27D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D804u;
    // 0x27d808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283130u, 0x27D804u, 0x27D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D80Cu;
label_27d80c:
    // 0x27d80c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27d80cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27d810: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d814: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x27D814u;
    SET_GPR_U32(ctx, 31, 0x27D81Cu);
    ctx->pc = 0x27D818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D814u;
    // 0x27d818: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x27D814u, 0x27D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D81Cu;
label_27d81c:
    // 0x27d81c: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x27d81cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x27d820: 0xdfb10218  ld          $s1, 0x218($sp)
    ctx->pc = 0x27d820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x27d824: 0xdfbf0220  ld          $ra, 0x220($sp)
    ctx->pc = 0x27d824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x27d828: 0xc7b40230  lwc1        $f20, 0x230($sp)
    ctx->pc = 0x27d828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27d82c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D82Cu;
        // 0x27d830: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D834u;
    // 0x27d834: 0x0  nop
    ctx->pc = 0x27d834u;
    // NOP
    ctx->pc = 0x27d838u;
}
