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

// Function: sub_0016D3A0
// Address: 0x16d3a0 - 0x16d488
void sub_0016D3A0_0x16d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D3A0_0x16d3a0");
#endif

    switch (ctx->pc) {
        case 0x16d3b8u: goto label_16d3b8;
        case 0x16d3c8u: goto label_16d3c8;
        case 0x16d3d0u: goto label_16d3d0;
        case 0x16d3e0u: goto label_16d3e0;
        case 0x16d3f0u: goto label_16d3f0;
        case 0x16d3f8u: goto label_16d3f8;
        case 0x16d408u: goto label_16d408;
        case 0x16d420u: goto label_16d420;
        case 0x16d430u: goto label_16d430;
        case 0x16d444u: goto label_16d444;
        case 0x16d450u: goto label_16d450;
        case 0x16d460u: goto label_16d460;
        case 0x16d46cu: goto label_16d46c;
        case 0x16d474u: goto label_16d474;
        default: break;
    }

    ctx->pc = 0x16d3a0u;

    // 0x16d3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d3a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d3a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d3ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d3b0: 0xc05ba26  jal         func_16E898
    ctx->pc = 0x16D3B0u;
    SET_GPR_U32(ctx, 31, 0x16D3B8u);
    ctx->pc = 0x16D3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3B0u;
    // 0x16d3b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E898u, 0x16D3B0u, 0x16D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3B8u;
label_16d3b8:
    // 0x16d3b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D3B8u;
    {
        const bool branch_taken_0x16d3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d3b8) {
            ctx->pc = 0x16D3D8u;
            goto label_16d3d8;
        }
    }
    ctx->pc = 0x16D3C0u;
    // 0x16d3c0: 0xc05b972  jal         func_16E5C8
    ctx->pc = 0x16D3C0u;
    SET_GPR_U32(ctx, 31, 0x16D3C8u);
    ctx->pc = 0x16D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3C0u;
    // 0x16d3c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E5C8u, 0x16D3C0u, 0x16D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3C8u;
label_16d3c8:
    // 0x16d3c8: 0xc05b8b0  jal         func_16E2C0
    ctx->pc = 0x16D3C8u;
    SET_GPR_U32(ctx, 31, 0x16D3D0u);
    ctx->pc = 0x16D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3C8u;
    // 0x16d3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E2C0u, 0x16D3C8u, 0x16D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3D0u;
label_16d3d0:
    // 0x16d3d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x16D3D0u;
    {
        const bool branch_taken_0x16d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3D0u;
        // 0x16d3d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3d0) {
            ctx->pc = 0x16D478u;
            goto label_16d478;
        }
    }
    ctx->pc = 0x16D3D8u;
label_16d3d8:
    // 0x16d3d8: 0xc05bd66  jal         func_16F598
    ctx->pc = 0x16D3D8u;
    SET_GPR_U32(ctx, 31, 0x16D3E0u);
    ctx->pc = 0x16D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3D8u;
    // 0x16d3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F598u, 0x16D3D8u, 0x16D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3E0u;
label_16d3e0:
    // 0x16d3e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D3E0u;
    {
        const bool branch_taken_0x16d3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d3e0) {
            ctx->pc = 0x16D400u;
            goto label_16d400;
        }
    }
    ctx->pc = 0x16D3E8u;
    // 0x16d3e8: 0xc05b972  jal         func_16E5C8
    ctx->pc = 0x16D3E8u;
    SET_GPR_U32(ctx, 31, 0x16D3F0u);
    ctx->pc = 0x16D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3E8u;
    // 0x16d3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E5C8u, 0x16D3E8u, 0x16D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3F0u;
label_16d3f0:
    // 0x16d3f0: 0xc05b94a  jal         func_16E528
    ctx->pc = 0x16D3F0u;
    SET_GPR_U32(ctx, 31, 0x16D3F8u);
    ctx->pc = 0x16D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3F0u;
    // 0x16d3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E528u, 0x16D3F0u, 0x16D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D3F8u;
