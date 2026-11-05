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

// Function: sub_003A7810
// Address: 0x3a7810 - 0x3a78d8
void sub_003A7810_0x3a7810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7810_0x3a7810");
#endif

    switch (ctx->pc) {
        case 0x3a7860u: goto label_3a7860;
        case 0x3a78a8u: goto label_3a78a8;
        default: break;
    }

    ctx->pc = 0x3a7810u;

    // 0x3a7810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a7814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a781c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a781cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a7820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a7820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a7824: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x3a7824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3a7828: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A7828u;
    {
        const bool branch_taken_0x3a7828 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7828) {
            ctx->pc = 0x3A782Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7828u;
            // 0x3a782c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7850u;
            goto label_3a7850;
        }
    }
    ctx->pc = 0x3A7830u;
    // 0x3a7830: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a7830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a7834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a7838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a783c: 0x2484e4b0  addiu       $a0, $a0, -0x1B50
    ctx->pc = 0x3a783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960304));
    // 0x3a7840: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a7840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7844: 0x80e9d40  j           func_3A7500
    ctx->pc = 0x3A7844u;
    ctx->pc = 0x3A7848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7844u;
    // 0x3a7848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    sub_003A7500_0x3a7500(rdram, ctx, runtime); return;
    ctx->pc = 0x3A784Cu;
    // 0x3a784c: 0x0  nop
    ctx->pc = 0x3a784cu;
    // NOP
label_3a7850:
    // 0x3a7850: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3a7850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3a7854: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a7854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a7858: 0xc0e66ac  jal         func_399AB0
    ctx->pc = 0x3A7858u;
    SET_GPR_U32(ctx, 31, 0x3A7860u);
    ctx->pc = 0x3A785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7858u;
    // 0x3a785c: 0x24510038  addiu       $s1, $v0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x3A7858u, 0x3A7860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7860u;
label_3a7860:
    // 0x3a7860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a7860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7864: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3a7864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a7868: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A7868u;
    {
        const bool branch_taken_0x3a7868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7868u;
        // 0x3a786c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7868) {
            ctx->pc = 0x3A78B0u;
            goto label_3a78b0;
        }
    }
    ctx->pc = 0x3A7870u;
    // 0x3a7870: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7870u;
    {
        const bool branch_taken_0x3a7870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7870u;
        // 0x3a7874: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7870) {
            ctx->pc = 0x3A7890u;
            goto label_3a7890;
        }
    }
    ctx->pc = 0x3A7878u;
    // 0x3a7878: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a7878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a787c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A787Cu;
    {
        const bool branch_taken_0x3a787c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a787c) {
            ctx->pc = 0x3A78A0u;
            goto label_3a78a0;
        }
    }
    ctx->pc = 0x3A7884u;
    // 0x3a7884: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A7884u;
    {
        const bool branch_taken_0x3a7884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7884u;
        // 0x3a7888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7884) {
            ctx->pc = 0x3A78C4u;
            goto label_3a78c4;
        }
    }
    ctx->pc = 0x3A788Cu;
    // 0x3a788c: 0x0  nop
    ctx->pc = 0x3a788cu;
    // NOP
label_3a7890:
    // 0x3a7890: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A7890u;
    {
        const bool branch_taken_0x3a7890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a7890) {
            ctx->pc = 0x3A7894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7890u;
            // 0x3a7894: 0xa2040001  sb          $a0, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A78C0u;
            goto label_3a78c0;
        }
    }
    ctx->pc = 0x3A7898u;
    // 0x3a7898: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A7898u;
    {
        const bool branch_taken_0x3a7898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7898u;
        // 0x3a789c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7898) {
            ctx->pc = 0x3A78C4u;
            goto label_3a78c4;
        }
    }
    ctx->pc = 0x3A78A0u;
label_3a78a0:
    // 0x3a78a0: 0xc0e66d6  jal         func_399B58
    ctx->pc = 0x3A78A0u;
    SET_GPR_U32(ctx, 31, 0x3A78A8u);
    ctx->pc = 0x3A78A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A78A0u;
    // 0x3a78a4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399B58u, 0x3A78A0u, 0x3A78A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A78A8u;
label_3a78a8:
    // 0x3a78a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A78A8u;
    {
        const bool branch_taken_0x3a78a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78A8u;
        // 0x3a78ac: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78a8) {
            ctx->pc = 0x3A78C0u;
            goto label_3a78c0;
        }
    }
    ctx->pc = 0x3A78B0u;
label_3a78b0:
    // 0x3a78b0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3a78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3a78b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a78b8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x3a78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x3a78bc: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x3a78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_3a78c0:
    // 0x3a78c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a78c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a78c4:
    // 0x3a78c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a78c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a78c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a78c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a78cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A78CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78CCu;
        // 0x3a78d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A78CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A78D4u;
    // 0x3a78d4: 0x0  nop
    ctx->pc = 0x3a78d4u;
    // NOP
    ctx->pc = 0x3a78d8u;
}
