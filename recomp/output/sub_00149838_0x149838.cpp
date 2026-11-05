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

// Function: sub_00149838
// Address: 0x149838 - 0x1498d0
void sub_00149838_0x149838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149838_0x149838");
#endif

    switch (ctx->pc) {
        case 0x149890u: goto label_149890;
        case 0x1498a4u: goto label_1498a4;
        case 0x1498b0u: goto label_1498b0;
        default: break;
    }

    ctx->pc = 0x149838u;

    // 0x149838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14983c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14983cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x149840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x149844: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x149844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x149848: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x149848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14984c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14984cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x149850: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x149850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x149854: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x149854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x149858: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x149858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14985c: 0x8cc40700  lw          $a0, 0x700($a2)
    ctx->pc = 0x14985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1792)));
    // 0x149860: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x149864: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x149864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x149868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x149868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14986c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149870: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x149870u;
    {
        const bool branch_taken_0x149870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149870u;
        // 0x149874: 0x8c700108  lw          $s0, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149870) {
            ctx->pc = 0x149898u;
            goto label_149898;
        }
    }
    ctx->pc = 0x149878u;
    // 0x149878: 0x8cc20704  lw          $v0, 0x704($a2)
    ctx->pc = 0x149878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1796)));
    // 0x14987c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14987Cu;
    {
        const bool branch_taken_0x14987c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14987Cu;
        // 0x149880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14987c) {
            ctx->pc = 0x14989Cu;
            goto label_14989c;
        }
    }
    ctx->pc = 0x149884u;
    // 0x149884: 0x8cc506a0  lw          $a1, 0x6A0($a2)
    ctx->pc = 0x149884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1696)));
    // 0x149888: 0xc08dff6  jal         func_237FD8
    ctx->pc = 0x149888u;
    SET_GPR_U32(ctx, 31, 0x149890u);
    ctx->pc = 0x14988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149888u;
    // 0x14988c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237FD8u, 0x149888u, 0x149890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149890u;
label_149890:
    // 0x149890: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149890u;
    {
        const bool branch_taken_0x149890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149890u;
        // 0x149894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149890) {
            ctx->pc = 0x1498A8u;
            goto label_1498a8;
        }
    }
    ctx->pc = 0x149898u;
label_149898:
    // 0x149898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14989c:
    // 0x14989c: 0xc08dff6  jal         func_237FD8
    ctx->pc = 0x14989Cu;
    SET_GPR_U32(ctx, 31, 0x1498A4u);
    ctx->pc = 0x1498A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14989Cu;
    // 0x1498a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237FD8u, 0x14989Cu, 0x1498A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1498A4u;
label_1498a4:
    // 0x1498a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1498a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1498a8:
    // 0x1498a8: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1498A8u;
    SET_GPR_U32(ctx, 31, 0x1498B0u);
    ctx->pc = 0x1498ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1498A8u;
    // 0x1498ac: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1498A8u, 0x1498B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1498B0u;
label_1498b0:
    // 0x1498b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1498b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1498b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1498b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1498b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1498B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1498BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498B8u;
        // 0x1498bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1498B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1498C0u;
    // 0x1498c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1498c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1498c4: 0x0  nop
    ctx->pc = 0x1498c4u;
    // NOP
    // 0x1498c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1498c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1498cc: 0x0  nop
    ctx->pc = 0x1498ccu;
    // NOP
    ctx->pc = 0x1498d0u;
}
