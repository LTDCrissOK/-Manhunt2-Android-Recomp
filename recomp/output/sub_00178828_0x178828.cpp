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

// Function: sub_00178828
// Address: 0x178828 - 0x178930
void sub_00178828_0x178828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178828_0x178828");
#endif

    switch (ctx->pc) {
        case 0x178840u: goto label_178840;
        case 0x17885cu: goto label_17885c;
        case 0x178864u: goto label_178864;
        case 0x1788c8u: goto label_1788c8;
        case 0x1788f0u: goto label_1788f0;
        case 0x178918u: goto label_178918;
        default: break;
    }

    ctx->pc = 0x178828u;

    // 0x178828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17882c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17882cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x178830: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x178830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x178834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178838: 0xc04f70e  jal         func_13DC38
    ctx->pc = 0x178838u;
    SET_GPR_U32(ctx, 31, 0x178840u);
    ctx->pc = 0x17883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178838u;
    // 0x17883c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC38u, 0x178838u, 0x178840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178840u;
label_178840:
    // 0x178840: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x178840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x178844: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x178844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x178848: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x178848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x17884c: 0x24630f60  addiu       $v1, $v1, 0xF60
    ctx->pc = 0x17884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3936));
    // 0x178850: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x178850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x178854: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x178854u;
    SET_GPR_U32(ctx, 31, 0x17885Cu);
    ctx->pc = 0x178858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178854u;
    // 0x178858: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x178854u, 0x17885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17885Cu;
label_17885c:
    // 0x17885c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x17885Cu;
    SET_GPR_U32(ctx, 31, 0x178864u);
    ctx->pc = 0x178860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17885Cu;
    // 0x178860: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x17885Cu, 0x178864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178864u;
label_178864:
    // 0x178864: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x178864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x178868: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x178868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x17886c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x17886cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x178870: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x178870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x178874: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x178874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178878: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x178878u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x17887c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x17887cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x178880: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x178880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x178884: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x178884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x178888: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x178888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x17888c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x17888cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x178890: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x178890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178894: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x178894u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x178898: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x178898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x17889c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x17889cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1788a0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1788a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1788a4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1788a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1788a8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1788a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1788ac: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x1788acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1788b0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1788b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1788b4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1788b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1788b8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1788b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1788bc: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x1788bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1788c0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1788c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1788c4: 0x0  nop
    ctx->pc = 0x1788c4u;
    // NOP
label_1788c8:
    // 0x1788c8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1788c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1788cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1788ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1788d0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1788d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1788d4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1788d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1788d8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1788D8u;
    {
        const bool branch_taken_0x1788d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1788DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788D8u;
        // 0x1788dc: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788d8) {
            ctx->pc = 0x1788C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1788c8;
        }
    }
    ctx->pc = 0x1788E0u;
    // 0x1788e0: 0x26220210  addiu       $v0, $s1, 0x210
    ctx->pc = 0x1788e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x1788e4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1788e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1788e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1788ec: 0x0  nop
    ctx->pc = 0x1788ecu;
    // NOP
label_1788f0:
    // 0x1788f0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1788f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1788f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1788f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1788f8: 0x0  nop
    ctx->pc = 0x1788f8u;
    // NOP
    // 0x1788fc: 0x0  nop
    ctx->pc = 0x1788fcu;
    // NOP
    // 0x178900: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x178900u;
    {
        const bool branch_taken_0x178900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x178904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178900u;
        // 0x178904: 0x24420028  addiu       $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178900) {
            ctx->pc = 0x1788F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1788f0;
        }
    }
    ctx->pc = 0x178908u;
    // 0x178908: 0xae20059c  sw          $zero, 0x59C($s1)
    ctx->pc = 0x178908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1436), GPR_U32(ctx, 0));
    // 0x17890c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178910: 0xc05e5ea  jal         func_1797A8
    ctx->pc = 0x178910u;
    SET_GPR_U32(ctx, 31, 0x178918u);
    ctx->pc = 0x178914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178910u;
    // 0x178914: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1797A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1797A8u, 0x178910u, 0x178918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178918u;
label_178918:
    // 0x178918: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x178918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17891c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17891cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178920: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x178920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178924: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178928: 0x3e00008  jr          $ra
    ctx->pc = 0x178928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178928u;
        // 0x17892c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178930u;
}
