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

// Function: sub_0034BFE0
// Address: 0x34bfe0 - 0x34c100
void sub_0034BFE0_0x34bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BFE0_0x34bfe0");
#endif

    switch (ctx->pc) {
        case 0x34c014u: goto label_34c014;
        case 0x34c028u: goto label_34c028;
        case 0x34c034u: goto label_34c034;
        case 0x34c03cu: goto label_34c03c;
        case 0x34c044u: goto label_34c044;
        case 0x34c060u: goto label_34c060;
        default: break;
    }

    ctx->pc = 0x34bfe0u;

    // 0x34bfe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34bfe4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34bfe8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34bfec: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x34bfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
    // 0x34bff0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34bff4: 0x2454c60c  addiu       $s4, $v0, -0x39F4
    ctx->pc = 0x34bff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952460));
    // 0x34bff8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34bffc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34c000: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x34c000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34c004: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34c008: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x34c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x34c00c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x34C00Cu;
    SET_GPR_U32(ctx, 31, 0x34C014u);
    ctx->pc = 0x34C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C00Cu;
    // 0x34c010: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x34C00Cu, 0x34C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C014u;
label_34c014:
    // 0x34c014: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34c014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34c018: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x34c018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x34c01c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x34c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x34c020: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x34c020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c024: 0x0  nop
    ctx->pc = 0x34c024u;
    // NOP
label_34c028:
    // 0x34c028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34c028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c02c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34C02Cu;
    SET_GPR_U32(ctx, 31, 0x34C034u);
    ctx->pc = 0x34C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C02Cu;
    // 0x34c030: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34C02Cu, 0x34C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C034u;
label_34c034:
    // 0x34c034: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34C034u;
    SET_GPR_U32(ctx, 31, 0x34C03Cu);
    ctx->pc = 0x34C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C034u;
    // 0x34c038: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34C034u, 0x34C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C03Cu;
label_34c03c:
    // 0x34c03c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34C03Cu;
    SET_GPR_U32(ctx, 31, 0x34C044u);
    ctx->pc = 0x34C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C03Cu;
    // 0x34c040: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34C03Cu, 0x34C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C044u;
label_34c044:
    // 0x34c044: 0x1633fff8  bne         $s1, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x34C044u;
    {
        const bool branch_taken_0x34c044 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x34C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C044u;
        // 0x34c048: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c044) {
            ctx->pc = 0x34C028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c028;
        }
    }
    ctx->pc = 0x34C04Cu;
    // 0x34c04c: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x34c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
    // 0x34c050: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34c050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34c054: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c058: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x34c058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34c05c: 0x0  nop
    ctx->pc = 0x34c05cu;
    // NOP
label_34c060:
    // 0x34c060: 0x8ca3c60c  lw          $v1, -0x39F4($a1)
    ctx->pc = 0x34c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952460)));
    // 0x34c064: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x34c064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x34c068: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34c068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34c06c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x34c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x34c070: 0x8ca2c60c  lw          $v0, -0x39F4($a1)
    ctx->pc = 0x34c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952460)));
    // 0x34c074: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34c074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c078: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x34c078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x34c07c: 0x8ca3c60c  lw          $v1, -0x39F4($a1)
    ctx->pc = 0x34c07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952460)));
    // 0x34c080: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34c084: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x34c084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x34c088: 0x8ca2c60c  lw          $v0, -0x39F4($a1)
    ctx->pc = 0x34c088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952460)));
    // 0x34c08c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c090: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x34c090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x34c094: 0x8ca3c60c  lw          $v1, -0x39F4($a1)
    ctx->pc = 0x34c094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952460)));
    // 0x34c098: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34c098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34c09c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x34c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x34c0a0: 0x8ca2c60c  lw          $v0, -0x39F4($a1)
    ctx->pc = 0x34c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952460)));
    // 0x34c0a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x34c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34c0a8: 0xa0400044  sb          $zero, 0x44($v0)
    ctx->pc = 0x34c0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c0ac: 0x8ca3c60c  lw          $v1, -0x39F4($a1)
    ctx->pc = 0x34c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952460)));
    // 0x34c0b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34c0b4: 0xa0600045  sb          $zero, 0x45($v1)
    ctx->pc = 0x34c0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c0b8: 0x4c1ffe9  bgez        $a2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x34C0B8u;
    {
        const bool branch_taken_0x34c0b8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x34C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C0B8u;
        // 0x34c0bc: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c0b8) {
            ctx->pc = 0x34C060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34c060;
        }
    }
    ctx->pc = 0x34C0C0u;
    // 0x34c0c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34c0c4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34c0c8: 0xac402cec  sw          $zero, 0x2CEC($v0)
    ctx->pc = 0x34c0c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CECu, _value); } while (0);
    // 0x34c0cc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x34c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x34c0d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x34c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x34c0d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34c0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c0d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34c0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34c0dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34c0dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c0e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34c0e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c0e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34c0e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34c0e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x34c0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34c0ec: 0xac642cf0  sw          $a0, 0x2CF0($v1)
    ctx->pc = 0x34c0ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CF0u, _value); } while (0);
    // 0x34c0f0: 0xa0402cf4  sb          $zero, 0x2CF4($v0)
    ctx->pc = 0x34c0f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482CF4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482CF4u, _value); } while (0);
    // 0x34c0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x34C0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C0F4u;
        // 0x34c0f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C0FCu;
    // 0x34c0fc: 0x0  nop
    ctx->pc = 0x34c0fcu;
    // NOP
    ctx->pc = 0x34c100u;
}
