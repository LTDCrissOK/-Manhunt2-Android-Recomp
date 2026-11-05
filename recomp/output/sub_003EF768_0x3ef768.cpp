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

// Function: sub_003EF768
// Address: 0x3ef768 - 0x3ef7f8
void sub_003EF768_0x3ef768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF768_0x3ef768");
#endif

    switch (ctx->pc) {
        case 0x3ef794u: goto label_3ef794;
        case 0x3ef7b4u: goto label_3ef7b4;
        default: break;
    }

    ctx->pc = 0x3ef768u;

    // 0x3ef768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef76c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ef76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ef770: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ef770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ef774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ef778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ef77c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ef77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ef780: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ef780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef784: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF784u;
    {
        const bool branch_taken_0x3ef784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF784u;
        // 0x3ef788: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef784) {
            ctx->pc = 0x3EF7A8u;
            goto label_3ef7a8;
        }
    }
    ctx->pc = 0x3EF78Cu;
    // 0x3ef78c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF78Cu;
    SET_GPR_U32(ctx, 31, 0x3EF794u);
    ctx->pc = 0x3EF790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF78Cu;
    // 0x3ef790: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF78Cu, 0x3EF794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF794u;
label_3ef794:
    // 0x3ef794: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ef794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ef798: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef79c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ef79cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ef7a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF7A0u;
    {
        const bool branch_taken_0x3ef7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7A0u;
        // 0x3ef7a4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef7a0) {
            ctx->pc = 0x3EF7C4u;
            goto label_3ef7c4;
        }
    }
    ctx->pc = 0x3EF7A8u;
label_3ef7a8:
    // 0x3ef7a8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ef7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef7ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF7ACu;
    SET_GPR_U32(ctx, 31, 0x3EF7B4u);
    ctx->pc = 0x3EF7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF7ACu;
    // 0x3ef7b0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF7ACu, 0x3EF7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF7B4u;
label_3ef7b4:
    // 0x3ef7b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef7b8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ef7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ef7bc: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3ef7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3ef7c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ef7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ef7c4:
    // 0x3ef7c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef7c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ef7c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef7cc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ef7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ef7d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ef7d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef7d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ef7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef7d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef7dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ef7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ef7e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ef7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ef7e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ef7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ef7e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ef7e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ef7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF7ECu;
        // 0x3ef7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF7F4u;
    // 0x3ef7f4: 0x0  nop
    ctx->pc = 0x3ef7f4u;
    // NOP
    ctx->pc = 0x3ef7f8u;
}
