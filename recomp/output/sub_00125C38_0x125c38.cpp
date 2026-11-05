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

// Function: sub_00125C38
// Address: 0x125c38 - 0x125cf8
void sub_00125C38_0x125c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125C38_0x125c38");
#endif

    switch (ctx->pc) {
        case 0x125c64u: goto label_125c64;
        case 0x125c80u: goto label_125c80;
        case 0x125ca8u: goto label_125ca8;
        case 0x125cc8u: goto label_125cc8;
        default: break;
    }

    ctx->pc = 0x125c38u;

    // 0x125c38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x125c44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x125c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x125c48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125c50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x125c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x125c54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x125c58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x125c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x125c5c: 0xc049f04  jal         func_127C10
    ctx->pc = 0x125C5Cu;
    SET_GPR_U32(ctx, 31, 0x125C64u);
    ctx->pc = 0x125C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125C5Cu;
    // 0x125c60: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x125C5Cu, 0x125C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125C64u;
label_125c64:
    // 0x125c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x125c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125c6c: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x125C6Cu;
    {
        const bool branch_taken_0x125c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x125C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C6Cu;
        // 0x125c70: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c6c) {
            ctx->pc = 0x125CD4u;
            goto label_125cd4;
        }
    }
    ctx->pc = 0x125C74u;
    // 0x125c74: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x125c74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125c78: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x125c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x125c7c: 0x0  nop
    ctx->pc = 0x125c7cu;
    // NOP
label_125c80:
    // 0x125c80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x125c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125c84: 0x24420870  addiu       $v0, $v0, 0x870
    ctx->pc = 0x125c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x125c88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x125c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x125c8c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x125c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x125c90: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x125c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x125c94: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x125C94u;
    {
        const bool branch_taken_0x125c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x125C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125C94u;
        // 0x125c98: 0xac540008  sw          $s4, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125c94) {
            ctx->pc = 0x125CACu;
            goto label_125cac;
        }
    }
    ctx->pc = 0x125C9Cu;
    // 0x125c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ca0: 0xc049f32  jal         func_127CC8
    ctx->pc = 0x125CA0u;
    SET_GPR_U32(ctx, 31, 0x125CA8u);
    ctx->pc = 0x125CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CA0u;
    // 0x125ca4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CC8u, 0x125CA0u, 0x125CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CA8u;
label_125ca8:
    // 0x125ca8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_125cac:
    // 0x125cac: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125CACu;
    {
        const bool branch_taken_0x125cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x125CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CACu;
        // 0x125cb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125cac) {
            ctx->pc = 0x125CBCu;
            goto label_125cbc;
        }
    }
    ctx->pc = 0x125CB4u;
    // 0x125cb4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x125cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x125cb8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x125cb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_125cbc:
    // 0x125cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125cc0: 0xc049f04  jal         func_127C10
    ctx->pc = 0x125CC0u;
    SET_GPR_U32(ctx, 31, 0x125CC8u);
    ctx->pc = 0x125CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125CC0u;
    // 0x125cc4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C10u, 0x125CC0u, 0x125CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125CC8u;
label_125cc8:
    // 0x125cc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ccc: 0x1613ffec  bne         $s0, $s3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x125CCCu;
    {
        const bool branch_taken_0x125ccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x125CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CCCu;
        // 0x125cd0: 0x101180  sll         $v0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ccc) {
            ctx->pc = 0x125C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125c80;
        }
    }
    ctx->pc = 0x125CD4u;
label_125cd4:
    // 0x125cd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125cd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125cdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125cdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125ce0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x125ce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x125ce4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125ce4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125ce8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x125ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125cec: 0x3e00008  jr          $ra
    ctx->pc = 0x125CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125CECu;
        // 0x125cf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125CF4u;
    // 0x125cf4: 0x0  nop
    ctx->pc = 0x125cf4u;
    // NOP
    ctx->pc = 0x125cf8u;
}
