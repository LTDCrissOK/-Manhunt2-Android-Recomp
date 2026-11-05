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

// Function: sub_00276FE0
// Address: 0x276fe0 - 0x2770c0
void sub_00276FE0_0x276fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276FE0_0x276fe0");
#endif

    switch (ctx->pc) {
        case 0x276ffcu: goto label_276ffc;
        case 0x277024u: goto label_277024;
        case 0x277034u: goto label_277034;
        case 0x277050u: goto label_277050;
        case 0x277088u: goto label_277088;
        default: break;
    }

    ctx->pc = 0x276fe0u;

    // 0x276fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276fe4: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x276fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x276fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276fec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x276fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x276ff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x276ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x276ff4: 0xc0efb2d  jal         func_3BECB4
    ctx->pc = 0x276FF4u;
    SET_GPR_U32(ctx, 31, 0x276FFCu);
    ctx->pc = 0x276FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276FF4u;
    // 0x276ff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BECB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BECB4u, 0x276FF4u, 0x276FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FFCu;
label_276ffc:
    // 0x276ffc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x276ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x277000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277004: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x277004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x277008: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x277008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27700c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27700Cu;
    {
        const bool branch_taken_0x27700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27700Cu;
        // 0x277010: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27700c) {
            ctx->pc = 0x277034u;
            goto label_277034;
        }
    }
    ctx->pc = 0x277014u;
    // 0x277014: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277014u;
    {
        const bool branch_taken_0x277014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x277014) {
            ctx->pc = 0x27702Cu;
            goto label_27702c;
        }
    }
    ctx->pc = 0x27701Cu;
    // 0x27701c: 0xc0f0adc  jal         func_3C2B70
    ctx->pc = 0x27701Cu;
    SET_GPR_U32(ctx, 31, 0x277024u);
    ctx->pc = 0x3C2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2B70u, 0x27701Cu, 0x277024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277024u;
label_277024:
    // 0x277024: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x277024u;
    {
        const bool branch_taken_0x277024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277024u;
        // 0x277028: 0x8e229e40  lw          $v0, -0x61C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277024) {
            ctx->pc = 0x277038u;
            goto label_277038;
        }
    }
    ctx->pc = 0x27702Cu;
label_27702c:
    // 0x27702c: 0xc0f0adc  jal         func_3C2B70
    ctx->pc = 0x27702Cu;
    SET_GPR_U32(ctx, 31, 0x277034u);
    ctx->pc = 0x277030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27702Cu;
    // 0x277030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2B70u, 0x27702Cu, 0x277034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277034u;
label_277034:
    // 0x277034: 0x8e229e40  lw          $v0, -0x61C0($s1)
    ctx->pc = 0x277034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942272)));
label_277038:
    // 0x277038: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x277038u;
    {
        const bool branch_taken_0x277038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277038u;
        // 0x27703c: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277038) {
            ctx->pc = 0x277078u;
            goto label_277078;
        }
    }
    ctx->pc = 0x277040u;
    // 0x277040: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x277040u;
    {
        const bool branch_taken_0x277040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277040u;
        // 0x277044: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277040) {
            ctx->pc = 0x2770A8u;
            goto label_2770a8;
        }
    }
    ctx->pc = 0x277048u;
    // 0x277048: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x277048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x27704c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x27704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_277050:
    // 0x277050: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x277050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x277054: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x277054u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x277058: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x277058u;
    {
        const bool branch_taken_0x277058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x277058) {
            ctx->pc = 0x27705Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277058u;
            // 0x27705c: 0xa2040000  sb          $a0, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277060u;
            goto label_277060;
        }
    }
    ctx->pc = 0x277060u;
label_277060:
    // 0x277060: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x277060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x277064: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x277064u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x277068: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x277068u;
    {
        const bool branch_taken_0x277068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277068u;
        // 0x27706c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277068) {
            ctx->pc = 0x277050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277050;
        }
    }
    ctx->pc = 0x277070u;
    // 0x277070: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x277070u;
    {
        const bool branch_taken_0x277070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277070u;
        // 0x277074: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277070) {
            ctx->pc = 0x2770ACu;
            goto label_2770ac;
        }
    }
    ctx->pc = 0x277078u;
label_277078:
    // 0x277078: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x277078u;
    {
        const bool branch_taken_0x277078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277078u;
        // 0x27707c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277078) {
            ctx->pc = 0x2770A8u;
            goto label_2770a8;
        }
    }
    ctx->pc = 0x277080u;
    // 0x277080: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x277080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x277084: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x277084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_277088:
    // 0x277088: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x277088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x27708c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x27708cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x277090: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x277090u;
    {
        const bool branch_taken_0x277090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x277090) {
            ctx->pc = 0x277094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277090u;
            // 0x277094: 0xa2040000  sb          $a0, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277098u;
            goto label_277098;
        }
    }
    ctx->pc = 0x277098u;
label_277098:
    // 0x277098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x277098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27709c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x27709cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2770a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2770A0u;
    {
        const bool branch_taken_0x2770a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2770A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770A0u;
        // 0x2770a4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770a0) {
            ctx->pc = 0x277088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277088;
        }
    }
    ctx->pc = 0x2770A8u;
label_2770a8:
    // 0x2770a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2770a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2770ac:
    // 0x2770ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2770acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2770b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2770b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2770b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2770B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2770B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770B4u;
        // 0x2770b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2770B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2770BCu;
    // 0x2770bc: 0x0  nop
    ctx->pc = 0x2770bcu;
    // NOP
    ctx->pc = 0x2770c0u;
}
