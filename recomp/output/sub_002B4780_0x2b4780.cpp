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

// Function: sub_002B4780
// Address: 0x2b4780 - 0x2b4840
void sub_002B4780_0x2b4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4780_0x2b4780");
#endif

    switch (ctx->pc) {
        case 0x2b47a8u: goto label_2b47a8;
        case 0x2b47c0u: goto label_2b47c0;
        default: break;
    }

    ctx->pc = 0x2b4780u;

    // 0x2b4780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4784: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b4788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b478c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2b4790: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b4790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4794: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2b4794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4798: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b4798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b479c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b47a0: 0xc0ef00e  jal         func_3BC038
    ctx->pc = 0x2B47A0u;
    SET_GPR_U32(ctx, 31, 0x2B47A8u);
    ctx->pc = 0x2B47A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B47A0u;
    // 0x2b47a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC038u, 0x2B47A0u, 0x2B47A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47A8u;
label_2b47a8:
    // 0x2b47a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b47ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b47acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b47b0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2b47b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b47b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b47b8: 0xc0ef0b2  jal         func_3BC2C8
    ctx->pc = 0x2B47B8u;
    SET_GPR_U32(ctx, 31, 0x2B47C0u);
    ctx->pc = 0x2B47BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B47B8u;
    // 0x2b47bc: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B47B8u, 0x2B47C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47C0u;
label_2b47c0:
    // 0x2b47c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2b47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b47c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B47C4u;
    {
        const bool branch_taken_0x2b47c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47C4u;
        // 0x2b47c8: 0x222102a  slt         $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47c4) {
            ctx->pc = 0x2B47E0u;
            goto label_2b47e0;
        }
    }
    ctx->pc = 0x2B47CCu;
    // 0x2b47cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B47CCu;
    {
        const bool branch_taken_0x2b47cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47CCu;
        // 0x2b47d0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47cc) {
            ctx->pc = 0x2B47E4u;
            goto label_2b47e4;
        }
    }
    ctx->pc = 0x2B47D4u;
    // 0x2b47d4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b47d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b47d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B47D8u;
    {
        const bool branch_taken_0x2b47d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47D8u;
        // 0x2b47dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47d8) {
            ctx->pc = 0x2B482Cu;
            goto label_2b482c;
        }
    }
    ctx->pc = 0x2B47E0u;
label_2b47e0:
    // 0x2b47e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b47e4:
    // 0x2b47e4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2b47e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b47e8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B47E8u;
    {
        const bool branch_taken_0x2b47e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47E8u;
        // 0x2b47ec: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47e8) {
            ctx->pc = 0x2B47FCu;
            goto label_2b47fc;
        }
    }
    ctx->pc = 0x2B47F0u;
    // 0x2b47f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b47f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B47F4u;
    {
        const bool branch_taken_0x2b47f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47F4u;
        // 0x2b47f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47f4) {
            ctx->pc = 0x2B4828u;
            goto label_2b4828;
        }
    }
    ctx->pc = 0x2B47FCu;
label_2b47fc:
    // 0x2b47fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B47FCu;
    {
        const bool branch_taken_0x2b47fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47FCu;
        // 0x2b4800: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47fc) {
            ctx->pc = 0x2B4810u;
            goto label_2b4810;
        }
    }
    ctx->pc = 0x2B4804u;
    // 0x2b4804: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2b4804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b4808: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4808u;
    {
        const bool branch_taken_0x2b4808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4808u;
        // 0x2b480c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4808) {
            ctx->pc = 0x2B4828u;
            goto label_2b4828;
        }
    }
    ctx->pc = 0x2B4810u;
label_2b4810:
    // 0x2b4810: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4810u;
    {
        const bool branch_taken_0x2b4810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4810u;
        // 0x2b4814: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4810) {
            ctx->pc = 0x2B4820u;
            goto label_2b4820;
        }
    }
    ctx->pc = 0x2B4818u;
    // 0x2b4818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4818u;
    {
        const bool branch_taken_0x2b4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4818u;
        // 0x2b481c: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4818) {
            ctx->pc = 0x2B482Cu;
            goto label_2b482c;
        }
    }
    ctx->pc = 0x2B4820u;
label_2b4820:
    // 0x2b4820: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2b4820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b4824: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2b4824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b4828:
    // 0x2b4828: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2b4828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_2b482c:
    // 0x2b482c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b482cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4830: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b4830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b4834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4838: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4838u;
        // 0x2b483c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4840u;
}
