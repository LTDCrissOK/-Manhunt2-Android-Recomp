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

// Function: sub_00125018
// Address: 0x125018 - 0x1250d0
void sub_00125018_0x125018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125018_0x125018");
#endif

    switch (ctx->pc) {
        case 0x125040u: goto label_125040;
        case 0x125054u: goto label_125054;
        default: break;
    }

    ctx->pc = 0x125018u;

    // 0x125018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12501c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12501cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125020: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x125024: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x125024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12502c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12502cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125030: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x125030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x125034: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x125034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125038: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x125038u;
    SET_GPR_U32(ctx, 31, 0x125040u);
    ctx->pc = 0x12503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125038u;
    // 0x12503c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x125038u, 0x125040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125040u;
label_125040:
    // 0x125040: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x125040u;
    {
        const bool branch_taken_0x125040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125040u;
        // 0x125044: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125040) {
            ctx->pc = 0x1250B8u;
            goto label_1250b8;
        }
    }
    ctx->pc = 0x125048u;
    // 0x125048: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x125048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12504c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x12504Cu;
    SET_GPR_U32(ctx, 31, 0x125054u);
    ctx->pc = 0x125050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12504Cu;
    // 0x125050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x12504Cu, 0x125054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125054u;
label_125054:
    // 0x125054: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x125054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125058: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x125058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12505c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12505Cu;
    {
        const bool branch_taken_0x12505c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x125060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12505Cu;
        // 0x125060: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12505c) {
            ctx->pc = 0x1250B8u;
            goto label_1250b8;
        }
    }
    ctx->pc = 0x125064u;
    // 0x125064: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x125064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x125068: 0x908200cc  lbu         $v0, 0xCC($a0)
    ctx->pc = 0x125068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x12506c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x12506cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x125070: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125070u;
    {
        const bool branch_taken_0x125070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125070u;
        // 0x125074: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125070) {
            ctx->pc = 0x125080u;
            goto label_125080;
        }
    }
    ctx->pc = 0x125078u;
    // 0x125078: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x125078u;
    {
        const bool branch_taken_0x125078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125078u;
        // 0x12507c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125078) {
            ctx->pc = 0x12508Cu;
            goto label_12508c;
        }
    }
    ctx->pc = 0x125080u;
label_125080:
    // 0x125080: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x125080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x125084: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x125084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x125088: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x125088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_12508c:
    // 0x12508c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x12508Cu;
    {
        const bool branch_taken_0x12508c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x125090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12508Cu;
        // 0x125090: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12508c) {
            ctx->pc = 0x1250B4u;
            goto label_1250b4;
        }
    }
    ctx->pc = 0x125094u;
    // 0x125094: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x125094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x125098: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x125098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12509c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1250a0: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x1250a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1250a4: 0x2a040065  slti        $a0, $s0, 0x65
    ctx->pc = 0x1250a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x1250a8: 0xa4800a  movz        $s0, $a1, $a0
    ctx->pc = 0x1250a8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1250ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1250ACu;
    {
        const bool branch_taken_0x1250ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250ACu;
        // 0x1250b0: 0xa0d000ac  sb          $s0, 0xAC($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 172), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250ac) {
            ctx->pc = 0x1250B8u;
            goto label_1250b8;
        }
    }
    ctx->pc = 0x1250B4u;
label_1250b4:
    // 0x1250b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1250b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1250b8:
    // 0x1250b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1250b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1250bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1250bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1250c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1250c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1250c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1250c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1250c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1250C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1250CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250C8u;
        // 0x1250cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1250C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1250D0u;
}
