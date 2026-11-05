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

// Function: sub_00235ED0
// Address: 0x235ed0 - 0x235f38
void sub_00235ED0_0x235ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235ED0_0x235ed0");
#endif

    switch (ctx->pc) {
        case 0x235ed0u: goto label_235ed0;
        case 0x235ed4u: goto label_235ed4;
        case 0x235ed8u: goto label_235ed8;
        case 0x235edcu: goto label_235edc;
        case 0x235ee0u: goto label_235ee0;
        case 0x235ee4u: goto label_235ee4;
        case 0x235ee8u: goto label_235ee8;
        case 0x235eecu: goto label_235eec;
        case 0x235ef0u: goto label_235ef0;
        case 0x235ef4u: goto label_235ef4;
        case 0x235ef8u: goto label_235ef8;
        case 0x235efcu: goto label_235efc;
        case 0x235f00u: goto label_235f00;
        case 0x235f04u: goto label_235f04;
        case 0x235f08u: goto label_235f08;
        case 0x235f0cu: goto label_235f0c;
        case 0x235f10u: goto label_235f10;
        case 0x235f14u: goto label_235f14;
        case 0x235f18u: goto label_235f18;
        case 0x235f1cu: goto label_235f1c;
        case 0x235f20u: goto label_235f20;
        case 0x235f24u: goto label_235f24;
        case 0x235f28u: goto label_235f28;
        case 0x235f2cu: goto label_235f2c;
        case 0x235f30u: goto label_235f30;
        case 0x235f34u: goto label_235f34;
        default: break;
    }

    ctx->pc = 0x235ed0u;

label_235ed0:
    // 0x235ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_235ed4:
    // 0x235ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_235ed8:
    // 0x235ed8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x235ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_235edc:
    // 0x235edc: 0xc0899bc  jal         func_2266F0
label_235ee0:
    if (ctx->pc == 0x235EE0u) {
        ctx->pc = 0x235EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EDCu;
        // 0x235ee0: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EE4u;
        goto label_235ee4;
    }
    ctx->pc = 0x235EDCu;
    SET_GPR_U32(ctx, 31, 0x235EE4u);
    ctx->pc = 0x235EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235EDCu;
    // 0x235ee0: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x235EDCu, 0x235EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235EE4u;
label_235ee4:
    // 0x235ee4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x235ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235ee8:
    // 0x235ee8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_235eec:
    if (ctx->pc == 0x235EECu) {
        ctx->pc = 0x235EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EE8u;
        // 0x235eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EF0u;
        goto label_235ef0;
    }
    ctx->pc = 0x235EE8u;
    {
        const bool branch_taken_0x235ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EE8u;
        // 0x235eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ee8) {
            ctx->pc = 0x235F24u;
            goto label_235f24;
        }
    }
    ctx->pc = 0x235EF0u;
label_235ef0:
    // 0x235ef0: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x235ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_235ef4:
    // 0x235ef4: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x235ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_235ef8:
    // 0x235ef8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x235ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_235efc:
    // 0x235efc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_235f00:
    if (ctx->pc == 0x235F00u) {
        ctx->pc = 0x235F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EFCu;
        // 0x235f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F04u;
        goto label_235f04;
    }
    ctx->pc = 0x235EFCu;
    {
        const bool branch_taken_0x235efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EFCu;
        // 0x235f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235efc) {
            ctx->pc = 0x235F24u;
            goto label_235f24;
        }
    }
    ctx->pc = 0x235F04u;
label_235f04:
    // 0x235f04: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x235f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_235f08:
    // 0x235f08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235f0c:
    // 0x235f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x235f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235f10:
    // 0x235f10: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x235f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_235f14:
    // 0x235f14: 0x40f809  jalr        $v0
label_235f18:
    if (ctx->pc == 0x235F18u) {
        ctx->pc = 0x235F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F14u;
        // 0x235f18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F1Cu;
        goto label_235f1c;
    }
    ctx->pc = 0x235F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235F1Cu);
        ctx->pc = 0x235F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F14u;
        // 0x235f18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235F14u, 0x235F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235F1Cu;
label_235f1c:
    // 0x235f1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_235f20:
    if (ctx->pc == 0x235F20u) {
        ctx->pc = 0x235F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F1Cu;
        // 0x235f20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F24u;
        goto label_235f24;
    }
    ctx->pc = 0x235F1Cu;
    {
        const bool branch_taken_0x235f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F1Cu;
        // 0x235f20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f1c) {
            ctx->pc = 0x235F28u;
            goto label_235f28;
        }
    }
    ctx->pc = 0x235F24u;
label_235f24:
    // 0x235f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235f28:
    // 0x235f28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x235f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_235f2c:
    // 0x235f2c: 0x3e00008  jr          $ra
label_235f30:
    if (ctx->pc == 0x235F30u) {
        ctx->pc = 0x235F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F2Cu;
        // 0x235f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F34u;
        goto label_235f34;
    }
    ctx->pc = 0x235F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F2Cu;
        // 0x235f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235F34u;
label_235f34:
    // 0x235f34: 0x0  nop
    ctx->pc = 0x235f34u;
    // NOP
    ctx->pc = 0x235f38u;
}
