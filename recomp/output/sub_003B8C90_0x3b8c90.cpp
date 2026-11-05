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

// Function: sub_003B8C90
// Address: 0x3b8c90 - 0x3b8d28
void sub_003B8C90_0x3b8c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8C90_0x3b8c90");
#endif

    switch (ctx->pc) {
        case 0x3b8ca4u: goto label_3b8ca4;
        case 0x3b8ce4u: goto label_3b8ce4;
        case 0x3b8cf8u: goto label_3b8cf8;
        case 0x3b8d14u: goto label_3b8d14;
        default: break;
    }

    ctx->pc = 0x3b8c90u;

    // 0x3b8c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b8c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b8c94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b8c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8c98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b8c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b8c9c: 0xc0ee19a  jal         func_3B8668
    ctx->pc = 0x3B8C9Cu;
    SET_GPR_U32(ctx, 31, 0x3B8CA4u);
    ctx->pc = 0x3B8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8C9Cu;
    // 0x3b8ca0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8668u, 0x3B8C9Cu, 0x3B8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8CA4u;
label_3b8ca4:
    // 0x3b8ca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8CA4u;
    {
        const bool branch_taken_0x3b8ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8CA4u;
        // 0x3b8ca8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ca4) {
            ctx->pc = 0x3B8CB4u;
            goto label_3b8cb4;
        }
    }
    ctx->pc = 0x3B8CACu;
    // 0x3b8cac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3B8CACu;
    {
        const bool branch_taken_0x3b8cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8CACu;
        // 0x3b8cb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8cac) {
            ctx->pc = 0x3B8D18u;
            goto label_3b8d18;
        }
    }
    ctx->pc = 0x3B8CB4u;
label_3b8cb4:
    // 0x3b8cb4: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3b8cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3b8cb8: 0x2450be80  addiu       $s0, $v0, -0x4180
    ctx->pc = 0x3b8cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950528));
    // 0x3b8cbc: 0x2484c800  addiu       $a0, $a0, -0x3800
    ctx->pc = 0x3b8cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952960));
    // 0x3b8cc0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b8cc4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3b8cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b8cc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b8cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8ccc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b8cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8cd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b8cd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8cd4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b8cd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8cd8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3b8cd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b8cdc: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3B8CDCu;
    SET_GPR_U32(ctx, 31, 0x3B8CE4u);
    ctx->pc = 0x3B8CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8CDCu;
    // 0x3b8ce0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3B8CDCu, 0x3B8CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8CE4u;
label_3b8ce4:
    // 0x3b8ce4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8CE4u;
    {
        const bool branch_taken_0x3b8ce4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8CE4u;
        // 0x3b8ce8: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ce4) {
            ctx->pc = 0x3B8D00u;
            goto label_3b8d00;
        }
    }
    ctx->pc = 0x3B8CECu;
    // 0x3b8cec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3b8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3b8cf0: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3B8CF0u;
    SET_GPR_U32(ctx, 31, 0x3B8CF8u);
    ctx->pc = 0x3B8CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8CF0u;
    // 0x3b8cf4: 0x8c44acac  lw          $a0, -0x5354($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3B8CF0u, 0x3B8CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8CF8u;
label_3b8cf8:
    // 0x3b8cf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B8CF8u;
    {
        const bool branch_taken_0x3b8cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8CF8u;
        // 0x3b8cfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8cf8) {
            ctx->pc = 0x3B8D18u;
            goto label_3b8d18;
        }
    }
    ctx->pc = 0x3B8D00u;
label_3b8d00:
    // 0x3b8d00: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3b8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3b8d04: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3b8d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3b8d08: 0x8c64acac  lw          $a0, -0x5354($v1)
    ctx->pc = 0x3b8d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945964)));
    // 0x3b8d0c: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3B8D0Cu;
    SET_GPR_U32(ctx, 31, 0x3B8D14u);
    ctx->pc = 0x3B8D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8D0Cu;
    // 0x3b8d10: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3B8D0Cu, 0x3B8D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8D14u;
label_3b8d14:
    // 0x3b8d14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b8d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b8d18:
    // 0x3b8d18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b8d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b8d1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b8d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8d20: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8D20u;
        // 0x3b8d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8D28u;
}
