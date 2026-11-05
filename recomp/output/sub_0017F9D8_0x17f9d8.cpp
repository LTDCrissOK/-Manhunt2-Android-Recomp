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

// Function: sub_0017F9D8
// Address: 0x17f9d8 - 0x17fa48
void sub_0017F9D8_0x17f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F9D8_0x17f9d8");
#endif

    switch (ctx->pc) {
        case 0x17f9fcu: goto label_17f9fc;
        case 0x17fa08u: goto label_17fa08;
        case 0x17fa1cu: goto label_17fa1c;
        case 0x17fa34u: goto label_17fa34;
        default: break;
    }

    ctx->pc = 0x17f9d8u;

    // 0x17f9d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f9dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17f9e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17f9e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9e8: 0x8e02041c  lw          $v0, 0x41C($s0)
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x17f9ec: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F9ECu;
    {
        const bool branch_taken_0x17f9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f9ec) {
            ctx->pc = 0x17F9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F9ECu;
            // 0x17f9f0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FA38u;
            goto label_17fa38;
        }
    }
    ctx->pc = 0x17F9F4u;
    // 0x17f9f4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17F9F4u;
    SET_GPR_U32(ctx, 31, 0x17F9FCu);
    ctx->pc = 0x17F9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9F4u;
    // 0x17f9f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17F9F4u, 0x17F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F9FCu;
label_17f9fc:
    // 0x17f9fc: 0x8e05041c  lw          $a1, 0x41C($s0)
    ctx->pc = 0x17f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x17fa00: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x17FA00u;
    SET_GPR_U32(ctx, 31, 0x17FA08u);
    ctx->pc = 0x17FA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA00u;
    // 0x17fa04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x17FA00u, 0x17FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA08u;
label_17fa08:
    // 0x17fa08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FA08u;
    {
        const bool branch_taken_0x17fa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fa08) {
            ctx->pc = 0x17FA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FA08u;
            // 0x17fa0c: 0xae000418  sw          $zero, 0x418($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FA24u;
            goto label_17fa24;
        }
    }
    ctx->pc = 0x17FA10u;
    // 0x17fa10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17fa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa14: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17FA14u;
    SET_GPR_U32(ctx, 31, 0x17FA1Cu);
    ctx->pc = 0x17FA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA14u;
    // 0x17fa18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17FA14u, 0x17FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA1Cu;
label_17fa1c:
    // 0x17fa1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17FA1Cu;
    {
        const bool branch_taken_0x17fa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA1Cu;
        // 0x17fa20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa1c) {
            ctx->pc = 0x17FA38u;
            goto label_17fa38;
        }
    }
    ctx->pc = 0x17FA24u;
label_17fa24:
    // 0x17fa24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa28: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x17fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x17fa2c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17FA2Cu;
    SET_GPR_U32(ctx, 31, 0x17FA34u);
    ctx->pc = 0x17FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA2Cu;
    // 0x17fa30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17FA2Cu, 0x17FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA34u;
label_17fa34:
    // 0x17fa34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17fa34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17fa38:
    // 0x17fa38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17fa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA3Cu;
        // 0x17fa40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FA44u;
    // 0x17fa44: 0x0  nop
    ctx->pc = 0x17fa44u;
    // NOP
    ctx->pc = 0x17fa48u;
}
