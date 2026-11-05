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

// Function: sub_00373A88
// Address: 0x373a88 - 0x373b00
void sub_00373A88_0x373a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373A88_0x373a88");
#endif

    switch (ctx->pc) {
        case 0x373abcu: goto label_373abc;
        default: break;
    }

    ctx->pc = 0x373a88u;

    // 0x373a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x373a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x373a90: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x373a90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x373a94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x373a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x373a98: 0x2604f910  addiu       $a0, $s0, -0x6F0
    ctx->pc = 0x373a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x373a9c: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x373a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF910u));
    // 0x373aa0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x373aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF914u));
    // 0x373aa4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x373aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x373aa8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x373aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x373aac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373AACu;
    {
        const bool branch_taken_0x373aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373AACu;
        // 0x373ab0: 0x8e02f910  lw          $v0, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373aac) {
            ctx->pc = 0x373AC0u;
            goto label_373ac0;
        }
    }
    ctx->pc = 0x373AB4u;
    // 0x373ab4: 0xc0dc442  jal         func_371108
    ctx->pc = 0x373AB4u;
    SET_GPR_U32(ctx, 31, 0x373ABCu);
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x373AB4u, 0x373ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373ABCu;
label_373abc:
    // 0x373abc: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x373abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_373ac0:
    // 0x373ac0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x373ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x373ac4: 0x34049800  ori         $a0, $zero, 0x9800
    ctx->pc = 0x373ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x373ac8: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x373ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x373acc: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x373accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x373ad0: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x373ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x373ad4: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x373ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x373ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x373ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373adc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x373adcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x373ae0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x373ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x373ae4: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x373ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x373ae8: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x373ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x373aec: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x373aecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x373af0: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x373af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x373af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x373af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373af8: 0x3e00008  jr          $ra
    ctx->pc = 0x373AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373AF8u;
        // 0x373afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373B00u;
}
