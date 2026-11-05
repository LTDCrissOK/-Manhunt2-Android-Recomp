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

// Function: sub_003B1C30
// Address: 0x3b1c30 - 0x3b1cf8
void sub_003B1C30_0x3b1c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1C30_0x3b1c30");
#endif

    switch (ctx->pc) {
        case 0x3b1c58u: goto label_3b1c58;
        case 0x3b1c68u: goto label_3b1c68;
        case 0x3b1c78u: goto label_3b1c78;
        case 0x3b1c88u: goto label_3b1c88;
        case 0x3b1c98u: goto label_3b1c98;
        case 0x3b1ca8u: goto label_3b1ca8;
        case 0x3b1cb8u: goto label_3b1cb8;
        case 0x3b1cd4u: goto label_3b1cd4;
        case 0x3b1ce0u: goto label_3b1ce0;
        default: break;
    }

    ctx->pc = 0x3b1c30u;

    // 0x3b1c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b1c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b1c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b1c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b1c44: 0x260401b4  addiu       $a0, $s0, 0x1B4
    ctx->pc = 0x3b1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x3b1c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b1c4c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3b1c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3b1c50: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1C50u;
    SET_GPR_U32(ctx, 31, 0x3B1C58u);
    ctx->pc = 0x3B1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C50u;
    // 0x3b1c54: 0x8e1101b0  lw          $s1, 0x1B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1C50u, 0x3B1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C58u;
label_3b1c58:
    // 0x3b1c58: 0x260401e4  addiu       $a0, $s0, 0x1E4
    ctx->pc = 0x3b1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x3b1c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c60: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1C60u;
    SET_GPR_U32(ctx, 31, 0x3B1C68u);
    ctx->pc = 0x3B1C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C60u;
    // 0x3b1c64: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1C60u, 0x3B1C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C68u;
label_3b1c68:
    // 0x3b1c68: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x3b1c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x3b1c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c70: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1C70u;
    SET_GPR_U32(ctx, 31, 0x3B1C78u);
    ctx->pc = 0x3B1C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C70u;
    // 0x3b1c74: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1C70u, 0x3B1C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C78u;
label_3b1c78:
    // 0x3b1c78: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x3b1c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x3b1c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c80: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1C80u;
    SET_GPR_U32(ctx, 31, 0x3B1C88u);
    ctx->pc = 0x3B1C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C80u;
    // 0x3b1c84: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1C80u, 0x3B1C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C88u;
label_3b1c88:
    // 0x3b1c88: 0x26040420  addiu       $a0, $s0, 0x420
    ctx->pc = 0x3b1c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    // 0x3b1c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c90: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1C90u;
    SET_GPR_U32(ctx, 31, 0x3B1C98u);
    ctx->pc = 0x3B1C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C90u;
    // 0x3b1c94: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1C90u, 0x3B1C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C98u;
label_3b1c98:
    // 0x3b1c98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b1c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b1c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ca0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1CA0u;
    SET_GPR_U32(ctx, 31, 0x3B1CA8u);
    ctx->pc = 0x3B1CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1CA0u;
    // 0x3b1ca4: 0x24060180  addiu       $a2, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1CA0u, 0x3B1CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1CA8u;
label_3b1ca8:
    // 0x3b1ca8: 0x26040720  addiu       $a0, $s0, 0x720
    ctx->pc = 0x3b1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x3b1cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1cb0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B1CB0u;
    SET_GPR_U32(ctx, 31, 0x3B1CB8u);
    ctx->pc = 0x3B1CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1CB0u;
    // 0x3b1cb4: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B1CB0u, 0x3B1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1CB8u;
label_3b1cb8:
    // 0x3b1cb8: 0xa20001a5  sb          $zero, 0x1A5($s0)
    ctx->pc = 0x3b1cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 421), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b1cbc: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x3b1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x3b1cc0: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x3b1cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x3b1cc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1CC4u;
    {
        const bool branch_taken_0x3b1cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CC4u;
        // 0x3b1cc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1cc4) {
            ctx->pc = 0x3B1CE4u;
            goto label_3b1ce4;
        }
    }
    ctx->pc = 0x3B1CCCu;
    // 0x3b1ccc: 0xc0ecba0  jal         func_3B2E80
    ctx->pc = 0x3B1CCCu;
    SET_GPR_U32(ctx, 31, 0x3B1CD4u);
    ctx->pc = 0x3B1CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1CCCu;
    // 0x3b1cd0: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2E80u, 0x3B1CCCu, 0x3B1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1CD4u;
label_3b1cd4:
    // 0x3b1cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b1cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1cd8: 0xc0ecb88  jal         func_3B2E20
    ctx->pc = 0x3B1CD8u;
    SET_GPR_U32(ctx, 31, 0x3B1CE0u);
    ctx->pc = 0x3B1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1CD8u;
    // 0x3b1cdc: 0x2405101c  addiu       $a1, $zero, 0x101C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2E20u, 0x3B1CD8u, 0x3B1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1CE0u;
label_3b1ce0:
    // 0x3b1ce0: 0xae0201b0  sw          $v0, 0x1B0($s0)
    ctx->pc = 0x3b1ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 2));
label_3b1ce4:
    // 0x3b1ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1ce8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b1ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1CF0u;
        // 0x3b1cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1CF8u;
}
