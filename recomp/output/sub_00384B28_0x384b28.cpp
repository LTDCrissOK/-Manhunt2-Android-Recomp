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

// Function: sub_00384B28
// Address: 0x384b28 - 0x384bf0
void sub_00384B28_0x384b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384B28_0x384b28");
#endif

    switch (ctx->pc) {
        case 0x384b68u: goto label_384b68;
        case 0x384ba0u: goto label_384ba0;
        case 0x384bb8u: goto label_384bb8;
        case 0x384bc8u: goto label_384bc8;
        case 0x384bd0u: goto label_384bd0;
        default: break;
    }

    ctx->pc = 0x384b28u;

    // 0x384b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384b2c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384b30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x384b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x384b34: 0x2471dfe4  addiu       $s1, $v1, -0x201C
    ctx->pc = 0x384b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959076));
    // 0x384b38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x384b38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x384b3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384b40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x384b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384b44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x384b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x384b48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x384b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x384b4c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x384b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x384b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384b54: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x384b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384b58: 0x1065001e  beq         $v1, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x384B58u;
    {
        const bool branch_taken_0x384b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x384B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B58u;
        // 0x384b5c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b58) {
            ctx->pc = 0x384BD4u;
            goto label_384bd4;
        }
    }
    ctx->pc = 0x384B60u;
    // 0x384b60: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x384B60u;
    SET_GPR_U32(ctx, 31, 0x384B68u);
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x384B60u, 0x384B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384B68u;
label_384b68:
    // 0x384b68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384b6c: 0x2472dfdc  addiu       $s2, $v1, -0x2024
    ctx->pc = 0x384b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x384b70: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x384b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x384b74: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x384b74u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384b78: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x384b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x384b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384b80: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x384b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384b84: 0xacf0000c  sw          $s0, 0xC($a3)
    ctx->pc = 0x384b84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 16));
    // 0x384b88: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x384b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x384b8c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x384b8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384b90: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x384b90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384b94: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384b94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384b98: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x384B98u;
    SET_GPR_U32(ctx, 31, 0x384BA0u);
    ctx->pc = 0x384B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384B98u;
    // 0x384b9c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x384B98u, 0x384BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384BA0u;
label_384ba0:
    // 0x384ba0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x384BA0u;
    {
        const bool branch_taken_0x384ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BA0u;
        // 0x384ba4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ba0) {
            ctx->pc = 0x384BC0u;
            goto label_384bc0;
        }
    }
    ctx->pc = 0x384BA8u;
    // 0x384ba8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x384ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x384bac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x384bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x384bb0: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384BB0u;
    SET_GPR_U32(ctx, 31, 0x384BB8u);
    ctx->pc = 0x384BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384BB0u;
    // 0x384bb4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384BB0u, 0x384BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384BB8u;
label_384bb8:
    // 0x384bb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x384BB8u;
    {
        const bool branch_taken_0x384bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BB8u;
        // 0x384bbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384bb8) {
            ctx->pc = 0x384BD4u;
            goto label_384bd4;
        }
    }
    ctx->pc = 0x384BC0u;
label_384bc0:
    // 0x384bc0: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384BC0u;
    SET_GPR_U32(ctx, 31, 0x384BC8u);
    ctx->pc = 0x384BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384BC0u;
    // 0x384bc4: 0x24848e38  addiu       $a0, $a0, -0x71C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384BC0u, 0x384BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384BC8u;
label_384bc8:
    // 0x384bc8: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384BC8u;
    SET_GPR_U32(ctx, 31, 0x384BD0u);
    ctx->pc = 0x384BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384BC8u;
    // 0x384bcc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384BC8u, 0x384BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384BD0u;
label_384bd0:
    // 0x384bd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_384bd4:
    // 0x384bd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x384bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384bd8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384bdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384bdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384be0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x384be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x384be4: 0x3e00008  jr          $ra
    ctx->pc = 0x384BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BE4u;
        // 0x384be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384BECu;
    // 0x384bec: 0x0  nop
    ctx->pc = 0x384becu;
    // NOP
    ctx->pc = 0x384bf0u;
}
