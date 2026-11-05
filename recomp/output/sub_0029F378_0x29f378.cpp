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

// Function: sub_0029F378
// Address: 0x29f378 - 0x29f448
void sub_0029F378_0x29f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F378_0x29f378");
#endif

    switch (ctx->pc) {
        case 0x29f3b8u: goto label_29f3b8;
        case 0x29f3c0u: goto label_29f3c0;
        case 0x29f3d4u: goto label_29f3d4;
        case 0x29f41cu: goto label_29f41c;
        default: break;
    }

    ctx->pc = 0x29f378u;

    // 0x29f378: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x29f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x29f37c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x29f37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x29f380: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x29f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x29f384: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29f384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f388: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x29f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x29f38c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29f38cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f390: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x29f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x29f394: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29f394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f398: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x29f398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x29f39c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x29f39cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3a0: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x29f3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x29f3a4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x29f3a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3a8: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x29f3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x29f3ac: 0x24970014  addiu       $s7, $a0, 0x14
    ctx->pc = 0x29f3acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x29f3b0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x29f3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x29f3b4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x29f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_29f3b8:
    // 0x29f3b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29f3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3bc: 0x2978021  addu        $s0, $s4, $s7
    ctx->pc = 0x29f3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
label_29f3c0:
    // 0x29f3c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29f3c4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29F3C4u;
    {
        const bool branch_taken_0x29f3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f3c4) {
            ctx->pc = 0x29F3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F3C4u;
            // 0x29f3c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F3ECu;
            goto label_29f3ec;
        }
    }
    ctx->pc = 0x29F3CCu;
    // 0x29f3cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29F3CCu;
    SET_GPR_U32(ctx, 31, 0x29F3D4u);
    ctx->pc = 0x29F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F3CCu;
    // 0x29f3d0: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29F3CCu, 0x29F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3D4u;
label_29f3d4:
    // 0x29f3d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f3d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29F3D8u;
    {
        const bool branch_taken_0x29f3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f3d8) {
            ctx->pc = 0x29F3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F3D8u;
            // 0x29f3dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F3ECu;
            goto label_29f3ec;
        }
    }
    ctx->pc = 0x29F3E0u;
    // 0x29f3e0: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x29f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x29f3e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29F3E4u;
    {
        const bool branch_taken_0x29f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F3E4u;
        // 0x29f3e8: 0xaed10000  sw          $s1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f3e4) {
            ctx->pc = 0x29F41Cu;
            goto label_29f41c;
        }
    }
    ctx->pc = 0x29F3ECu;
label_29f3ec:
    // 0x29f3ec: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29f3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29f3f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x29F3F0u;
    {
        const bool branch_taken_0x29f3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F3F0u;
        // 0x29f3f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f3f0) {
            ctx->pc = 0x29F3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f3c0;
        }
    }
    ctx->pc = 0x29F3F8u;
    // 0x29f3f8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29f3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29f3fc: 0x2e420019  sltiu       $v0, $s2, 0x19
    ctx->pc = 0x29f3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29f400: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29F400u;
    {
        const bool branch_taken_0x29f400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F400u;
        // 0x29f404: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f400) {
            ctx->pc = 0x29F3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f3b8;
        }
    }
    ctx->pc = 0x29F408u;
    // 0x29f408: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29f40c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x29f40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x29f410: 0x24a5c558  addiu       $a1, $a1, -0x3AA8
    ctx->pc = 0x29f410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952280));
    // 0x29f414: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x29F414u;
    SET_GPR_U32(ctx, 31, 0x29F41Cu);
    ctx->pc = 0x29F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F414u;
    // 0x29f418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x29F414u, 0x29F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F41Cu;
label_29f41c:
    // 0x29f41c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x29f41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29f420: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x29f420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x29f424: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x29f424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29f428: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x29f428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x29f42c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x29f42cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x29f430: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x29f430u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x29f434: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x29f434u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x29f438: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x29f438u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x29f43c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x29f43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x29f440: 0x3e00008  jr          $ra
    ctx->pc = 0x29F440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F440u;
        // 0x29f444: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F448u;
}
