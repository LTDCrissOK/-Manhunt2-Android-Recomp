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

// Function: sub_0013C3B8
// Address: 0x13c3b8 - 0x13c430
void sub_0013C3B8_0x13c3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C3B8_0x13c3b8");
#endif

    switch (ctx->pc) {
        case 0x13c3b8u: goto label_13c3b8;
        case 0x13c3bcu: goto label_13c3bc;
        case 0x13c3c0u: goto label_13c3c0;
        case 0x13c3c4u: goto label_13c3c4;
        case 0x13c3c8u: goto label_13c3c8;
        case 0x13c3ccu: goto label_13c3cc;
        case 0x13c3d0u: goto label_13c3d0;
        case 0x13c3d4u: goto label_13c3d4;
        case 0x13c3d8u: goto label_13c3d8;
        case 0x13c3dcu: goto label_13c3dc;
        case 0x13c3e0u: goto label_13c3e0;
        case 0x13c3e4u: goto label_13c3e4;
        case 0x13c3e8u: goto label_13c3e8;
        case 0x13c3ecu: goto label_13c3ec;
        case 0x13c3f0u: goto label_13c3f0;
        case 0x13c3f4u: goto label_13c3f4;
        case 0x13c3f8u: goto label_13c3f8;
        case 0x13c3fcu: goto label_13c3fc;
        case 0x13c400u: goto label_13c400;
        case 0x13c404u: goto label_13c404;
        case 0x13c408u: goto label_13c408;
        case 0x13c40cu: goto label_13c40c;
        case 0x13c410u: goto label_13c410;
        case 0x13c414u: goto label_13c414;
        case 0x13c418u: goto label_13c418;
        case 0x13c41cu: goto label_13c41c;
        case 0x13c420u: goto label_13c420;
        case 0x13c424u: goto label_13c424;
        case 0x13c428u: goto label_13c428;
        case 0x13c42cu: goto label_13c42c;
        default: break;
    }

    ctx->pc = 0x13c3b8u;

label_13c3b8:
    // 0x13c3b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13c3bc:
    // 0x13c3bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13c3c0:
    // 0x13c3c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13c3c4:
    // 0x13c3c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c3c8:
    // 0x13c3c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c3cc:
    // 0x13c3cc: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x13c3ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_13c3d0:
    // 0x13c3d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13c3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13c3d4:
    // 0x13c3d4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x13c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_13c3d8:
    // 0x13c3d8: 0x40f809  jalr        $v0
label_13c3dc:
    if (ctx->pc == 0x13C3DCu) {
        ctx->pc = 0x13C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3D8u;
        // 0x13c3dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C3E0u;
        goto label_13c3e0;
    }
    ctx->pc = 0x13C3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C3E0u);
        ctx->pc = 0x13C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3D8u;
        // 0x13c3dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C3D8u, 0x13C3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C3E0u;
label_13c3e0:
    // 0x13c3e0: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x13c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_13c3e4:
    // 0x13c3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c3e8:
    // 0x13c3e8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x13c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_13c3ec:
    // 0x13c3ec: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x13c3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_13c3f0:
    // 0x13c3f0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x13c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_13c3f4:
    // 0x13c3f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13c3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c3f8:
    // 0x13c3f8: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x13c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_13c3fc:
    // 0x13c3fc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x13c3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13c400:
    // 0x13c400: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x13c400u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
label_13c404:
    // 0x13c404: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x13c404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13c408:
    // 0x13c408: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x13c408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_13c40c:
    // 0x13c40c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13c40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c410:
    // 0x13c410: 0xc04f74a  jal         func_13DD28
label_13c414:
    if (ctx->pc == 0x13C414u) {
        ctx->pc = 0x13C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C410u;
        // 0x13c414: 0xac60002c  sw          $zero, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C418u;
        goto label_13c418;
    }
    ctx->pc = 0x13C410u;
    SET_GPR_U32(ctx, 31, 0x13C418u);
    ctx->pc = 0x13C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C410u;
    // 0x13c414: 0xac60002c  sw          $zero, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x13C410u, 0x13C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C418u;
label_13c418:
    // 0x13c418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13c41c:
    // 0x13c41c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13c420:
    // 0x13c420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c424:
    // 0x13c424: 0x3e00008  jr          $ra
label_13c428:
    if (ctx->pc == 0x13C428u) {
        ctx->pc = 0x13C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C424u;
        // 0x13c428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C42Cu;
        goto label_13c42c;
    }
    ctx->pc = 0x13C424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C424u;
        // 0x13c428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C42Cu;
label_13c42c:
    // 0x13c42c: 0x0  nop
    ctx->pc = 0x13c42cu;
    // NOP
    ctx->pc = 0x13c430u;
}
