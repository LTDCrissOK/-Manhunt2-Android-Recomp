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

// Function: sub_002D6FC8
// Address: 0x2d6fc8 - 0x2d70d8
void sub_002D6FC8_0x2d6fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6FC8_0x2d6fc8");
#endif

    switch (ctx->pc) {
        case 0x2d7008u: goto label_2d7008;
        case 0x2d7034u: goto label_2d7034;
        case 0x2d7050u: goto label_2d7050;
        case 0x2d7078u: goto label_2d7078;
        case 0x2d7098u: goto label_2d7098;
        case 0x2d70a8u: goto label_2d70a8;
        default: break;
    }

    ctx->pc = 0x2d6fc8u;

    // 0x2d6fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6fcc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d6fccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d6fd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d6fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d6fd4: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2d6fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2d6fd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d6fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d6fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d6fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6fe4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2d6fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d6fe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6fec: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2d6fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2d6ff0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6ff4: 0xa69821  addu        $s3, $a1, $a2
    ctx->pc = 0x2d6ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2d6ff8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d6ffc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D6FFCu;
    {
        const bool branch_taken_0x2d6ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FFCu;
        // 0x2d7000: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ffc) {
            ctx->pc = 0x2D70B8u;
            goto label_2d70b8;
        }
    }
    ctx->pc = 0x2D7004u;
    // 0x2d7004: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2d7004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d7008:
    // 0x2d7008: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x2d7008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d700c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D700Cu;
    {
        const bool branch_taken_0x2d700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d700c) {
            ctx->pc = 0x2D7010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D700Cu;
            // 0x2d7010: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7040u;
            goto label_2d7040;
        }
    }
    ctx->pc = 0x2D7014u;
    // 0x2d7014: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d7014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7018: 0x56620009  bnel        $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7018u;
    {
        const bool branch_taken_0x2d7018 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d7018) {
            ctx->pc = 0x2D701Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7018u;
            // 0x2d701c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7040u;
            goto label_2d7040;
        }
    }
    ctx->pc = 0x2D7020u;
    // 0x2d7020: 0x92020025  lbu         $v0, 0x25($s0)
    ctx->pc = 0x2d7020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x2d7024: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7024u;
    {
        const bool branch_taken_0x2d7024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7024) {
            ctx->pc = 0x2D7028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7024u;
            // 0x2d7028: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7040u;
            goto label_2d7040;
        }
    }
    ctx->pc = 0x2D702Cu;
    // 0x2d702c: 0xc0b59ba  jal         func_2D66E8
    ctx->pc = 0x2D702Cu;
    SET_GPR_U32(ctx, 31, 0x2D7034u);
    ctx->pc = 0x2D7030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D702Cu;
    // 0x2d7030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66E8u, 0x2D702Cu, 0x2D7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7034u;
label_2d7034:
    // 0x2d7034: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x2d7034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7038: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D7038u;
    {
        const bool branch_taken_0x2d7038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7038u;
        // 0x2d703c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7038) {
            ctx->pc = 0x2D70BCu;
            goto label_2d70bc;
        }
    }
    ctx->pc = 0x2D7040u;
label_2d7040:
    // 0x2d7040: 0x1a20fff1  blez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D7040u;
    {
        const bool branch_taken_0x2d7040 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2D7044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7040u;
        // 0x2d7044: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7040) {
            ctx->pc = 0x2D7008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7008;
        }
    }
    ctx->pc = 0x2D7048u;
    // 0x2d7048: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d7048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d704c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d7050:
    // 0x2d7050: 0x90820024  lbu         $v0, 0x24($a0)
    ctx->pc = 0x2d7050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2d7054: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7054u;
    {
        const bool branch_taken_0x2d7054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7054) {
            ctx->pc = 0x2D7058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7054u;
            // 0x2d7058: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7064u;
            goto label_2d7064;
        }
    }
    ctx->pc = 0x2D705Cu;
    // 0x2d705c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D705Cu;
    {
        const bool branch_taken_0x2d705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D705Cu;
        // 0x2d7060: 0x8e46002c  lw          $a2, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d705c) {
            ctx->pc = 0x2D70A0u;
            goto label_2d70a0;
        }
    }
    ctx->pc = 0x2D7064u;
label_2d7064:
    // 0x2d7064: 0x1a20fffa  blez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D7064u;
    {
        const bool branch_taken_0x2d7064 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2D7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7064u;
        // 0x2d7068: 0x2484002c  addiu       $a0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7064) {
            ctx->pc = 0x2D7050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7050;
        }
    }
    ctx->pc = 0x2D706Cu;
    // 0x2d706c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d706cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7070: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2d7070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7074: 0x0  nop
    ctx->pc = 0x2d7074u;
    // NOP
label_2d7078:
    // 0x2d7078: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x2d7078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2d707c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D707Cu;
    {
        const bool branch_taken_0x2d707c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d707c) {
            ctx->pc = 0x2D7080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D707Cu;
            // 0x2d7080: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D70B0u;
            goto label_2d70b0;
        }
    }
    ctx->pc = 0x2D7084u;
    // 0x2d7084: 0x92020025  lbu         $v0, 0x25($s0)
    ctx->pc = 0x2d7084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x2d7088: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D7088u;
    {
        const bool branch_taken_0x2d7088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7088) {
            ctx->pc = 0x2D708Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7088u;
            // 0x2d708c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D70B0u;
            goto label_2d70b0;
        }
    }
    ctx->pc = 0x2D7090u;
    // 0x2d7090: 0xc0b59d4  jal         func_2D6750
    ctx->pc = 0x2D7090u;
    SET_GPR_U32(ctx, 31, 0x2D7098u);
    ctx->pc = 0x2D7094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7090u;
    // 0x2d7094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6750u, 0x2D7090u, 0x2D7098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7098u;
label_2d7098:
    // 0x2d7098: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x2d7098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2d709c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d70a0:
    // 0x2d70a0: 0xc0b5a5c  jal         func_2D6970
    ctx->pc = 0x2D70A0u;
    SET_GPR_U32(ctx, 31, 0x2D70A8u);
    ctx->pc = 0x2D70A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D70A0u;
    // 0x2d70a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6970u, 0x2D70A0u, 0x2D70A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D70A8u;
label_2d70a8:
    // 0x2d70a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D70A8u;
    {
        const bool branch_taken_0x2d70a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70A8u;
        // 0x2d70ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70a8) {
            ctx->pc = 0x2D70BCu;
            goto label_2d70bc;
        }
    }
    ctx->pc = 0x2D70B0u;
label_2d70b0:
    // 0x2d70b0: 0x1a20fff1  blez        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D70B0u;
    {
        const bool branch_taken_0x2d70b0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2D70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70B0u;
        // 0x2d70b4: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70b0) {
            ctx->pc = 0x2D7078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7078;
        }
    }
    ctx->pc = 0x2D70B8u;
label_2d70b8:
    // 0x2d70b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d70bc:
    // 0x2d70bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d70bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d70c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d70c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d70c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d70c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d70c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d70c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d70cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d70ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d70d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70D0u;
        // 0x2d70d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D70D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D70D8u;
}
