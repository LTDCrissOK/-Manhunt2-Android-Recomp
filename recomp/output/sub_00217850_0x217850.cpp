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

// Function: sub_00217850
// Address: 0x217850 - 0x2178f8
void sub_00217850_0x217850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217850_0x217850");
#endif

    switch (ctx->pc) {
        case 0x217860u: goto label_217860;
        case 0x217888u: goto label_217888;
        default: break;
    }

    ctx->pc = 0x217850u;

    // 0x217850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217858: 0xc0c4882  jal         func_312208
    ctx->pc = 0x217858u;
    SET_GPR_U32(ctx, 31, 0x217860u);
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x217858u, 0x217860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217860u;
label_217860:
    // 0x217860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x217860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217864: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x217864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217868: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x217868u;
    {
        const bool branch_taken_0x217868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217868u;
        // 0x21786c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217868) {
            ctx->pc = 0x2178E8u;
            goto label_2178e8;
        }
    }
    ctx->pc = 0x217870u;
    // 0x217870: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x217870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217874: 0x244a0c11  addiu       $t2, $v0, 0xC11
    ctx->pc = 0x217874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
    // 0x217878: 0x24c70002  addiu       $a3, $a2, 0x2
    ctx->pc = 0x217878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x21787c: 0x2409005f  addiu       $t1, $zero, 0x5F
    ctx->pc = 0x21787cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x217880: 0x2408004c  addiu       $t0, $zero, 0x4C
    ctx->pc = 0x217880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x217884: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x217884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_217888:
    // 0x217888: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x217888u;
    {
        const bool branch_taken_0x217888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217888) {
            ctx->pc = 0x21788Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217888u;
            // 0x21788c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2178DCu;
            goto label_2178dc;
        }
    }
    ctx->pc = 0x217890u;
    // 0x217890: 0x80c2fffe  lb          $v0, -0x2($a2)
    ctx->pc = 0x217890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967294)));
    // 0x217894: 0x54490011  bnel        $v0, $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x217894u;
    {
        const bool branch_taken_0x217894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x217894) {
            ctx->pc = 0x217898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217894u;
            // 0x217898: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2178DCu;
            goto label_2178dc;
        }
    }
    ctx->pc = 0x21789Cu;
    // 0x21789c: 0x80c4ffff  lb          $a0, -0x1($a2)
    ctx->pc = 0x21789cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x2178a0: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x2178a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2178a4: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x2178a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x2178a8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2178a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2178ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2178acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2178b0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2178b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2178b4: 0x54680009  bnel        $v1, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2178B4u;
    {
        const bool branch_taken_0x2178b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x2178b4) {
            ctx->pc = 0x2178B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2178B4u;
            // 0x2178b8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2178DCu;
            goto label_2178dc;
        }
    }
    ctx->pc = 0x2178BCu;
    // 0x2178bc: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2178bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2178c0: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x2178c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2178c4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2178C4u;
    {
        const bool branch_taken_0x2178c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2178c4) {
            ctx->pc = 0x2178C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2178C4u;
            // 0x2178c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2178DCu;
            goto label_2178dc;
        }
    }
    ctx->pc = 0x2178CCu;
    // 0x2178cc: 0x2862003a  slti        $v0, $v1, 0x3A
    ctx->pc = 0x2178ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2178d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2178D0u;
    {
        const bool branch_taken_0x2178d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2178D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178D0u;
        // 0x2178d4: 0x2462ffd0  addiu       $v0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178d0) {
            ctx->pc = 0x2178ECu;
            goto label_2178ec;
        }
    }
    ctx->pc = 0x2178D8u;
    // 0x2178d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2178d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2178dc:
    // 0x2178dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2178dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2178e0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2178E0u;
    {
        const bool branch_taken_0x2178e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2178E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178E0u;
        // 0x2178e4: 0xc7102b  sltu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178e0) {
            ctx->pc = 0x217888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217888;
        }
    }
    ctx->pc = 0x2178E8u;
label_2178e8:
    // 0x2178e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2178e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2178ec:
    // 0x2178ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2178ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2178f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2178F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2178F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2178F0u;
        // 0x2178f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2178F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2178F8u;
}
