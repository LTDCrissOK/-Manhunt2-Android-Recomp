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

// Function: sub_00124520
// Address: 0x124520 - 0x124638
void sub_00124520_0x124520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124520_0x124520");
#endif

    switch (ctx->pc) {
        case 0x124564u: goto label_124564;
        case 0x124574u: goto label_124574;
        case 0x12458cu: goto label_12458c;
        case 0x1245a0u: goto label_1245a0;
        case 0x1245acu: goto label_1245ac;
        case 0x124608u: goto label_124608;
        default: break;
    }

    ctx->pc = 0x124520u;

    // 0x124520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124524: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124528: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x124528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12452c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12452cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124534: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x124534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124538: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12453c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12453cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124540: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124544: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x124544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124548: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x124548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12454c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x12454cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124554: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x124554u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124558: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x124558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x12455c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x12455Cu;
    SET_GPR_U32(ctx, 31, 0x124564u);
    ctx->pc = 0x124560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12455Cu;
    // 0x124560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x12455Cu, 0x124564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124564u;
label_124564:
    // 0x124564: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x124564u;
    {
        const bool branch_taken_0x124564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124564u;
        // 0x124568: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124564) {
            ctx->pc = 0x12460Cu;
            goto label_12460c;
        }
    }
    ctx->pc = 0x12456Cu;
    // 0x12456c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x12456Cu;
    SET_GPR_U32(ctx, 31, 0x124574u);
    ctx->pc = 0x124570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12456Cu;
    // 0x124570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x12456Cu, 0x124574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124574u;
label_124574:
    // 0x124574: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x124574u;
    {
        const bool branch_taken_0x124574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124574u;
        // 0x124578: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124574) {
            ctx->pc = 0x12460Cu;
            goto label_12460c;
        }
    }
    ctx->pc = 0x12457Cu;
    // 0x12457c: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x12457Cu;
    {
        const bool branch_taken_0x12457c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12457Cu;
        // 0x124580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12457c) {
            ctx->pc = 0x12460Cu;
            goto label_12460c;
        }
    }
    ctx->pc = 0x124584u;
    // 0x124584: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x124584u;
    SET_GPR_U32(ctx, 31, 0x12458Cu);
    ctx->pc = 0x124588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124584u;
    // 0x124588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x124584u, 0x12458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12458Cu;
label_12458c:
    // 0x12458c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12458cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124590: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x124590u;
    {
        const bool branch_taken_0x124590 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x124594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124590u;
        // 0x124594: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124590) {
            ctx->pc = 0x12460Cu;
            goto label_12460c;
        }
    }
    ctx->pc = 0x124598u;
    // 0x124598: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x124598u;
    SET_GPR_U32(ctx, 31, 0x1245A0u);
    ctx->pc = 0x12459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124598u;
    // 0x12459c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x124598u, 0x1245A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245A0u;
label_1245a0:
    // 0x1245a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1245a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1245A4u;
    SET_GPR_U32(ctx, 31, 0x1245ACu);
    ctx->pc = 0x1245A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245A4u;
    // 0x1245a8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1245A4u, 0x1245ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245ACu;
label_1245ac:
    // 0x1245ac: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1245ACu;
    {
        const bool branch_taken_0x1245ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1245ac) {
            ctx->pc = 0x1245B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1245ACu;
            // 0x1245b0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1245BCu;
            goto label_1245bc;
        }
    }
    ctx->pc = 0x1245B4u;
    // 0x1245b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1245B4u;
    {
        const bool branch_taken_0x1245b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245B4u;
        // 0x1245b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245b4) {
            ctx->pc = 0x1245E0u;
            goto label_1245e0;
        }
    }
    ctx->pc = 0x1245BCu;
label_1245bc:
    // 0x1245bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1245bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1245c0: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1245c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1245c4: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x1245c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
    // 0x1245c8: 0x3421ff5c  ori         $at, $at, 0xFF5C
    ctx->pc = 0x1245c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65372);
    // 0x1245cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1245ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1245d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1245d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1245d4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1245d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1245d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1245d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245dc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1245dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1245e0:
    // 0x1245e0: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1245E0u;
    {
        const bool branch_taken_0x1245e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245E0u;
        // 0x1245e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245e0) {
            ctx->pc = 0x12460Cu;
            goto label_12460c;
        }
    }
    ctx->pc = 0x1245E8u;
    // 0x1245e8: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x1245e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
    // 0x1245ec: 0xacd20004  sw          $s2, 0x4($a2)
    ctx->pc = 0x1245ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 18));
    // 0x1245f0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1245f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1245f4: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1245f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1245f8: 0xacd50020  sw          $s5, 0x20($a2)
    ctx->pc = 0x1245f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 21));
    // 0x1245fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1245fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124600: 0xc042cc8  jal         func_10B320
    ctx->pc = 0x124600u;
    SET_GPR_U32(ctx, 31, 0x124608u);
    ctx->pc = 0x124604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124600u;
    // 0x124604: 0x8ec40078  lw          $a0, 0x78($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B320u, 0x124600u, 0x124608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124608u;
label_124608:
    // 0x124608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12460c:
    // 0x12460c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12460cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124614: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124618: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12461c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12461cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124620: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x124620u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124624: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x124624u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124628: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x124628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12462c: 0x3e00008  jr          $ra
    ctx->pc = 0x12462Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12462Cu;
        // 0x124630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12462Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124634u;
    // 0x124634: 0x0  nop
    ctx->pc = 0x124634u;
    // NOP
    ctx->pc = 0x124638u;
}
