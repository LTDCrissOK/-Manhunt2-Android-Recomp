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

// Function: sub_00191280
// Address: 0x191280 - 0x191378
void sub_00191280_0x191280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191280_0x191280");
#endif

    switch (ctx->pc) {
        case 0x1912a8u: goto label_1912a8;
        case 0x1912b4u: goto label_1912b4;
        case 0x1912bcu: goto label_1912bc;
        case 0x1912c8u: goto label_1912c8;
        case 0x1912d0u: goto label_1912d0;
        case 0x1912ecu: goto label_1912ec;
        case 0x19133cu: goto label_19133c;
        default: break;
    }

    ctx->pc = 0x191280u;

    // 0x191280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191284: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x191284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x191288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19128c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x19128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x191290: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x191290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x191294: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x191294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x191298: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x191298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x19129c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19129cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912a0: 0xc061a16  jal         func_186858
    ctx->pc = 0x1912A0u;
    SET_GPR_U32(ctx, 31, 0x1912A8u);
    ctx->pc = 0x1912A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912A0u;
    // 0x1912a4: 0xa5880b  movn        $s1, $a1, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1912A0u, 0x1912A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912A8u;
label_1912a8:
    // 0x1912a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1912a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912ac: 0xc06ee30  jal         func_1BB8C0
    ctx->pc = 0x1912ACu;
    SET_GPR_U32(ctx, 31, 0x1912B4u);
    ctx->pc = 0x1912B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912ACu;
    // 0x1912b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x1912ACu, 0x1912B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912B4u;
label_1912b4:
    // 0x1912b4: 0xc061a12  jal         func_186848
    ctx->pc = 0x1912B4u;
    SET_GPR_U32(ctx, 31, 0x1912BCu);
    ctx->pc = 0x1912B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912B4u;
    // 0x1912b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1912B4u, 0x1912BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912BCu;
label_1912bc:
    // 0x1912bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1912bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912c0: 0xc06fb06  jal         func_1BEC18
    ctx->pc = 0x1912C0u;
    SET_GPR_U32(ctx, 31, 0x1912C8u);
    ctx->pc = 0x1912C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912C0u;
    // 0x1912c4: 0x24450110  addiu       $a1, $v0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC18u, 0x1912C0u, 0x1912C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912C8u;
label_1912c8:
    // 0x1912c8: 0xc061a12  jal         func_186848
    ctx->pc = 0x1912C8u;
    SET_GPR_U32(ctx, 31, 0x1912D0u);
    ctx->pc = 0x1912CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912C8u;
    // 0x1912cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1912C8u, 0x1912D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912D0u;
label_1912d0:
    // 0x1912d0: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x1912d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1912d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1912d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912d8: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x1912d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1912dc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1912dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1912e0: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x1912e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1912e4: 0xc070b2c  jal         func_1C2CB0
    ctx->pc = 0x1912E4u;
    SET_GPR_U32(ctx, 31, 0x1912ECu);
    ctx->pc = 0x1912E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912E4u;
    // 0x1912e8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2CB0u, 0x1912E4u, 0x1912ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912ECu;
label_1912ec:
    // 0x1912ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1912ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912f0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1912f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1912f4: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x1912f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1912f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1912f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1912fc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1912FCu;
    {
        const bool branch_taken_0x1912fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912FCu;
        // 0x191300: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912fc) {
            ctx->pc = 0x191350u;
            goto label_191350;
        }
    }
    ctx->pc = 0x191304u;
    // 0x191304: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x191304u;
    {
        const bool branch_taken_0x191304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191304u;
        // 0x191308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191304) {
            ctx->pc = 0x19131Cu;
            goto label_19131c;
        }
    }
    ctx->pc = 0x19130Cu;
    // 0x19130c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19130Cu;
    {
        const bool branch_taken_0x19130c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19130Cu;
        // 0x191310: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19130c) {
            ctx->pc = 0x19132Cu;
            goto label_19132c;
        }
    }
    ctx->pc = 0x191314u;
    // 0x191314: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x191314u;
    {
        const bool branch_taken_0x191314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191314u;
        // 0x191318: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191314) {
            ctx->pc = 0x19135Cu;
            goto label_19135c;
        }
    }
    ctx->pc = 0x19131Cu;
label_19131c:
    // 0x19131c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19131Cu;
    {
        const bool branch_taken_0x19131c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x191320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19131Cu;
        // 0x191320: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19131c) {
            ctx->pc = 0x191344u;
            goto label_191344;
        }
    }
    ctx->pc = 0x191324u;
    // 0x191324: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x191324u;
    {
        const bool branch_taken_0x191324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191324u;
        // 0x191328: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191324) {
            ctx->pc = 0x19135Cu;
            goto label_19135c;
        }
    }
    ctx->pc = 0x19132Cu;
label_19132c:
    // 0x19132c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191330: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191334: 0xc06445a  jal         func_191168
    ctx->pc = 0x191334u;
    SET_GPR_U32(ctx, 31, 0x19133Cu);
    ctx->pc = 0x191338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191334u;
    // 0x191338: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191168u, 0x191334u, 0x19133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19133Cu;
label_19133c:
    // 0x19133c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19133Cu;
    {
        const bool branch_taken_0x19133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19133Cu;
        // 0x191340: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19133c) {
            ctx->pc = 0x191358u;
            goto label_191358;
        }
    }
    ctx->pc = 0x191344u;
label_191344:
    // 0x191344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x191344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x191348u;
    {
        const bool branch_taken_0x191348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191348u;
        // 0x19134c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191348) {
            ctx->pc = 0x191354u;
            goto label_191354;
        }
    }
    ctx->pc = 0x191350u;
label_191350:
    // 0x191350: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x191350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_191354:
    // 0x191354: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x191354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_191358:
    // 0x191358: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x191358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19135c:
    // 0x19135c: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x19135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x191360: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x191360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191364: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x191364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191368: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x191368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19136c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x191370: 0x3e00008  jr          $ra
    ctx->pc = 0x191370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191370u;
        // 0x191374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191378u;
}
