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

// Function: sub_0037CF20
// Address: 0x37cf20 - 0x37cfe0
void sub_0037CF20_0x37cf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CF20_0x37cf20");
#endif

    switch (ctx->pc) {
        case 0x37cf64u: goto label_37cf64;
        default: break;
    }

    ctx->pc = 0x37cf20u;

    // 0x37cf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37cf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37cf24: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x37cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x37cf28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37cf2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37cf30: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x37cf30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x37cf34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x37cf38: 0x2607f910  addiu       $a3, $s0, -0x6F0
    ctx->pc = 0x37cf38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x37cf3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x37cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x37cf40: 0x829025  or          $s2, $a0, $v0
    ctx->pc = 0x37cf40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37cf44: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x37cf44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF910u));
    // 0x37cf48: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x37cf48u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5BF914u));
    // 0x37cf4c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x37cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x37cf50: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x37cf50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x37cf54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37CF54u;
    {
        const bool branch_taken_0x37cf54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF54u;
        // 0x37cf58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf54) {
            ctx->pc = 0x37CF64u;
            goto label_37cf64;
        }
    }
    ctx->pc = 0x37CF5Cu;
    // 0x37cf5c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37CF5Cu;
    SET_GPR_U32(ctx, 31, 0x37CF64u);
    ctx->pc = 0x37CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF5Cu;
    // 0x37cf60: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37CF5Cu, 0x37CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF64u;
label_37cf64:
    // 0x37cf64: 0x8e04f910  lw          $a0, -0x6F0($s0)
    ctx->pc = 0x37cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x37cf68: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x37cf68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x37cf6c: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x37cf6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x37cf70: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x37cf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x37cf74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x37cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x37cf78: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x37cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x37cf7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37cf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37cf80: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x37cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x37cf84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37cf84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37cf88: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x37cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
    // 0x37cf8c: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x37cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x37cf90: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x37cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x37cf94: 0x24860018  addiu       $a2, $a0, 0x18
    ctx->pc = 0x37cf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x37cf98: 0xae05f910  sw          $a1, -0x6F0($s0)
    ctx->pc = 0x37cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 5));
    // 0x37cf9c: 0x24870028  addiu       $a3, $a0, 0x28
    ctx->pc = 0x37cf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x37cfa0: 0x24850038  addiu       $a1, $a0, 0x38
    ctx->pc = 0x37cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x37cfa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x37cfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37cfa8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x37cfa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37cfac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37cfb0: 0x7c830008  sq          $v1, 0x8($a0)
    ctx->pc = 0x37cfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 8), GPR_VEC(ctx, 3));
    // 0x37cfb4: 0xae06f910  sw          $a2, -0x6F0($s0)
    ctx->pc = 0x37cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 6));
    // 0x37cfb8: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x37cfb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37cfbc: 0x7c830018  sq          $v1, 0x18($a0)
    ctx->pc = 0x37cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 24), GPR_VEC(ctx, 3));
    // 0x37cfc0: 0xae07f910  sw          $a3, -0x6F0($s0)
    ctx->pc = 0x37cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 7));
    // 0x37cfc4: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x37cfc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x37cfc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37cfc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37cfcc: 0x7c830028  sq          $v1, 0x28($a0)
    ctx->pc = 0x37cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 40), GPR_VEC(ctx, 3));
    // 0x37cfd0: 0xae05f910  sw          $a1, -0x6F0($s0)
    ctx->pc = 0x37cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 5));
    // 0x37cfd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37cfd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x37CFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFD8u;
        // 0x37cfdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CFE0u;
}
