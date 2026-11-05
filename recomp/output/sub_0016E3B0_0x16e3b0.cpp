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

// Function: sub_0016E3B0
// Address: 0x16e3b0 - 0x16e438
void sub_0016E3B0_0x16e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E3B0_0x16e3b0");
#endif

    switch (ctx->pc) {
        case 0x16e3b0u: goto label_16e3b0;
        case 0x16e3b4u: goto label_16e3b4;
        case 0x16e3b8u: goto label_16e3b8;
        case 0x16e3bcu: goto label_16e3bc;
        case 0x16e3c0u: goto label_16e3c0;
        case 0x16e3c4u: goto label_16e3c4;
        case 0x16e3c8u: goto label_16e3c8;
        case 0x16e3ccu: goto label_16e3cc;
        case 0x16e3d0u: goto label_16e3d0;
        case 0x16e3d4u: goto label_16e3d4;
        case 0x16e3d8u: goto label_16e3d8;
        case 0x16e3dcu: goto label_16e3dc;
        case 0x16e3e0u: goto label_16e3e0;
        case 0x16e3e4u: goto label_16e3e4;
        case 0x16e3e8u: goto label_16e3e8;
        case 0x16e3ecu: goto label_16e3ec;
        case 0x16e3f0u: goto label_16e3f0;
        case 0x16e3f4u: goto label_16e3f4;
        case 0x16e3f8u: goto label_16e3f8;
        case 0x16e3fcu: goto label_16e3fc;
        case 0x16e400u: goto label_16e400;
        case 0x16e404u: goto label_16e404;
        case 0x16e408u: goto label_16e408;
        case 0x16e40cu: goto label_16e40c;
        case 0x16e410u: goto label_16e410;
        case 0x16e414u: goto label_16e414;
        case 0x16e418u: goto label_16e418;
        case 0x16e41cu: goto label_16e41c;
        case 0x16e420u: goto label_16e420;
        case 0x16e424u: goto label_16e424;
        case 0x16e428u: goto label_16e428;
        case 0x16e42cu: goto label_16e42c;
        case 0x16e430u: goto label_16e430;
        case 0x16e434u: goto label_16e434;
        default: break;
    }

    ctx->pc = 0x16e3b0u;

label_16e3b0:
    // 0x16e3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e3b4:
    // 0x16e3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16e3b8:
    // 0x16e3b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16e3bc:
    // 0x16e3bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16e3c0:
    // 0x16e3c0: 0xc04f9b8  jal         func_13E6E0
label_16e3c4:
    if (ctx->pc == 0x16E3C4u) {
        ctx->pc = 0x16E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3C0u;
        // 0x16e3c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3C8u;
        goto label_16e3c8;
    }
    ctx->pc = 0x16E3C0u;
    SET_GPR_U32(ctx, 31, 0x16E3C8u);
    ctx->pc = 0x16E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E3C0u;
    // 0x16e3c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E6E0u, 0x16E3C0u, 0x16E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3C8u;
label_16e3c8:
    // 0x16e3c8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_16e3cc:
    // 0x16e3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e3d0:
    // 0x16e3d0: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x16e3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
label_16e3d4:
    // 0x16e3d4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16e3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16e3d8:
    // 0x16e3d8: 0xc04f8fc  jal         func_13E3F0
label_16e3dc:
    if (ctx->pc == 0x16E3DCu) {
        ctx->pc = 0x16E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3D8u;
        // 0x16e3dc: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3E0u;
        goto label_16e3e0;
    }
    ctx->pc = 0x16E3D8u;
    SET_GPR_U32(ctx, 31, 0x16E3E0u);
    ctx->pc = 0x16E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E3D8u;
    // 0x16e3dc: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16E3D8u, 0x16E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3E0u;
label_16e3e0:
    // 0x16e3e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16e3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e3e4:
    // 0x16e3e4: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x16e3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_16e3e8:
    // 0x16e3e8: 0xc0461e8  jal         func_1187A0
label_16e3ec:
    if (ctx->pc == 0x16E3ECu) {
        ctx->pc = 0x16E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3E8u;
        // 0x16e3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3F0u;
        goto label_16e3f0;
    }
    ctx->pc = 0x16E3E8u;
    SET_GPR_U32(ctx, 31, 0x16E3F0u);
    ctx->pc = 0x16E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E3E8u;
    // 0x16e3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x16E3E8u, 0x16E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3F0u;
label_16e3f0:
    // 0x16e3f0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x16e3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_16e3f4:
    // 0x16e3f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16e3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e3f8:
    // 0x16e3f8: 0xc046290  jal         func_118A40
label_16e3fc:
    if (ctx->pc == 0x16E3FCu) {
        ctx->pc = 0x16E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3F8u;
        // 0x16e3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E400u;
        goto label_16e400;
    }
    ctx->pc = 0x16E3F8u;
    SET_GPR_U32(ctx, 31, 0x16E400u);
    ctx->pc = 0x16E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E3F8u;
    // 0x16e3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x16E3F8u, 0x16E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E400u;
label_16e400:
    // 0x16e400: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x16e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_16e404:
    // 0x16e404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16e404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e408:
    // 0x16e408: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x16e408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_16e40c:
    // 0x16e40c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x16e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16e410:
    // 0x16e410: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e414:
    // 0x16e414: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16e418:
    // 0x16e418: 0x40f809  jalr        $v0
label_16e41c:
    if (ctx->pc == 0x16E41Cu) {
        ctx->pc = 0x16E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E418u;
        // 0x16e41c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E420u;
        goto label_16e420;
    }
    ctx->pc = 0x16E418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E420u);
        ctx->pc = 0x16E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E418u;
        // 0x16e41c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E418u, 0x16E420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E420u;
label_16e420:
    // 0x16e420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e424:
    // 0x16e424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16e424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16e428:
    // 0x16e428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e42c:
    // 0x16e42c: 0x3e00008  jr          $ra
label_16e430:
    if (ctx->pc == 0x16E430u) {
        ctx->pc = 0x16E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E42Cu;
        // 0x16e430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E434u;
        goto label_16e434;
    }
    ctx->pc = 0x16E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E42Cu;
        // 0x16e430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E434u;
label_16e434:
    // 0x16e434: 0x0  nop
    ctx->pc = 0x16e434u;
    // NOP
    ctx->pc = 0x16e438u;
}
