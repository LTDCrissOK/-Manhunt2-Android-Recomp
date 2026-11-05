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

// Function: sub_003BCF50
// Address: 0x3bcf50 - 0x3bd068
void sub_003BCF50_0x3bcf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCF50_0x3bcf50");
#endif

    switch (ctx->pc) {
        case 0x3bcf70u: goto label_3bcf70;
        case 0x3bd000u: goto label_3bd000;
        case 0x3bd028u: goto label_3bd028;
        default: break;
    }

    ctx->pc = 0x3bcf50u;

    // 0x3bcf50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bcf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bcf54: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3bcf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3bcf58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3bcf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3bcf5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bcf5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcf60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bcf60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcf64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bcf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3bcf68: 0xc0ef3b4  jal         func_3BCED0
    ctx->pc = 0x3BCF68u;
    SET_GPR_U32(ctx, 31, 0x3BCF70u);
    ctx->pc = 0x3BCF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCF68u;
    // 0x3bcf6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCED0u, 0x3BCF68u, 0x3BCF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCF70u;
label_3bcf70:
    // 0x3bcf70: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3bcf70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bcf74: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x3bcf74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bcf78: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x3bcf78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3bcf7c: 0x624826  xor         $t1, $v1, $v0
    ctx->pc = 0x3bcf7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x3bcf80: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3bcf80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3bcf84: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x3bcf84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3bcf88: 0x95103  sra         $t2, $t1, 4
    ctx->pc = 0x3bcf88u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 9), 4));
    // 0x3bcf8c: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x3bcf8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3bcf90: 0x3122000f  andi        $v0, $t1, 0xF
    ctx->pc = 0x3bcf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x3bcf94: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x3bcf94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x3bcf98: 0x4a4026  xor         $t0, $v0, $t2
    ctx->pc = 0x3bcf98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x3bcf9c: 0xc41826  xor         $v1, $a2, $a0
    ctx->pc = 0x3bcf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x3bcfa0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BCFA0u;
    {
        const bool branch_taken_0x3bcfa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BCFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFA0u;
        // 0x3bcfa4: 0x653826  xor         $a3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfa0) {
            ctx->pc = 0x3BCFB8u;
            goto label_3bcfb8;
        }
    }
    ctx->pc = 0x3BCFA8u;
    // 0x3bcfa8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BCFA8u;
    {
        const bool branch_taken_0x3bcfa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFA8u;
        // 0x3bcfac: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfa8) {
            ctx->pc = 0x3BCFBCu;
            goto label_3bcfbc;
        }
    }
    ctx->pc = 0x3BCFB0u;
    // 0x3bcfb0: 0x11200028  beqz        $t1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3BCFB0u;
    {
        const bool branch_taken_0x3bcfb0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFB0u;
        // 0x3bcfb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfb0) {
            ctx->pc = 0x3BD054u;
            goto label_3bd054;
        }
    }
    ctx->pc = 0x3BCFB8u;
label_3bcfb8:
    // 0x3bcfb8: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x3bcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_3bcfbc:
    // 0x3bcfbc: 0x14e2000c  bne         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3BCFBCu;
    {
        const bool branch_taken_0x3bcfbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BCFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFBCu;
        // 0x3bcfc0: 0x82843  sra         $a1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfbc) {
            ctx->pc = 0x3BCFF0u;
            goto label_3bcff0;
        }
    }
    ctx->pc = 0x3BCFC4u;
    // 0x3bcfc4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3bcfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3bcfc8: 0x1502000a  bne         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BCFC8u;
    {
        const bool branch_taken_0x3bcfc8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BCFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFC8u;
        // 0x3bcfcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfc8) {
            ctx->pc = 0x3BCFF4u;
            goto label_3bcff4;
        }
    }
    ctx->pc = 0x3BCFD0u;
    // 0x3bcfd0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3bcfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3bcfd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3bcfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bcfd8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x3bcfd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bcfdc: 0x1442004  sllv        $a0, $a0, $t2
    ctx->pc = 0x3bcfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 10) & 0x1F));
    // 0x3bcfe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3bcfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3bcfe4: 0xa42826  xor         $a1, $a1, $a0
    ctx->pc = 0x3bcfe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x3bcfe8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3BCFE8u;
    {
        const bool branch_taken_0x3bcfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFE8u;
        // 0x3bcfec: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfe8) {
            ctx->pc = 0x3BD054u;
            goto label_3bd054;
        }
    }
    ctx->pc = 0x3BCFF0u;
label_3bcff0:
    // 0x3bcff0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3bcff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcff4:
    // 0x3bcff4: 0x31060001  andi        $a2, $t0, 0x1
    ctx->pc = 0x3bcff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x3bcff8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3bcff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3bcffc: 0x0  nop
    ctx->pc = 0x3bcffcu;
    // NOP
label_3bd000:
    // 0x3bd000: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x3bd000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x3bd004: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3bd004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3bd008: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3bd008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3bd00c: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x3bd00cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x3bd010: 0x0  nop
    ctx->pc = 0x3bd010u;
    // NOP
    // 0x3bd014: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BD014u;
    {
        const bool branch_taken_0x3bd014 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3bd014) {
            ctx->pc = 0x3BD000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd000;
        }
    }
    ctx->pc = 0x3BD01Cu;
    // 0x3bd01c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD01Cu;
    {
        const bool branch_taken_0x3bd01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD01Cu;
        // 0x3bd020: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd01c) {
            ctx->pc = 0x3BD030u;
            goto label_3bd030;
        }
    }
    ctx->pc = 0x3BD024u;
    // 0x3bd024: 0x0  nop
    ctx->pc = 0x3bd024u;
    // NOP
label_3bd028:
    // 0x3bd028: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x3bd028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3bd02c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3bd02cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_3bd030:
    // 0x3bd030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bd030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bd034: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3bd034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3bd038: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x3bd038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3bd03c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BD03Cu;
    {
        const bool branch_taken_0x3bd03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bd03c) {
            ctx->pc = 0x3BD028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd028;
        }
    }
    ctx->pc = 0x3BD044u;
    // 0x3bd044: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3bd044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3bd048: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3bd048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3bd04c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3bd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3bd050: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x3bd050u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_3bd054:
    // 0x3bd054: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bd054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bd058: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3bd058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bd05c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3bd05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd060: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD060u;
        // 0x3bd064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD068u;
}
