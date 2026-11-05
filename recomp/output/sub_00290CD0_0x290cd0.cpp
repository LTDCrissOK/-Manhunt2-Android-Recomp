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

// Function: sub_00290CD0
// Address: 0x290cd0 - 0x290d50
void sub_00290CD0_0x290cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290CD0_0x290cd0");
#endif

    switch (ctx->pc) {
        case 0x290d18u: goto label_290d18;
        case 0x290d2cu: goto label_290d2c;
        default: break;
    }

    ctx->pc = 0x290cd0u;

    // 0x290cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x290cd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x290cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x290cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x290cdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x290cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x290ce0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x290ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290ce8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x290ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x290cec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x290CECu;
    {
        const bool branch_taken_0x290cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CECu;
        // 0x290cf0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290cec) {
            ctx->pc = 0x290D08u;
            goto label_290d08;
        }
    }
    ctx->pc = 0x290CF4u;
    // 0x290cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290cf8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x290CF8u;
    {
        const bool branch_taken_0x290cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x290cf8) {
            ctx->pc = 0x290CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290CF8u;
            // 0x290cfc: 0x8ca40014  lw          $a0, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290D1Cu;
            goto label_290d1c;
        }
    }
    ctx->pc = 0x290D00u;
    // 0x290d00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x290D00u;
    {
        const bool branch_taken_0x290d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D00u;
        // 0x290d04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d00) {
            ctx->pc = 0x290D20u;
            goto label_290d20;
        }
    }
    ctx->pc = 0x290D08u;
label_290d08:
    // 0x290d08: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x290d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x290d0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d10: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x290D10u;
    SET_GPR_U32(ctx, 31, 0x290D18u);
    ctx->pc = 0x290D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D10u;
    // 0x290d14: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x290D10u, 0x290D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D18u;
label_290d18:
    // 0x290d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x290d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290d1c:
    // 0x290d1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x290d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290d20:
    // 0x290d20: 0x2626ffff  addiu       $a2, $s1, -0x1
    ctx->pc = 0x290d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x290d24: 0xc0b6fb8  jal         func_2DBEE0
    ctx->pc = 0x290D24u;
    SET_GPR_U32(ctx, 31, 0x290D2Cu);
    ctx->pc = 0x290D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290D24u;
    // 0x290d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBEE0u, 0x290D24u, 0x290D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290D2Cu;
label_290d2c:
    // 0x290d2c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x290d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x290d30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x290d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290d34: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x290d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x290d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x290d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x290d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x290d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290d44: 0xa460fffe  sh          $zero, -0x2($v1)
    ctx->pc = 0x290d44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294967294), (uint16_t)GPR_U32(ctx, 0));
    // 0x290d48: 0x3e00008  jr          $ra
    ctx->pc = 0x290D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D48u;
        // 0x290d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290D50u;
}
