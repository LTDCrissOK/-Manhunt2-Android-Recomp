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

// Function: sub_00135A08
// Address: 0x135a08 - 0x135a68
void sub_00135A08_0x135a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135A08_0x135a08");
#endif

    switch (ctx->pc) {
        case 0x135a48u: goto label_135a48;
        default: break;
    }

    ctx->pc = 0x135a08u;

    // 0x135a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135a10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x135a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x135a14: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x135a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x135a18: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x135a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x135a1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x135A1Cu;
    {
        const bool branch_taken_0x135a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A1Cu;
        // 0x135a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a1c) {
            ctx->pc = 0x135A58u;
            goto label_135a58;
        }
    }
    ctx->pc = 0x135A24u;
    // 0x135a24: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x135a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x135a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135a2c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x135a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x135a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135a34: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x135a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x135a38: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x135A38u;
    {
        const bool branch_taken_0x135a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a38) {
            ctx->pc = 0x135A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135A38u;
            // 0x135a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135A58u;
            goto label_135a58;
        }
    }
    ctx->pc = 0x135A40u;
    // 0x135a40: 0xc0619f6  jal         func_1867D8
    ctx->pc = 0x135A40u;
    SET_GPR_U32(ctx, 31, 0x135A48u);
    ctx->pc = 0x135A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A40u;
    // 0x135a44: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1867D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1867D8u, 0x135A40u, 0x135A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A48u;
label_135a48:
    // 0x135a48: 0x8e040ff4  lw          $a0, 0xFF4($s0)
    ctx->pc = 0x135a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    // 0x135a4c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x135a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x135a50: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x135a50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x135a54: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x135a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_135a58:
    // 0x135a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135a5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x135a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135a60: 0x3e00008  jr          $ra
    ctx->pc = 0x135A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A60u;
        // 0x135a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135A68u;
}
