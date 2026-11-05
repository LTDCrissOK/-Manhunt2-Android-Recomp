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

// Function: sub_00176A20
// Address: 0x176a20 - 0x176a98
void sub_00176A20_0x176a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176A20_0x176a20");
#endif

    switch (ctx->pc) {
        case 0x176a20u: goto label_176a20;
        case 0x176a24u: goto label_176a24;
        case 0x176a28u: goto label_176a28;
        case 0x176a2cu: goto label_176a2c;
        case 0x176a30u: goto label_176a30;
        case 0x176a34u: goto label_176a34;
        case 0x176a38u: goto label_176a38;
        case 0x176a3cu: goto label_176a3c;
        case 0x176a40u: goto label_176a40;
        case 0x176a44u: goto label_176a44;
        case 0x176a48u: goto label_176a48;
        case 0x176a4cu: goto label_176a4c;
        case 0x176a50u: goto label_176a50;
        case 0x176a54u: goto label_176a54;
        case 0x176a58u: goto label_176a58;
        case 0x176a5cu: goto label_176a5c;
        case 0x176a60u: goto label_176a60;
        case 0x176a64u: goto label_176a64;
        case 0x176a68u: goto label_176a68;
        case 0x176a6cu: goto label_176a6c;
        case 0x176a70u: goto label_176a70;
        case 0x176a74u: goto label_176a74;
        case 0x176a78u: goto label_176a78;
        case 0x176a7cu: goto label_176a7c;
        case 0x176a80u: goto label_176a80;
        case 0x176a84u: goto label_176a84;
        case 0x176a88u: goto label_176a88;
        case 0x176a8cu: goto label_176a8c;
        case 0x176a90u: goto label_176a90;
        case 0x176a94u: goto label_176a94;
        default: break;
    }

    ctx->pc = 0x176a20u;

label_176a20:
    // 0x176a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176a24:
    // 0x176a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176a28:
    // 0x176a28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176a2c:
    // 0x176a2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176a30:
    // 0x176a30: 0xc04f9a4  jal         func_13E690
label_176a34:
    if (ctx->pc == 0x176A34u) {
        ctx->pc = 0x176A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A30u;
        // 0x176a34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A38u;
        goto label_176a38;
    }
    ctx->pc = 0x176A30u;
    SET_GPR_U32(ctx, 31, 0x176A38u);
    ctx->pc = 0x176A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A30u;
    // 0x176a34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x176A30u, 0x176A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A38u;
label_176a38:
    // 0x176a38: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x176a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_176a3c:
    // 0x176a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176a40:
    // 0x176a40: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x176a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_176a44:
    // 0x176a44: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176a48:
    // 0x176a48: 0xc04f8fc  jal         func_13E3F0
label_176a4c:
    if (ctx->pc == 0x176A4Cu) {
        ctx->pc = 0x176A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A48u;
        // 0x176a4c: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A50u;
        goto label_176a50;
    }
    ctx->pc = 0x176A48u;
    SET_GPR_U32(ctx, 31, 0x176A50u);
    ctx->pc = 0x176A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A48u;
    // 0x176a4c: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176A48u, 0x176A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A50u;
label_176a50:
    // 0x176a50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176a54:
    // 0x176a54: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x176a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_176a58:
    // 0x176a58: 0xc045fbc  jal         func_117EF0
label_176a5c:
    if (ctx->pc == 0x176A5Cu) {
        ctx->pc = 0x176A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A58u;
        // 0x176a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A60u;
        goto label_176a60;
    }
    ctx->pc = 0x176A58u;
    SET_GPR_U32(ctx, 31, 0x176A60u);
    ctx->pc = 0x176A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A58u;
    // 0x176a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117EF0u, 0x176A58u, 0x176A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176A60u;
label_176a60:
    // 0x176a60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176a64:
    // 0x176a64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176a68:
    // 0x176a68: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x176a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_176a6c:
    // 0x176a6c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176a70:
    // 0x176a70: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176a74:
    // 0x176a74: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176a78:
    // 0x176a78: 0x40f809  jalr        $v0
label_176a7c:
    if (ctx->pc == 0x176A7Cu) {
        ctx->pc = 0x176A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A78u;
        // 0x176a7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A80u;
        goto label_176a80;
    }
    ctx->pc = 0x176A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176A80u);
        ctx->pc = 0x176A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A78u;
        // 0x176a7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176A78u, 0x176A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176A80u;
label_176a80:
    // 0x176a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176a84:
    // 0x176a84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176a88:
    // 0x176a88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176a8c:
    // 0x176a8c: 0x3e00008  jr          $ra
label_176a90:
    if (ctx->pc == 0x176A90u) {
        ctx->pc = 0x176A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A8Cu;
        // 0x176a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A94u;
        goto label_176a94;
    }
    ctx->pc = 0x176A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A8Cu;
        // 0x176a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176A94u;
label_176a94:
    // 0x176a94: 0x0  nop
    ctx->pc = 0x176a94u;
    // NOP
    ctx->pc = 0x176a98u;
}
