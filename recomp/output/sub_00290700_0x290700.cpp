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

// Function: sub_00290700
// Address: 0x290700 - 0x2907e0
void sub_00290700_0x290700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290700_0x290700");
#endif

    switch (ctx->pc) {
        case 0x290720u: goto label_290720;
        case 0x290734u: goto label_290734;
        case 0x290740u: goto label_290740;
        case 0x290750u: goto label_290750;
        case 0x290780u: goto label_290780;
        case 0x290790u: goto label_290790;
        case 0x290798u: goto label_290798;
        default: break;
    }

    ctx->pc = 0x290700u;

    // 0x290700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290704: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x290704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x290708: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x290708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29070c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29070cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290710: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x290710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x290714: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x290714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x290718: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x290718u;
    SET_GPR_U32(ctx, 31, 0x290720u);
    ctx->pc = 0x29071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290718u;
    // 0x29071c: 0x265102e0  addiu       $s1, $s2, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x290718u, 0x290720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290720u;
label_290720:
    // 0x290720: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x290720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x290724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290728: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29072c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x29072Cu;
    SET_GPR_U32(ctx, 31, 0x290734u);
    ctx->pc = 0x290730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29072Cu;
    // 0x290730: 0x24a5b3f8  addiu       $a1, $a1, -0x4C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29072Cu, 0x290734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290734u;
label_290734:
    // 0x290734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290738: 0xc0a71f8  jal         func_29C7E0
    ctx->pc = 0x290738u;
    SET_GPR_U32(ctx, 31, 0x290740u);
    ctx->pc = 0x29073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290738u;
    // 0x29073c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E0u, 0x290738u, 0x290740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290740u;
label_290740:
    // 0x290740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x290740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290748: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x290748u;
    SET_GPR_U32(ctx, 31, 0x290750u);
    ctx->pc = 0x29074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290748u;
    // 0x29074c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x290748u, 0x290750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290750u;
label_290750:
    // 0x290750: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x290750u;
    {
        const bool branch_taken_0x290750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x290750) {
            ctx->pc = 0x290778u;
            goto label_290778;
        }
    }
    ctx->pc = 0x290758u;
    // 0x290758: 0x6a4202f7  ldl         $v0, 0x2F7($s2)
    ctx->pc = 0x290758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x29075c: 0x6e4202f0  ldr         $v0, 0x2F0($s2)
    ctx->pc = 0x29075cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 752); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x290760: 0x6a4302ff  ldl         $v1, 0x2FF($s2)
    ctx->pc = 0x290760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x290764: 0x6e4302f8  ldr         $v1, 0x2F8($s2)
    ctx->pc = 0x290764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 760); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x290768: 0xb24202e7  sdl         $v0, 0x2E7($s2)
    ctx->pc = 0x290768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29076c: 0xb64202e0  sdr         $v0, 0x2E0($s2)
    ctx->pc = 0x29076cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x290770: 0xb24302ef  sdl         $v1, 0x2EF($s2)
    ctx->pc = 0x290770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 751); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x290774: 0xb64302e8  sdr         $v1, 0x2E8($s2)
    ctx->pc = 0x290774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_290778:
    // 0x290778: 0xc0a80f2  jal         func_2A03C8
    ctx->pc = 0x290778u;
    SET_GPR_U32(ctx, 31, 0x290780u);
    ctx->pc = 0x29077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290778u;
    // 0x29077c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A03C8u, 0x290778u, 0x290780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290780u;
label_290780:
    // 0x290780: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x290780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290784: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290784u;
    {
        const bool branch_taken_0x290784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290784u;
        // 0x290788: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290784) {
            ctx->pc = 0x290798u;
            goto label_290798;
        }
    }
    ctx->pc = 0x29078Cu;
    // 0x29078c: 0x0  nop
    ctx->pc = 0x29078cu;
    // NOP
label_290790:
    // 0x290790: 0xc0a7ca2  jal         func_29F288
    ctx->pc = 0x290790u;
    SET_GPR_U32(ctx, 31, 0x290798u);
    ctx->pc = 0x29F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F288u, 0x290790u, 0x290798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290798u;
label_290798:
    // 0x290798: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x290798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x29079c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29079cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2907a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2907a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2907A4u;
    {
        const bool branch_taken_0x2907a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907A4u;
        // 0x2907a8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907a4) {
            ctx->pc = 0x2907B0u;
            goto label_2907b0;
        }
    }
    ctx->pc = 0x2907ACu;
    // 0x2907ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2907acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2907b0:
    // 0x2907b0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2907B0u;
    {
        const bool branch_taken_0x2907b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907B0u;
        // 0x2907b4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907b0) {
            ctx->pc = 0x2907C0u;
            goto label_2907c0;
        }
    }
    ctx->pc = 0x2907B8u;
    // 0x2907b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2907b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2907bc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2907bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2907c0:
    // 0x2907c0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2907C0u;
    {
        const bool branch_taken_0x2907c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2907C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907C0u;
        // 0x2907c4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907c0) {
            ctx->pc = 0x290790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290790;
        }
    }
    ctx->pc = 0x2907C8u;
    // 0x2907c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2907c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2907cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2907ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2907d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2907d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2907d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2907d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2907d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2907D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2907DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2907D8u;
        // 0x2907dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2907D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2907E0u;
}
