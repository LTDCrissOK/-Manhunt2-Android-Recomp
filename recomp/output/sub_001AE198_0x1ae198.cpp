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

// Function: sub_001AE198
// Address: 0x1ae198 - 0x1ae228
void sub_001AE198_0x1ae198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE198_0x1ae198");
#endif

    switch (ctx->pc) {
        case 0x1ae1acu: goto label_1ae1ac;
        case 0x1ae1b4u: goto label_1ae1b4;
        case 0x1ae1c8u: goto label_1ae1c8;
        case 0x1ae1f0u: goto label_1ae1f0;
        case 0x1ae218u: goto label_1ae218;
        default: break;
    }

    ctx->pc = 0x1ae198u;

    // 0x1ae198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae1a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ae1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ae1a4: 0xc06c4f4  jal         func_1B13D0
    ctx->pc = 0x1AE1A4u;
    SET_GPR_U32(ctx, 31, 0x1AE1ACu);
    ctx->pc = 0x1AE1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1A4u;
    // 0x1ae1a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B13D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B13D0u, 0x1AE1A4u, 0x1AE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1ACu;
label_1ae1ac:
    // 0x1ae1ac: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1AE1ACu;
    SET_GPR_U32(ctx, 31, 0x1AE1B4u);
    ctx->pc = 0x1AE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1ACu;
    // 0x1ae1b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1AE1ACu, 0x1AE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1B4u;
label_1ae1b4:
    // 0x1ae1b4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1ae1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1ae1b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AE1B8u;
    {
        const bool branch_taken_0x1ae1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae1b8) {
            ctx->pc = 0x1AE1E8u;
            goto label_1ae1e8;
        }
    }
    ctx->pc = 0x1AE1C0u;
    // 0x1ae1c0: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AE1C0u;
    SET_GPR_U32(ctx, 31, 0x1AE1C8u);
    ctx->pc = 0x1AE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1C0u;
    // 0x1ae1c4: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AE1C0u, 0x1AE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1C8u;
label_1ae1c8:
    // 0x1ae1c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE1C8u;
    {
        const bool branch_taken_0x1ae1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1C8u;
        // 0x1ae1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1c8) {
            ctx->pc = 0x1AE1DCu;
            goto label_1ae1dc;
        }
    }
    ctx->pc = 0x1AE1D0u;
    // 0x1ae1d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae1d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AE1D4u;
    {
        const bool branch_taken_0x1ae1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1D4u;
        // 0x1ae1d8: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1d4) {
            ctx->pc = 0x1AE210u;
            goto label_1ae210;
        }
    }
    ctx->pc = 0x1AE1DCu;
label_1ae1dc:
    // 0x1ae1dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae1e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AE1E0u;
    {
        const bool branch_taken_0x1ae1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1E0u;
        // 0x1ae1e4: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1e0) {
            ctx->pc = 0x1AE210u;
            goto label_1ae210;
        }
    }
    ctx->pc = 0x1AE1E8u;
label_1ae1e8:
    // 0x1ae1e8: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AE1E8u;
    SET_GPR_U32(ctx, 31, 0x1AE1F0u);
    ctx->pc = 0x1AE1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE1E8u;
    // 0x1ae1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AE1E8u, 0x1AE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE1F0u;
label_1ae1f0:
    // 0x1ae1f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ae1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae1f8: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE1F8u;
    {
        const bool branch_taken_0x1ae1f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1F8u;
        // 0x1ae1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1f8) {
            ctx->pc = 0x1AE208u;
            goto label_1ae208;
        }
    }
    ctx->pc = 0x1AE200u;
    // 0x1ae200: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE200u;
    {
        const bool branch_taken_0x1ae200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE200u;
        // 0x1ae204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae200) {
            ctx->pc = 0x1AE218u;
            goto label_1ae218;
        }
    }
    ctx->pc = 0x1AE208u;
label_1ae208:
    // 0x1ae208: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ae208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ae20c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae210:
    // 0x1ae210: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE210u;
    SET_GPR_U32(ctx, 31, 0x1AE218u);
    ctx->pc = 0x1AE214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE210u;
    // 0x1ae214: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE210u, 0x1AE218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE218u;
label_1ae218:
    // 0x1ae218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae21c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ae21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae220: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE220u;
        // 0x1ae224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE228u;
}
