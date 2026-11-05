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

// Function: sub_003CD878
// Address: 0x3cd878 - 0x3cd900
void sub_003CD878_0x3cd878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD878_0x3cd878");
#endif

    switch (ctx->pc) {
        case 0x3cd890u: goto label_3cd890;
        case 0x3cd898u: goto label_3cd898;
        case 0x3cd8b8u: goto label_3cd8b8;
        case 0x3cd8ccu: goto label_3cd8cc;
        case 0x3cd8e8u: goto label_3cd8e8;
        default: break;
    }

    ctx->pc = 0x3cd878u;

    // 0x3cd878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cd878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cd87c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3cd87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3cd880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3cd880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3cd884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cd884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3cd888: 0xc0f3600  jal         func_3CD800
    ctx->pc = 0x3CD888u;
    SET_GPR_U32(ctx, 31, 0x3CD890u);
    ctx->pc = 0x3CD88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD888u;
    // 0x3cd88c: 0x3c110043  lui         $s1, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD800u, 0x3CD888u, 0x3CD890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD890u;
label_3cd890:
    // 0x3cd890: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CD890u;
    SET_GPR_U32(ctx, 31, 0x3CD898u);
    ctx->pc = 0x3CD894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD890u;
    // 0x3cd894: 0x8e24d698  lw          $a0, -0x2968($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CD890u, 0x3CD898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD898u;
label_3cd898:
    // 0x3cd898: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cd898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3cd89c: 0x24704e40  addiu       $s0, $v1, 0x4E40
    ctx->pc = 0x3cd89cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 20032));
    // 0x3cd8a0: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x3cd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x3cd8a4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3cd8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3cd8a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3CD8A8u;
    {
        const bool branch_taken_0x3cd8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8A8u;
        // 0x3cd8ac: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd8a8) {
            ctx->pc = 0x3CD8E0u;
            goto label_3cd8e0;
        }
    }
    ctx->pc = 0x3CD8B0u;
    // 0x3cd8b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3cd8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3cd8b4: 0x0  nop
    ctx->pc = 0x3cd8b4u;
    // NOP
label_3cd8b8:
    // 0x3cd8b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CD8B8u;
    {
        const bool branch_taken_0x3cd8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd8b8) {
            ctx->pc = 0x3CD8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD8B8u;
            // 0x3cd8bc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD8D4u;
            goto label_3cd8d4;
        }
    }
    ctx->pc = 0x3CD8C0u;
    // 0x3cd8c0: 0x8e24d698  lw          $a0, -0x2968($s1)
    ctx->pc = 0x3cd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956696)));
    // 0x3cd8c4: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3CD8C4u;
    SET_GPR_U32(ctx, 31, 0x3CD8CCu);
    ctx->pc = 0x3CD8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD8C4u;
    // 0x3cd8c8: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3CD8C4u, 0x3CD8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD8CCu;
label_3cd8cc:
    // 0x3cd8cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CD8CCu;
    {
        const bool branch_taken_0x3cd8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8CCu;
        // 0x3cd8d0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd8cc) {
            ctx->pc = 0x3CD8ECu;
            goto label_3cd8ec;
        }
    }
    ctx->pc = 0x3CD8D4u;
label_3cd8d4:
    // 0x3cd8d4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3cd8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3cd8d8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3CD8D8u;
    {
        const bool branch_taken_0x3cd8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cd8d8) {
            ctx->pc = 0x3CD8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD8D8u;
            // 0x3cd8dc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd8b8;
        }
    }
    ctx->pc = 0x3CD8E0u;
label_3cd8e0:
    // 0x3cd8e0: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3CD8E0u;
    SET_GPR_U32(ctx, 31, 0x3CD8E8u);
    ctx->pc = 0x3CD8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD8E0u;
    // 0x3cd8e4: 0x8e24d698  lw          $a0, -0x2968($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3CD8E0u, 0x3CD8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD8E8u;
label_3cd8e8:
    // 0x3cd8e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cd8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd8ec:
    // 0x3cd8ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cd8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd8f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3cd8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cd8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8F8u;
        // 0x3cd8fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD900u;
}
