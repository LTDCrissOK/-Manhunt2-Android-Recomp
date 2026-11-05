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

// Function: sub_002B2768
// Address: 0x2b2768 - 0x2b2810
void sub_002B2768_0x2b2768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2768_0x2b2768");
#endif

    switch (ctx->pc) {
        case 0x2b2798u: goto label_2b2798;
        case 0x2b27d4u: goto label_2b27d4;
        default: break;
    }

    ctx->pc = 0x2b2768u;

    // 0x2b2768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b276c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2774: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b2774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2778: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b277c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b277cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2780: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b2780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b2784: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b2784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2788: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B2788u;
    {
        const bool branch_taken_0x2b2788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2788u;
        // 0x2b278c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2788) {
            ctx->pc = 0x2B27F4u;
            goto label_2b27f4;
        }
    }
    ctx->pc = 0x2B2790u;
    // 0x2b2790: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b2790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b2794: 0x0  nop
    ctx->pc = 0x2b2794u;
    // NOP
label_2b2798:
    // 0x2b2798: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2b2798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b279c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b27a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b27a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b27a4: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2B27A4u;
    {
        const bool branch_taken_0x2b27a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b27a4) {
            ctx->pc = 0x2B27A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B27A4u;
            // 0x2b27a8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B27E4u;
            goto label_2b27e4;
        }
    }
    ctx->pc = 0x2B27ACu;
    // 0x2b27ac: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2b27acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x2b27b0: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x2b27b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x2b27b4: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2b27b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2b27b8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B27B8u;
    {
        const bool branch_taken_0x2b27b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b27b8) {
            ctx->pc = 0x2B27BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B27B8u;
            // 0x2b27bc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B27E4u;
            goto label_2b27e4;
        }
    }
    ctx->pc = 0x2B27C0u;
    // 0x2b27c0: 0x8c840274  lw          $a0, 0x274($a0)
    ctx->pc = 0x2b27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x2b27c4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B27C4u;
    {
        const bool branch_taken_0x2b27c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b27c4) {
            ctx->pc = 0x2B27C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B27C4u;
            // 0x2b27c8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B27E4u;
            goto label_2b27e4;
        }
    }
    ctx->pc = 0x2B27CCu;
    // 0x2b27cc: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2B27CCu;
    SET_GPR_U32(ctx, 31, 0x2B27D4u);
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2B27CCu, 0x2B27D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B27D4u;
label_2b27d4:
    // 0x2b27d4: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B27D4u;
    {
        const bool branch_taken_0x2b27d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2b27d4) {
            ctx->pc = 0x2B27D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B27D4u;
            // 0x2b27d8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B27E4u;
            goto label_2b27e4;
        }
    }
    ctx->pc = 0x2B27DCu;
    // 0x2b27dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B27DCu;
    {
        const bool branch_taken_0x2b27dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27DCu;
        // 0x2b27e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b27dc) {
            ctx->pc = 0x2B27F8u;
            goto label_2b27f8;
        }
    }
    ctx->pc = 0x2B27E4u;
label_2b27e4:
    // 0x2b27e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b27e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b27e8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2b27e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b27ec: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2B27ECu;
    {
        const bool branch_taken_0x2b27ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b27ec) {
            ctx->pc = 0x2B27F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B27ECu;
            // 0x2b27f0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2798;
        }
    }
    ctx->pc = 0x2B27F4u;
label_2b27f4:
    // 0x2b27f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b27f8:
    // 0x2b27f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b27f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b27fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b27fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2800: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2804: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b2804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2808: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2808u;
        // 0x2b280c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2810u;
}
