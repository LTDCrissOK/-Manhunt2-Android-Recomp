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

// Function: sub_00171CD0
// Address: 0x171cd0 - 0x171d68
void sub_00171CD0_0x171cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171CD0_0x171cd0");
#endif

    switch (ctx->pc) {
        case 0x171d0cu: goto label_171d0c;
        default: break;
    }

    ctx->pc = 0x171cd0u;

    // 0x171cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171cd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x171cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x171cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171cdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171ce0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x171ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ce4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171ce8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171cec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x171cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x171cf0: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171CF0u;
    {
        const bool branch_taken_0x171cf0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x171CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CF0u;
        // 0x171cf4: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cf0) {
            ctx->pc = 0x171D00u;
            goto label_171d00;
        }
    }
    ctx->pc = 0x171CF8u;
    // 0x171cf8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x171CF8u;
    {
        const bool branch_taken_0x171cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CF8u;
        // 0x171cfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cf8) {
            ctx->pc = 0x171D50u;
            goto label_171d50;
        }
    }
    ctx->pc = 0x171D00u;
label_171d00:
    // 0x171d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d04: 0xc05cdd0  jal         func_173740
    ctx->pc = 0x171D04u;
    SET_GPR_U32(ctx, 31, 0x171D0Cu);
    ctx->pc = 0x171D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171D04u;
    // 0x171d08: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173740u, 0x171D04u, 0x171D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171D0Cu;
label_171d0c:
    // 0x171d0c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x171D0Cu;
    {
        const bool branch_taken_0x171d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D0Cu;
        // 0x171d10: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d0c) {
            ctx->pc = 0x171D28u;
            goto label_171d28;
        }
    }
    ctx->pc = 0x171D14u;
    // 0x171d14: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x171d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x171d18: 0x28440003  slti        $a0, $v0, 0x3
    ctx->pc = 0x171d18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x171d1c: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x171d1cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x171d20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x171D20u;
    {
        const bool branch_taken_0x171d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D20u;
        // 0x171d24: 0xa2230260  sb          $v1, 0x260($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 608), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d20) {
            ctx->pc = 0x171D4Cu;
            goto label_171d4c;
        }
    }
    ctx->pc = 0x171D28u;
label_171d28:
    // 0x171d28: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x171D28u;
    {
        const bool branch_taken_0x171d28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D28u;
        // 0x171d2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d28) {
            ctx->pc = 0x171D44u;
            goto label_171d44;
        }
    }
    ctx->pc = 0x171D30u;
    // 0x171d30: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x171d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x171d34: 0x202202a  slt         $a0, $s0, $v0
    ctx->pc = 0x171d34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171d38: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x171d38u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x171d3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x171D3Cu;
    {
        const bool branch_taken_0x171d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D3Cu;
        // 0x171d40: 0xa2230260  sb          $v1, 0x260($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 608), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d3c) {
            ctx->pc = 0x171D4Cu;
            goto label_171d4c;
        }
    }
    ctx->pc = 0x171D44u;
label_171d44:
    // 0x171d44: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x171d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x171d48: 0xa2220260  sb          $v0, 0x260($s1)
    ctx->pc = 0x171d48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 608), (uint8_t)GPR_U32(ctx, 2));
label_171d4c:
    // 0x171d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171d50:
    // 0x171d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171d58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171d5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x171d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171d60: 0x3e00008  jr          $ra
    ctx->pc = 0x171D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D60u;
        // 0x171d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D68u;
}
