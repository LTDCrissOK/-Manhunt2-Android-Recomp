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

// Function: sub_00135D28
// Address: 0x135d28 - 0x135db0
void sub_00135D28_0x135d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135D28_0x135d28");
#endif

    switch (ctx->pc) {
        case 0x135d28u: goto label_135d28;
        case 0x135d2cu: goto label_135d2c;
        case 0x135d30u: goto label_135d30;
        case 0x135d34u: goto label_135d34;
        case 0x135d38u: goto label_135d38;
        case 0x135d3cu: goto label_135d3c;
        case 0x135d40u: goto label_135d40;
        case 0x135d44u: goto label_135d44;
        case 0x135d48u: goto label_135d48;
        case 0x135d4cu: goto label_135d4c;
        case 0x135d50u: goto label_135d50;
        case 0x135d54u: goto label_135d54;
        case 0x135d58u: goto label_135d58;
        case 0x135d5cu: goto label_135d5c;
        case 0x135d60u: goto label_135d60;
        case 0x135d64u: goto label_135d64;
        case 0x135d68u: goto label_135d68;
        case 0x135d6cu: goto label_135d6c;
        case 0x135d70u: goto label_135d70;
        case 0x135d74u: goto label_135d74;
        case 0x135d78u: goto label_135d78;
        case 0x135d7cu: goto label_135d7c;
        case 0x135d80u: goto label_135d80;
        case 0x135d84u: goto label_135d84;
        case 0x135d88u: goto label_135d88;
        case 0x135d8cu: goto label_135d8c;
        case 0x135d90u: goto label_135d90;
        case 0x135d94u: goto label_135d94;
        case 0x135d98u: goto label_135d98;
        case 0x135d9cu: goto label_135d9c;
        case 0x135da0u: goto label_135da0;
        case 0x135da4u: goto label_135da4;
        case 0x135da8u: goto label_135da8;
        case 0x135dacu: goto label_135dac;
        default: break;
    }

    ctx->pc = 0x135d28u;

label_135d28:
    // 0x135d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_135d2c:
    // 0x135d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135d30:
    // 0x135d30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_135d34:
    // 0x135d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_135d38:
    // 0x135d38: 0xc04f750  jal         func_13DD40
label_135d3c:
    if (ctx->pc == 0x135D3Cu) {
        ctx->pc = 0x135D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D38u;
        // 0x135d3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D40u;
        goto label_135d40;
    }
    ctx->pc = 0x135D38u;
    SET_GPR_U32(ctx, 31, 0x135D40u);
    ctx->pc = 0x135D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D38u;
    // 0x135d3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x135D38u, 0x135D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D40u;
label_135d40:
    // 0x135d40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x135d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135d44:
    // 0x135d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135d48:
    // 0x135d48: 0xc04d868  jal         func_1361A0
label_135d4c:
    if (ctx->pc == 0x135D4Cu) {
        ctx->pc = 0x135D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D48u;
        // 0x135d4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D50u;
        goto label_135d50;
    }
    ctx->pc = 0x135D48u;
    SET_GPR_U32(ctx, 31, 0x135D50u);
    ctx->pc = 0x135D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D48u;
    // 0x135d4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1361A0u, 0x135D48u, 0x135D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D50u;
label_135d50:
    // 0x135d50: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x135d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_135d54:
    // 0x135d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135d58:
    // 0x135d58: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x135d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_135d5c:
    // 0x135d5c: 0x40f809  jalr        $v0
label_135d60:
    if (ctx->pc == 0x135D60u) {
        ctx->pc = 0x135D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D5Cu;
        // 0x135d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D64u;
        goto label_135d64;
    }
    ctx->pc = 0x135D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135D64u);
        ctx->pc = 0x135D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D5Cu;
        // 0x135d60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D5Cu, 0x135D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135D64u;
label_135d64:
    // 0x135d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135d68:
    // 0x135d68: 0xc04e0c0  jal         func_138300
label_135d6c:
    if (ctx->pc == 0x135D6Cu) {
        ctx->pc = 0x135D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D68u;
        // 0x135d6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D70u;
        goto label_135d70;
    }
    ctx->pc = 0x135D68u;
    SET_GPR_U32(ctx, 31, 0x135D70u);
    ctx->pc = 0x135D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D68u;
    // 0x135d6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x135D68u, 0x135D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D70u;
label_135d70:
    // 0x135d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135d74:
    // 0x135d74: 0xc04f74a  jal         func_13DD28
label_135d78:
    if (ctx->pc == 0x135D78u) {
        ctx->pc = 0x135D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D74u;
        // 0x135d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D7Cu;
        goto label_135d7c;
    }
    ctx->pc = 0x135D74u;
    SET_GPR_U32(ctx, 31, 0x135D7Cu);
    ctx->pc = 0x135D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D74u;
    // 0x135d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x135D74u, 0x135D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D7Cu;
label_135d7c:
    // 0x135d7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x135d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_135d80:
    // 0x135d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x135d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135d84:
    // 0x135d84: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x135d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_135d88:
    // 0x135d88: 0x60f809  jalr        $v1
label_135d8c:
    if (ctx->pc == 0x135D8Cu) {
        ctx->pc = 0x135D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D88u;
        // 0x135d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D90u;
        goto label_135d90;
    }
    ctx->pc = 0x135D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x135D90u);
        ctx->pc = 0x135D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D88u;
        // 0x135d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D88u, 0x135D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135D90u;
label_135d90:
    // 0x135d90: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x135d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_135d94:
    // 0x135d94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135d98:
    // 0x135d98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x135d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_135d9c:
    // 0x135d9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_135da0:
    // 0x135da0: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x135da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_135da4:
    // 0x135da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135da8:
    // 0x135da8: 0x3e00008  jr          $ra
label_135dac:
    if (ctx->pc == 0x135DACu) {
        ctx->pc = 0x135DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DA8u;
        // 0x135dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135DB0u;
        goto label_fallthrough_0x135da8;
    }
    ctx->pc = 0x135DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DA8u;
        // 0x135dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135da8:
    ctx->pc = 0x135DB0u;
}
