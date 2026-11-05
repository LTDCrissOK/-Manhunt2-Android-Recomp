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

// Function: sub_00384BF0
// Address: 0x384bf0 - 0x384cb8
void sub_00384BF0_0x384bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384BF0_0x384bf0");
#endif

    switch (ctx->pc) {
        case 0x384c30u: goto label_384c30;
        case 0x384c68u: goto label_384c68;
        case 0x384c80u: goto label_384c80;
        case 0x384c90u: goto label_384c90;
        case 0x384c98u: goto label_384c98;
        default: break;
    }

    ctx->pc = 0x384bf0u;

    // 0x384bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384bf4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384bf8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x384bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x384bfc: 0x2471dfe4  addiu       $s1, $v1, -0x201C
    ctx->pc = 0x384bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959076));
    // 0x384c00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x384c00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x384c04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384c08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x384c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384c0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x384c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x384c10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x384c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x384c14: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x384c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x384c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384c1c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x384c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384c20: 0x1065001e  beq         $v1, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x384C20u;
    {
        const bool branch_taken_0x384c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x384C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C20u;
        // 0x384c24: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c20) {
            ctx->pc = 0x384C9Cu;
            goto label_384c9c;
        }
    }
    ctx->pc = 0x384C28u;
    // 0x384c28: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x384C28u;
    SET_GPR_U32(ctx, 31, 0x384C30u);
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x384C28u, 0x384C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C30u;
label_384c30:
    // 0x384c30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384c34: 0x2472dfdc  addiu       $s2, $v1, -0x2024
    ctx->pc = 0x384c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x384c38: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x384c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x384c3c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x384c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384c40: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x384c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x384c44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384c48: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x384c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384c4c: 0xacf0000c  sw          $s0, 0xC($a3)
    ctx->pc = 0x384c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 16));
    // 0x384c50: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x384c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x384c54: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x384c54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384c58: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x384c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384c5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384c5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384c60: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x384C60u;
    SET_GPR_U32(ctx, 31, 0x384C68u);
    ctx->pc = 0x384C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384C60u;
    // 0x384c64: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x384C60u, 0x384C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C68u;
label_384c68:
    // 0x384c68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x384C68u;
    {
        const bool branch_taken_0x384c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C68u;
        // 0x384c6c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c68) {
            ctx->pc = 0x384C88u;
            goto label_384c88;
        }
    }
    ctx->pc = 0x384C70u;
    // 0x384c70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x384c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x384c74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x384c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x384c78: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384C78u;
    SET_GPR_U32(ctx, 31, 0x384C80u);
    ctx->pc = 0x384C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384C78u;
    // 0x384c7c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384C78u, 0x384C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C80u;
label_384c80:
    // 0x384c80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x384C80u;
    {
        const bool branch_taken_0x384c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C80u;
        // 0x384c84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c80) {
            ctx->pc = 0x384C9Cu;
            goto label_384c9c;
        }
    }
    ctx->pc = 0x384C88u;
label_384c88:
    // 0x384c88: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384C88u;
    SET_GPR_U32(ctx, 31, 0x384C90u);
    ctx->pc = 0x384C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384C88u;
    // 0x384c8c: 0x24848e60  addiu       $a0, $a0, -0x71A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384C88u, 0x384C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C90u;
label_384c90:
    // 0x384c90: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384C90u;
    SET_GPR_U32(ctx, 31, 0x384C98u);
    ctx->pc = 0x384C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384C90u;
    // 0x384c94: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384C90u, 0x384C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C98u;
label_384c98:
    // 0x384c98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_384c9c:
    // 0x384c9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x384c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384ca0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384ca4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384ca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384ca8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x384ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x384cac: 0x3e00008  jr          $ra
    ctx->pc = 0x384CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CACu;
        // 0x384cb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384CB4u;
    // 0x384cb4: 0x0  nop
    ctx->pc = 0x384cb4u;
    // NOP
    ctx->pc = 0x384cb8u;
}
