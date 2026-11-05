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

// Function: sub_00212F70
// Address: 0x212f70 - 0x212fe8
void sub_00212F70_0x212f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212F70_0x212f70");
#endif

    switch (ctx->pc) {
        case 0x212fa8u: goto label_212fa8;
        default: break;
    }

    ctx->pc = 0x212f70u;

    // 0x212f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212f78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x212f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f84: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x212F84u;
    {
        const bool branch_taken_0x212f84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F84u;
        // 0x212f88: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f84) {
            ctx->pc = 0x212FA8u;
            goto label_212fa8;
        }
    }
    ctx->pc = 0x212F8Cu;
    // 0x212f8c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x212f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x212f90: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x212f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x212f94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x212f98: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x212F98u;
    {
        const bool branch_taken_0x212f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x212f98) {
            ctx->pc = 0x212FA8u;
            goto label_212fa8;
        }
    }
    ctx->pc = 0x212FA0u;
    // 0x212fa0: 0xc0cda26  jal         func_336898
    ctx->pc = 0x212FA0u;
    SET_GPR_U32(ctx, 31, 0x212FA8u);
    ctx->pc = 0x212FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212FA0u;
    // 0x212fa4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x212FA0u, 0x212FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212FA8u;
label_212fa8:
    // 0x212fa8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x212FA8u;
    {
        const bool branch_taken_0x212fa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FA8u;
        // 0x212fac: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fa8) {
            ctx->pc = 0x212FC0u;
            goto label_212fc0;
        }
    }
    ctx->pc = 0x212FB0u;
    // 0x212fb0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x212fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x212fb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x212fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x212fb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x212FB8u;
    {
        const bool branch_taken_0x212fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FB8u;
        // 0x212fbc: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212fb8) {
            ctx->pc = 0x212FD4u;
            goto label_212fd4;
        }
    }
    ctx->pc = 0x212FC0u;
label_212fc0:
    // 0x212fc0: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x212fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x212fc4: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x212fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x212fc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x212fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x212fcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x212fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x212fd0: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x212fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_212fd4:
    // 0x212fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x212FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212FE0u;
        // 0x212fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212FE8u;
}
