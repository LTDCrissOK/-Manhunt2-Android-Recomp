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

// Function: sub_003DDA68
// Address: 0x3dda68 - 0x3ddb70
void sub_003DDA68_0x3dda68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDA68_0x3dda68");
#endif

    switch (ctx->pc) {
        case 0x3dda80u: goto label_3dda80;
        default: break;
    }

    ctx->pc = 0x3dda68u;

    // 0x3dda68: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x3dda68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3dda6c: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x3dda6cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3dda70: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x3DDA70u;
    {
        const bool branch_taken_0x3dda70 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3DDA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA70u;
        // 0x3dda74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dda70) {
            ctx->pc = 0x3DDACCu;
            goto label_3ddacc;
        }
    }
    ctx->pc = 0x3DDA78u;
    // 0x3dda78: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3dda78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3dda7c: 0x0  nop
    ctx->pc = 0x3dda7cu;
    // NOP
label_3dda80:
    // 0x3dda80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dda80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dda84: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x3DDA84u;
    {
        const bool branch_taken_0x3dda84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dda84) {
            ctx->pc = 0x3DDB28u;
            goto label_3ddb28;
        }
    }
    ctx->pc = 0x3DDA8Cu;
    // 0x3dda8c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3dda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3dda90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dda94: 0x10430024  beq         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3DDA94u;
    {
        const bool branch_taken_0x3dda94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dda94) {
            ctx->pc = 0x3DDB28u;
            goto label_3ddb28;
        }
    }
    ctx->pc = 0x3DDA9Cu;
    // 0x3dda9c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3dda9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3ddaa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ddaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddaa4: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3DDAA4u;
    {
        const bool branch_taken_0x3ddaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ddaa4) {
            ctx->pc = 0x3DDB28u;
            goto label_3ddb28;
        }
    }
    ctx->pc = 0x3DDAACu;
    // 0x3ddaac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3ddaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3ddab0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ddab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddab4: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3DDAB4u;
    {
        const bool branch_taken_0x3ddab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DDAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAB4u;
        // 0x3ddab8: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddab4) {
            ctx->pc = 0x3DDB28u;
            goto label_3ddb28;
        }
    }
    ctx->pc = 0x3DDABCu;
    // 0x3ddabc: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3DDABCu;
    {
        const bool branch_taken_0x3ddabc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x3DDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDABCu;
        // 0x3ddac0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddabc) {
            ctx->pc = 0x3DDA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dda80;
        }
    }
    ctx->pc = 0x3DDAC4u;
    // 0x3ddac4: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x3ddac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3ddac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ddac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ddacc:
    // 0x3ddacc: 0x23883  sra         $a3, $v0, 2
    ctx->pc = 0x3ddaccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3ddad0: 0x10e30011  beq         $a3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DDAD0u;
    {
        const bool branch_taken_0x3ddad0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAD0u;
        // 0x3ddad4: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddad0) {
            ctx->pc = 0x3DDB18u;
            goto label_3ddb18;
        }
    }
    ctx->pc = 0x3DDAD8u;
    // 0x3ddad8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3DDAD8u;
    {
        const bool branch_taken_0x3ddad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAD8u;
        // 0x3ddadc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddad8) {
            ctx->pc = 0x3DDB30u;
            goto label_3ddb30;
        }
    }
    ctx->pc = 0x3DDAE0u;
    // 0x3ddae0: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DDAE0u;
    {
        const bool branch_taken_0x3ddae0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAE0u;
        // 0x3ddae4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddae0) {
            ctx->pc = 0x3DDB04u;
            goto label_3ddb04;
        }
    }
    ctx->pc = 0x3DDAE8u;
    // 0x3ddae8: 0x14e20011  bne         $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3DDAE8u;
    {
        const bool branch_taken_0x3ddae8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ddae8) {
            ctx->pc = 0x3DDB30u;
            goto label_3ddb30;
        }
    }
    ctx->pc = 0x3DDAF0u;
    // 0x3ddaf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ddaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddaf4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3ddaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ddaf8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3DDAF8u;
    {
        const bool branch_taken_0x3ddaf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ddaf8) {
            ctx->pc = 0x3DDB28u;
            goto label_3ddb28;
        }
    }
    ctx->pc = 0x3DDB00u;
    // 0x3ddb00: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3ddb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3ddb04:
    // 0x3ddb04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ddb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddb08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3ddb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ddb0c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DDB0Cu;
    {
        const bool branch_taken_0x3ddb0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ddb0c) {
            ctx->pc = 0x3DDB28u;
            goto label_3ddb28;
        }
    }
    ctx->pc = 0x3DDB14u;
    // 0x3ddb14: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3ddb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3ddb18:
    // 0x3ddb18: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3ddb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ddb1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ddb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddb20: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDB20u;
    {
        const bool branch_taken_0x3ddb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ddb20) {
            ctx->pc = 0x3DDB30u;
            goto label_3ddb30;
        }
    }
    ctx->pc = 0x3DDB28u;
label_3ddb28:
    // 0x3ddb28: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB28u;
        // 0x3ddb2c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDB30u;
label_3ddb30:
    // 0x3ddb30: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB30u;
        // 0x3ddb34: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDB38u;
    // 0x3ddb38: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddb38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddb3c: 0x0  nop
    ctx->pc = 0x3ddb3cu;
    // NOP
    // 0x3ddb40: 0xac8200c0  sw          $v0, 0xC0($a0)
    ctx->pc = 0x3ddb40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 2));
    // 0x3ddb44: 0x0  nop
    ctx->pc = 0x3ddb44u;
    // NOP
    // 0x3ddb48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddb4c: 0x0  nop
    ctx->pc = 0x3ddb4cu;
    // NOP
    // 0x3ddb50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3ddb50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3ddb54: 0x0  nop
    ctx->pc = 0x3ddb54u;
    // NOP
    // 0x3ddb58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ddb58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ddb5c: 0x0  nop
    ctx->pc = 0x3ddb5cu;
    // NOP
    // 0x3ddb60: 0x84620054  lh          $v0, 0x54($v1)
    ctx->pc = 0x3ddb60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x3ddb64: 0x0  nop
    ctx->pc = 0x3ddb64u;
    // NOP
    // 0x3ddb68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddb68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddb6c: 0x0  nop
    ctx->pc = 0x3ddb6cu;
    // NOP
    ctx->pc = 0x3ddb70u;
}
