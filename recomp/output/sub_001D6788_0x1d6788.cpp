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

// Function: sub_001D6788
// Address: 0x1d6788 - 0x1d6808
void sub_001D6788_0x1d6788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6788_0x1d6788");
#endif

    switch (ctx->pc) {
        case 0x1d67b8u: goto label_1d67b8;
        case 0x1d67e0u: goto label_1d67e0;
        case 0x1d67f0u: goto label_1d67f0;
        default: break;
    }

    ctx->pc = 0x1d6788u;

    // 0x1d6788: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d6788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d678c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d678cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d6790: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x1d6790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x1d6794: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d6794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d6798: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6798u;
    {
        const bool branch_taken_0x1d6798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6798u;
        // 0x1d679c: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6798) {
            ctx->pc = 0x1D67C0u;
            goto label_1d67c0;
        }
    }
    ctx->pc = 0x1D67A0u;
    // 0x1d67a0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1d67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1d67a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d67a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d67a8: 0x8c46ef70  lw          $a2, -0x1090($v0)
    ctx->pc = 0x1d67a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BEF70u));
    // 0x1d67ac: 0x24a5d608  addiu       $a1, $a1, -0x29F8
    ctx->pc = 0x1d67acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956552));
    // 0x1d67b0: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1D67B0u;
    SET_GPR_U32(ctx, 31, 0x1D67B8u);
    ctx->pc = 0x1D67B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67B0u;
    // 0x1d67b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D67B0u, 0x1D67B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67B8u;
label_1d67b8:
    // 0x1d67b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D67B8u;
    {
        const bool branch_taken_0x1d67b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B8u;
        // 0x1d67bc: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67b8) {
            ctx->pc = 0x1D67E4u;
            goto label_1d67e4;
        }
    }
    ctx->pc = 0x1D67C0u;
label_1d67c0:
    // 0x1d67c0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1d67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1d67c4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1d67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x1d67c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d67c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d67cc: 0x8c46ee20  lw          $a2, -0x11E0($v0)
    ctx->pc = 0x1d67ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BEE20u));
    // 0x1d67d0: 0x8c67ef70  lw          $a3, -0x1090($v1)
    ctx->pc = 0x1d67d0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4BEF70u));
    // 0x1d67d4: 0x24a5d650  addiu       $a1, $a1, -0x29B0
    ctx->pc = 0x1d67d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956624));
    // 0x1d67d8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1D67D8u;
    SET_GPR_U32(ctx, 31, 0x1D67E0u);
    ctx->pc = 0x1D67DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67D8u;
    // 0x1d67dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1D67D8u, 0x1D67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67E0u;
label_1d67e0:
    // 0x1d67e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d67e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d67e4:
    // 0x1d67e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d67e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67e8: 0xc0aee00  jal         func_2BB800
    ctx->pc = 0x1D67E8u;
    SET_GPR_U32(ctx, 31, 0x1D67F0u);
    ctx->pc = 0x1D67ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67E8u;
    // 0x1d67ec: 0x24844f18  addiu       $a0, $a0, 0x4F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB800u, 0x1D67E8u, 0x1D67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67F0u;
label_1d67f0:
    // 0x1d67f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d67f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d67f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67F4u;
        // 0x1d67f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67FCu;
    // 0x1d67fc: 0x0  nop
    ctx->pc = 0x1d67fcu;
    // NOP
    // 0x1d6800: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d6800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d6804: 0x0  nop
    ctx->pc = 0x1d6804u;
    // NOP
    ctx->pc = 0x1d6808u;
}
