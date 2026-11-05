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

// Function: sub_001D7C10
// Address: 0x1d7c10 - 0x1d7d00
void sub_001D7C10_0x1d7c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7C10_0x1d7c10");
#endif

    switch (ctx->pc) {
        case 0x1d7c40u: goto label_1d7c40;
        case 0x1d7c4cu: goto label_1d7c4c;
        case 0x1d7c54u: goto label_1d7c54;
        case 0x1d7c68u: goto label_1d7c68;
        case 0x1d7c70u: goto label_1d7c70;
        case 0x1d7c8cu: goto label_1d7c8c;
        case 0x1d7ca0u: goto label_1d7ca0;
        case 0x1d7ca8u: goto label_1d7ca8;
        case 0x1d7cb0u: goto label_1d7cb0;
        case 0x1d7cb8u: goto label_1d7cb8;
        case 0x1d7cc0u: goto label_1d7cc0;
        case 0x1d7cdcu: goto label_1d7cdc;
        default: break;
    }

    ctx->pc = 0x1d7c10u;

    // 0x1d7c10: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1d7c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x1d7c14: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1d7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1d7c18: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x1d7c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x1d7c1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c20: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x1d7c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d7c24: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x1d7c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x1d7c28: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x1d7c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x1d7c2c: 0x24c690e0  addiu       $a2, $a2, -0x6F20
    ctx->pc = 0x1d7c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938848));
    // 0x1d7c30: 0xffbf0218  sd          $ra, 0x218($sp)
    ctx->pc = 0x1d7c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 31));
    // 0x1d7c34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c38: 0xc075e68  jal         func_1D79A0
    ctx->pc = 0x1D7C38u;
    SET_GPR_U32(ctx, 31, 0x1D7C40u);
    ctx->pc = 0x1D7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C38u;
    // 0x1d7c3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D79A0u, 0x1D7C38u, 0x1D7C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C40u;
label_1d7c40:
    // 0x1d7c40: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1d7c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1d7c44: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1D7C44u;
    SET_GPR_U32(ctx, 31, 0x1D7C4Cu);
    ctx->pc = 0x1D7C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C44u;
    // 0x1d7c48: 0x2484ec20  addiu       $a0, $a0, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1D7C44u, 0x1D7C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C4Cu;
label_1d7c4c:
    // 0x1d7c4c: 0xc09dc80  jal         func_277200
    ctx->pc = 0x1D7C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C54u);
    ctx->pc = 0x1D7C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C4Cu;
    // 0x1d7c50: 0x3a22021  addu        $a0, $sp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277200u, 0x1D7C4Cu, 0x1D7C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C54u;
label_1d7c54:
    // 0x1d7c54: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D7C54u;
    {
        const bool branch_taken_0x1d7c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C54u;
        // 0x1d7c58: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c54) {
            ctx->pc = 0x1D7CE4u;
            goto label_1d7ce4;
        }
    }
    ctx->pc = 0x1D7C5Cu;
    // 0x1d7c5c: 0x24529b10  addiu       $s2, $v0, -0x64F0
    ctx->pc = 0x1d7c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x1d7c60: 0xc07f494  jal         func_1FD250
    ctx->pc = 0x1D7C60u;
    SET_GPR_U32(ctx, 31, 0x1D7C68u);
    ctx->pc = 0x1D7C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C60u;
    // 0x1d7c64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD250u, 0x1D7C60u, 0x1D7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C68u;
label_1d7c68:
    // 0x1d7c68: 0xc0b32e4  jal         func_2CCB90
    ctx->pc = 0x1D7C68u;
    SET_GPR_U32(ctx, 31, 0x1D7C70u);
    ctx->pc = 0x2CCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCB90u, 0x1D7C68u, 0x1D7C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C70u;
