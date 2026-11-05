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

// Function: sub_00180CF8
// Address: 0x180cf8 - 0x180db8
void sub_00180CF8_0x180cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180CF8_0x180cf8");
#endif

    switch (ctx->pc) {
        case 0x180d4cu: goto label_180d4c;
        case 0x180d78u: goto label_180d78;
        case 0x180d98u: goto label_180d98;
        default: break;
    }

    ctx->pc = 0x180cf8u;

    // 0x180cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180d00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x180d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x180d0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x180d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x180d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x180d14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x180d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x180d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x180d1c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x180D1Cu;
    {
        const bool branch_taken_0x180d1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D1Cu;
        // 0x180d20: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d1c) {
            ctx->pc = 0x180D2Cu;
            goto label_180d2c;
        }
    }
    ctx->pc = 0x180D24u;
    // 0x180d24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x180D24u;
    {
        const bool branch_taken_0x180d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D24u;
        // 0x180d28: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d24) {
            ctx->pc = 0x180D4Cu;
            goto label_180d4c;
        }
    }
    ctx->pc = 0x180D2Cu;
label_180d2c:
    // 0x180d2c: 0x92020138  lbu         $v0, 0x138($s0)
    ctx->pc = 0x180d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x180d30: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x180d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180d34: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x180d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x180d38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180D38u;
    {
        const bool branch_taken_0x180d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D38u;
        // 0x180d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d38) {
            ctx->pc = 0x180D4Cu;
            goto label_180d4c;
        }
    }
    ctx->pc = 0x180D40u;
    // 0x180d40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d44: 0xc06036e  jal         func_180DB8
    ctx->pc = 0x180D44u;
    SET_GPR_U32(ctx, 31, 0x180D4Cu);
    ctx->pc = 0x180D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D44u;
    // 0x180d48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180DB8u, 0x180D44u, 0x180D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D4Cu;
label_180d4c:
    // 0x180d4c: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x180D4Cu;
    {
        const bool branch_taken_0x180d4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x180d4c) {
            ctx->pc = 0x180D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D4Cu;
            // 0x180d50: 0x92020139  lbu         $v0, 0x139($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 313)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D5Cu;
            goto label_180d5c;
        }
    }
    ctx->pc = 0x180D54u;
    // 0x180d54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x180D54u;
    {
        const bool branch_taken_0x180d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D54u;
        // 0x180d58: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d54) {
            ctx->pc = 0x180D78u;
            goto label_180d78;
        }
    }
    ctx->pc = 0x180D5Cu;
label_180d5c:
    // 0x180d5c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x180d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x180d60: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x180d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x180d64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180D64u;
    {
        const bool branch_taken_0x180d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D64u;
        // 0x180d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d64) {
            ctx->pc = 0x180D78u;
            goto label_180d78;
        }
    }
    ctx->pc = 0x180D6Cu;
    // 0x180d6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d70: 0xc060392  jal         func_180E48
    ctx->pc = 0x180D70u;
    SET_GPR_U32(ctx, 31, 0x180D78u);
    ctx->pc = 0x180D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D70u;
    // 0x180d74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E48u, 0x180D70u, 0x180D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D78u;
label_180d78:
    // 0x180d78: 0x9202013b  lbu         $v0, 0x13B($s0)
    ctx->pc = 0x180d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 315)));
    // 0x180d7c: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x180d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x180d80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x180d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x180d84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180D84u;
    {
        const bool branch_taken_0x180d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D84u;
        // 0x180d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180d84) {
            ctx->pc = 0x180D98u;
            goto label_180d98;
        }
    }
    ctx->pc = 0x180D8Cu;
    // 0x180d8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x180d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180d90: 0xc0603c0  jal         func_180F00
    ctx->pc = 0x180D90u;
    SET_GPR_U32(ctx, 31, 0x180D98u);
    ctx->pc = 0x180D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D90u;
    // 0x180d94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F00u, 0x180D90u, 0x180D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180D98u;
label_180d98:
    // 0x180d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x180d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x180da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180da4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x180da4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180da8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x180da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180dac: 0x3e00008  jr          $ra
    ctx->pc = 0x180DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DACu;
        // 0x180db0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180DB4u;
    // 0x180db4: 0x0  nop
    ctx->pc = 0x180db4u;
    // NOP
    ctx->pc = 0x180db8u;
}
