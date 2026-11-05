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

// Function: sub_001A3978
// Address: 0x1a3978 - 0x1a39f0
void sub_001A3978_0x1a3978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3978_0x1a3978");
#endif

    switch (ctx->pc) {
        case 0x1a398cu: goto label_1a398c;
        case 0x1a3994u: goto label_1a3994;
        case 0x1a39b8u: goto label_1a39b8;
        default: break;
    }

    ctx->pc = 0x1a3978u;

    // 0x1a3978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a3978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a397c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a397cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3980: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a3980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a3984: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A3984u;
    SET_GPR_U32(ctx, 31, 0x1A398Cu);
    ctx->pc = 0x1A3988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3984u;
    // 0x1a3988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A3984u, 0x1A398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A398Cu;
label_1a398c:
    // 0x1a398c: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x1A398Cu;
    SET_GPR_U32(ctx, 31, 0x1A3994u);
    ctx->pc = 0x1A3990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A398Cu;
    // 0x1a3990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x1A398Cu, 0x1A3994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3994u;
label_1a3994:
    // 0x1a3994: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a3994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a3998: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3998u;
    {
        const bool branch_taken_0x1a3998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3998) {
            ctx->pc = 0x1A399Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3998u;
            // 0x1a399c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A39C0u;
            goto label_1a39c0;
        }
    }
    ctx->pc = 0x1A39A0u;
    // 0x1a39a0: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1a39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1a39a4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1a39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a39a8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A39A8u;
    {
        const bool branch_taken_0x1a39a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a39a8) {
            ctx->pc = 0x1A39ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A39A8u;
            // 0x1a39ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A39C0u;
            goto label_1a39c0;
        }
    }
    ctx->pc = 0x1A39B0u;
    // 0x1a39b0: 0xc068e7c  jal         func_1A39F0
    ctx->pc = 0x1A39B0u;
    SET_GPR_U32(ctx, 31, 0x1A39B8u);
    ctx->pc = 0x1A39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A39B0u;
    // 0x1a39b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A39F0u, 0x1A39B0u, 0x1A39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A39B8u;
label_1a39b8:
    // 0x1a39b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A39B8u;
    {
        const bool branch_taken_0x1a39b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39B8u;
        // 0x1a39bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39b8) {
            ctx->pc = 0x1A39DCu;
            goto label_1a39dc;
        }
    }
    ctx->pc = 0x1A39C0u;
label_1a39c0:
    // 0x1a39c0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1a39c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1a39c4: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x1a39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1a39c8: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x1a39c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1a39cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a39d0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a39d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a39d4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1a39d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1a39d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1a39d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a39dc:
    // 0x1a39dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a39dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a39e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a39e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a39e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A39E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39E4u;
        // 0x1a39e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A39E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A39ECu;
    // 0x1a39ec: 0x0  nop
    ctx->pc = 0x1a39ecu;
    // NOP
    ctx->pc = 0x1a39f0u;
}
