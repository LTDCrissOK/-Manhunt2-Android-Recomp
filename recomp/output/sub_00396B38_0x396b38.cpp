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

// Function: sub_00396B38
// Address: 0x396b38 - 0x396c28
void sub_00396B38_0x396b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396B38_0x396b38");
#endif

    switch (ctx->pc) {
        case 0x396b98u: goto label_396b98;
        case 0x396bc0u: goto label_396bc0;
        case 0x396be8u: goto label_396be8;
        default: break;
    }

    ctx->pc = 0x396b38u;

    // 0x396b38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396b3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x396b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x396b40: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x396b40u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x396b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x396b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396b48: 0x26a219a8  addiu       $v0, $s5, 0x19A8
    ctx->pc = 0x396b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 6568));
    // 0x396b4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x396b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x396b50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x396b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x396b54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x396b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x396b58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x396b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x396b5c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x396b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x396b60: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x396b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x396b64: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x396b64u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4019A8u));
    // 0x396b68: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x396B68u;
    {
        const bool branch_taken_0x396b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x396B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396B68u;
        // 0x396b6c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396b68) {
            ctx->pc = 0x396BF4u;
            goto label_396bf4;
        }
    }
    ctx->pc = 0x396B70u;
    // 0x396b70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x396b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x396b74: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x396b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x396b78: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x396b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x396b7c: 0x3c121200  lui         $s2, 0x1200
    ctx->pc = 0x396b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4608 << 16));
    // 0x396b80: 0x24541938  addiu       $s4, $v0, 0x1938
    ctx->pc = 0x396b80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6456));
    // 0x396b84: 0x24731910  addiu       $s3, $v1, 0x1910
    ctx->pc = 0x396b84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 6416));
    // 0x396b88: 0x249119e4  addiu       $s1, $a0, 0x19E4
    ctx->pc = 0x396b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 6628));
    // 0x396b8c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x396b8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396b90: 0x365200e0  ori         $s2, $s2, 0xE0
    ctx->pc = 0x396b90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)224);
    // 0x396b94: 0x0  nop
    ctx->pc = 0x396b94u;
    // NOP
label_396b98:
    // 0x396b98: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x396b98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x396b9c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x396b9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x396ba0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x396ba0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x396ba4: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x396ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x396ba8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x396BA8u;
    {
        const bool branch_taken_0x396ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BA8u;
        // 0x396bac: 0xae760000  sw          $s6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ba8) {
            ctx->pc = 0x396BB8u;
            goto label_396bb8;
        }
    }
    ctx->pc = 0x396BB0u;
    // 0x396bb0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x396bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x396bb4: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x396bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_396bb8:
    // 0x396bb8: 0xc0eb438  jal         func_3AD0E0
    ctx->pc = 0x396BB8u;
    SET_GPR_U32(ctx, 31, 0x396BC0u);
    ctx->pc = 0x3AD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0E0u, 0x396BB8u, 0x396BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396BC0u;
label_396bc0:
    // 0x396bc0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x396bc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x396bc4: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x396BC4u;
    {
        const bool branch_taken_0x396bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x396bc4) {
            ctx->pc = 0x396BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396BC4u;
            // 0x396bc8: 0xfe400000  sd          $zero, 0x0($s2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396BCCu;
            goto label_396bcc;
        }
    }
    ctx->pc = 0x396BCCu;
label_396bcc:
    // 0x396bcc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x396bccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x396bd0: 0x26b019a8  addiu       $s0, $s5, 0x19A8
    ctx->pc = 0x396bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 6568));
    // 0x396bd4: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x396bd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396bd8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x396BD8u;
    {
        const bool branch_taken_0x396bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396bd8) {
            ctx->pc = 0x396BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396BD8u;
            // 0x396bdc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396BF4u;
            goto label_396bf4;
        }
    }
    ctx->pc = 0x396BE0u;
    // 0x396be0: 0xc0e5b82  jal         func_396E08
    ctx->pc = 0x396BE0u;
    SET_GPR_U32(ctx, 31, 0x396BE8u);
    ctx->pc = 0x396E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E08u, 0x396BE0u, 0x396BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396BE8u;
label_396be8:
    // 0x396be8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x396be8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396bec: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x396BECu;
    {
        const bool branch_taken_0x396bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396BECu;
        // 0x396bf0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396bec) {
            ctx->pc = 0x396B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396b98;
        }
    }
    ctx->pc = 0x396BF4u;
label_396bf4:
    // 0x396bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x396bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396bfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x396bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x396c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396c04: 0x244219b0  addiu       $v0, $v0, 0x19B0
    ctx->pc = 0x396c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6576));
    // 0x396c08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x396c08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x396c0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x396c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396c10: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x396c10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x396c14: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x396c14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396c18: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x396c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x396c1c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x396c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x396c20: 0x80f25f8  j           func_3C97E0
    ctx->pc = 0x396C20u;
    ctx->pc = 0x396C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396C20u;
    // 0x396c24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C97E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C97E0u, 0x396C20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x396C28u;
}