label_1d7c70:
    // 0x1d7c70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7C70u;
    {
        const bool branch_taken_0x1d7c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C70u;
        // 0x1d7c74: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c70) {
            ctx->pc = 0x1D7CB8u;
            goto label_1d7cb8;
        }
    }
    ctx->pc = 0x1D7C78u;
    // 0x1d7c78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c7c: 0x26104ef0  addiu       $s0, $s0, 0x4EF0
    ctx->pc = 0x1d7c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20208));
    // 0x1d7c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c84: 0xc0aecae  jal         func_2BB2B8
    ctx->pc = 0x1D7C84u;
    SET_GPR_U32(ctx, 31, 0x1D7C8Cu);
    ctx->pc = 0x1D7C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C84u;
    // 0x1d7c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB2B8u, 0x1D7C84u, 0x1D7C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C8Cu;
label_1d7c8c:
    // 0x1d7c8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d7c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7c98: 0xc0b3368  jal         func_2CCDA0
    ctx->pc = 0x1D7C98u;
    SET_GPR_U32(ctx, 31, 0x1D7CA0u);
    ctx->pc = 0x1D7C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C98u;
    // 0x1d7c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCDA0u, 0x1D7C98u, 0x1D7CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CA0u;
label_1d7ca0:
    // 0x1d7ca0: 0xc0ae9f6  jal         func_2BA7D8
    ctx->pc = 0x1D7CA0u;
    SET_GPR_U32(ctx, 31, 0x1D7CA8u);
    ctx->pc = 0x1D7CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CA0u;
    // 0x1d7ca4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x1D7CA0u, 0x1D7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CA8u;
label_1d7ca8:
    // 0x1d7ca8: 0xc0ae94a  jal         func_2BA528
    ctx->pc = 0x1D7CA8u;
    SET_GPR_U32(ctx, 31, 0x1D7CB0u);
    ctx->pc = 0x1D7CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CA8u;
    // 0x1d7cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x1D7CA8u, 0x1D7CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CB0u;
label_1d7cb0:
    // 0x1d7cb0: 0xc0b3360  jal         func_2CCD80
    ctx->pc = 0x1D7CB0u;
    SET_GPR_U32(ctx, 31, 0x1D7CB8u);
    ctx->pc = 0x2CCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD80u, 0x1D7CB0u, 0x1D7CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CB8u;
label_1d7cb8:
    // 0x1d7cb8: 0xc075eba  jal         func_1D7AE8
    ctx->pc = 0x1D7CB8u;
    SET_GPR_U32(ctx, 31, 0x1D7CC0u);
    ctx->pc = 0x1D7CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CB8u;
    // 0x1d7cbc: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7AE8u, 0x1D7CB8u, 0x1D7CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CC0u;
label_1d7cc0:
    // 0x1d7cc0: 0x9203b44c  lbu         $v1, -0x4BB4($s0)
    ctx->pc = 0x1d7cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294947916)));
    // 0x1d7cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7cc8: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x1d7cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x1d7ccc: 0xa202b44c  sb          $v0, -0x4BB4($s0)
    ctx->pc = 0x1d7cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7cd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cd4: 0xc07f482  jal         func_1FD208
    ctx->pc = 0x1D7CD4u;
    SET_GPR_U32(ctx, 31, 0x1D7CDCu);
    ctx->pc = 0x1D7CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CD4u;
    // 0x1d7cd8: 0xa2238d50  sb          $v1, -0x72B0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294937936), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD208u, 0x1D7CD4u, 0x1D7CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CDCu;
label_1d7cdc:
    // 0x1d7cdc: 0x92228d50  lbu         $v0, -0x72B0($s1)
    ctx->pc = 0x1d7cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294937936)));
    // 0x1d7ce0: 0xa202b44c  sb          $v0, -0x4BB4($s0)
    ctx->pc = 0x1d7ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294947916), (uint8_t)GPR_U32(ctx, 2));
label_1d7ce4:
    // 0x1d7ce4: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1d7ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1d7ce8: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1d7ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d7cec: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1d7cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1d7cf0: 0xdfbf0218  ld          $ra, 0x218($sp)
    ctx->pc = 0x1d7cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1d7cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CF4u;
        // 0x1d7cf8: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7CFCu;
    // 0x1d7cfc: 0x0  nop
    ctx->pc = 0x1d7cfcu;
    // NOP
    ctx->pc = 0x1d7d00u;
}
