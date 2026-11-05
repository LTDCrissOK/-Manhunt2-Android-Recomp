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

// Function: sub_0039C3A8
// Address: 0x39c3a8 - 0x39c438
void sub_0039C3A8_0x39c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C3A8_0x39c3a8");
#endif

    switch (ctx->pc) {
        case 0x39c3a8u: goto label_39c3a8;
        case 0x39c3acu: goto label_39c3ac;
        case 0x39c3b0u: goto label_39c3b0;
        case 0x39c3b4u: goto label_39c3b4;
        case 0x39c3b8u: goto label_39c3b8;
        case 0x39c3bcu: goto label_39c3bc;
        case 0x39c3c0u: goto label_39c3c0;
        case 0x39c3c4u: goto label_39c3c4;
        case 0x39c3c8u: goto label_39c3c8;
        case 0x39c3ccu: goto label_39c3cc;
        case 0x39c3d0u: goto label_39c3d0;
        case 0x39c3d4u: goto label_39c3d4;
        case 0x39c3d8u: goto label_39c3d8;
        case 0x39c3dcu: goto label_39c3dc;
        case 0x39c3e0u: goto label_39c3e0;
        case 0x39c3e4u: goto label_39c3e4;
        case 0x39c3e8u: goto label_39c3e8;
        case 0x39c3ecu: goto label_39c3ec;
        case 0x39c3f0u: goto label_39c3f0;
        case 0x39c3f4u: goto label_39c3f4;
        case 0x39c3f8u: goto label_39c3f8;
        case 0x39c3fcu: goto label_39c3fc;
        case 0x39c400u: goto label_39c400;
        case 0x39c404u: goto label_39c404;
        case 0x39c408u: goto label_39c408;
        case 0x39c40cu: goto label_39c40c;
        case 0x39c410u: goto label_39c410;
        case 0x39c414u: goto label_39c414;
        case 0x39c418u: goto label_39c418;
        case 0x39c41cu: goto label_39c41c;
        case 0x39c420u: goto label_39c420;
        case 0x39c424u: goto label_39c424;
        case 0x39c428u: goto label_39c428;
        case 0x39c42cu: goto label_39c42c;
        case 0x39c430u: goto label_39c430;
        case 0x39c434u: goto label_39c434;
        default: break;
    }

    ctx->pc = 0x39c3a8u;

label_39c3a8:
    // 0x39c3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39c3ac:
    // 0x39c3ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_39c3b0:
    if (ctx->pc == 0x39C3B0u) {
        ctx->pc = 0x39C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3ACu;
        // 0x39c3b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C3B4u;
        goto label_39c3b4;
    }
    ctx->pc = 0x39C3ACu;
    {
        const bool branch_taken_0x39c3ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3ACu;
        // 0x39c3b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c3ac) {
            ctx->pc = 0x39C3BCu;
            goto label_39c3bc;
        }
    }
    ctx->pc = 0x39C3B4u;
label_39c3b4:
    // 0x39c3b4: 0x4a10006  bgez        $a1, . + 4 + (0x6 << 2)
label_39c3b8:
    if (ctx->pc == 0x39C3B8u) {
        ctx->pc = 0x39C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3B4u;
        // 0x39c3b8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C3BCu;
        goto label_39c3bc;
    }
    ctx->pc = 0x39C3B4u;
    {
        const bool branch_taken_0x39c3b4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x39C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3B4u;
        // 0x39c3b8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c3b4) {
            ctx->pc = 0x39C3D0u;
            goto label_39c3d0;
        }
    }
    ctx->pc = 0x39C3BCu;
label_39c3bc:
    // 0x39c3bc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39c3c0:
    // 0x39c3c0: 0xc0ec0fe  jal         func_3B03F8
label_39c3c4:
    if (ctx->pc == 0x39C3C4u) {
        ctx->pc = 0x39C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3C0u;
        // 0x39c3c4: 0x2484b6d8  addiu       $a0, $a0, -0x4928 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C3C8u;
        goto label_39c3c8;
    }
    ctx->pc = 0x39C3C0u;
    SET_GPR_U32(ctx, 31, 0x39C3C8u);
    ctx->pc = 0x39C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C3C0u;
    // 0x39c3c4: 0x2484b6d8  addiu       $a0, $a0, -0x4928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39C3C0u, 0x39C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C3C8u;
