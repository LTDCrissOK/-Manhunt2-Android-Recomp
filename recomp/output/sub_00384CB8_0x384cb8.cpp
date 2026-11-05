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

// Function: sub_00384CB8
// Address: 0x384cb8 - 0x384d80
void sub_00384CB8_0x384cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384CB8_0x384cb8");
#endif

    switch (ctx->pc) {
        case 0x384cf8u: goto label_384cf8;
        case 0x384d30u: goto label_384d30;
        case 0x384d48u: goto label_384d48;
        case 0x384d58u: goto label_384d58;
        case 0x384d60u: goto label_384d60;
        default: break;
    }

    ctx->pc = 0x384cb8u;

    // 0x384cb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384cbc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384cc0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x384cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x384cc4: 0x2471dfe4  addiu       $s1, $v1, -0x201C
    ctx->pc = 0x384cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959076));
    // 0x384cc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x384cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x384ccc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384cd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x384cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384cd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x384cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x384cd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x384cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x384cdc: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x384cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x384ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ce4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x384ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ce8: 0x1065001e  beq         $v1, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x384CE8u;
    {
        const bool branch_taken_0x384ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x384CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CE8u;
        // 0x384cec: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ce8) {
            ctx->pc = 0x384D64u;
            goto label_384d64;
        }
    }
    ctx->pc = 0x384CF0u;
    // 0x384cf0: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x384CF0u;
    SET_GPR_U32(ctx, 31, 0x384CF8u);
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x384CF0u, 0x384CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384CF8u;
label_384cf8:
    // 0x384cf8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384cfc: 0x2472dfdc  addiu       $s2, $v1, -0x2024
    ctx->pc = 0x384cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x384d00: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x384d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x384d04: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x384d04u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384d08: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x384d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x384d0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384d10: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x384d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384d14: 0xacf0000c  sw          $s0, 0xC($a3)
    ctx->pc = 0x384d14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 16));
    // 0x384d18: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x384d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x384d1c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x384d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384d20: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x384d20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384d24: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384d24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384d28: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x384D28u;
    SET_GPR_U32(ctx, 31, 0x384D30u);
    ctx->pc = 0x384D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D28u;
    // 0x384d2c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x384D28u, 0x384D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D30u;
label_384d30:
    // 0x384d30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x384D30u;
    {
        const bool branch_taken_0x384d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D30u;
        // 0x384d34: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d30) {
            ctx->pc = 0x384D50u;
            goto label_384d50;
        }
    }
    ctx->pc = 0x384D38u;
    // 0x384d38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x384d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x384d3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x384d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x384d40: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384D40u;
    SET_GPR_U32(ctx, 31, 0x384D48u);
    ctx->pc = 0x384D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D40u;
    // 0x384d44: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384D40u, 0x384D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D48u;
label_384d48:
    // 0x384d48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x384D48u;
    {
        const bool branch_taken_0x384d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D48u;
        // 0x384d4c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d48) {
            ctx->pc = 0x384D64u;
            goto label_384d64;
        }
    }
    ctx->pc = 0x384D50u;
label_384d50:
    // 0x384d50: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384D50u;
    SET_GPR_U32(ctx, 31, 0x384D58u);
    ctx->pc = 0x384D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D50u;
    // 0x384d54: 0x24848e88  addiu       $a0, $a0, -0x7178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384D50u, 0x384D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D58u;
label_384d58:
    // 0x384d58: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384D58u;
    SET_GPR_U32(ctx, 31, 0x384D60u);
    ctx->pc = 0x384D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D58u;
    // 0x384d5c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384D58u, 0x384D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D60u;
label_384d60:
    // 0x384d60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_384d64:
    // 0x384d64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x384d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384d68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384d6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384d70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x384d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x384d74: 0x3e00008  jr          $ra
    ctx->pc = 0x384D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D74u;
        // 0x384d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384D7Cu;
    // 0x384d7c: 0x0  nop
    ctx->pc = 0x384d7cu;
    // NOP
    ctx->pc = 0x384d80u;
}
