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

// Function: sub_00396A30
// Address: 0x396a30 - 0x396b38
void sub_00396A30_0x396a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396A30_0x396a30");
#endif

    switch (ctx->pc) {
        case 0x396a98u: goto label_396a98;
        case 0x396aacu: goto label_396aac;
        case 0x396ac0u: goto label_396ac0;
        case 0x396accu: goto label_396acc;
        case 0x396adcu: goto label_396adc;
        case 0x396ae4u: goto label_396ae4;
        case 0x396aecu: goto label_396aec;
        case 0x396af4u: goto label_396af4;
        default: break;
    }

    ctx->pc = 0x396a30u;

    // 0x396a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396a34: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x396a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x396a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x396a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396a3c: 0x24471998  addiu       $a3, $v0, 0x1998
    ctx->pc = 0x396a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6552));
    // 0x396a40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x396a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x396a44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x396a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x396a48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x396a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x396a4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x396a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x396a50: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x396a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x396a54: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x396a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x396a58: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x396a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x396a5c: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x396a5cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x401998u));
    // 0x396a60: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x396A60u;
    {
        const bool branch_taken_0x396a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x396A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A60u;
        // 0x396a64: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a60) {
            ctx->pc = 0x396B00u;
            goto label_396b00;
        }
    }
    ctx->pc = 0x396A68u;
    // 0x396a68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x396a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x396a6c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x396a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x396a70: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x396a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x396a74: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x396a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x396a78: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x396a78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x396a7c: 0x24531930  addiu       $s3, $v0, 0x1930
    ctx->pc = 0x396a7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 6448));
    // 0x396a80: 0x2476196c  addiu       $s6, $v1, 0x196C
    ctx->pc = 0x396a80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 6508));
    // 0x396a84: 0x249219e8  addiu       $s2, $a0, 0x19E8
    ctx->pc = 0x396a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 6632));
    // 0x396a88: 0x24b51970  addiu       $s5, $a1, 0x1970
    ctx->pc = 0x396a88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 6512));
    // 0x396a8c: 0x24d11908  addiu       $s1, $a2, 0x1908
    ctx->pc = 0x396a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 6408));
    // 0x396a90: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x396a90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396a94: 0x0  nop
    ctx->pc = 0x396a94u;
    // NOP
label_396a98:
    // 0x396a98: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x396a98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x396a9c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x396a9cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x396aa0: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x396aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x396aa4: 0xc0e5ba2  jal         func_396E88
    ctx->pc = 0x396AA4u;
    SET_GPR_U32(ctx, 31, 0x396AACu);
    ctx->pc = 0x396AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396AA4u;
    // 0x396aa8: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E88u, 0x396AA4u, 0x396AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396AACu;
label_396aac:
    // 0x396aac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x396aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x396ab0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x396AB0u;
    {
        const bool branch_taken_0x396ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x396ab0) {
            ctx->pc = 0x396AC0u;
            goto label_396ac0;
        }
    }
    ctx->pc = 0x396AB8u;
    // 0x396ab8: 0xc0e5e82  jal         func_397A08
    ctx->pc = 0x396AB8u;
    SET_GPR_U32(ctx, 31, 0x396AC0u);
    ctx->pc = 0x397A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A08u, 0x396AB8u, 0x396AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396AC0u;
label_396ac0:
    // 0x396ac0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x396ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x396ac4: 0xc0e5c4e  jal         func_397138
    ctx->pc = 0x396AC4u;
    SET_GPR_U32(ctx, 31, 0x396ACCu);
    ctx->pc = 0x396AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396AC4u;
    // 0x396ac8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397138u, 0x396AC4u, 0x396ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396ACCu;
label_396acc:
    // 0x396acc: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x396ACCu;
    {
        const bool branch_taken_0x396acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x396acc) {
            ctx->pc = 0x396ADCu;
            goto label_396adc;
        }
    }
    ctx->pc = 0x396AD4u;
    // 0x396ad4: 0xc0e5ba2  jal         func_396E88
    ctx->pc = 0x396AD4u;
    SET_GPR_U32(ctx, 31, 0x396ADCu);
    ctx->pc = 0x396AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396AD4u;
    // 0x396ad8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E88u, 0x396AD4u, 0x396ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396ADCu;
label_396adc:
    // 0x396adc: 0xc0e5e4a  jal         func_397928
    ctx->pc = 0x396ADCu;
    SET_GPR_U32(ctx, 31, 0x396AE4u);
    ctx->pc = 0x397928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397928u, 0x396ADCu, 0x396AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396AE4u;
label_396ae4:
    // 0x396ae4: 0xc0eb42c  jal         func_3AD0B0
    ctx->pc = 0x396AE4u;
    SET_GPR_U32(ctx, 31, 0x396AECu);
    ctx->pc = 0x396AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396AE4u;
    // 0x396ae8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0B0u, 0x396AE4u, 0x396AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396AECu;
label_396aec:
    // 0x396aec: 0xc0e5b82  jal         func_396E08
    ctx->pc = 0x396AECu;
    SET_GPR_U32(ctx, 31, 0x396AF4u);
    ctx->pc = 0x396AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396AECu;
    // 0x396af0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E08u, 0x396AECu, 0x396AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396AF4u;
label_396af4:
    // 0x396af4: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x396af4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x396af8: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x396AF8u;
    {
        const bool branch_taken_0x396af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396AF8u;
        // 0x396afc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396af8) {
            ctx->pc = 0x396A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396a98;
        }
    }
    ctx->pc = 0x396B00u;
label_396b00:
    // 0x396b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396b04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x396b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x396b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396b0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x396b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396b10: 0x244219a0  addiu       $v0, $v0, 0x19A0
    ctx->pc = 0x396b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6560));
    // 0x396b14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x396b14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x396b18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x396b18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396b1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x396b1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x396b20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x396b20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396b24: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x396b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x396b28: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x396b28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x396b2c: 0x80f25f8  j           func_3C97E0
    ctx->pc = 0x396B2Cu;
    ctx->pc = 0x396B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396B2Cu;
    // 0x396b30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97E0u, 0x396B2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x396B34u;
    // 0x396b34: 0x0  nop
    ctx->pc = 0x396b34u;
    // NOP
    ctx->pc = 0x396b38u;
}
