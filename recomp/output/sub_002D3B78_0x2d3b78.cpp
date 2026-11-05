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

// Function: sub_002D3B78
// Address: 0x2d3b78 - 0x2d3c60
void sub_002D3B78_0x2d3b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3B78_0x2d3b78");
#endif

    switch (ctx->pc) {
        case 0x2d3be4u: goto label_2d3be4;
        case 0x2d3c00u: goto label_2d3c00;
        case 0x2d3c08u: goto label_2d3c08;
        case 0x2d3c30u: goto label_2d3c30;
        default: break;
    }

    ctx->pc = 0x2d3b78u;

    // 0x2d3b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d3b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d3b7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d3b80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d3b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d3b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d3b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d3b8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d3b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3b90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3b94: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x2d3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2d3b98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d3b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d3b9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d3b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3ba0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2d3ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2d3ba4: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x2d3ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2d3ba8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D3BA8u;
    {
        const bool branch_taken_0x2d3ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BA8u;
        // 0x2d3bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3ba8) {
            ctx->pc = 0x2D3BE8u;
            goto label_2d3be8;
        }
    }
    ctx->pc = 0x2D3BB0u;
    // 0x2d3bb0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2d3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d3bb4: 0x2441818  mult        $v1, $s2, $a0
    ctx->pc = 0x2d3bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d3bb8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2d3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d3bbc: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x2d3bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2d3bc0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3BC0u;
    {
        const bool branch_taken_0x2d3bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3bc0) {
            ctx->pc = 0x2D3BE8u;
            goto label_2d3be8;
        }
    }
    ctx->pc = 0x2D3BC8u;
    // 0x2d3bc8: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2d3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2d3bcc: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3BCCu;
    {
        const bool branch_taken_0x2d3bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2d3bcc) {
            ctx->pc = 0x2D3BE8u;
            goto label_2d3be8;
        }
    }
    ctx->pc = 0x2D3BD4u;
    // 0x2d3bd4: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x2d3bd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d3bd8: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2d3bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2d3bdc: 0xc0b4d2c  jal         func_2D34B0
    ctx->pc = 0x2D3BDCu;
    SET_GPR_U32(ctx, 31, 0x2D3BE4u);
    ctx->pc = 0x2D3BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3BDCu;
    // 0x2d3be0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D34B0u, 0x2D3BDCu, 0x2D3BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BE4u;
label_2d3be4:
    // 0x2d3be4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d3be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3be8:
    // 0x2d3be8: 0x14a00015  bnez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D3BE8u;
    {
        const bool branch_taken_0x2d3be8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BE8u;
        // 0x2d3bec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3be8) {
            ctx->pc = 0x2D3C40u;
            goto label_2d3c40;
        }
    }
    ctx->pc = 0x2D3BF0u;
    // 0x2d3bf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d3bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bf4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D3BF4u;
    {
        const bool branch_taken_0x2d3bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BF4u;
        // 0x2d3bf8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3bf4) {
            ctx->pc = 0x2D3C28u;
            goto label_2d3c28;
        }
    }
    ctx->pc = 0x2D3BFCu;
    // 0x2d3bfc: 0x0  nop
    ctx->pc = 0x2d3bfcu;
    // NOP
label_2d3c00:
    // 0x2d3c00: 0xc0fb66e  jal         func_3ED9B8
    ctx->pc = 0x2D3C00u;
    SET_GPR_U32(ctx, 31, 0x2D3C08u);
    ctx->pc = 0x2D3C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C00u;
    // 0x2d3c04: 0x3205ffff  andi        $a1, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED9B8u, 0x2D3C00u, 0x2D3C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C08u;
label_2d3c08:
    // 0x2d3c08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d3c08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c0c: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x2d3c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2d3c10: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3C10u;
    {
        const bool branch_taken_0x2d3c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d3c10) {
            ctx->pc = 0x2D3C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3C10u;
            // 0x2d3c14: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3C28u;
            goto label_2d3c28;
        }
    }
    ctx->pc = 0x2D3C18u;
    // 0x2d3c18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d3c1c: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D3C1Cu;
    {
        const bool branch_taken_0x2d3c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2d3c1c) {
            ctx->pc = 0x2D3C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3C1Cu;
            // 0x2d3c20: 0xa074001d  sb          $s4, 0x1D($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3C24u;
            goto label_2d3c24;
        }
    }
    ctx->pc = 0x2D3C24u;
label_2d3c24:
    // 0x2d3c24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d3c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d3c28:
    // 0x2d3c28: 0xc0fb66c  jal         func_3ED9B0
    ctx->pc = 0x2D3C28u;
    SET_GPR_U32(ctx, 31, 0x2D3C30u);
    ctx->pc = 0x2D3C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C28u;
    // 0x2d3c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED9B0u, 0x2D3C28u, 0x2D3C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C30u;
label_2d3c30:
    // 0x2d3c30: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d3c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d3c34: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D3C34u;
    {
        const bool branch_taken_0x2d3c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3c34) {
            ctx->pc = 0x2D3C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3C34u;
            // 0x2d3c38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3c00;
        }
    }
    ctx->pc = 0x2D3C3Cu;
    // 0x2d3c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3c40:
    // 0x2d3c40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3c44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d3c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3c48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d3c48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d3c4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3c50: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2d3c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d3c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C54u;
        // 0x2d3c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3C5Cu;
    // 0x2d3c5c: 0x0  nop
    ctx->pc = 0x2d3c5cu;
    // NOP
    ctx->pc = 0x2d3c60u;
}
