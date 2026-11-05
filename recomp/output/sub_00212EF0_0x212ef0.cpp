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

// Function: sub_00212EF0
// Address: 0x212ef0 - 0x212f70
void sub_00212EF0_0x212ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212EF0_0x212ef0");
#endif

    switch (ctx->pc) {
        case 0x212f28u: goto label_212f28;
        default: break;
    }

    ctx->pc = 0x212ef0u;

    // 0x212ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212ef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x212efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x212f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f04: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x212F04u;
    {
        const bool branch_taken_0x212f04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F04u;
        // 0x212f08: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f04) {
            ctx->pc = 0x212F28u;
            goto label_212f28;
        }
    }
    ctx->pc = 0x212F0Cu;
    // 0x212f0c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x212f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x212f10: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x212f14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x212f18: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x212F18u;
    {
        const bool branch_taken_0x212f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x212f18) {
            ctx->pc = 0x212F28u;
            goto label_212f28;
        }
    }
    ctx->pc = 0x212F20u;
    // 0x212f20: 0xc0cda26  jal         func_336898
    ctx->pc = 0x212F20u;
    SET_GPR_U32(ctx, 31, 0x212F28u);
    ctx->pc = 0x212F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212F20u;
    // 0x212f24: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x212F20u, 0x212F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F28u;
label_212f28:
    // 0x212f28: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x212F28u;
    {
        const bool branch_taken_0x212f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F28u;
        // 0x212f2c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f28) {
            ctx->pc = 0x212F40u;
            goto label_212f40;
        }
    }
    ctx->pc = 0x212F30u;
    // 0x212f30: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x212f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x212f34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x212f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x212f38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x212F38u;
    {
        const bool branch_taken_0x212f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F38u;
        // 0x212f3c: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f38) {
            ctx->pc = 0x212F54u;
            goto label_212f54;
        }
    }
    ctx->pc = 0x212F40u;
label_212f40:
    // 0x212f40: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x212f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x212f44: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x212f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x212f48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x212f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x212f4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x212f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x212f50: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x212f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_212f54:
    // 0x212f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212f58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x212f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212f5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x212f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212f60: 0x3e00008  jr          $ra
    ctx->pc = 0x212F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F60u;
        // 0x212f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212F68u;
    // 0x212f68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x212f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212f6c: 0x0  nop
    ctx->pc = 0x212f6cu;
    // NOP
    ctx->pc = 0x212f70u;
}