label_39c3c8:
    // 0x39c3c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_39c3cc:
    if (ctx->pc == 0x39C3CCu) {
        ctx->pc = 0x39C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3C8u;
        // 0x39c3cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C3D0u;
        goto label_39c3d0;
    }
    ctx->pc = 0x39C3C8u;
    {
        const bool branch_taken_0x39c3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3C8u;
        // 0x39c3cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c3c8) {
            ctx->pc = 0x39C404u;
            goto label_39c404;
        }
    }
    ctx->pc = 0x39C3D0u;
label_39c3d0:
    // 0x39c3d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_39c3d4:
    // 0x39c3d4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x39c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39c3d8:
    // 0x39c3d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_39c3dc:
    if (ctx->pc == 0x39C3DCu) {
        ctx->pc = 0x39C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3D8u;
        // 0x39c3dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C3E0u;
        goto label_39c3e0;
    }
    ctx->pc = 0x39C3D8u;
    {
        const bool branch_taken_0x39c3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3D8u;
        // 0x39c3dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c3d8) {
            ctx->pc = 0x39C400u;
            goto label_39c400;
        }
    }
    ctx->pc = 0x39C3E0u;
label_39c3e0:
    // 0x39c3e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39c3e4:
    // 0x39c3e4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x39c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_39c3e8:
    // 0x39c3e8: 0x40f809  jalr        $v0
label_39c3ec:
    if (ctx->pc == 0x39C3ECu) {
        ctx->pc = 0x39C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3E8u;
        // 0x39c3ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C3F0u;
        goto label_39c3f0;
    }
    ctx->pc = 0x39C3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39C3F0u);
        ctx->pc = 0x39C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3E8u;
        // 0x39c3ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C3E8u, 0x39C3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39C3F0u;
label_39c3f0:
    // 0x39c3f0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x39c3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_39c3f4:
    // 0x39c3f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39c3f8:
    // 0x39c3f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_39c3fc:
    if (ctx->pc == 0x39C3FCu) {
        ctx->pc = 0x39C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3F8u;
        // 0x39c3fc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C400u;
        goto label_39c400;
    }
    ctx->pc = 0x39C3F8u;
    {
        const bool branch_taken_0x39c3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C3F8u;
        // 0x39c3fc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c3f8) {
            ctx->pc = 0x39C404u;
            goto label_39c404;
        }
    }
    ctx->pc = 0x39C400u;
label_39c400:
    // 0x39c400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39c400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39c404:
    // 0x39c404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c408:
    // 0x39c408: 0x3e00008  jr          $ra
label_39c40c:
    if (ctx->pc == 0x39C40Cu) {
        ctx->pc = 0x39C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C408u;
        // 0x39c40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39C410u;
        goto label_39c410;
    }
    ctx->pc = 0x39C408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C408u;
        // 0x39c40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C410u;
label_39c410:
    // 0x39c410: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_39c414:
    // 0x39c414: 0x0  nop
    ctx->pc = 0x39c414u;
    // NOP
label_39c418:
    // 0x39c418: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39c41c:
    // 0x39c41c: 0x0  nop
    ctx->pc = 0x39c41cu;
    // NOP
label_39c420:
    // 0x39c420: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39c420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39c424:
    // 0x39c424: 0x0  nop
    ctx->pc = 0x39c424u;
    // NOP
label_39c428:
    // 0x39c428: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39c42c:
    // 0x39c42c: 0x0  nop
    ctx->pc = 0x39c42cu;
    // NOP
label_39c430:
    // 0x39c430: 0xad270010  sw          $a3, 0x10($t1)
    ctx->pc = 0x39c430u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 7));
label_39c434:
    // 0x39c434: 0x0  nop
    ctx->pc = 0x39c434u;
    // NOP
    ctx->pc = 0x39c438u;
}
