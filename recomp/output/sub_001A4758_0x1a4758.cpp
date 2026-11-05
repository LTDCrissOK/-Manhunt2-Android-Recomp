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

// Function: sub_001A4758
// Address: 0x1a4758 - 0x1a4828
void sub_001A4758_0x1a4758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4758_0x1a4758");
#endif

    switch (ctx->pc) {
        case 0x1a4780u: goto label_1a4780;
        case 0x1a4798u: goto label_1a4798;
        case 0x1a4804u: goto label_1a4804;
        default: break;
    }

    ctx->pc = 0x1a4758u;

    // 0x1a4758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a475c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a4764: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a4768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a476c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a4770: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4770u;
    {
        const bool branch_taken_0x1a4770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4770u;
        // 0x1a4774: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4770) {
            ctx->pc = 0x1A4788u;
            goto label_1a4788;
        }
    }
    ctx->pc = 0x1A4778u;
    // 0x1a4778: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1A4778u;
    SET_GPR_U32(ctx, 31, 0x1A4780u);
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1A4778u, 0x1A4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4780u;
label_1a4780:
    // 0x1a4780: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A4780u;
    {
        const bool branch_taken_0x1a4780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4780) {
            ctx->pc = 0x1A47FCu;
            goto label_1a47fc;
        }
    }
    ctx->pc = 0x1A4788u;
label_1a4788:
    // 0x1a4788: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4788u;
    {
        const bool branch_taken_0x1a4788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4788u;
        // 0x1a478c: 0x2462fffd  addiu       $v0, $v1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4788) {
            ctx->pc = 0x1A47A0u;
            goto label_1a47a0;
        }
    }
    ctx->pc = 0x1A4790u;
    // 0x1a4790: 0xc06920a  jal         func_1A4828
    ctx->pc = 0x1A4790u;
    SET_GPR_U32(ctx, 31, 0x1A4798u);
    ctx->pc = 0x1A4794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4790u;
    // 0x1a4794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4828u, 0x1A4790u, 0x1A4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4798u;
label_1a4798:
    // 0x1a4798: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A4798u;
    {
        const bool branch_taken_0x1a4798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4798) {
            ctx->pc = 0x1A47FCu;
            goto label_1a47fc;
        }
    }
    ctx->pc = 0x1A47A0u;
label_1a47a0:
    // 0x1a47a0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a47a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a47a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A47A4u;
    {
        const bool branch_taken_0x1a47a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47A4u;
        // 0x1a47a8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47a4) {
            ctx->pc = 0x1A47DCu;
            goto label_1a47dc;
        }
    }
    ctx->pc = 0x1A47ACu;
    // 0x1a47ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a47acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a47b0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1a47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1a47b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a47b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a47b8: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x1a47b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x1a47bc: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x1a47bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
    // 0x1a47c0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1a47c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a47c4: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1a47c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1a47c8: 0xdca21020  ld          $v0, 0x1020($a1)
    ctx->pc = 0x1a47c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 4128)));
    // 0x1a47cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a47ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a47d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a47d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a47d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A47D4u;
    {
        const bool branch_taken_0x1a47d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A47D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47D4u;
        // 0x1a47d8: 0xfca21020  sd          $v0, 0x1020($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47d4) {
            ctx->pc = 0x1A47FCu;
            goto label_1a47fc;
        }
    }
    ctx->pc = 0x1A47DCu;
label_1a47dc:
    // 0x1a47dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A47DCu;
    {
        const bool branch_taken_0x1a47dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47DCu;
        // 0x1a47e0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47dc) {
            ctx->pc = 0x1A47F0u;
            goto label_1a47f0;
        }
    }
    ctx->pc = 0x1A47E4u;
    // 0x1a47e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a47e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A47E8u;
    {
        const bool branch_taken_0x1a47e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47E8u;
        // 0x1a47ec: 0xac40093c  sw          $zero, 0x93C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47e8) {
            ctx->pc = 0x1A47FCu;
            goto label_1a47fc;
        }
    }
    ctx->pc = 0x1A47F0u;
label_1a47f0:
    // 0x1a47f0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A47F0u;
    {
        const bool branch_taken_0x1a47f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A47F0u;
        // 0x1a47f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47f0) {
            ctx->pc = 0x1A47FCu;
            goto label_1a47fc;
        }
    }
    ctx->pc = 0x1A47F8u;
    // 0x1a47f8: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1a47f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_1a47fc:
    // 0x1a47fc: 0xc09522a  jal         func_2548A8
    ctx->pc = 0x1A47FCu;
    SET_GPR_U32(ctx, 31, 0x1A4804u);
    ctx->pc = 0x1A4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47FCu;
    // 0x1a4800: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A8u, 0x1A47FCu, 0x1A4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4804u;
label_1a4804:
    // 0x1a4804: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4804u;
    {
        const bool branch_taken_0x1a4804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4804) {
            ctx->pc = 0x1A4808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4804u;
            // 0x1a4808: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A481Cu;
            goto label_1a481c;
        }
    }
    ctx->pc = 0x1A480Cu;
    // 0x1a480c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a4810: 0x8c430ff4  lw          $v1, 0xFF4($v0)
    ctx->pc = 0x1a4810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
    // 0x1a4814: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1a4814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1a4818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a481c:
    // 0x1a481c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4820: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4820u;
        // 0x1a4824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4828u;
}
