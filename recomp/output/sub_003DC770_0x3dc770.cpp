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

// Function: sub_003DC770
// Address: 0x3dc770 - 0x3dc800
void sub_003DC770_0x3dc770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC770_0x3dc770");
#endif

    switch (ctx->pc) {
        case 0x3dc7f4u: goto label_3dc7f4;
        default: break;
    }

    ctx->pc = 0x3dc770u;

    // 0x3dc770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dc778: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dc778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dc77c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dc77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dc780: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dc780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dc784: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC784u;
    {
        const bool branch_taken_0x3dc784 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC784u;
        // 0x3dc788: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc784) {
            ctx->pc = 0x3DC794u;
            goto label_3dc794;
        }
    }
    ctx->pc = 0x3DC78Cu;
    // 0x3dc78c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dc790: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dc790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3dc794:
    // 0x3dc794: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3dc794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3dc798: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC798u;
    {
        const bool branch_taken_0x3dc798 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dc798) {
            ctx->pc = 0x3DC79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC798u;
            // 0x3dc79c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC7ACu;
            goto label_3dc7ac;
        }
    }
    ctx->pc = 0x3DC7A0u;
    // 0x3dc7a0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dc7a4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3dc7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3dc7a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dc7ac:
    // 0x3dc7ac: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC7ACu;
    {
        const bool branch_taken_0x3dc7ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dc7ac) {
            ctx->pc = 0x3DC7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC7ACu;
            // 0x3dc7b0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC7C0u;
            goto label_3dc7c0;
        }
    }
    ctx->pc = 0x3DC7B4u;
    // 0x3dc7b4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dc7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dc7b8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dc7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dc7bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3dc7c0:
    // 0x3dc7c0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC7C0u;
    {
        const bool branch_taken_0x3dc7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc7c0) {
            ctx->pc = 0x3DC7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC7C0u;
            // 0x3dc7c4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC7D4u;
            goto label_3dc7d4;
        }
    }
    ctx->pc = 0x3DC7C8u;
    // 0x3dc7c8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dc7cc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dc7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dc7d0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dc7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3dc7d4:
    // 0x3dc7d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC7D4u;
    {
        const bool branch_taken_0x3dc7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc7d4) {
            ctx->pc = 0x3DC7E4u;
            goto label_3dc7e4;
        }
    }
    ctx->pc = 0x3DC7DCu;
    // 0x3dc7dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dc7e0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3dc7e4:
    // 0x3dc7e4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DC7E4u;
    {
        const bool branch_taken_0x3dc7e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7E4u;
        // 0x3dc7e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc7e4) {
            ctx->pc = 0x3DC7F8u;
            goto label_3dc7f8;
        }
    }
    ctx->pc = 0x3DC7ECu;
    // 0x3dc7ec: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DC7ECu;
    SET_GPR_U32(ctx, 31, 0x3DC7F4u);
    ctx->pc = 0x3DC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC7ECu;
    // 0x3dc7f0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DC7ECu, 0x3DC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC7F4u;
label_3dc7f4:
    // 0x3dc7f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dc7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dc7f8:
    // 0x3dc7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7F8u;
        // 0x3dc7fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC800u;
}
