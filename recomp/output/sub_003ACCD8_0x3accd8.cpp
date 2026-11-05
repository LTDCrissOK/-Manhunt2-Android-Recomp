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

// Function: sub_003ACCD8
// Address: 0x3accd8 - 0x3acd70
void sub_003ACCD8_0x3accd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACCD8_0x3accd8");
#endif

    ctx->pc = 0x3accd8u;

    // 0x3accd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3accd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3accdc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3accdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acce0: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x3acce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3acce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3acce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3acce8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ACCE8u;
    {
        const bool branch_taken_0x3acce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCE8u;
        // 0x3accec: 0x2cc30008  sltiu       $v1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acce8) {
            ctx->pc = 0x3ACD08u;
            goto label_3acd08;
        }
    }
    ctx->pc = 0x3ACCF0u;
    // 0x3accf0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3accf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3accf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3accf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3accf8: 0x2484f3e8  addiu       $a0, $a0, -0xC18
    ctx->pc = 0x3accf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964200));
    // 0x3accfc: 0x80eb2bc  j           func_3ACAF0
    ctx->pc = 0x3ACCFCu;
    ctx->pc = 0x3ACD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACCFCu;
    // 0x3acd00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACAF0u;
    sub_003ACAF0_0x3acaf0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ACD04u;
    // 0x3acd04: 0x0  nop
    ctx->pc = 0x3acd04u;
    // NOP
label_3acd08:
    // 0x3acd08: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ACD08u;
    {
        const bool branch_taken_0x3acd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD08u;
        // 0x3acd0c: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acd08) {
            ctx->pc = 0x3ACD28u;
            goto label_3acd28;
        }
    }
    ctx->pc = 0x3ACD10u;
    // 0x3acd10: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3acd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3acd14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3acd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acd18: 0x2484f408  addiu       $a0, $a0, -0xBF8
    ctx->pc = 0x3acd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964232));
    // 0x3acd1c: 0x80eb2bc  j           func_3ACAF0
    ctx->pc = 0x3ACD1Cu;
    ctx->pc = 0x3ACD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD1Cu;
    // 0x3acd20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACAF0u;
    sub_003ACAF0_0x3acaf0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ACD24u;
    // 0x3acd24: 0x0  nop
    ctx->pc = 0x3acd24u;
    // NOP
label_3acd28:
    // 0x3acd28: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x3acd28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3acd2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3acd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3acd30: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3acd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3acd34: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3acd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3acd38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3acd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3acd3c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3acd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3acd40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3acd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3acd44: 0x24428f20  addiu       $v0, $v0, -0x70E0
    ctx->pc = 0x3acd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x3acd48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3acd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acd4c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3acd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3acd50: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3acd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3acd54: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3acd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acd58: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3acd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3acd5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3acd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3acd60: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3acd60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3acd64: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD64u;
        // 0x3acd68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACD6Cu;
    // 0x3acd6c: 0x0  nop
    ctx->pc = 0x3acd6cu;
    // NOP
    ctx->pc = 0x3acd70u;
}
