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

// Function: sub_001AF4A0
// Address: 0x1af4a0 - 0x1af508
void sub_001AF4A0_0x1af4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF4A0_0x1af4a0");
#endif

    switch (ctx->pc) {
        case 0x1af4b4u: goto label_1af4b4;
        case 0x1af4c8u: goto label_1af4c8;
        case 0x1af4ecu: goto label_1af4ec;
        default: break;
    }

    ctx->pc = 0x1af4a0u;

    // 0x1af4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af4a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af4a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af4ac: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AF4ACu;
    SET_GPR_U32(ctx, 31, 0x1AF4B4u);
    ctx->pc = 0x1AF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4ACu;
    // 0x1af4b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AF4ACu, 0x1AF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4B4u;
label_1af4b4:
    // 0x1af4b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af4b8: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1AF4B8u;
    {
        const bool branch_taken_0x1af4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4B8u;
        // 0x1af4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4b8) {
            ctx->pc = 0x1AF4F4u;
            goto label_1af4f4;
        }
    }
    ctx->pc = 0x1AF4C0u;
    // 0x1af4c0: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AF4C0u;
    SET_GPR_U32(ctx, 31, 0x1AF4C8u);
    ctx->pc = 0x1AF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4C0u;
    // 0x1af4c4: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AF4C0u, 0x1AF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4C8u;
label_1af4c8:
    // 0x1af4c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF4C8u;
    {
        const bool branch_taken_0x1af4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4C8u;
        // 0x1af4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4c8) {
            ctx->pc = 0x1AF4DCu;
            goto label_1af4dc;
        }
    }
    ctx->pc = 0x1AF4D0u;
    // 0x1af4d0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af4d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF4D4u;
    {
        const bool branch_taken_0x1af4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4D4u;
        // 0x1af4d8: 0x24060114  addiu       $a2, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4d4) {
            ctx->pc = 0x1AF4E4u;
            goto label_1af4e4;
        }
    }
    ctx->pc = 0x1AF4DCu;
label_1af4dc:
    // 0x1af4dc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af4e0: 0x24060112  addiu       $a2, $zero, 0x112
    ctx->pc = 0x1af4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
label_1af4e4:
    // 0x1af4e4: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF4E4u;
    SET_GPR_U32(ctx, 31, 0x1AF4ECu);
    ctx->pc = 0x1AF4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4E4u;
    // 0x1af4e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF4E4u, 0x1AF4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF4ECu;
label_1af4ec:
    // 0x1af4ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF4ECu;
    {
        const bool branch_taken_0x1af4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4ECu;
        // 0x1af4f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4ec) {
            ctx->pc = 0x1AF4F8u;
            goto label_1af4f8;
        }
    }
    ctx->pc = 0x1AF4F4u;
label_1af4f4:
    // 0x1af4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af4f8:
    // 0x1af4f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4FCu;
        // 0x1af500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF504u;
    // 0x1af504: 0x0  nop
    ctx->pc = 0x1af504u;
    // NOP
    ctx->pc = 0x1af508u;
}
