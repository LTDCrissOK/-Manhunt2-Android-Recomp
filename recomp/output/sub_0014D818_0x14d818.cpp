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

// Function: sub_0014D818
// Address: 0x14d818 - 0x14d880
void sub_0014D818_0x14d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D818_0x14d818");
#endif

    switch (ctx->pc) {
        case 0x14d82cu: goto label_14d82c;
        case 0x14d83cu: goto label_14d83c;
        case 0x14d84cu: goto label_14d84c;
        case 0x14d85cu: goto label_14d85c;
        case 0x14d86cu: goto label_14d86c;
        default: break;
    }

    ctx->pc = 0x14d818u;

    // 0x14d818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d820: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d824: 0xc053620  jal         func_14D880
    ctx->pc = 0x14D824u;
    SET_GPR_U32(ctx, 31, 0x14D82Cu);
    ctx->pc = 0x14D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D824u;
    // 0x14d828: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D880u, 0x14D824u, 0x14D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D82Cu;
label_14d82c:
    // 0x14d82c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x14D82Cu;
    {
        const bool branch_taken_0x14d82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d82c) {
            ctx->pc = 0x14D830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D82Cu;
            // 0x14d830: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D870u;
            goto label_14d870;
        }
    }
    ctx->pc = 0x14D834u;
    // 0x14d834: 0xc053628  jal         func_14D8A0
    ctx->pc = 0x14D834u;
    SET_GPR_U32(ctx, 31, 0x14D83Cu);
    ctx->pc = 0x14D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D834u;
    // 0x14d838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D8A0u, 0x14D834u, 0x14D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D83Cu;
label_14d83c:
    // 0x14d83c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14D83Cu;
    {
        const bool branch_taken_0x14d83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d83c) {
            ctx->pc = 0x14D840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D83Cu;
            // 0x14d840: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D870u;
            goto label_14d870;
        }
    }
    ctx->pc = 0x14D844u;
    // 0x14d844: 0xc053638  jal         func_14D8E0
    ctx->pc = 0x14D844u;
    SET_GPR_U32(ctx, 31, 0x14D84Cu);
    ctx->pc = 0x14D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D844u;
    // 0x14d848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D8E0u, 0x14D844u, 0x14D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D84Cu;
label_14d84c:
    // 0x14d84c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D84Cu;
    {
        const bool branch_taken_0x14d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d84c) {
            ctx->pc = 0x14D850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D84Cu;
            // 0x14d850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D870u;
            goto label_14d870;
        }
    }
    ctx->pc = 0x14D854u;
    // 0x14d854: 0xc05364a  jal         func_14D928
    ctx->pc = 0x14D854u;
    SET_GPR_U32(ctx, 31, 0x14D85Cu);
    ctx->pc = 0x14D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D854u;
    // 0x14d858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D928u, 0x14D854u, 0x14D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D85Cu;
label_14d85c:
    // 0x14d85c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D85Cu;
    {
        const bool branch_taken_0x14d85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d85c) {
            ctx->pc = 0x14D860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D85Cu;
            // 0x14d860: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D870u;
            goto label_14d870;
        }
    }
    ctx->pc = 0x14D864u;
    // 0x14d864: 0xc05365c  jal         func_14D970
    ctx->pc = 0x14D864u;
    SET_GPR_U32(ctx, 31, 0x14D86Cu);
    ctx->pc = 0x14D868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D864u;
    // 0x14d868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D970u, 0x14D864u, 0x14D86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D86Cu;
label_14d86c:
    // 0x14d86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d870:
    // 0x14d870: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d874: 0x3e00008  jr          $ra
    ctx->pc = 0x14D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D874u;
        // 0x14d878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D87Cu;
    // 0x14d87c: 0x0  nop
    ctx->pc = 0x14d87cu;
    // NOP
    ctx->pc = 0x14d880u;
}
