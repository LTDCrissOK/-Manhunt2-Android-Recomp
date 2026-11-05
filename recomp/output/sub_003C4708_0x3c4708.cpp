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

// Function: sub_003C4708
// Address: 0x3c4708 - 0x3c4810
void sub_003C4708_0x3c4708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4708_0x3c4708");
#endif

    switch (ctx->pc) {
        case 0x3c4758u: goto label_3c4758;
        case 0x3c4768u: goto label_3c4768;
        case 0x3c4790u: goto label_3c4790;
        case 0x3c47c8u: goto label_3c47c8;
        default: break;
    }

    ctx->pc = 0x3c4708u;

    // 0x3c4708: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c4708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3c470c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4710: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c4710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c4714: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3c4714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3c4718: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c4718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c471c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3c471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3c4720: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c4720u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4724: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c4724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3c4728: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3c4728u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c472c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c472cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3c4730: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c4730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3c4734: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3c4734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3c4738: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C4738u;
    {
        const bool branch_taken_0x3c4738 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4738u;
        // 0x3c473c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4738) {
            ctx->pc = 0x3C4770u;
            goto label_3c4770;
        }
    }
    ctx->pc = 0x3C4740u;
    // 0x3c4740: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3c4740u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3c4744: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3c4744u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x3c4748: 0x263110b0  addiu       $s1, $s1, 0x10B0
    ctx->pc = 0x3c4748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4272));
    // 0x3c474c: 0x8e06d170  lw          $a2, -0x2E90($s0)
    ctx->pc = 0x3c474cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x42D170u));
    // 0x3c4750: 0xc0f27da  jal         func_3C9F68
    ctx->pc = 0x3C4750u;
    SET_GPR_U32(ctx, 31, 0x3C4758u);
    ctx->pc = 0x3C4754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4750u;
    // 0x3c4754: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9F68u, 0x3C4750u, 0x3C4758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4758u;
label_3c4758:
    // 0x3c4758: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c4758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3c475c: 0xae00d170  sw          $zero, -0x2E90($s0)
    ctx->pc = 0x3c475cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955376), GPR_U32(ctx, 0));
    // 0x3c4760: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3C4760u;
    {
        const bool branch_taken_0x3c4760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4760u;
        // 0x3c4764: 0xac71d174  sw          $s1, -0x2E8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294955380), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4760) {
            ctx->pc = 0x3C47E8u;
            goto label_3c47e8;
        }
    }
    ctx->pc = 0x3C4768u;
label_3c4768:
    // 0x3c4768: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3C4768u;
    {
        const bool branch_taken_0x3c4768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4768u;
        // 0x3c476c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4768) {
            ctx->pc = 0x3C47E8u;
            goto label_3c47e8;
        }
    }
    ctx->pc = 0x3C4770u;
label_3c4770:
    // 0x3c4770: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3C4770u;
    {
        const bool branch_taken_0x3c4770 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4770u;
        // 0x3c4774: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4770) {
            ctx->pc = 0x3C47E4u;
            goto label_3c47e4;
        }
    }
    ctx->pc = 0x3C4778u;
    // 0x3c4778: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c4778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c477c: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x3c477cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x3c4780: 0x245510b0  addiu       $s5, $v0, 0x10B0
    ctx->pc = 0x3c4780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x3c4784: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x3c4784u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x3c4788: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x3c4788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x3c478c: 0x0  nop
    ctx->pc = 0x3c478cu;
    // NOP
label_3c4790:
    // 0x3c4790: 0x8e24d174  lw          $a0, -0x2E8C($s1)
    ctx->pc = 0x3c4790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955380)));
    // 0x3c4794: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3c4794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c4798: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3c4798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c479c: 0x8e42d170  lw          $v0, -0x2E90($s2)
    ctx->pc = 0x3c479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294955376)));
    // 0x3c47a0: 0x8e23d174  lw          $v1, -0x2E8C($s1)
    ctx->pc = 0x3c47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955380)));
    // 0x3c47a4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x3c47a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c47a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c47a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c47ac: 0xae46d170  sw          $a2, -0x2E90($s2)
    ctx->pc = 0x3c47acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294955376), GPR_U32(ctx, 6));
    // 0x3c47b0: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x3c47b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3c47b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C47B4u;
    {
        const bool branch_taken_0x3c47b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C47B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C47B4u;
        // 0x3c47b8: 0xae23d174  sw          $v1, -0x2E8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294955380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c47b4) {
            ctx->pc = 0x3C47D4u;
            goto label_3c47d4;
        }
    }
    ctx->pc = 0x3C47BCu;
    // 0x3c47bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c47bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c47c0: 0xc0f27da  jal         func_3C9F68
    ctx->pc = 0x3C47C0u;
    SET_GPR_U32(ctx, 31, 0x3C47C8u);
    ctx->pc = 0x3C47C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C47C0u;
    // 0x3c47c4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9F68u, 0x3C47C0u, 0x3C47C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C47C8u;
label_3c47c8:
    // 0x3c47c8: 0xae35d174  sw          $s5, -0x2E8C($s1)
    ctx->pc = 0x3c47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294955380), GPR_U32(ctx, 21));
    // 0x3c47cc: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3C47CCu;
    {
        const bool branch_taken_0x3c47cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C47CCu;
        // 0x3c47d0: 0xae40d170  sw          $zero, -0x2E90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294955376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c47cc) {
            ctx->pc = 0x3C4768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4768;
        }
    }
    ctx->pc = 0x3C47D4u;
label_3c47d4:
    // 0x3c47d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c47d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c47d8: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3c47d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3c47dc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3C47DCu;
    {
        const bool branch_taken_0x3c47dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C47DCu;
        // 0x3c47e0: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c47dc) {
            ctx->pc = 0x3C4790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4790;
        }
    }
    ctx->pc = 0x3C47E4u;
label_3c47e4:
    // 0x3c47e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c47e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c47e8:
    // 0x3c47e8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c47e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c47ec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c47ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c47f0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c47f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c47f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c47f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c47f8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3c47f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c47fc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3c47fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c4800: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3c4800u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c4804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c4804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c4808: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4808u;
        // 0x3c480c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4810u;
}
