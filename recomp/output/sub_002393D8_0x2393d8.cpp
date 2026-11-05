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

// Function: sub_002393D8
// Address: 0x2393d8 - 0x2394a0
void sub_002393D8_0x2393d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002393D8_0x2393d8");
#endif

    switch (ctx->pc) {
        case 0x239418u: goto label_239418;
        case 0x239424u: goto label_239424;
        case 0x23942cu: goto label_23942c;
        case 0x239438u: goto label_239438;
        case 0x23948cu: goto label_23948c;
        default: break;
    }

    ctx->pc = 0x2393d8u;

    // 0x2393d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2393d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2393dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2393dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2393e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2393e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2393e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2393e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2393e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2393e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2393ec: 0x9222036d  lbu         $v0, 0x36D($s1)
    ctx->pc = 0x2393ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 877)));
    // 0x2393f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2393f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2393f4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2393F4u;
    {
        const bool branch_taken_0x2393f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2393F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393F4u;
        // 0x2393f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393f4) {
            ctx->pc = 0x239490u;
            goto label_239490;
        }
    }
    ctx->pc = 0x2393FCu;
    // 0x2393fc: 0x8e22048c  lw          $v0, 0x48C($s1)
    ctx->pc = 0x2393fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x239400: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x239400u;
    {
        const bool branch_taken_0x239400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239400) {
            ctx->pc = 0x239404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239400u;
            // 0x239404: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23943Cu;
            goto label_23943c;
        }
    }
    ctx->pc = 0x239408u;
    // 0x239408: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x239408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23940c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x239410: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x239410u;
    SET_GPR_U32(ctx, 31, 0x239418u);
    ctx->pc = 0x239414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239410u;
    // 0x239414: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x239410u, 0x239418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239418u;
label_239418:
    // 0x239418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23941c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x23941Cu;
    SET_GPR_U32(ctx, 31, 0x239424u);
    ctx->pc = 0x239420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23941Cu;
    // 0x239420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x23941Cu, 0x239424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239424u;
label_239424:
    // 0x239424: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x239424u;
    SET_GPR_U32(ctx, 31, 0x23942Cu);
    ctx->pc = 0x239428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239424u;
    // 0x239428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x239424u, 0x23942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23942Cu;
label_23942c:
    // 0x23942c: 0xae30048c  sw          $s0, 0x48C($s1)
    ctx->pc = 0x23942cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1164), GPR_U32(ctx, 16));
    // 0x239430: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x239430u;
    SET_GPR_U32(ctx, 31, 0x239438u);
    ctx->pc = 0x239434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239430u;
    // 0x239434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x239430u, 0x239438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239438u;
label_239438:
    // 0x239438: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x239438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23943c:
    // 0x23943c: 0x8e25048c  lw          $a1, 0x48C($s1)
    ctx->pc = 0x23943cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x239440: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239444: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x239444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x239448: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23944c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x23944cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239450: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x239450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x239454: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x239454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x239458: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x239458u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23945c: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x23945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x239460: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x239460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239464: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x239464u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239468: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x239468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x23946c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x23946cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239470: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x239470u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x239474: 0xae2004b4  sw          $zero, 0x4B4($s1)
    ctx->pc = 0x239474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1204), GPR_U32(ctx, 0));
    // 0x239478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23947c: 0xae2004a8  sw          $zero, 0x4A8($s1)
    ctx->pc = 0x23947cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1192), GPR_U32(ctx, 0));
    // 0x239480: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x239480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239484: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x239484u;
    SET_GPR_U32(ctx, 31, 0x23948Cu);
    ctx->pc = 0x239488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239484u;
    // 0x239488: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x239484u, 0x23948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23948Cu;
label_23948c:
    // 0x23948c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23948cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239490:
    // 0x239490: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239498: 0x3e00008  jr          $ra
    ctx->pc = 0x239498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239498u;
        // 0x23949c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2394A0u;
}
