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

// Function: sub_0021D3D0
// Address: 0x21d3d0 - 0x21d4a8
void sub_0021D3D0_0x21d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D3D0_0x21d3d0");
#endif

    switch (ctx->pc) {
        case 0x21d404u: goto label_21d404;
        case 0x21d410u: goto label_21d410;
        case 0x21d41cu: goto label_21d41c;
        case 0x21d428u: goto label_21d428;
        case 0x21d434u: goto label_21d434;
        case 0x21d440u: goto label_21d440;
        case 0x21d44cu: goto label_21d44c;
        case 0x21d458u: goto label_21d458;
        case 0x21d464u: goto label_21d464;
        case 0x21d470u: goto label_21d470;
        case 0x21d47cu: goto label_21d47c;
        case 0x21d490u: goto label_21d490;
        default: break;
    }

    ctx->pc = 0x21d3d0u;

    // 0x21d3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d3d4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x21d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x21d3d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d3dc: 0x244219c8  addiu       $v0, $v0, 0x19C8
    ctx->pc = 0x21d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6600));
    // 0x21d3e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d3e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d3ec: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x21d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x21d3f0: 0x8e04018c  lw          $a0, 0x18C($s0)
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x21d3f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D3F4u;
    {
        const bool branch_taken_0x21d3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3F4u;
        // 0x21d3f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3f4) {
            ctx->pc = 0x21D404u;
            goto label_21d404;
        }
    }
    ctx->pc = 0x21D3FCu;
    // 0x21d3fc: 0xc089478  jal         func_2251E0
    ctx->pc = 0x21D3FCu;
    SET_GPR_U32(ctx, 31, 0x21D404u);
    ctx->pc = 0x21D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3FCu;
    // 0x21d400: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2251E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2251E0u, 0x21D3FCu, 0x21D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D404u;
label_21d404:
    // 0x21d404: 0x26040184  addiu       $a0, $s0, 0x184
    ctx->pc = 0x21d404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    // 0x21d408: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D408u;
    SET_GPR_U32(ctx, 31, 0x21D410u);
    ctx->pc = 0x21D40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D408u;
    // 0x21d40c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D408u, 0x21D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D410u;
label_21d410:
    // 0x21d410: 0x2604017c  addiu       $a0, $s0, 0x17C
    ctx->pc = 0x21d410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 380));
    // 0x21d414: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D414u;
    SET_GPR_U32(ctx, 31, 0x21D41Cu);
    ctx->pc = 0x21D418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D414u;
    // 0x21d418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D414u, 0x21D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D41Cu;
label_21d41c:
    // 0x21d41c: 0x26040154  addiu       $a0, $s0, 0x154
    ctx->pc = 0x21d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x21d420: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D420u;
    SET_GPR_U32(ctx, 31, 0x21D428u);
    ctx->pc = 0x21D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D420u;
    // 0x21d424: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D420u, 0x21D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D428u;
label_21d428:
    // 0x21d428: 0x2604014c  addiu       $a0, $s0, 0x14C
    ctx->pc = 0x21d428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x21d42c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D42Cu;
    SET_GPR_U32(ctx, 31, 0x21D434u);
    ctx->pc = 0x21D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D42Cu;
    // 0x21d430: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D42Cu, 0x21D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D434u;
label_21d434:
    // 0x21d434: 0x260400d8  addiu       $a0, $s0, 0xD8
    ctx->pc = 0x21d434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x21d438: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D438u;
    SET_GPR_U32(ctx, 31, 0x21D440u);
    ctx->pc = 0x21D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D438u;
    // 0x21d43c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D438u, 0x21D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D440u;
label_21d440:
    // 0x21d440: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x21d440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x21d444: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D444u;
    SET_GPR_U32(ctx, 31, 0x21D44Cu);
    ctx->pc = 0x21D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D444u;
    // 0x21d448: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D444u, 0x21D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D44Cu;
label_21d44c:
    // 0x21d44c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x21d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x21d450: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D450u;
    SET_GPR_U32(ctx, 31, 0x21D458u);
    ctx->pc = 0x21D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D450u;
    // 0x21d454: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D450u, 0x21D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D458u;
label_21d458:
    // 0x21d458: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x21d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x21d45c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D45Cu;
    SET_GPR_U32(ctx, 31, 0x21D464u);
    ctx->pc = 0x21D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D45Cu;
    // 0x21d460: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D45Cu, 0x21D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D464u;
label_21d464:
    // 0x21d464: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x21d464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x21d468: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D468u;
    SET_GPR_U32(ctx, 31, 0x21D470u);
    ctx->pc = 0x21D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D468u;
    // 0x21d46c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D468u, 0x21D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D470u;
label_21d470:
    // 0x21d470: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x21d470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x21d474: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21D474u;
    SET_GPR_U32(ctx, 31, 0x21D47Cu);
    ctx->pc = 0x21D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D474u;
    // 0x21d478: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21D474u, 0x21D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D47Cu;
label_21d47c:
    // 0x21d47c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x21d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x21d480: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D480u;
    {
        const bool branch_taken_0x21d480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d480) {
            ctx->pc = 0x21D484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D480u;
            // 0x21d484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D494u;
            goto label_21d494;
        }
    }
    ctx->pc = 0x21D488u;
    // 0x21d488: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x21D488u;
    SET_GPR_U32(ctx, 31, 0x21D490u);
    ctx->pc = 0x21D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D488u;
    // 0x21d48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21D488u, 0x21D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D490u;
label_21d490:
    // 0x21d490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d494:
    // 0x21d494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d49c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D49Cu;
        // 0x21d4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D4A4u;
    // 0x21d4a4: 0x0  nop
    ctx->pc = 0x21d4a4u;
    // NOP
    ctx->pc = 0x21d4a8u;
}
