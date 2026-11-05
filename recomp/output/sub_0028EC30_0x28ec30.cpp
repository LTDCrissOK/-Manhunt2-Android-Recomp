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

// Function: sub_0028EC30
// Address: 0x28ec30 - 0x28ece0
void sub_0028EC30_0x28ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EC30_0x28ec30");
#endif

    switch (ctx->pc) {
        case 0x28ec78u: goto label_28ec78;
        case 0x28ec9cu: goto label_28ec9c;
        default: break;
    }

    ctx->pc = 0x28ec30u;

    // 0x28ec30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ec34: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x28ec34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x28ec38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28ec38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28ec3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ec40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ec40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28ec48: 0x24a41128  addiu       $a0, $a1, 0x1128
    ctx->pc = 0x28ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4392));
    // 0x28ec4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28ec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28ec50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28ec50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28ec54: 0x8ca31128  lw          $v1, 0x1128($a1)
    ctx->pc = 0x28ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C1128u));
    // 0x28ec58: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C112Cu));
    // 0x28ec5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ec60: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28ec60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x28ec64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28ec64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28ec68: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28EC68u;
    {
        const bool branch_taken_0x28ec68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC68u;
        // 0x28ec6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec68) {
            ctx->pc = 0x28ECC0u;
            goto label_28ecc0;
        }
    }
    ctx->pc = 0x28EC70u;
    // 0x28ec70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28ec70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28ec74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ec78:
    // 0x28ec78: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x28ec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x28ec7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28ec7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28ec80: 0x8e231128  lw          $v1, 0x1128($s1)
    ctx->pc = 0x28ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4392)));
    // 0x28ec84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ec88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ec88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ec90: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x28ec90u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x28ec94: 0xc0a3802  jal         func_28E008
    ctx->pc = 0x28EC94u;
    SET_GPR_U32(ctx, 31, 0x28EC9Cu);
    ctx->pc = 0x28EC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EC94u;
    // 0x28ec98: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E008u, 0x28EC94u, 0x28EC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EC9Cu;
label_28ec9c:
    // 0x28ec9c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28eca0: 0x8e231128  lw          $v1, 0x1128($s1)
    ctx->pc = 0x28eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4392)));
    // 0x28eca4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28eca8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28eca8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x28ecac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28ecacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28ecb0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x28ecb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28ecb4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x28ecb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ecb8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28ECB8u;
    {
        const bool branch_taken_0x28ecb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ecb8) {
            ctx->pc = 0x28EC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ec78;
        }
    }
    ctx->pc = 0x28ECC0u;
label_28ecc0:
    // 0x28ecc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ecc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ecc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ecc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ecc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28ecc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eccc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28ecccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28ecd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28ecd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ecd4: 0x3e00008  jr          $ra
    ctx->pc = 0x28ECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECD4u;
        // 0x28ecd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ECD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ECDCu;
    // 0x28ecdc: 0x0  nop
    ctx->pc = 0x28ecdcu;
    // NOP
    ctx->pc = 0x28ece0u;
}
