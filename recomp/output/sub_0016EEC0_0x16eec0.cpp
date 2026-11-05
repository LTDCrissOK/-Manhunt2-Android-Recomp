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

// Function: sub_0016EEC0
// Address: 0x16eec0 - 0x16ef60
void sub_0016EEC0_0x16eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EEC0_0x16eec0");
#endif

    switch (ctx->pc) {
        case 0x16eef0u: goto label_16eef0;
        case 0x16ef04u: goto label_16ef04;
        case 0x16ef18u: goto label_16ef18;
        case 0x16ef28u: goto label_16ef28;
        default: break;
    }

    ctx->pc = 0x16eec0u;

    // 0x16eec0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16eec4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x16eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x16eec8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16eec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eecc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x16eeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x16eed0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x16eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x16eed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16eed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eed8: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x16eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x16eedc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16eee0: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x16eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x16eee4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x16eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x16eee8: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x16EEE8u;
    SET_GPR_U32(ctx, 31, 0x16EEF0u);
    ctx->pc = 0x16EEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EEE8u;
    // 0x16eeec: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x16EEE8u, 0x16EEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EEF0u;
label_16eef0:
    // 0x16eef0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16eef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eef4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16EEF4u;
    {
        const bool branch_taken_0x16eef4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEF4u;
        // 0x16eef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eef4) {
            ctx->pc = 0x16EF0Cu;
            goto label_16ef0c;
        }
    }
    ctx->pc = 0x16EEFCu;
    // 0x16eefc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16EEFCu;
    {
        const bool branch_taken_0x16eefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEFCu;
        // 0x16ef00: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eefc) {
            ctx->pc = 0x16EF48u;
            goto label_16ef48;
        }
    }
    ctx->pc = 0x16EF04u;
label_16ef04:
    // 0x16ef04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16EF04u;
    {
        const bool branch_taken_0x16ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF04u;
        // 0x16ef08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef04) {
            ctx->pc = 0x16EF44u;
            goto label_16ef44;
        }
    }
    ctx->pc = 0x16EF0Cu;
label_16ef0c:
    // 0x16ef0c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x16EF0Cu;
    {
        const bool branch_taken_0x16ef0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF0Cu;
        // 0x16ef10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef0c) {
            ctx->pc = 0x16EF40u;
            goto label_16ef40;
        }
    }
    ctx->pc = 0x16EF14u;
    // 0x16ef14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_16ef18:
    // 0x16ef18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16ef18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef1c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x16ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16ef20: 0xc05bbd8  jal         func_16EF60
    ctx->pc = 0x16EF20u;
    SET_GPR_U32(ctx, 31, 0x16EF28u);
    ctx->pc = 0x16EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EF20u;
    // 0x16ef24: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EF60u, 0x16EF20u, 0x16EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF28u;
label_16ef28:
    // 0x16ef28: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16EF28u;
    {
        const bool branch_taken_0x16ef28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF28u;
        // 0x16ef2c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef28) {
            ctx->pc = 0x16EF04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ef04;
        }
    }
    ctx->pc = 0x16EF30u;
    // 0x16ef30: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16ef30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ef34: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x16ef34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x16ef38: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16EF38u;
    {
        const bool branch_taken_0x16ef38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF38u;
        // 0x16ef3c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef38) {
            ctx->pc = 0x16EF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ef18;
        }
    }
    ctx->pc = 0x16EF40u;
label_16ef40:
    // 0x16ef40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ef40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ef44:
    // 0x16ef44: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x16ef44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16ef48:
    // 0x16ef48: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x16ef48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16ef4c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x16ef4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16ef50: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x16ef50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16ef54: 0x3e00008  jr          $ra
    ctx->pc = 0x16EF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF54u;
        // 0x16ef58: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EF5Cu;
    // 0x16ef5c: 0x0  nop
    ctx->pc = 0x16ef5cu;
    // NOP
    ctx->pc = 0x16ef60u;
}
