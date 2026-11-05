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

// Function: sub_00257AE8
// Address: 0x257ae8 - 0x257ba0
void sub_00257AE8_0x257ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257AE8_0x257ae8");
#endif

    switch (ctx->pc) {
        case 0x257b28u: goto label_257b28;
        case 0x257b40u: goto label_257b40;
        case 0x257b50u: goto label_257b50;
        case 0x257b80u: goto label_257b80;
        default: break;
    }

    ctx->pc = 0x257ae8u;

    // 0x257ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x257aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x257aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x257af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x257af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257af4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257af8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x257af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x257afc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x257afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x257b00: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x257B00u;
    {
        const bool branch_taken_0x257b00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B00u;
        // 0x257b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b00) {
            ctx->pc = 0x257B88u;
            goto label_257b88;
        }
    }
    ctx->pc = 0x257B08u;
    // 0x257b08: 0x8e221060  lw          $v0, 0x1060($s1)
    ctx->pc = 0x257b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4192)));
    // 0x257b0c: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x257b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x257b10: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x257B10u;
    {
        const bool branch_taken_0x257b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B10u;
        // 0x257b14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b10) {
            ctx->pc = 0x257B84u;
            goto label_257b84;
        }
    }
    ctx->pc = 0x257B18u;
    // 0x257b18: 0x8e220fe4  lw          $v0, 0xFE4($s1)
    ctx->pc = 0x257b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
    // 0x257b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b20: 0xc09532e  jal         func_254CB8
    ctx->pc = 0x257B20u;
    SET_GPR_U32(ctx, 31, 0x257B28u);
    ctx->pc = 0x257B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B20u;
    // 0x257b24: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254CB8u, 0x257B20u, 0x257B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B28u;
label_257b28:
    // 0x257b28: 0x5202000d  beql        $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x257B28u;
    {
        const bool branch_taken_0x257b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x257b28) {
            ctx->pc = 0x257B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257B28u;
            // 0x257b2c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257B60u;
            goto label_257b60;
        }
    }
    ctx->pc = 0x257B30u;
    // 0x257b30: 0x8e220fe4  lw          $v0, 0xFE4($s1)
    ctx->pc = 0x257b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4068)));
    // 0x257b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x257b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257b38: 0xc09531c  jal         func_254C70
    ctx->pc = 0x257B38u;
    SET_GPR_U32(ctx, 31, 0x257B40u);
    ctx->pc = 0x257B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B38u;
    // 0x257b3c: 0x8c500004  lw          $s0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C70u, 0x257B38u, 0x257B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B40u;
label_257b40:
    // 0x257b40: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x257B40u;
    {
        const bool branch_taken_0x257b40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x257B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B40u;
        // 0x257b44: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b40) {
            ctx->pc = 0x257B88u;
            goto label_257b88;
        }
    }
    ctx->pc = 0x257B48u;
    // 0x257b48: 0xc09531c  jal         func_254C70
    ctx->pc = 0x257B48u;
    SET_GPR_U32(ctx, 31, 0x257B50u);
    ctx->pc = 0x257B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B48u;
    // 0x257b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C70u, 0x257B48u, 0x257B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B50u;
label_257b50:
    // 0x257b50: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x257b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x257b54: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x257B54u;
    {
        const bool branch_taken_0x257b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B54u;
        // 0x257b58: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b54) {
            ctx->pc = 0x257B88u;
            goto label_257b88;
        }
    }
    ctx->pc = 0x257B5Cu;
    // 0x257b5c: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x257b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_257b60:
    // 0x257b60: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x257b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x257b64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x257B64u;
    {
        const bool branch_taken_0x257b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B64u;
        // 0x257b68: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b64) {
            ctx->pc = 0x257B88u;
            goto label_257b88;
        }
    }
    ctx->pc = 0x257B6Cu;
    // 0x257b6c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x257b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x257b70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257B70u;
    {
        const bool branch_taken_0x257b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B70u;
        // 0x257b74: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b70) {
            ctx->pc = 0x257B88u;
            goto label_257b88;
        }
    }
    ctx->pc = 0x257B78u;
    // 0x257b78: 0xc0963a0  jal         func_258E80
    ctx->pc = 0x257B78u;
    SET_GPR_U32(ctx, 31, 0x257B80u);
    ctx->pc = 0x257B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257B78u;
    // 0x257b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E80u, 0x257B78u, 0x257B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257B80u;
label_257b80:
    // 0x257b80: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x257b80u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_257b84:
    // 0x257b84: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x257b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_257b88:
    // 0x257b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x257b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257b90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x257b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257b94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x257b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x257b98: 0x3e00008  jr          $ra
    ctx->pc = 0x257B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B98u;
        // 0x257b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257BA0u;
}
