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

// Function: sub_0013F9D8
// Address: 0x13f9d8 - 0x13fa88
void sub_0013F9D8_0x13f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F9D8_0x13f9d8");
#endif

    switch (ctx->pc) {
        case 0x13fa14u: goto label_13fa14;
        case 0x13fa34u: goto label_13fa34;
        case 0x13fa44u: goto label_13fa44;
        case 0x13fa50u: goto label_13fa50;
        case 0x13fa6cu: goto label_13fa6c;
        default: break;
    }

    ctx->pc = 0x13f9d8u;

    // 0x13f9d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f9dc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x13f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13f9e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13f9e4: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x13f9e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13f9e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13f9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13f9ec: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x13f9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13f9f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13f9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13f9f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13f9f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f9f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f9fc: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x13f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13fa00: 0x8c4304e8  lw          $v1, 0x4E8($v0)
    ctx->pc = 0x13fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1256)));
    // 0x13fa04: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FA04u;
    {
        const bool branch_taken_0x13fa04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa04) {
            ctx->pc = 0x13FA2Cu;
            goto label_13fa2c;
        }
    }
    ctx->pc = 0x13FA0Cu;
    // 0x13fa0c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13FA0Cu;
    SET_GPR_U32(ctx, 31, 0x13FA14u);
    ctx->pc = 0x13FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA0Cu;
    // 0x13fa10: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13FA0Cu, 0x13FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA14u;
label_13fa14:
    // 0x13fa14: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x13fa14u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13fa18: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13FA18u;
    {
        const bool branch_taken_0x13fa18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa18) {
            ctx->pc = 0x13FA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FA18u;
            // 0x13fa1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FA20u;
            goto label_13fa20;
        }
    }
    ctx->pc = 0x13FA20u;
label_13fa20:
    // 0x13fa20: 0x1810  mfhi        $v1
    ctx->pc = 0x13fa20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13fa24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13FA24u;
    {
        const bool branch_taken_0x13fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA24u;
        // 0x13fa28: 0x24700008  addiu       $s0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fa24) {
            ctx->pc = 0x13FA3Cu;
            goto label_13fa3c;
        }
    }
    ctx->pc = 0x13FA2Cu;
label_13fa2c:
    // 0x13fa2c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13FA2Cu;
    SET_GPR_U32(ctx, 31, 0x13FA34u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13FA2Cu, 0x13FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA34u;
label_13fa34:
    // 0x13fa34: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x13fa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x13fa38: 0x24500002  addiu       $s0, $v0, 0x2
    ctx->pc = 0x13fa38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_13fa3c:
    // 0x13fa3c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13FA3Cu;
    SET_GPR_U32(ctx, 31, 0x13FA44u);
    ctx->pc = 0x13FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA3Cu;
    // 0x13fa40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13FA3Cu, 0x13FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA44u;
label_13fa44:
    // 0x13fa44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa48: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x13FA48u;
    SET_GPR_U32(ctx, 31, 0x13FA50u);
    ctx->pc = 0x13FA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA48u;
    // 0x13fa4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x13FA48u, 0x13FA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA50u;
label_13fa50:
    // 0x13fa50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x13fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13fa54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13fa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fa58: 0x2432818  mult        $a1, $s2, $v1
    ctx->pc = 0x13fa58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x13fa5c: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x13fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x13fa60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13fa60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fa64: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13FA64u;
    SET_GPR_U32(ctx, 31, 0x13FA6Cu);
    ctx->pc = 0x13FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FA64u;
    // 0x13fa68: 0xac6204e4  sw          $v0, 0x4E4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13FA64u, 0x13FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA6Cu;
label_13fa6c:
    // 0x13fa6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13fa6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fa70: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13fa70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13fa74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13fa74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fa78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13fa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x13FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FA7Cu;
        // 0x13fa80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FA84u;
    // 0x13fa84: 0x0  nop
    ctx->pc = 0x13fa84u;
    // NOP
    ctx->pc = 0x13fa88u;
}
