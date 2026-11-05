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

// Function: sub_003A58B0
// Address: 0x3a58b0 - 0x3a5910
void sub_003A58B0_0x3a58b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A58B0_0x3a58b0");
#endif

    ctx->pc = 0x3a58b0u;

    // 0x3a58b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a58b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a58b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a58b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a58b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a58b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a58bc: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x3a58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x3a58c0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3a58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3a58c4: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x3a58c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a58c8: 0x43ac0  sll         $a3, $a0, 11
    ctx->pc = 0x3a58c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x3a58cc: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3a58ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3a58d0: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x3a58d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x3a58d4: 0x43202f  dsubu       $a0, $v0, $v1
    ctx->pc = 0x3a58d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3a58d8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3a58d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a58dc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3a58dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3a58e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a58e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a58e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A58E4u;
    {
        const bool branch_taken_0x3a58e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58E4u;
        // 0x3a58e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a58e4) {
            ctx->pc = 0x3A5908u;
            goto label_3a5908;
        }
    }
    ctx->pc = 0x3A58ECu;
    // 0x3a58ec: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x3a58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3a58f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a58f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a58f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a58f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a58f8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3a58f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3a58fc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3a58fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a5900: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3A5900u;
    ctx->pc = 0x3A5904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5900u;
    // 0x3a5904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3A5908u;
label_3a5908:
    // 0x3a5908: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5908u;
        // 0x3a590c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5910u;
}