label_16d3f8:
    // 0x16d3f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16D3F8u;
    {
        const bool branch_taken_0x16d3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3F8u;
        // 0x16d3fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3f8) {
            ctx->pc = 0x16D478u;
            goto label_16d478;
        }
    }
    ctx->pc = 0x16D400u;
label_16d400:
    // 0x16d400: 0xc05a618  jal         func_169860
    ctx->pc = 0x16D400u;
    SET_GPR_U32(ctx, 31, 0x16D408u);
    ctx->pc = 0x16D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D400u;
    // 0x16d404: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16D400u, 0x16D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D408u;
label_16d408:
    // 0x16d408: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16d408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16d40c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d410: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16d410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16d414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d418: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16D418u;
    SET_GPR_U32(ctx, 31, 0x16D420u);
    ctx->pc = 0x16D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D418u;
    // 0x16d41c: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16D418u, 0x16D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D420u;
label_16d420:
    // 0x16d420: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16D420u;
    {
        const bool branch_taken_0x16d420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d420) {
            ctx->pc = 0x16D458u;
            goto label_16d458;
        }
    }
    ctx->pc = 0x16D428u;
    // 0x16d428: 0xc05bc40  jal         func_16F100
    ctx->pc = 0x16D428u;
    SET_GPR_U32(ctx, 31, 0x16D430u);
    ctx->pc = 0x16D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D428u;
    // 0x16d42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F100u, 0x16D428u, 0x16D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D430u;
label_16d430:
    // 0x16d430: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d434: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x16D434u;
    {
        const bool branch_taken_0x16d434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d434) {
            ctx->pc = 0x16D438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D434u;
            // 0x16d438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D478u;
            goto label_16d478;
        }
    }
    ctx->pc = 0x16D43Cu;
    // 0x16d43c: 0xc05b972  jal         func_16E5C8
    ctx->pc = 0x16D43Cu;
    SET_GPR_U32(ctx, 31, 0x16D444u);
    ctx->pc = 0x16D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D43Cu;
    // 0x16d440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E5C8u, 0x16D43Cu, 0x16D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D444u;
label_16d444:
    // 0x16d444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d448: 0xc05b74e  jal         func_16DD38
    ctx->pc = 0x16D448u;
    SET_GPR_U32(ctx, 31, 0x16D450u);
    ctx->pc = 0x16D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D448u;
    // 0x16d44c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DD38u, 0x16D448u, 0x16D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D450u;
label_16d450:
    // 0x16d450: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16D450u;
    {
        const bool branch_taken_0x16d450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D450u;
        // 0x16d454: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d450) {
            ctx->pc = 0x16D478u;
            goto label_16d478;
        }
    }
    ctx->pc = 0x16D458u;
label_16d458:
    // 0x16d458: 0xc05b972  jal         func_16E5C8
    ctx->pc = 0x16D458u;
    SET_GPR_U32(ctx, 31, 0x16D460u);
    ctx->pc = 0x16D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D458u;
    // 0x16d45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E5C8u, 0x16D458u, 0x16D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D460u;
label_16d460:
    // 0x16d460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d464: 0xc05b7f0  jal         func_16DFC0
    ctx->pc = 0x16D464u;
    SET_GPR_U32(ctx, 31, 0x16D46Cu);
    ctx->pc = 0x16D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D464u;
    // 0x16d468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DFC0u, 0x16D464u, 0x16D46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D46Cu;
label_16d46c:
    // 0x16d46c: 0xc05be2a  jal         func_16F8A8
    ctx->pc = 0x16D46Cu;
    SET_GPR_U32(ctx, 31, 0x16D474u);
    ctx->pc = 0x16D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D46Cu;
    // 0x16d470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F8A8u, 0x16D46Cu, 0x16D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D474u;
label_16d474:
    // 0x16d474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d478:
    // 0x16d478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d47c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d480: 0x3e00008  jr          $ra
    ctx->pc = 0x16D480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D480u;
        // 0x16d484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D488u;
}
