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

// Function: sub_0016F3A0
// Address: 0x16f3a0 - 0x16f478
void sub_0016F3A0_0x16f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F3A0_0x16f3a0");
#endif

    switch (ctx->pc) {
        case 0x16f3d0u: goto label_16f3d0;
        case 0x16f400u: goto label_16f400;
        case 0x16f434u: goto label_16f434;
        case 0x16f444u: goto label_16f444;
        case 0x16f454u: goto label_16f454;
        default: break;
    }

    ctx->pc = 0x16f3a0u;

    // 0x16f3a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f3a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16f3a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16f3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16f3ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16f3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16f3b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16f3b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3b4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16f3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16f3b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16f3b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16f3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16f3c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16f3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16f3c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16f3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16f3c8: 0xc05a618  jal         func_169860
    ctx->pc = 0x16F3C8u;
    SET_GPR_U32(ctx, 31, 0x16F3D0u);
    ctx->pc = 0x16F3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F3C8u;
    // 0x16f3cc: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16F3C8u, 0x16F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F3D0u;
label_16f3d0:
    // 0x16f3d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16f3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x16f3d8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x16f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x16f3dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x16f3dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3e0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16f3e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f3e8: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x16f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x16f3ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x16F3ECu;
    {
        const bool branch_taken_0x16f3ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F3ECu;
        // 0x16f3f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3ec) {
            ctx->pc = 0x16F418u;
            goto label_16f418;
        }
    }
    ctx->pc = 0x16F3F4u;
    // 0x16f3f4: 0x8c900ff0  lw          $s0, 0xFF0($a0)
    ctx->pc = 0x16f3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4080)));
    // 0x16f3f8: 0xc06e0f0  jal         func_1B83C0
    ctx->pc = 0x16F3F8u;
    SET_GPR_U32(ctx, 31, 0x16F400u);
    ctx->pc = 0x16F3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F3F8u;
    // 0x16f3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83C0u, 0x16F3F8u, 0x16F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F400u;
label_16f400:
    // 0x16f400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F400u;
    {
        const bool branch_taken_0x16f400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f400) {
            ctx->pc = 0x16F410u;
            goto label_16f410;
        }
    }
    ctx->pc = 0x16F408u;
    // 0x16f408: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x16f408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x16f40c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x16f40cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16f410:
    // 0x16f410: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16F410u;
    {
        const bool branch_taken_0x16f410 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F410u;
        // 0x16f414: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f410) {
            ctx->pc = 0x16F458u;
            goto label_16f458;
        }
    }
    ctx->pc = 0x16F418u;
label_16f418:
    // 0x16f418: 0x26a29a08  addiu       $v0, $s5, -0x65F8
    ctx->pc = 0x16f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941192));
    // 0x16f41c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x16f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x16f420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f424: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F424u;
    {
        const bool branch_taken_0x16f424 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F424u;
        // 0x16f428: 0x8c50020c  lw          $s0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f424) {
            ctx->pc = 0x16F43Cu;
            goto label_16f43c;
        }
    }
    ctx->pc = 0x16F42Cu;
    // 0x16f42c: 0xc043a46  jal         func_10E918
    ctx->pc = 0x16F42Cu;
    SET_GPR_U32(ctx, 31, 0x16F434u);
    ctx->pc = 0x16F430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F42Cu;
    // 0x16f430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E918u, 0x16F42Cu, 0x16F434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F434u;
label_16f434:
    // 0x16f434: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F434u;
    {
        const bool branch_taken_0x16f434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f434) {
            ctx->pc = 0x16F438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F434u;
            // 0x16f438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F458u;
            goto label_16f458;
        }
    }
    ctx->pc = 0x16F43Cu;
label_16f43c:
    // 0x16f43c: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16F43Cu;
    SET_GPR_U32(ctx, 31, 0x16F444u);
    ctx->pc = 0x16F440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F43Cu;
    // 0x16f440: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16F43Cu, 0x16F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F444u;
label_16f444:
    // 0x16f444: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F444u;
    {
        const bool branch_taken_0x16f444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F444u;
        // 0x16f448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f444) {
            ctx->pc = 0x16F454u;
            goto label_16f454;
        }
    }
    ctx->pc = 0x16F44Cu;
    // 0x16f44c: 0xc043b30  jal         func_10ECC0
    ctx->pc = 0x16F44Cu;
    SET_GPR_U32(ctx, 31, 0x16F454u);
    ctx->pc = 0x16F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F44Cu;
    // 0x16f450: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ECC0u, 0x16F44Cu, 0x16F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F454u;
label_16f454:
    // 0x16f454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16f454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f458:
    // 0x16f458: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16f458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16f45c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16f45cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f460: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16f460u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f464: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16f464u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f468: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16f468u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16f46c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16f46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f470: 0x3e00008  jr          $ra
    ctx->pc = 0x16F470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F470u;
        // 0x16f474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F478u;
}
