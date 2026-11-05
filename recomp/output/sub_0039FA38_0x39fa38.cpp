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

// Function: sub_0039FA38
// Address: 0x39fa38 - 0x39fb20
void sub_0039FA38_0x39fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FA38_0x39fa38");
#endif

    switch (ctx->pc) {
        case 0x39fa64u: goto label_39fa64;
        case 0x39fa98u: goto label_39fa98;
        case 0x39faa8u: goto label_39faa8;
        case 0x39fab4u: goto label_39fab4;
        case 0x39fac8u: goto label_39fac8;
        default: break;
    }

    ctx->pc = 0x39fa38u;

    // 0x39fa38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39fa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39fa3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39fa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39fa40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39fa44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39fa48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39fa4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39fa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x39fa50: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39FA50u;
    {
        const bool branch_taken_0x39fa50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA50u;
        // 0x39fa54: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa50) {
            ctx->pc = 0x39FA70u;
            goto label_39fa70;
        }
    }
    ctx->pc = 0x39FA58u;
    // 0x39fa58: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39fa5c: 0xc0ecbf4  jal         func_3B2FD0
    ctx->pc = 0x39FA5Cu;
    SET_GPR_U32(ctx, 31, 0x39FA64u);
    ctx->pc = 0x39FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FA5Cu;
    // 0x39fa60: 0x2484c258  addiu       $a0, $a0, -0x3DA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x39FA5Cu, 0x39FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FA64u;
label_39fa64:
    // 0x39fa64: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x39FA64u;
    {
        const bool branch_taken_0x39fa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA64u;
        // 0x39fa68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa64) {
            ctx->pc = 0x39FAFCu;
            goto label_39fafc;
        }
    }
    ctx->pc = 0x39FA6Cu;
    // 0x39fa6c: 0x0  nop
    ctx->pc = 0x39fa6cu;
    // NOP
label_39fa70:
    // 0x39fa70: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x39fa70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x39fa74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39fa78: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x39fa78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x39fa7c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x39FA7Cu;
    {
        const bool branch_taken_0x39fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fa7c) {
            ctx->pc = 0x39FA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FA7Cu;
            // 0x39fa80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FAFCu;
            goto label_39fafc;
        }
    }
    ctx->pc = 0x39FA84u;
    // 0x39fa84: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x39fa84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39fa88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39fa88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fa8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x39fa8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fa90: 0xc0e82f8  jal         func_3A0BE0
    ctx->pc = 0x39FA90u;
    SET_GPR_U32(ctx, 31, 0x39FA98u);
    ctx->pc = 0x39FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FA90u;
    // 0x39fa94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BE0u, 0x39FA90u, 0x39FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FA98u;
label_39fa98:
    // 0x39fa98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39fa98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fa9c: 0x1a600017  blez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x39FA9Cu;
    {
        const bool branch_taken_0x39fa9c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x39FAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA9Cu;
        // 0x39faa0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fa9c) {
            ctx->pc = 0x39FAFCu;
            goto label_39fafc;
        }
    }
    ctx->pc = 0x39FAA4u;
    // 0x39faa4: 0x0  nop
    ctx->pc = 0x39faa4u;
    // NOP
label_39faa8:
    // 0x39faa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39faa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39faac: 0xc0e82fa  jal         func_3A0BE8
    ctx->pc = 0x39FAACu;
    SET_GPR_U32(ctx, 31, 0x39FAB4u);
    ctx->pc = 0x39FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FAACu;
    // 0x39fab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BE8u, 0x39FAACu, 0x39FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FAB4u;
label_39fab4:
    // 0x39fab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39fab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fab8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39fab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fabc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39fabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x39fac0: 0xc0e82fe  jal         func_3A0BF8
    ctx->pc = 0x39FAC0u;
    SET_GPR_U32(ctx, 31, 0x39FAC8u);
    ctx->pc = 0x39FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FAC0u;
    // 0x39fac4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BF8u, 0x39FAC0u, 0x39FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FAC8u;
label_39fac8:
    // 0x39fac8: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x39fac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x39facc: 0x233282a  slt         $a1, $s1, $s3
    ctx->pc = 0x39faccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x39fad0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x39fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x39fad4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x39fad8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x39fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x39fadc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39fadcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fae0: 0x2444001f  addiu       $a0, $v0, 0x1F
    ctx->pc = 0x39fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x39fae4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x39fae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39fae8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x39fae8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x39faec: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x39faecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x39faf0: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x39FAF0u;
    {
        const bool branch_taken_0x39faf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FAF0u;
        // 0x39faf4: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39faf0) {
            ctx->pc = 0x39FAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39faa8;
        }
    }
    ctx->pc = 0x39FAF8u;
    // 0x39faf8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39faf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39fafc:
    // 0x39fafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39fafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39fb00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39fb00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39fb04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39fb04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39fb08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39fb08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39fb0c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39fb0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39fb10: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x39fb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39fb14: 0x3e00008  jr          $ra
    ctx->pc = 0x39FB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB14u;
        // 0x39fb18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FB1Cu;
    // 0x39fb1c: 0x0  nop
    ctx->pc = 0x39fb1cu;
    // NOP
    ctx->pc = 0x39fb20u;
}
