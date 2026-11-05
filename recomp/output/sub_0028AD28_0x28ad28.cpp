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

// Function: sub_0028AD28
// Address: 0x28ad28 - 0x28add0
void sub_0028AD28_0x28ad28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AD28_0x28ad28");
#endif

    switch (ctx->pc) {
        case 0x28ad70u: goto label_28ad70;
        case 0x28ad84u: goto label_28ad84;
        case 0x28adb4u: goto label_28adb4;
        default: break;
    }

    ctx->pc = 0x28ad28u;

    // 0x28ad28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ad28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ad2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28ad30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28ad34: 0x2442ac88  addiu       $v0, $v0, -0x5378
    ctx->pc = 0x28ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x28ad38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ad3c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28ad40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28ad44: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28ad48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28ad4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28ad4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad50: 0x8c460168  lw          $a2, 0x168($v0)
    ctx->pc = 0x28ad50u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BADF0u));
    // 0x28ad54: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x28ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BACA0u));
    // 0x28ad58: 0xac60a538  sw          $zero, -0x5AC8($v1)
    ctx->pc = 0x28ad58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA538u, _value); } while (0);
    // 0x28ad5c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28AD5Cu;
    {
        const bool branch_taken_0x28ad5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD5Cu;
        // 0x28ad60: 0xaca6a53c  sw          $a2, -0x5AC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294944060), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad5c) {
            ctx->pc = 0x28ADB4u;
            goto label_28adb4;
        }
    }
    ctx->pc = 0x28AD64u;
    // 0x28ad64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ad64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad68: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x28ad68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x28ad6c: 0x0  nop
    ctx->pc = 0x28ad6cu;
    // NOP
label_28ad70:
    // 0x28ad70: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x28ad70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x28ad74: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28AD74u;
    {
        const bool branch_taken_0x28ad74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ad74) {
            ctx->pc = 0x28AD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AD74u;
            // 0x28ad78: 0xae46a53c  sw          $a2, -0x5AC4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4294944060), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ADACu;
            goto label_28adac;
        }
    }
    ctx->pc = 0x28AD7Cu;
    // 0x28ad7c: 0xc0a2b26  jal         func_28AC98
    ctx->pc = 0x28AD7Cu;
    SET_GPR_U32(ctx, 31, 0x28AD84u);
    ctx->pc = 0x28AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AD7Cu;
    // 0x28ad80: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC98u, 0x28AD7Cu, 0x28AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD84u;
label_28ad84:
    // 0x28ad84: 0x8e25bd50  lw          $a1, -0x42B0($s1)
    ctx->pc = 0x28ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    // 0x28ad88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ad88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ad8c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x28ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28ad90: 0x8ca20224  lw          $v0, 0x224($a1)
    ctx->pc = 0x28ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x28ad94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28ad98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28ad9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28ada0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x28ADA0u;
    {
        const bool branch_taken_0x28ada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADA0u;
        // 0x28ada4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ada0) {
            ctx->pc = 0x28AD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ad70;
        }
    }
    ctx->pc = 0x28ADA8u;
    // 0x28ada8: 0xae46a53c  sw          $a2, -0x5AC4($s2)
    ctx->pc = 0x28ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294944060), GPR_U32(ctx, 6));
label_28adac:
    // 0x28adac: 0xc0a2b9e  jal         func_28AE78
    ctx->pc = 0x28ADACu;
    SET_GPR_U32(ctx, 31, 0x28ADB4u);
    ctx->pc = 0x28ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ADACu;
    // 0x28adb0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AE78u, 0x28ADACu, 0x28ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ADB4u;
label_28adb4:
    // 0x28adb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28adb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28adb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28adb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28adbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28adbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28adc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28adc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28adc4: 0x3e00008  jr          $ra
    ctx->pc = 0x28ADC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADC4u;
        // 0x28adc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ADC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ADCCu;
    // 0x28adcc: 0x0  nop
    ctx->pc = 0x28adccu;
    // NOP
    ctx->pc = 0x28add0u;
}
