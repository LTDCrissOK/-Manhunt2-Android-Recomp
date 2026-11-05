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

// Function: sub_00132440
// Address: 0x132440 - 0x1324e0
void sub_00132440_0x132440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132440_0x132440");
#endif

    switch (ctx->pc) {
        case 0x13246cu: goto label_13246c;
        case 0x132488u: goto label_132488;
        case 0x1324a4u: goto label_1324a4;
        case 0x1324b8u: goto label_1324b8;
        default: break;
    }

    ctx->pc = 0x132440u;

    // 0x132440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x132444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13244c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132458: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x132458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13245c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13245Cu;
    {
        const bool branch_taken_0x13245c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13245Cu;
        // 0x132460: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13245c) {
            ctx->pc = 0x132474u;
            goto label_132474;
        }
    }
    ctx->pc = 0x132464u;
    // 0x132464: 0xc04b3a0  jal         func_12CE80
    ctx->pc = 0x132464u;
    SET_GPR_U32(ctx, 31, 0x13246Cu);
    ctx->pc = 0x132468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132464u;
    // 0x132468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE80u, 0x132464u, 0x13246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13246Cu;
label_13246c:
    // 0x13246c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13246Cu;
    {
        const bool branch_taken_0x13246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13246c) {
            ctx->pc = 0x132488u;
            goto label_132488;
        }
    }
    ctx->pc = 0x132474u;
label_132474:
    // 0x132474: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x132474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x132478: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132478u;
    {
        const bool branch_taken_0x132478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x132478) {
            ctx->pc = 0x132488u;
            goto label_132488;
        }
    }
    ctx->pc = 0x132480u;
    // 0x132480: 0xc04b3a0  jal         func_12CE80
    ctx->pc = 0x132480u;
    SET_GPR_U32(ctx, 31, 0x132488u);
    ctx->pc = 0x132484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132480u;
    // 0x132484: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE80u, 0x132480u, 0x132488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132488u;
label_132488:
    // 0x132488: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x132488u;
    {
        const bool branch_taken_0x132488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132488) {
            ctx->pc = 0x13248Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132488u;
            // 0x13248c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1324CCu;
            goto label_1324cc;
        }
    }
    ctx->pc = 0x132490u;
    // 0x132490: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x132490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x132494: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x132494u;
    {
        const bool branch_taken_0x132494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x132494) {
            ctx->pc = 0x132498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132494u;
            // 0x132498: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1324A8u;
            goto label_1324a8;
        }
    }
    ctx->pc = 0x13249Cu;
    // 0x13249c: 0xc04b396  jal         func_12CE58
    ctx->pc = 0x13249Cu;
    SET_GPR_U32(ctx, 31, 0x1324A4u);
    ctx->pc = 0x1324A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13249Cu;
    // 0x1324a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE58u, 0x13249Cu, 0x1324A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1324A4u;
label_1324a4:
    // 0x1324a4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1324a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1324a8:
    // 0x1324a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1324A8u;
    {
        const bool branch_taken_0x1324a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1324ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324A8u;
        // 0x1324ac: 0x111100  sll         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1324a8) {
            ctx->pc = 0x1324BCu;
            goto label_1324bc;
        }
    }
    ctx->pc = 0x1324B0u;
    // 0x1324b0: 0xc04b396  jal         func_12CE58
    ctx->pc = 0x1324B0u;
    SET_GPR_U32(ctx, 31, 0x1324B8u);
    ctx->pc = 0x1324B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1324B0u;
    // 0x1324b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE58u, 0x1324B0u, 0x1324B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1324B8u;
label_1324b8:
    // 0x1324b8: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1324b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1324bc:
    // 0x1324bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1324bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1324c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1324c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1324c4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1324c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1324c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1324c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1324cc:
    // 0x1324cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1324ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1324d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1324d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1324d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1324D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1324D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1324D4u;
        // 0x1324d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1324D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1324DCu;
    // 0x1324dc: 0x0  nop
    ctx->pc = 0x1324dcu;
    // NOP
    ctx->pc = 0x1324e0u;
}
