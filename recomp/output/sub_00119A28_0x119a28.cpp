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

// Function: sub_00119A28
// Address: 0x119a28 - 0x119ad8
void sub_00119A28_0x119a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119A28_0x119a28");
#endif

    switch (ctx->pc) {
        case 0x119a64u: goto label_119a64;
        case 0x119a84u: goto label_119a84;
        case 0x119abcu: goto label_119abc;
        default: break;
    }

    ctx->pc = 0x119a28u;

    // 0x119a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119a34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x119a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x119a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x119a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x119a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x119a44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x119a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119a4c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x119a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x119a50: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x119a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x119a54: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x119A54u;
    {
        const bool branch_taken_0x119a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A54u;
        // 0x119a58: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a54) {
            ctx->pc = 0x119ABCu;
            goto label_119abc;
        }
    }
    ctx->pc = 0x119A5Cu;
    // 0x119a5c: 0xc046e1e  jal         func_11B878
    ctx->pc = 0x119A5Cu;
    SET_GPR_U32(ctx, 31, 0x119A64u);
    ctx->pc = 0x11B878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B878u, 0x119A5Cu, 0x119A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A64u;
label_119a64:
    // 0x119a64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119A64u;
    {
        const bool branch_taken_0x119a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A64u;
        // 0x119a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a64) {
            ctx->pc = 0x119A84u;
            goto label_119a84;
        }
    }
    ctx->pc = 0x119A6Cu;
    // 0x119a6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x119a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x119a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x119a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a78: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x119a78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a7c: 0xc046b42  jal         func_11AD08
    ctx->pc = 0x119A7Cu;
    SET_GPR_U32(ctx, 31, 0x119A84u);
    ctx->pc = 0x119A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119A7Cu;
    // 0x119a80: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD08u, 0x119A7Cu, 0x119A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119A84u;
label_119a84:
    // 0x119a84: 0x8e020ff8  lw          $v0, 0xFF8($s0)
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x119a88: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x119a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x119a8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x119a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119a90: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x119a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x119a94: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x119A94u;
    {
        const bool branch_taken_0x119a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x119A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A94u;
        // 0x119a98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a94) {
            ctx->pc = 0x119AC0u;
            goto label_119ac0;
        }
    }
    ctx->pc = 0x119A9Cu;
    // 0x119a9c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x119a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x119aa0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x119aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x119aa4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x119aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x119aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119ab0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x119ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ab4: 0xc046dc6  jal         func_11B718
    ctx->pc = 0x119AB4u;
    SET_GPR_U32(ctx, 31, 0x119ABCu);
    ctx->pc = 0x119AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AB4u;
    // 0x119ab8: 0x8c460108  lw          $a2, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B718u, 0x119AB4u, 0x119ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119ABCu;
label_119abc:
    // 0x119abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119ac0:
    // 0x119ac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119ac4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x119ac4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ac8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x119ac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119acc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x119AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119AD0u;
        // 0x119ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119AD8u;
}
