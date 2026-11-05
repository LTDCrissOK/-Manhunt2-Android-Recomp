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

// Function: sub_001C4768
// Address: 0x1c4768 - 0x1c4800
void sub_001C4768_0x1c4768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4768_0x1c4768");
#endif

    switch (ctx->pc) {
        case 0x1c47acu: goto label_1c47ac;
        case 0x1c47bcu: goto label_1c47bc;
        case 0x1c47c8u: goto label_1c47c8;
        case 0x1c47dcu: goto label_1c47dc;
        default: break;
    }

    ctx->pc = 0x1c4768u;

    // 0x1c4768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c476c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4774: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c4774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c477c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c477cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4780: 0x8e2204c0  lw          $v0, 0x4C0($s1)
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1216)));
    // 0x1c4784: 0x56020003  bnel        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4784u;
    {
        const bool branch_taken_0x1c4784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4784) {
            ctx->pc = 0x1C4788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4784u;
            // 0x1c4788: 0x8e031000  lw          $v1, 0x1000($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4794u;
            goto label_1c4794;
        }
    }
    ctx->pc = 0x1C478Cu;
    // 0x1c478c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C478Cu;
    {
        const bool branch_taken_0x1c478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C478Cu;
        // 0x1c4790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c478c) {
            ctx->pc = 0x1C47E0u;
            goto label_1c47e0;
        }
    }
    ctx->pc = 0x1C4794u;
label_1c4794:
    // 0x1c4794: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x1c4794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1c4798: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1c4798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1c479c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C479Cu;
    {
        const bool branch_taken_0x1c479c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c479c) {
            ctx->pc = 0x1C47A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C479Cu;
            // 0x1c47a0: 0x8e021000  lw          $v0, 0x1000($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4096)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C47B0u;
            goto label_1c47b0;
        }
    }
    ctx->pc = 0x1C47A4u;
    // 0x1c47a4: 0xc0711ba  jal         func_1C46E8
    ctx->pc = 0x1C47A4u;
    SET_GPR_U32(ctx, 31, 0x1C47ACu);
    ctx->pc = 0x1C47A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47A4u;
    // 0x1c47a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46E8u, 0x1C47A4u, 0x1C47ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47ACu;
label_1c47ac:
    // 0x1c47ac: 0x8e021000  lw          $v0, 0x1000($s0)
    ctx->pc = 0x1c47acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4096)));
label_1c47b0:
    // 0x1c47b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c47b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47b4: 0xc071154  jal         func_1C4550
    ctx->pc = 0x1C47B4u;
    SET_GPR_U32(ctx, 31, 0x1C47BCu);
    ctx->pc = 0x1C47B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47B4u;
    // 0x1c47b8: 0x8c440064  lw          $a0, 0x64($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4550u, 0x1C47B4u, 0x1C47BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47BCu;
label_1c47bc:
    // 0x1c47bc: 0x26240488  addiu       $a0, $s1, 0x488
    ctx->pc = 0x1c47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1160));
    // 0x1c47c0: 0xc0f71b8  jal         func_3DC6E0
    ctx->pc = 0x1C47C0u;
    SET_GPR_U32(ctx, 31, 0x1C47C8u);
    ctx->pc = 0x1C47C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47C0u;
    // 0x1c47c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x1C47C0u, 0x1C47C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47C8u;
label_1c47c8:
    // 0x1c47c8: 0x8e031000  lw          $v1, 0x1000($s0)
    ctx->pc = 0x1c47c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4096)));
    // 0x1c47cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c47ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c47d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c47d4: 0xc071056  jal         func_1C4158
    ctx->pc = 0x1C47D4u;
    SET_GPR_U32(ctx, 31, 0x1C47DCu);
    ctx->pc = 0x1C47D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47D4u;
    // 0x1c47d8: 0xac710064  sw          $s1, 0x64($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4158u, 0x1C47D4u, 0x1C47DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C47DCu;
label_1c47dc:
    // 0x1c47dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c47e0:
    // 0x1c47e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c47e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c47e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c47e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c47e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c47e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c47ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C47ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47ECu;
        // 0x1c47f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C47ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C47F4u;
    // 0x1c47f4: 0x0  nop
    ctx->pc = 0x1c47f4u;
    // NOP
    // 0x1c47f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1c47f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c47fc: 0x0  nop
    ctx->pc = 0x1c47fcu;
    // NOP
    ctx->pc = 0x1c4800u;
}
