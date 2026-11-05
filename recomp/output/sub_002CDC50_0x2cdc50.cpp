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

// Function: sub_002CDC50
// Address: 0x2cdc50 - 0x2cdd38
void sub_002CDC50_0x2cdc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDC50_0x2cdc50");
#endif

    switch (ctx->pc) {
        case 0x2cdcd8u: goto label_2cdcd8;
        case 0x2cdcfcu: goto label_2cdcfc;
        case 0x2cdd10u: goto label_2cdd10;
        default: break;
    }

    ctx->pc = 0x2cdc50u;

    // 0x2cdc50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cdc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cdc54: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2cdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2cdc58: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2cdc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2cdc5c: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x2cdc5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2cdc60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cdc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cdc64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cdc64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc68: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2cdc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2cdc6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2cdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2cdc70: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2cdc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2cdc74: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x2cdc74u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    // 0x2cdc78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cdc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cdc7c: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x2cdc7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x2cdc80: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cdc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cdc84: 0x36943038  ori         $s4, $s4, 0x3038
    ctx->pc = 0x2cdc84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)12344);
    // 0x2cdc88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cdc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cdc8c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2cdc8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2cdc90: 0x8cb20008  lw          $s2, 0x8($a1)
    ctx->pc = 0x2cdc90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cdc94: 0x37a8000c  ori         $t0, $sp, 0xC
    ctx->pc = 0x2cdc94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x2cdc98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cdc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cdc9c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2cdc9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2cdca0: 0x8cb1000c  lw          $s1, 0xC($a1)
    ctx->pc = 0x2cdca0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2cdca4: 0x2638021  addu        $s0, $s3, $v1
    ctx->pc = 0x2cdca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2cdca8: 0x8ea4b4a8  lw          $a0, -0x4B58($s5)
    ctx->pc = 0x2cdca8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cdcac: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x2cdcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2cdcb0: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2cdcb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2cdcb4: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x2cdcb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x2cdcb8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x2cdcb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2cdcbc: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x2cdcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2cdcc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cdcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcc4: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2cdcc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cdcc8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2cdcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2cdccc: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x2cdcccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x2cdcd0: 0xc0b2bd6  jal         func_2CAF58
    ctx->pc = 0x2CDCD0u;
    SET_GPR_U32(ctx, 31, 0x2CDCD8u);
    ctx->pc = 0x2CDCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCD0u;
    // 0x2cdcd4: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF58u, 0x2CDCD0u, 0x2CDCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCD8u;
label_2cdcd8:
    // 0x2cdcd8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2cdcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdcdc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2cdcdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdce0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2cdce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cdce4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2cdce4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdce8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2cdce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cdcec: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2cdcecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcf0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2cdcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2cdcf4: 0xc0b374e  jal         func_2CDD38
    ctx->pc = 0x2CDCF4u;
    SET_GPR_U32(ctx, 31, 0x2CDCFCu);
    ctx->pc = 0x2CDCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDCF4u;
    // 0x2cdcf8: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD38u, 0x2CDCF4u, 0x2CDCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCFCu;
label_2cdcfc:
    // 0x2cdcfc: 0x8ea4b4a8  lw          $a0, -0x4B58($s5)
    ctx->pc = 0x2cdcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294948008)));
    // 0x2cdd00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cdd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cdd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd08: 0xc0b2c02  jal         func_2CB008
    ctx->pc = 0x2CDD08u;
    SET_GPR_U32(ctx, 31, 0x2CDD10u);
    ctx->pc = 0x2CDD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD08u;
    // 0x2cdd0c: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB008u, 0x2CDD08u, 0x2CDD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD10u;
label_2cdd10:
    // 0x2cdd10: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x2cdd10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cdd14: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cdd14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cdd18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cdd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdd1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cdd1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdd20: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2cdd20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cdd24: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2cdd24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cdd28: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2cdd28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cdd2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cdd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cdd30: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD30u;
        // 0x2cdd34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDD38u;
}
