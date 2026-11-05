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

// Function: sub_001A5470
// Address: 0x1a5470 - 0x1a5518
void sub_001A5470_0x1a5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5470_0x1a5470");
#endif

    switch (ctx->pc) {
        case 0x1a5488u: goto label_1a5488;
        case 0x1a5498u: goto label_1a5498;
        default: break;
    }

    ctx->pc = 0x1a5470u;

    // 0x1a5470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5478: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a547c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5480: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A5480u;
    SET_GPR_U32(ctx, 31, 0x1A5488u);
    ctx->pc = 0x1A5484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5480u;
    // 0x1a5484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A5480u, 0x1A5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5488u;
label_1a5488:
    // 0x1a5488: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a5488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a548c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5490: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A5490u;
    SET_GPR_U32(ctx, 31, 0x1A5498u);
    ctx->pc = 0x1A5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5490u;
    // 0x1a5494: 0xac510158  sw          $s1, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A5490u, 0x1A5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5498u;
label_1a5498:
    // 0x1a5498: 0xac510160  sw          $s1, 0x160($v0)
    ctx->pc = 0x1a5498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 17));
    // 0x1a549c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a549cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a54a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a54a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a54a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a54a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a54a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A54A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54A8u;
        // 0x1a54ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54B0u;
    // 0x1a54b0: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1a54b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a54b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a54b8: 0x14470009  bne         $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A54B8u;
    {
        const bool branch_taken_0x1a54b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1A54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54B8u;
        // 0x1a54bc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54b8) {
            ctx->pc = 0x1A54E0u;
            goto label_1a54e0;
        }
    }
    ctx->pc = 0x1A54C0u;
    // 0x1a54c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a54c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1a54c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a54c8: 0x8c651004  lw          $a1, 0x1004($v1)
    ctx->pc = 0x1a54c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x1a54cc: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x1a54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1a54d0: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A54D0u;
    {
        const bool branch_taken_0x1a54d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54D0u;
        // 0x1a54d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54d0) {
            ctx->pc = 0x1A550Cu;
            goto label_1a550c;
        }
    }
    ctx->pc = 0x1A54D8u;
    // 0x1a54d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A54D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54D8u;
        // 0x1a54dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54E0u;
label_1a54e0:
    // 0x1a54e0: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A54E0u;
    {
        const bool branch_taken_0x1a54e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54E0u;
        // 0x1a54e4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54e0) {
            ctx->pc = 0x1A54F0u;
            goto label_1a54f0;
        }
    }
    ctx->pc = 0x1A54E8u;
    // 0x1a54e8: 0x14e20008  bne         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A54E8u;
    {
        const bool branch_taken_0x1a54e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A54ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54E8u;
        // 0x1a54ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54e8) {
            ctx->pc = 0x1A550Cu;
            goto label_1a550c;
        }
    }
    ctx->pc = 0x1A54F0u;
label_1a54f0:
    // 0x1a54f0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1a54f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a54f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1a54f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a54f8: 0x8cc51004  lw          $a1, 0x1004($a2)
    ctx->pc = 0x1a54f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
    // 0x1a54fc: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x1a54fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1a5500: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5500u;
    {
        const bool branch_taken_0x1a5500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A5504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5500u;
        // 0x1a5504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5500) {
            ctx->pc = 0x1A550Cu;
            goto label_1a550c;
        }
    }
    ctx->pc = 0x1A5508u;
    // 0x1a5508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a550c:
    // 0x1a550c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A550Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A550Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5514u;
    // 0x1a5514: 0x0  nop
    ctx->pc = 0x1a5514u;
    // NOP
    ctx->pc = 0x1a5518u;
}
