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

// Function: sub_003B0318
// Address: 0x3b0318 - 0x3b0380
void sub_003B0318_0x3b0318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0318_0x3b0318");
#endif

    ctx->pc = 0x3b0318u;

    // 0x3b0318: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x3b0318u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3b031c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3b031cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0320: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B0320u;
    {
        const bool branch_taken_0x3b0320 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0320u;
        // 0x3b0324: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0320) {
            ctx->pc = 0x3B036Cu;
            goto label_3b036c;
        }
    }
    ctx->pc = 0x3B0328u;
    // 0x3b0328: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x3b0328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b032c: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x3b032cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3b0330: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x3b0330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b0334: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3b0334u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3b0338: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b0338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b033c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x3b033cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3b0340: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B0340u;
    {
        const bool branch_taken_0x3b0340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3B0344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0340u;
        // 0x3b0344: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0340) {
            ctx->pc = 0x3B036Cu;
            goto label_3b036c;
        }
    }
    ctx->pc = 0x3B0348u;
    // 0x3b0348: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x3b0348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3b034c: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x3b034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b0350: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x3b0350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x3b0354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0358: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b0358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b035c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3b035cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3b0360: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b0360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b0364: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b0364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3b0368: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x3b0368u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_3b036c:
    // 0x3b036c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B036Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B036Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0374u;
    // 0x3b0374: 0x0  nop
    ctx->pc = 0x3b0374u;
    // NOP
    // 0x3b0378: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3b0378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3b037c: 0x0  nop
    ctx->pc = 0x3b037cu;
    // NOP
    ctx->pc = 0x3b0380u;
}
