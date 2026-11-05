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

// Function: sub_0028ADD0
// Address: 0x28add0 - 0x28ae78
void sub_0028ADD0_0x28add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ADD0_0x28add0");
#endif

    switch (ctx->pc) {
        case 0x28ae18u: goto label_28ae18;
        case 0x28ae2cu: goto label_28ae2c;
        case 0x28ae5cu: goto label_28ae5c;
        default: break;
    }

    ctx->pc = 0x28add0u;

    // 0x28add0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28add4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28add4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28add8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28add8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28addc: 0x2442ac88  addiu       $v0, $v0, -0x5378
    ctx->pc = 0x28addcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945928));
    // 0x28ade0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ade4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28ade4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28ade8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28adec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28adecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28adf0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28adf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28adf4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28adf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28adf8: 0x8c460168  lw          $a2, 0x168($v0)
    ctx->pc = 0x28adf8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BADF0u));
    // 0x28adfc: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x28adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6BACA0u));
    // 0x28ae00: 0xac60a538  sw          $zero, -0x5AC8($v1)
    ctx->pc = 0x28ae00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA538u, _value); } while (0);
    // 0x28ae04: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28AE04u;
    {
        const bool branch_taken_0x28ae04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE04u;
        // 0x28ae08: 0xaca6a53c  sw          $a2, -0x5AC4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294944060), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae04) {
            ctx->pc = 0x28AE5Cu;
            goto label_28ae5c;
        }
    }
    ctx->pc = 0x28AE0Cu;
    // 0x28ae0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ae0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae10: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x28ae10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x28ae14: 0x0  nop
    ctx->pc = 0x28ae14u;
    // NOP
label_28ae18:
    // 0x28ae18: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x28ae18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x28ae1c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28AE1Cu;
    {
        const bool branch_taken_0x28ae1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ae1c) {
            ctx->pc = 0x28AE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AE1Cu;
            // 0x28ae20: 0xae46a53c  sw          $a2, -0x5AC4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4294944060), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28AE54u;
            goto label_28ae54;
        }
    }
    ctx->pc = 0x28AE24u;
    // 0x28ae24: 0xc0a2b38  jal         func_28ACE0
    ctx->pc = 0x28AE24u;
    SET_GPR_U32(ctx, 31, 0x28AE2Cu);
    ctx->pc = 0x28AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE24u;
    // 0x28ae28: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACE0u, 0x28AE24u, 0x28AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE2Cu;
label_28ae2c:
    // 0x28ae2c: 0x8e25bd50  lw          $a1, -0x42B0($s1)
    ctx->pc = 0x28ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    // 0x28ae30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ae30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ae34: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x28ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28ae38: 0x8ca20224  lw          $v0, 0x224($a1)
    ctx->pc = 0x28ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x28ae3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28ae40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x28ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28ae44: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28ae48: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x28AE48u;
    {
        const bool branch_taken_0x28ae48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE48u;
        // 0x28ae4c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ae48) {
            ctx->pc = 0x28AE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ae18;
        }
    }
    ctx->pc = 0x28AE50u;
    // 0x28ae50: 0xae46a53c  sw          $a2, -0x5AC4($s2)
    ctx->pc = 0x28ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294944060), GPR_U32(ctx, 6));
label_28ae54:
    // 0x28ae54: 0xc0a2b9e  jal         func_28AE78
    ctx->pc = 0x28AE54u;
    SET_GPR_U32(ctx, 31, 0x28AE5Cu);
    ctx->pc = 0x28AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AE54u;
    // 0x28ae58: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AE78u, 0x28AE54u, 0x28AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AE5Cu;
label_28ae5c:
    // 0x28ae5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ae5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ae60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ae60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ae64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28ae64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ae68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28ae68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28ae6c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE6Cu;
        // 0x28ae70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AE74u;
    // 0x28ae74: 0x0  nop
    ctx->pc = 0x28ae74u;
    // NOP
    ctx->pc = 0x28ae78u;
}
