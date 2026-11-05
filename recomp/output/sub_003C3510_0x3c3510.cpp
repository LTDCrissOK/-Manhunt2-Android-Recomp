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

// Function: sub_003C3510
// Address: 0x3c3510 - 0x3c4558
void sub_003C3510_0x3c3510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3510_0x3c3510");
#endif

    switch (ctx->pc) {
        case 0x3c354cu: goto label_3c354c;
        case 0x3c3568u: goto label_3c3568;
        case 0x3c3570u: goto label_3c3570;
        case 0x3c3590u: goto label_3c3590;
        case 0x3c35e0u: goto label_3c35e0;
        case 0x3c3608u: goto label_3c3608;
        case 0x3c3644u: goto label_3c3644;
        case 0x3c368cu: goto label_3c368c;
        case 0x3c3690u: goto label_3c3690;
        case 0x3c3694u: goto label_3c3694;
        case 0x3c3750u: goto label_3c3750;
        case 0x3c3798u: goto label_3c3798;
        case 0x3c38a8u: goto label_3c38a8;
        case 0x3c38bcu: goto label_3c38bc;
        case 0x3c38ccu: goto label_3c38cc;
        case 0x3c38d8u: goto label_3c38d8;
        case 0x3c38f8u: goto label_3c38f8;
        case 0x3c3908u: goto label_3c3908;
        case 0x3c3914u: goto label_3c3914;
        case 0x3c3960u: goto label_3c3960;
        case 0x3c3978u: goto label_3c3978;
        case 0x3c3a90u: goto label_3c3a90;
        case 0x3c3ab4u: goto label_3c3ab4;
        case 0x3c3bd8u: goto label_3c3bd8;
        case 0x3c3c28u: goto label_3c3c28;
        case 0x3c3c30u: goto label_3c3c30;
        case 0x3c3c4cu: goto label_3c3c4c;
        case 0x3c3c80u: goto label_3c3c80;
        case 0x3c3cc4u: goto label_3c3cc4;
        case 0x3c3cf8u: goto label_3c3cf8;
        case 0x3c3da0u: goto label_3c3da0;
        case 0x3c3e08u: goto label_3c3e08;
        case 0x3c3e44u: goto label_3c3e44;
        case 0x3c3e80u: goto label_3c3e80;
        case 0x3c3ea8u: goto label_3c3ea8;
        case 0x3c3ee4u: goto label_3c3ee4;
        case 0x3c3f58u: goto label_3c3f58;
        case 0x3c3fccu: goto label_3c3fcc;
        case 0x3c400cu: goto label_3c400c;
        case 0x3c4040u: goto label_3c4040;
        case 0x3c40a8u: goto label_3c40a8;
        case 0x3c40dcu: goto label_3c40dc;
        case 0x3c4118u: goto label_3c4118;
        case 0x3c4140u: goto label_3c4140;
        case 0x3c417cu: goto label_3c417c;
        case 0x3c41a0u: goto label_3c41a0;
        case 0x3c4208u: goto label_3c4208;
        case 0x3c423cu: goto label_3c423c;
        case 0x3c4278u: goto label_3c4278;
        case 0x3c42a0u: goto label_3c42a0;
        case 0x3c42dcu: goto label_3c42dc;
        case 0x3c4304u: goto label_3c4304;
        case 0x3c4330u: goto label_3c4330;
        case 0x3c4370u: goto label_3c4370;
        case 0x3c43a0u: goto label_3c43a0;
        case 0x3c4408u: goto label_3c4408;
        case 0x3c443cu: goto label_3c443c;
        case 0x3c4478u: goto label_3c4478;
        case 0x3c44a0u: goto label_3c44a0;
        case 0x3c44dcu: goto label_3c44dc;
        case 0x3c4520u: goto label_3c4520;
        default: break;
    }

    ctx->pc = 0x3c3510u;

    // 0x3c3510: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x3c3510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x3c3514: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x3c3514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x3c3518: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x3c3518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x3c351c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c351cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3520: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x3c3520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
    // 0x3c3524: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3c3524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3528: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x3c3528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x3c352c: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x3c352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x3c3530: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x3c3530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x3c3534: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x3c3534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x3c3538: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x3c3538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x3c353c: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x3c353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x3c3540: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x3c3540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x3c3544: 0xc0f1676  jal         func_3C59D8
    ctx->pc = 0x3C3544u;
    SET_GPR_U32(ctx, 31, 0x3C354Cu);
    ctx->pc = 0x3C3548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3544u;
    // 0x3c3548: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C59D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C59D8u, 0x3C3544u, 0x3C354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C354Cu;
label_3c354c:
    // 0x3c354c: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x3c354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x3c3550: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x3c3550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x3c3554: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x3c3554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x3c3558: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x3c3558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x3c355c: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x3c355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x3c3560: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x3c3560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x3c3564: 0x0  nop
    ctx->pc = 0x3c3564u;
    // NOP
label_3c3568:
    // 0x3c3568: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x3c3568u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c356c: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x3c356cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3c3570:
    // 0x3c3570: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x3c3570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x3c3574: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x3c3574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x3c3578: 0x8ca4cddc  lw          $a0, -0x3224($a1)
    ctx->pc = 0x3c3578u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c357c: 0x8cc7d178  lw          $a3, -0x2E88($a2)
    ctx->pc = 0x3c357cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x42D178u));
    // 0x3c3580: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x3c3580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x3c3584: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3c3584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3588: 0xc0f02d8  jal         func_3C0B60
    ctx->pc = 0x3C3588u;
    SET_GPR_U32(ctx, 31, 0x3C3590u);
    ctx->pc = 0x3C358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3588u;
    // 0x3c358c: 0x8fa801ac  lw          $t0, 0x1AC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0B60u, 0x3C3588u, 0x3C3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3590u;
label_3c3590:
    // 0x3c3590: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c3590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3594: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3594u;
    {
        const bool branch_taken_0x3c3594 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3594u;
        // 0x3c3598: 0x8fa20184  lw          $v0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3594) {
            ctx->pc = 0x3C35A8u;
            goto label_3c35a8;
        }
    }
    ctx->pc = 0x3C359Cu;
    // 0x3c359c: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x3C359Cu;
    {
        const bool branch_taken_0x3c359c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3C35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C359Cu;
        // 0x3c35a0: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c359c) {
            ctx->pc = 0x3C3570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3570;
        }
    }
    ctx->pc = 0x3C35A4u;
    // 0x3c35a4: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x3c35a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_3c35a8:
    // 0x3c35a8: 0x3d49023  subu        $s2, $fp, $s4
    ctx->pc = 0x3c35a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x3c35ac: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x3C35ACu;
    {
        const bool branch_taken_0x3c35ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c35ac) {
            ctx->pc = 0x3C3650u;
            goto label_3c3650;
        }
    }
    ctx->pc = 0x3C35B4u;
    // 0x3c35b4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c35b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c35b8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c35b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c35bc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C35BCu;
    {
        const bool branch_taken_0x3c35bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c35bc) {
            ctx->pc = 0x3C35C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C35BCu;
            // 0x3c35c0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3620u;
            goto label_3c3620;
        }
    }
    ctx->pc = 0x3C35C4u;
    // 0x3c35c4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c35c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c35c8: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x3c35c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c35cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C35CCu;
    {
        const bool branch_taken_0x3c35cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C35CCu;
        // 0x3c35d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c35cc) {
            ctx->pc = 0x3C35FCu;
            goto label_3c35fc;
        }
    }
    ctx->pc = 0x3C35D4u;
    // 0x3c35d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c35d8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C35D8u;
    SET_GPR_U32(ctx, 31, 0x3C35E0u);
    ctx->pc = 0x3C35DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C35D8u;
    // 0x3c35dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C35D8u, 0x3C35E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C35E0u;
label_3c35e0:
    // 0x3c35e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c35e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c35e4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c35e8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3c35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3c35ec: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3c35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3c35f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c35f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c35f4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C35F4u;
    {
        const bool branch_taken_0x3c35f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C35F4u;
        // 0x3c35f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c35f4) {
            ctx->pc = 0x3C3644u;
            goto label_3c3644;
        }
    }
    ctx->pc = 0x3C35FCu;
label_3c35fc:
    // 0x3c35fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c35fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3600: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C3600u;
    SET_GPR_U32(ctx, 31, 0x3C3608u);
    ctx->pc = 0x3C3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3600u;
    // 0x3c3604: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C3600u, 0x3C3608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3608u;
label_3c3608:
    // 0x3c3608: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c3608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c360c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3610: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c3610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c3614: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c3614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c3618: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C3618u;
    {
        const bool branch_taken_0x3c3618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3618u;
        // 0x3c361c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3618) {
            ctx->pc = 0x3C3644u;
            goto label_3c3644;
        }
    }
    ctx->pc = 0x3C3620u;
label_3c3620:
    // 0x3c3620: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3620u;
    {
        const bool branch_taken_0x3c3620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3620) {
            ctx->pc = 0x3C3624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3620u;
            // 0x3c3624: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3634u;
            goto label_3c3634;
        }
    }
    ctx->pc = 0x3C3628u;
    // 0x3c3628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c362c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c362cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c3630: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c3630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c3634:
    // 0x3c3634: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c3634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3638: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3c3638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c363c: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C363Cu;
    SET_GPR_U32(ctx, 31, 0x3C3644u);
    ctx->pc = 0x3C3640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C363Cu;
    // 0x3c3640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C363Cu, 0x3C3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3644u;
label_3c3644:
    // 0x3c3644: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x3c3644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3c3648: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3c3648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3c364c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x3c364cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_3c3650:
    // 0x3c3650: 0x5a0003ab  blezl       $s0, . + 4 + (0x3AB << 2)
    ctx->pc = 0x3C3650u;
    {
        const bool branch_taken_0x3c3650 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x3c3650) {
            ctx->pc = 0x3C3654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3650u;
            // 0x3c3654: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4500u;
            goto label_3c4500;
        }
    }
    ctx->pc = 0x3C3658u;
    // 0x3c3658: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c3658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c365c: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C365Cu;
    {
        const bool branch_taken_0x3c365c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c365c) {
            ctx->pc = 0x3C3660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C365Cu;
            // 0x3c3660: 0xa3a00180  sb          $zero, 0x180($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3678u;
            goto label_3c3678;
        }
    }
    ctx->pc = 0x3C3664u;
    // 0x3c3664: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c3664u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c3668: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c3668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c366c: 0x144003ad  bnez        $v0, . + 4 + (0x3AD << 2)
    ctx->pc = 0x3C366Cu;
    {
        const bool branch_taken_0x3c366c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C366Cu;
        // 0x3c3670: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c366c) {
            ctx->pc = 0x3C4524u;
            goto label_3c4524;
        }
    }
    ctx->pc = 0x3C3674u;
    // 0x3c3674: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x3c3674u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_3c3678:
    // 0x3c3678: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3c3678u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3c367c: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x3c367cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x3c3680: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3c3680u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3684: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x3c3684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x3c3688: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3c3688u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c368c:
    // 0x3c368c: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3c368cu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_3c3690:
    // 0x3c3690: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3c3690u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3c3694:
    // 0x3c3694: 0x26c3ffe0  addiu       $v1, $s6, -0x20
    ctx->pc = 0x3c3694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967264));
    // 0x3c3698: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x3c3698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x3c369c: 0x1040019c  beqz        $v0, . + 4 + (0x19C << 2)
    ctx->pc = 0x3C369Cu;
    {
        const bool branch_taken_0x3c369c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C369Cu;
        // 0x3c36a0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c369c) {
            ctx->pc = 0x3C3D10u;
            goto label_3c3d10;
        }
    }
    ctx->pc = 0x3C36A4u;
    // 0x3c36a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c36a8: 0x244213d0  addiu       $v0, $v0, 0x13D0
    ctx->pc = 0x3c36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5072));
    // 0x3c36ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c36acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c36b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c36b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c36b4: 0x800008  jr          $a0
    ctx->pc = 0x3C36B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C36BCu: goto label_3c36bc;
            case 0x3C36D4u: goto label_3c36d4;
            case 0x3C36DCu: goto label_3c36dc;
            case 0x3C36E4u: goto label_3c36e4;
            case 0x3C36FCu: goto label_3c36fc;
            case 0x3C3704u: goto label_3c3704;
            case 0x3C3710u: goto label_3c3710;
            case 0x3C3784u: goto label_3c3784;
            case 0x3C378Cu: goto label_3c378c;
            case 0x3C37C0u: goto label_3c37c0;
            case 0x3C37C8u: goto label_3c37c8;
            case 0x3C37D0u: goto label_3c37d0;
            case 0x3C37E4u: goto label_3c37e4;
            case 0x3C37ECu: goto label_3c37ec;
            case 0x3C3818u: goto label_3c3818;
            case 0x3C381Cu: goto label_3c381c;
            case 0x3C386Cu: goto label_3c386c;
            case 0x3C3998u: goto label_3c3998;
            case 0x3C3A00u: goto label_3c3a00;
            case 0x3C3A04u: goto label_3c3a04;
            case 0x3C3A44u: goto label_3c3a44;
            case 0x3C3A68u: goto label_3c3a68;
            case 0x3C3ACCu: goto label_3c3acc;
            case 0x3C3AD0u: goto label_3c3ad0;
            case 0x3C3B10u: goto label_3c3b10;
            case 0x3C3B1Cu: goto label_3c3b1c;
            case 0x3C3D10u: goto label_3c3d10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C36B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C36BCu;
label_3c36bc:
    // 0x3c36bc: 0x83a20180  lb          $v0, 0x180($sp)
    ctx->pc = 0x3c36bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3c36c0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x3C36C0u;
    {
        const bool branch_taken_0x3c36c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c36c0) {
            ctx->pc = 0x3C36C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C36C0u;
            // 0x3c36c4: 0x83d60000  lb          $s6, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3690;
        }
    }
    ctx->pc = 0x3C36C8u;
    // 0x3c36c8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3c36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3c36cc: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3C36CCu;
    {
        const bool branch_taken_0x3c36cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36CCu;
        // 0x3c36d0: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c36cc) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C36D4u;
label_3c36d4:
    // 0x3c36d4: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x3C36D4u;
    {
        const bool branch_taken_0x3c36d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36D4u;
        // 0x3c36d8: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c36d4) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C36DCu;
label_3c36dc:
    // 0x3c36dc: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x3C36DCu;
    {
        const bool branch_taken_0x3c36dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36DCu;
        // 0x3c36e0: 0x36b50200  ori         $s5, $s5, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c36dc) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C36E4u;
label_3c36e4:
    // 0x3c36e4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c36e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c36e8: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x3c36e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c36ec: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3C36ECu;
    {
        const bool branch_taken_0x3c36ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3C36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36ECu;
        // 0x3c36f0: 0xafa30194  sw          $v1, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c36ec) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C36F4u;
    // 0x3c36f4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x3c36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3c36f8: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x3c36f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
label_3c36fc:
    // 0x3c36fc: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x3C36FCu;
    {
        const bool branch_taken_0x3c36fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C36FCu;
        // 0x3c3700: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c36fc) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C3704u;
label_3c3704:
    // 0x3c3704: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3c3704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3c3708: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x3C3708u;
    {
        const bool branch_taken_0x3c3708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3708u;
        // 0x3c370c: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3708) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C3710u;
label_3c3710:
    // 0x3c3710: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3c3710u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3c3714: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3c3714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3c3718: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C3718u;
    {
        const bool branch_taken_0x3c3718 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3718u;
        // 0x3c371c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3718) {
            ctx->pc = 0x3C373Cu;
            goto label_3c373c;
        }
    }
    ctx->pc = 0x3C3720u;
    // 0x3c3720: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c3720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c3724: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3c3724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3c3728: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x3c3728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c372c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3c372cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c3730: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3c3730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3c3734: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x3C3734u;
    {
        const bool branch_taken_0x3c3734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3734u;
        // 0x3c3738: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3734) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C373Cu;
label_3c373c:
    // 0x3c373c: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x3c373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x3c3740: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3c3740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c3744: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C3744u;
    {
        const bool branch_taken_0x3c3744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3744u;
        // 0x3c3748: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3744) {
            ctx->pc = 0x3C3770u;
            goto label_3c3770;
        }
    }
    ctx->pc = 0x3C374Cu;
    // 0x3c374c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3c374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c3750:
    // 0x3c3750: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3c3750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c3754: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3c3754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3c3758: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x3c3758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3c375c: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3c375cu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3c3760: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x3c3760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x3c3764: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3c3764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c3768: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C3768u;
    {
        const bool branch_taken_0x3c3768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3768u;
        // 0x3c376c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3768) {
            ctx->pc = 0x3C3750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3750;
        }
    }
    ctx->pc = 0x3C3770u;
label_3c3770:
    // 0x3c3770: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3c3770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3c3774: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3c3774u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c3778: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3c3778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3c377c: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x3C377Cu;
    {
        const bool branch_taken_0x3c377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C377Cu;
        // 0x3c3780: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c377c) {
            ctx->pc = 0x3C3694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3694;
        }
    }
    ctx->pc = 0x3C3784u;
label_3c3784:
    // 0x3c3784: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x3C3784u;
    {
        const bool branch_taken_0x3c3784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3784u;
        // 0x3c3788: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3784) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C378Cu;
label_3c378c:
    // 0x3c378c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c378cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3790: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3c3790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c3794: 0x0  nop
    ctx->pc = 0x3c3794u;
    // NOP
label_3c3798:
    // 0x3c3798: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3c3798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c379c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3c379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3c37a0: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x3c37a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3c37a4: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x3c37a4u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3c37a8: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x3c37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x3c37ac: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3c37acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c37b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C37B0u;
    {
        const bool branch_taken_0x3c37b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37B0u;
        // 0x3c37b4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37b0) {
            ctx->pc = 0x3C3798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3798;
        }
    }
    ctx->pc = 0x3C37B8u;
    // 0x3c37b8: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x3C37B8u;
    {
        const bool branch_taken_0x3c37b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37B8u;
        // 0x3c37bc: 0xafb00194  sw          $s0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37b8) {
            ctx->pc = 0x3C3694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3694;
        }
    }
    ctx->pc = 0x3C37C0u;
label_3c37c0:
    // 0x3c37c0: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x3C37C0u;
    {
        const bool branch_taken_0x3c37c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37C0u;
        // 0x3c37c4: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37c0) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C37C8u;
label_3c37c8:
    // 0x3c37c8: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x3C37C8u;
    {
        const bool branch_taken_0x3c37c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37C8u;
        // 0x3c37cc: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37c8) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C37D0u;
label_3c37d0:
    // 0x3c37d0: 0x83c30000  lb          $v1, 0x0($fp)
    ctx->pc = 0x3c37d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3c37d4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x3c37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x3c37d8: 0x5462ffac  bnel        $v1, $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x3C37D8u;
    {
        const bool branch_taken_0x3c37d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c37d8) {
            ctx->pc = 0x3C37DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C37D8u;
            // 0x3c37dc: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C37E0u;
    // 0x3c37e0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3c37e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3c37e4:
    // 0x3c37e4: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x3C37E4u;
    {
        const bool branch_taken_0x3c37e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C37E4u;
        // 0x3c37e8: 0x36b50020  ori         $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37e4) {
            ctx->pc = 0x3C368Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c368c;
        }
    }
    ctx->pc = 0x3C37ECu;
label_3c37ec:
    // 0x3c37ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c37ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c37f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c37f4: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x3c37f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c37f8: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x3c37f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3c37fc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3c37fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3c3800: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x3c3800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x3c3804: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3c3804u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3c3808: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x3c3808u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c380c: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x3c380cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x3c3810: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x3C3810u;
    {
        const bool branch_taken_0x3c3810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3810u;
        // 0x3c3814: 0xa3a00180  sb          $zero, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3810) {
            ctx->pc = 0x3C3D34u;
            goto label_3c3d34;
        }
    }
    ctx->pc = 0x3C3818u;
label_3c3818:
    // 0x3c3818: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x3c3818u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_3c381c:
    // 0x3c381c: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3c381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3c3820: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3820u;
    {
        const bool branch_taken_0x3c3820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3820) {
            ctx->pc = 0x3C3824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3820u;
            // 0x3c3824: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3838u;
            goto label_3c3838;
        }
    }
    ctx->pc = 0x3C3828u;
    // 0x3c3828: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3c3828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3c382c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C382Cu;
    {
        const bool branch_taken_0x3c382c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C382Cu;
        // 0x3c3830: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c382c) {
            ctx->pc = 0x3C3840u;
            goto label_3c3840;
        }
    }
    ctx->pc = 0x3C3834u;
    // 0x3c3834: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c3834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3c3838:
    // 0x3c3838: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3838u;
    {
        const bool branch_taken_0x3c3838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3838u;
        // 0x3c383c: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3838) {
            ctx->pc = 0x3C3854u;
            goto label_3c3854;
        }
    }
    ctx->pc = 0x3C3840u;
label_3c3840:
    // 0x3c3840: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3840u;
    {
        const bool branch_taken_0x3c3840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3840u;
        // 0x3c3844: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3840) {
            ctx->pc = 0x3C3850u;
            goto label_3c3850;
        }
    }
    ctx->pc = 0x3C3848u;
    // 0x3c3848: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3848u;
    {
        const bool branch_taken_0x3c3848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3848u;
        // 0x3c384c: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3848) {
            ctx->pc = 0x3C3854u;
            goto label_3c3854;
        }
    }
    ctx->pc = 0x3C3850u;
label_3c3850:
    // 0x3c3850: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x3c3850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3c3854:
    // 0x3c3854: 0x60100c8  bgez        $s0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x3C3854u;
    {
        const bool branch_taken_0x3c3854 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3C3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3854u;
        // 0x3c3858: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3854) {
            ctx->pc = 0x3C3B78u;
            goto label_3c3b78;
        }
    }
    ctx->pc = 0x3C385Cu;
    // 0x3c385c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3c385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3c3860: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x3c3860u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x3c3864: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x3C3864u;
    {
        const bool branch_taken_0x3c3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3864u;
        // 0x3c3868: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3864) {
            ctx->pc = 0x3C3B78u;
            goto label_3c3b78;
        }
    }
    ctx->pc = 0x3C386Cu;
label_3c386c:
    // 0x3c386c: 0x171027  nor         $v0, $zero, $s7
    ctx->pc = 0x3c386cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x3c3870: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3c3870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3c3874: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c3874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c3878: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x3c3878u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x3c387c: 0xde74fff8  ld          $s4, -0x8($s3)
    ctx->pc = 0x3c387cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c3880: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x3c3880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x3c3884: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3884u;
    {
        const bool branch_taken_0x3c3884 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3884u;
        // 0x3c3888: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3884) {
            ctx->pc = 0x3C3898u;
            goto label_3c3898;
        }
    }
    ctx->pc = 0x3C388Cu;
    // 0x3c388c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3c388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3c3890: 0x16c2002a  bne         $s6, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3C3890u;
    {
        const bool branch_taken_0x3c3890 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3890u;
        // 0x3c3894: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3890) {
            ctx->pc = 0x3C393Cu;
            goto label_3c393c;
        }
    }
    ctx->pc = 0x3C3898u;
label_3c3898:
    // 0x3c3898: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3c3898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c389c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c389cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c38a0: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C38A0u;
    SET_GPR_U32(ctx, 31, 0x3C38A8u);
    ctx->pc = 0x3C38A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38A0u;
    // 0x3c38a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C38A0u, 0x3C38A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38A8u;
label_3c38a8:
    // 0x3c38a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C38A8u;
    {
        const bool branch_taken_0x3c38a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C38A8u;
        // 0x3c38ac: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c38a8) {
            ctx->pc = 0x3C38E0u;
            goto label_3c38e0;
        }
    }
    ctx->pc = 0x3C38B0u;
    // 0x3c38b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c38b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c38b4: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C38B4u;
    SET_GPR_U32(ctx, 31, 0x3C38BCu);
    ctx->pc = 0x3C38B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38B4u;
    // 0x3c38b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C38B4u, 0x3C38BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38BCu;
label_3c38bc:
    // 0x3c38bc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C38BCu;
    {
        const bool branch_taken_0x3c38bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3C38C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C38BCu;
        // 0x3c38c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c38bc) {
            ctx->pc = 0x3C38D0u;
            goto label_3c38d0;
        }
    }
    ctx->pc = 0x3C38C4u;
    // 0x3c38c4: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3C38C4u;
    SET_GPR_U32(ctx, 31, 0x3C38CCu);
    ctx->pc = 0x3C38C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38C4u;
    // 0x3c38c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3C38C4u, 0x3C38CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38CCu;
label_3c38cc:
    // 0x3c38cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c38ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c38d0:
    // 0x3c38d0: 0xc0f19d0  jal         func_3C6740
    ctx->pc = 0x3C38D0u;
    SET_GPR_U32(ctx, 31, 0x3C38D8u);
    ctx->pc = 0x3C38D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38D0u;
    // 0x3c38d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6740u, 0x3C38D0u, 0x3C38D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38D8u;
label_3c38d8:
    // 0x3c38d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C38D8u;
    {
        const bool branch_taken_0x3c38d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C38D8u;
        // 0x3c38dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c38d8) {
            ctx->pc = 0x3C38E8u;
            goto label_3c38e8;
        }
    }
    ctx->pc = 0x3C38E0u;
label_3c38e0:
    // 0x3c38e0: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x3c38e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3c38e4: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3c38e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_3c38e8:
    // 0x3c38e8: 0x3405c010  ori         $a1, $zero, 0xC010
    ctx->pc = 0x3c38e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49168);
    // 0x3c38ec: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x3c38ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3c38f0: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C38F0u;
    SET_GPR_U32(ctx, 31, 0x3C38F8u);
    ctx->pc = 0x3C38F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C38F0u;
    // 0x3c38f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C38F0u, 0x3C38F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C38F8u;
label_3c38f8:
    // 0x3c38f8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C38F8u;
    {
        const bool branch_taken_0x3c38f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C38F8u;
        // 0x3c38fc: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c38f8) {
            ctx->pc = 0x3C391Cu;
            goto label_3c391c;
        }
    }
    ctx->pc = 0x3C3900u;
    // 0x3c3900: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x3C3900u;
    SET_GPR_U32(ctx, 31, 0x3C3908u);
    ctx->pc = 0x3C3904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3900u;
    // 0x3c3904: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x3C3900u, 0x3C3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3908u;
label_3c3908:
    // 0x3c3908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c390c: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3C390Cu;
    SET_GPR_U32(ctx, 31, 0x3C3914u);
    ctx->pc = 0x3C3910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C390Cu;
    // 0x3c3910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3C390Cu, 0x3C3914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3914u;
label_3c3914:
    // 0x3c3914: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3914u;
    {
        const bool branch_taken_0x3c3914 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3914u;
        // 0x3c3918: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3914) {
            ctx->pc = 0x3C3930u;
            goto label_3c3930;
        }
    }
    ctx->pc = 0x3C391Cu;
label_3c391c:
    // 0x3c391c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x3c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x3c3920: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x3c3920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x3c3924: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c3924u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3928u;
    {
        const bool branch_taken_0x3c3928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3928u;
        // 0x3c392c: 0x64b00b  movn        $s6, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3928) {
            ctx->pc = 0x3C3934u;
            goto label_3c3934;
        }
    }
    ctx->pc = 0x3C3930u;
label_3c3930:
    // 0x3c3930: 0x24160066  addiu       $s6, $zero, 0x66
    ctx->pc = 0x3c3930u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_3c3934:
    // 0x3c3934: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3c3934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3938: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x3c3938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3c393c:
    // 0x3c393c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C393Cu;
    {
        const bool branch_taken_0x3c393c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C393Cu;
        // 0x3c3940: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c393c) {
            ctx->pc = 0x3C394Cu;
            goto label_3c394c;
        }
    }
    ctx->pc = 0x3C3944u;
    // 0x3c3944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c3944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3948: 0x57b80a  movz        $s7, $v0, $s7
    ctx->pc = 0x3c3948u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_3c394c:
    // 0x3c394c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3c394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3950: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3954: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3c3954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3958: 0xc0f0b5e  jal         func_3C2D78
    ctx->pc = 0x3C3958u;
    SET_GPR_U32(ctx, 31, 0x3C3960u);
    ctx->pc = 0x3C395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3958u;
    // 0x3c395c: 0x27a80180  addiu       $t0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2D78u, 0x3C3958u, 0x3C3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3960u;
label_3c3960:
    // 0x3c3960: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3c3960u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3c3964: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x3c3964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3c3968: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c3968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c396c: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x3c396cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
    // 0x3c3970: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3C3970u;
    SET_GPR_U32(ctx, 31, 0x3C3978u);
    ctx->pc = 0x3C3974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3970u;
    // 0x3c3974: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3C3970u, 0x3C3978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3978u;
label_3c3978:
    // 0x3c3978: 0x32a30200  andi        $v1, $s5, 0x200
    ctx->pc = 0x3c3978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x3c397c: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x3C397Cu;
    {
        const bool branch_taken_0x3c397c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C397Cu;
        // 0x3c3980: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c397c) {
            ctx->pc = 0x3C3D34u;
            goto label_3c3d34;
        }
    }
    ctx->pc = 0x3C3984u;
    // 0x3c3984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3988: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x3c3988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x3c398c: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x3c398cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3c3990: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x3C3990u;
    {
        const bool branch_taken_0x3c3990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3990u;
        // 0x3c3994: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3990) {
            ctx->pc = 0x3C3CF0u;
            goto label_3c3cf0;
        }
    }
    ctx->pc = 0x3C3998u;
label_3c3998:
    // 0x3c3998: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3c3998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3c399c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C399Cu;
    {
        const bool branch_taken_0x3c399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C39A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C399Cu;
        // 0x3c39a0: 0x8fa60190  lw          $a2, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c399c) {
            ctx->pc = 0x3C39B4u;
            goto label_3c39b4;
        }
    }
    ctx->pc = 0x3C39A4u;
    // 0x3c39a4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c39a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c39a8: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3c39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c39ac: 0x1000feee  b           . + 4 + (-0x112 << 2)
    ctx->pc = 0x3C39ACu;
    {
        const bool branch_taken_0x3c39ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39ACu;
        // 0x3c39b0: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c39ac) {
            ctx->pc = 0x3C3568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3568;
        }
    }
    ctx->pc = 0x3C39B4u;
label_3c39b4:
    // 0x3c39b4: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3c39b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3c39b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C39B8u;
    {
        const bool branch_taken_0x3c39b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39B8u;
        // 0x3c39bc: 0x8fa30190  lw          $v1, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c39b8) {
            ctx->pc = 0x3C39D0u;
            goto label_3c39d0;
        }
    }
    ctx->pc = 0x3C39C0u;
    // 0x3c39c0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c39c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c39c4: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3c39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c39c8: 0x1000fee7  b           . + 4 + (-0x119 << 2)
    ctx->pc = 0x3C39C8u;
    {
        const bool branch_taken_0x3c39c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39C8u;
        // 0x3c39cc: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c39c8) {
            ctx->pc = 0x3C3568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3568;
        }
    }
    ctx->pc = 0x3C39D0u;
label_3c39d0:
    // 0x3c39d0: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x3c39d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x3c39d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C39D4u;
    {
        const bool branch_taken_0x3c39d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39D4u;
        // 0x3c39d8: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c39d4) {
            ctx->pc = 0x3C39ECu;
            goto label_3c39ec;
        }
    }
    ctx->pc = 0x3C39DCu;
    // 0x3c39dc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c39dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c39e0: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3c39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c39e4: 0x1000fee0  b           . + 4 + (-0x120 << 2)
    ctx->pc = 0x3C39E4u;
    {
        const bool branch_taken_0x3c39e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39E4u;
        // 0x3c39e8: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c39e4) {
            ctx->pc = 0x3C3568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3568;
        }
    }
    ctx->pc = 0x3C39ECu;
label_3c39ec:
    // 0x3c39ec: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c39ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c39f0: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x3c39f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3c39f4: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3c39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c39f8: 0x1000fedb  b           . + 4 + (-0x125 << 2)
    ctx->pc = 0x3C39F8u;
    {
        const bool branch_taken_0x3c39f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C39F8u;
        // 0x3c39fc: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c39f8) {
            ctx->pc = 0x3C3568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3568;
        }
    }
    ctx->pc = 0x3C3A00u;
label_3c3a00:
    // 0x3c3a00: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x3c3a00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_3c3a04:
    // 0x3c3a04: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3c3a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3c3a08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3A08u;
    {
        const bool branch_taken_0x3c3a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3a08) {
            ctx->pc = 0x3C3A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3A08u;
            // 0x3c3a0c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3A20u;
            goto label_3c3a20;
        }
    }
    ctx->pc = 0x3C3A10u;
    // 0x3c3a10: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3c3a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3c3a14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3A14u;
    {
        const bool branch_taken_0x3c3a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A14u;
        // 0x3c3a18: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a14) {
            ctx->pc = 0x3C3A28u;
            goto label_3c3a28;
        }
    }
    ctx->pc = 0x3C3A1Cu;
    // 0x3c3a1c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c3a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3c3a20:
    // 0x3c3a20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3A20u;
    {
        const bool branch_taken_0x3c3a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A20u;
        // 0x3c3a24: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a20) {
            ctx->pc = 0x3C3A3Cu;
            goto label_3c3a3c;
        }
    }
    ctx->pc = 0x3C3A28u;
label_3c3a28:
    // 0x3c3a28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3A28u;
    {
        const bool branch_taken_0x3c3a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A28u;
        // 0x3c3a2c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a28) {
            ctx->pc = 0x3C3A38u;
            goto label_3c3a38;
        }
    }
    ctx->pc = 0x3C3A30u;
    // 0x3c3a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3A30u;
    {
        const bool branch_taken_0x3c3a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A30u;
        // 0x3c3a34: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a30) {
            ctx->pc = 0x3C3A3Cu;
            goto label_3c3a3c;
        }
    }
    ctx->pc = 0x3C3A38u;
label_3c3a38:
    // 0x3c3a38: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3c3a38u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3c3a3c:
    // 0x3c3a3c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3C3A3Cu;
    {
        const bool branch_taken_0x3c3a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A3Cu;
        // 0x3c3a40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a3c) {
            ctx->pc = 0x3C3B74u;
            goto label_3c3b74;
        }
    }
    ctx->pc = 0x3C3A44u;
label_3c3a44:
    // 0x3c3a44: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c3a48: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c3a48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c3a4c: 0x24421370  addiu       $v0, $v0, 0x1370
    ctx->pc = 0x3c3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4976));
    // 0x3c3a50: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3c3a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c3a54: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x3c3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x3c3a58: 0x36b50002  ori         $s5, $s5, 0x2
    ctx->pc = 0x3c3a58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x3c3a5c: 0x24160078  addiu       $s6, $zero, 0x78
    ctx->pc = 0x3c3a5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3c3a60: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3C3A60u;
    {
        const bool branch_taken_0x3c3a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A60u;
        // 0x3c3a64: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a60) {
            ctx->pc = 0x3C3B74u;
            goto label_3c3b74;
        }
    }
    ctx->pc = 0x3C3A68u;
label_3c3a68:
    // 0x3c3a68: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c3a68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3c3a6c: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x3c3a6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3c3a70: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3A70u;
    {
        const bool branch_taken_0x3c3a70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A70u;
        // 0x3c3a74: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a70) {
            ctx->pc = 0x3C3A7Cu;
            goto label_3c3a7c;
        }
    }
    ctx->pc = 0x3C3A78u;
    // 0x3c3a78: 0x24541388  addiu       $s4, $v0, 0x1388
    ctx->pc = 0x3c3a78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
label_3c3a7c:
    // 0x3c3a7c: 0x6e0000b  bltz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x3C3A7Cu;
    {
        const bool branch_taken_0x3c3a7c = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x3C3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A7Cu;
        // 0x3c3a80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a7c) {
            ctx->pc = 0x3C3AACu;
            goto label_3c3aac;
        }
    }
    ctx->pc = 0x3C3A84u;
    // 0x3c3a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c3a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3a88: 0xc0f1680  jal         func_3C5A00
    ctx->pc = 0x3C3A88u;
    SET_GPR_U32(ctx, 31, 0x3C3A90u);
    ctx->pc = 0x3C3A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3A88u;
    // 0x3c3a8c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5A00u, 0x3C3A88u, 0x3C3A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3A90u;
label_3c3a90:
    // 0x3c3a90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3A90u;
    {
        const bool branch_taken_0x3c3a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A90u;
        // 0x3c3a94: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a90) {
            ctx->pc = 0x3C3AA4u;
            goto label_3c3aa4;
        }
    }
    ctx->pc = 0x3C3A98u;
    // 0x3c3a98: 0x2e2182a  slt         $v1, $s7, $v0
    ctx->pc = 0x3c3a98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c3a9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3A9Cu;
    {
        const bool branch_taken_0x3c3a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3A9Cu;
        // 0x3c3aa0: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3a9c) {
            ctx->pc = 0x3C3AB8u;
            goto label_3c3ab8;
        }
    }
    ctx->pc = 0x3C3AA4u;
label_3c3aa4:
    // 0x3c3aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3AA4u;
    {
        const bool branch_taken_0x3c3aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AA4u;
        // 0x3c3aa8: 0xafb7018c  sw          $s7, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3aa4) {
            ctx->pc = 0x3C3AB8u;
            goto label_3c3ab8;
        }
    }
    ctx->pc = 0x3C3AACu;
label_3c3aac:
    // 0x3c3aac: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3C3AACu;
    SET_GPR_U32(ctx, 31, 0x3C3AB4u);
    ctx->pc = 0x3C3AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3AACu;
    // 0x3c3ab0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3C3AACu, 0x3C3AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3AB4u;
label_3c3ab4:
    // 0x3c3ab4: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x3c3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_3c3ab8:
    // 0x3c3ab8: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x3c3ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3c3abc: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x3c3abcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3ac0: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3c3ac0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3c3ac4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3C3AC4u;
    {
        const bool branch_taken_0x3c3ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AC4u;
        // 0x3c3ac8: 0xafa601b0  sw          $a2, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ac4) {
            ctx->pc = 0x3C3D34u;
            goto label_3c3d34;
        }
    }
    ctx->pc = 0x3C3ACCu;
label_3c3acc:
    // 0x3c3acc: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x3c3accu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_3c3ad0:
    // 0x3c3ad0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3c3ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3c3ad4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3AD4u;
    {
        const bool branch_taken_0x3c3ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3ad4) {
            ctx->pc = 0x3C3AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3AD4u;
            // 0x3c3ad8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3AECu;
            goto label_3c3aec;
        }
    }
    ctx->pc = 0x3C3ADCu;
    // 0x3c3adc: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3c3adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3c3ae0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3AE0u;
    {
        const bool branch_taken_0x3c3ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AE0u;
        // 0x3c3ae4: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ae0) {
            ctx->pc = 0x3C3AF4u;
            goto label_3c3af4;
        }
    }
    ctx->pc = 0x3C3AE8u;
    // 0x3c3ae8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c3ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3c3aec:
    // 0x3c3aec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3AECu;
    {
        const bool branch_taken_0x3c3aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AECu;
        // 0x3c3af0: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3aec) {
            ctx->pc = 0x3C3B08u;
            goto label_3c3b08;
        }
    }
    ctx->pc = 0x3C3AF4u;
label_3c3af4:
    // 0x3c3af4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3AF4u;
    {
        const bool branch_taken_0x3c3af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AF4u;
        // 0x3c3af8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3af4) {
            ctx->pc = 0x3C3B04u;
            goto label_3c3b04;
        }
    }
    ctx->pc = 0x3C3AFCu;
    // 0x3c3afc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3AFCu;
    {
        const bool branch_taken_0x3c3afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3AFCu;
        // 0x3c3b00: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3afc) {
            ctx->pc = 0x3C3B08u;
            goto label_3c3b08;
        }
    }
    ctx->pc = 0x3C3B04u;
label_3c3b04:
    // 0x3c3b04: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3c3b04u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3c3b08:
    // 0x3c3b08: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3C3B08u;
    {
        const bool branch_taken_0x3c3b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B08u;
        // 0x3c3b0c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b08) {
            ctx->pc = 0x3C3B74u;
            goto label_3c3b74;
        }
    }
    ctx->pc = 0x3C3B10u;
label_3c3b10:
    // 0x3c3b10: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c3b14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3B14u;
    {
        const bool branch_taken_0x3c3b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B14u;
        // 0x3c3b18: 0x24421390  addiu       $v0, $v0, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b14) {
            ctx->pc = 0x3C3B24u;
            goto label_3c3b24;
        }
    }
    ctx->pc = 0x3C3B1Cu;
label_3c3b1c:
    // 0x3c3b1c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c3b20: 0x24421370  addiu       $v0, $v0, 0x1370
    ctx->pc = 0x3c3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4976));
label_3c3b24:
    // 0x3c3b24: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x3c3b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x3c3b28: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3c3b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x3c3b2c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3B2Cu;
    {
        const bool branch_taken_0x3c3b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3b2c) {
            ctx->pc = 0x3C3B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3B2Cu;
            // 0x3c3b30: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3B44u;
            goto label_3c3b44;
        }
    }
    ctx->pc = 0x3C3B34u;
    // 0x3c3b34: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x3c3b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x3c3b38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3B38u;
    {
        const bool branch_taken_0x3c3b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B38u;
        // 0x3c3b3c: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b38) {
            ctx->pc = 0x3C3B4Cu;
            goto label_3c3b4c;
        }
    }
    ctx->pc = 0x3C3B40u;
    // 0x3c3b40: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3c3b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3c3b44:
    // 0x3c3b44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3B44u;
    {
        const bool branch_taken_0x3c3b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B44u;
        // 0x3c3b48: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b44) {
            ctx->pc = 0x3C3B60u;
            goto label_3c3b60;
        }
    }
    ctx->pc = 0x3C3B4Cu;
label_3c3b4c:
    // 0x3c3b4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3B4Cu;
    {
        const bool branch_taken_0x3c3b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B4Cu;
        // 0x3c3b50: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b4c) {
            ctx->pc = 0x3C3B5Cu;
            goto label_3c3b5c;
        }
    }
    ctx->pc = 0x3C3B54u;
    // 0x3c3b54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3B54u;
    {
        const bool branch_taken_0x3c3b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B54u;
        // 0x3c3b58: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b54) {
            ctx->pc = 0x3C3B60u;
            goto label_3c3b60;
        }
    }
    ctx->pc = 0x3C3B5Cu;
label_3c3b5c:
    // 0x3c3b5c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3c3b5cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3c3b60:
    // 0x3c3b60: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x3c3b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3c3b64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3B64u;
    {
        const bool branch_taken_0x3c3b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B64u;
        // 0x3c3b68: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b64) {
            ctx->pc = 0x3C3B74u;
            goto label_3c3b74;
        }
    }
    ctx->pc = 0x3C3B6Cu;
    // 0x3c3b6c: 0x36a20002  ori         $v0, $s5, 0x2
    ctx->pc = 0x3c3b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x3c3b70: 0x50a80b  movn        $s5, $v0, $s0
    ctx->pc = 0x3c3b70u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_3c3b74:
    // 0x3c3b74: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x3c3b74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_3c3b78:
    // 0x3c3b78: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3B78u;
    {
        const bool branch_taken_0x3c3b78 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x3C3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B78u;
        // 0x3c3b7c: 0xafb70198  sw          $s7, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b78) {
            ctx->pc = 0x3C3B88u;
            goto label_3c3b88;
        }
    }
    ctx->pc = 0x3C3B80u;
    // 0x3c3b80: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x3c3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x3c3b84: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x3c3b84u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_3c3b88:
    // 0x3c3b88: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C3B88u;
    {
        const bool branch_taken_0x3c3b88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B88u;
        // 0x3c3b8c: 0x27b4016c  addiu       $s4, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b88) {
            ctx->pc = 0x3C3BA4u;
            goto label_3c3ba4;
        }
    }
    ctx->pc = 0x3C3B90u;
    // 0x3c3b90: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x3c3b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3c3b94: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x3c3b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3c3b98: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3c3b98u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3c3b9c: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x3C3B9Cu;
    {
        const bool branch_taken_0x3c3b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3B9Cu;
        // 0x3c3ba0: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3b9c) {
            ctx->pc = 0x3C3CCCu;
            goto label_3c3ccc;
        }
    }
    ctx->pc = 0x3C3BA4u;
label_3c3ba4:
    // 0x3c3ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3ba8: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C3BA8u;
    {
        const bool branch_taken_0x3c3ba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BA8u;
        // 0x3c3bac: 0x32a50004  andi        $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ba8) {
            ctx->pc = 0x3C3C10u;
            goto label_3c3c10;
        }
    }
    ctx->pc = 0x3C3BB0u;
    // 0x3c3bb0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3BB0u;
    {
        const bool branch_taken_0x3c3bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BB0u;
        // 0x3c3bb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3bb0) {
            ctx->pc = 0x3C3BC8u;
            goto label_3c3bc8;
        }
    }
    ctx->pc = 0x3C3BB8u;
    // 0x3c3bb8: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3C3BB8u;
    {
        const bool branch_taken_0x3c3bb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BB8u;
        // 0x3c3bbc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3bb8) {
            ctx->pc = 0x3C3C70u;
            goto label_3c3c70;
        }
    }
    ctx->pc = 0x3C3BC0u;
    // 0x3c3bc0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3C3BC0u;
    {
        const bool branch_taken_0x3c3bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BC0u;
        // 0x3c3bc4: 0x32a40004  andi        $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3bc0) {
            ctx->pc = 0x3C3CB0u;
            goto label_3c3cb0;
        }
    }
    ctx->pc = 0x3C3BC8u;
label_3c3bc8:
    // 0x3c3bc8: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x3c3bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3c3bcc: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x3c3bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x3c3bd0: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x3c3bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x3c3bd4: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3c3bd4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
label_3c3bd8:
    // 0x3c3bd8: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3c3bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x3c3bdc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c3bdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c3be0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3c3be0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x3c3be4: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x3c3be4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x3c3be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c3be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3c3bec: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C3BECu;
    {
        const bool branch_taken_0x3c3bec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BECu;
        // 0x3c3bf0: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3bec) {
            ctx->pc = 0x3C3BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3bd8;
        }
    }
    ctx->pc = 0x3C3BF4u;
    // 0x3c3bf4: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3C3BF4u;
    {
        const bool branch_taken_0x3c3bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BF4u;
        // 0x3c3bf8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3bf4) {
            ctx->pc = 0x3C3CCCu;
            goto label_3c3ccc;
        }
    }
    ctx->pc = 0x3C3BFCu;
    // 0x3c3bfc: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3C3BFCu;
    {
        const bool branch_taken_0x3c3bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3BFCu;
        // 0x3c3c00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3bfc) {
            ctx->pc = 0x3C3CD0u;
            goto label_3c3cd0;
        }
    }
    ctx->pc = 0x3C3C04u;
    // 0x3c3c04: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c3c04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c3c08: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3C3C08u;
    {
        const bool branch_taken_0x3c3c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C08u;
        // 0x3c3c0c: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c08) {
            ctx->pc = 0x3C3CD0u;
            goto label_3c3cd0;
        }
    }
    ctx->pc = 0x3C3C10u;
label_3c3c10:
    // 0x3c3c10: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3c3c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c3c14: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3c3c14u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3c3c18: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C3C18u;
    {
        const bool branch_taken_0x3c3c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C18u;
        // 0x3c3c1c: 0xafa501b0  sw          $a1, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c18) {
            ctx->pc = 0x3C3C5Cu;
            goto label_3c3c5c;
        }
    }
    ctx->pc = 0x3C3C20u;
    // 0x3c3c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3c24: 0x0  nop
    ctx->pc = 0x3c3c24u;
    // NOP
label_3c3c28:
    // 0x3c3c28: 0xc0f4d12  jal         func_3D3448
    ctx->pc = 0x3C3C28u;
    SET_GPR_U32(ctx, 31, 0x3C3C30u);
    ctx->pc = 0x3C3C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3C28u;
    // 0x3c3c2c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3448u, 0x3C3C28u, 0x3C3C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3C30u;
label_3c3c30:
    // 0x3c3c30: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c3c30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c3c34: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3c3c34u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x3c3c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c3c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3c3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c3c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3c3c40: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c3c44: 0xc0f4b9e  jal         func_3D2E78
    ctx->pc = 0x3C3C44u;
    SET_GPR_U32(ctx, 31, 0x3C3C4Cu);
    ctx->pc = 0x3C3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3C44u;
    // 0x3c3c48: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E78u, 0x3C3C44u, 0x3C3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3C4Cu;
label_3c3c4c:
    // 0x3c3c4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c3c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3c50: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3c3c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3c3c54: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3C3C54u;
    {
        const bool branch_taken_0x3c3c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C54u;
        // 0x3c3c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c54) {
            ctx->pc = 0x3C3C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3c28;
        }
    }
    ctx->pc = 0x3C3C5Cu;
label_3c3c5c:
    // 0x3c3c5c: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x3c3c5cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x3c3c60: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c3c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c3c64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c3c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3c3c68: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3C3C68u;
    {
        const bool branch_taken_0x3c3c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3C68u;
        // 0x3c3c6c: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3c68) {
            ctx->pc = 0x3C3CCCu;
            goto label_3c3ccc;
        }
    }
    ctx->pc = 0x3C3C70u;
label_3c3c70:
    // 0x3c3c70: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x3c3c70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3c3c74: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3c3c74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3c3c78: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x3c3c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
    // 0x3c3c7c: 0x0  nop
    ctx->pc = 0x3c3c7cu;
    // NOP
label_3c3c80:
    // 0x3c3c80: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x3c3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3c3c84: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3c3c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3c3c88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c3c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c3c8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c3c8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c3c90: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c3c90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3c3c94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3c3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c3c98: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3c3c98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x3c3c9c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3c3c9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c3ca0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3C3CA0u;
    {
        const bool branch_taken_0x3c3ca0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CA0u;
        // 0x3c3ca4: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ca0) {
            ctx->pc = 0x3C3C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3c80;
        }
    }
    ctx->pc = 0x3C3CA8u;
    // 0x3c3ca8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C3CA8u;
    {
        const bool branch_taken_0x3c3ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CA8u;
        // 0x3c3cac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ca8) {
            ctx->pc = 0x3C3CD0u;
            goto label_3c3cd0;
        }
    }
    ctx->pc = 0x3C3CB0u;
label_3c3cb0:
    // 0x3c3cb0: 0x245413a8  addiu       $s4, $v0, 0x13A8
    ctx->pc = 0x3c3cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 5032));
    // 0x3c3cb4: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x3c3cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x3c3cb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c3cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3cbc: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3C3CBCu;
    SET_GPR_U32(ctx, 31, 0x3C3CC4u);
    ctx->pc = 0x3C3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3CBCu;
    // 0x3c3cc0: 0x32b70084  andi        $s7, $s5, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3C3CBCu, 0x3C3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3CC4u;
label_3c3cc4:
    // 0x3c3cc4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3C3CC4u;
    {
        const bool branch_taken_0x3c3cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CC4u;
        // 0x3c3cc8: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3cc4) {
            ctx->pc = 0x3C3D34u;
            goto label_3c3d34;
        }
    }
    ctx->pc = 0x3C3CCCu;
label_3c3ccc:
    // 0x3c3ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c3cd0:
    // 0x3c3cd0: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C3CD0u;
    {
        const bool branch_taken_0x3c3cd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CD0u;
        // 0x3c3cd4: 0x3b41023  subu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3cd0) {
            ctx->pc = 0x3C3D04u;
            goto label_3c3d04;
        }
    }
    ctx->pc = 0x3C3CD8u;
    // 0x3c3cd8: 0x32a20200  andi        $v0, $s5, 0x200
    ctx->pc = 0x3c3cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x3c3cdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C3CDCu;
    {
        const bool branch_taken_0x3c3cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CDCu;
        // 0x3c3ce0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3cdc) {
            ctx->pc = 0x3C3D00u;
            goto label_3c3d00;
        }
    }
    ctx->pc = 0x3C3CE4u;
    // 0x3c3ce4: 0x27a6016c  addiu       $a2, $sp, 0x16C
    ctx->pc = 0x3c3ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x3c3ce8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3c3cec: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x3c3cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_3c3cf0:
    // 0x3c3cf0: 0xc0f1156  jal         func_3C4558
    ctx->pc = 0x3C3CF0u;
    SET_GPR_U32(ctx, 31, 0x3C3CF8u);
    ctx->pc = 0x3C4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C4558u, 0x3C3CF0u, 0x3C3CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3CF8u;
label_3c3cf8:
    // 0x3c3cf8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3C3CF8u;
    {
        const bool branch_taken_0x3c3cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3CF8u;
        // 0x3c3cfc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3cf8) {
            ctx->pc = 0x3C3D34u;
            goto label_3c3d34;
        }
    }
    ctx->pc = 0x3C3D00u;
label_3c3d00:
    // 0x3c3d00: 0x3b41023  subu        $v0, $sp, $s4
    ctx->pc = 0x3c3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
label_3c3d04:
    // 0x3c3d04: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x3c3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    // 0x3c3d08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C3D08u;
    {
        const bool branch_taken_0x3c3d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D08u;
        // 0x3c3d0c: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d08) {
            ctx->pc = 0x3C3D34u;
            goto label_3c3d34;
        }
    }
    ctx->pc = 0x3C3D10u;
label_3c3d10:
    // 0x3c3d10: 0x12c001fa  beqz        $s6, . + 4 + (0x1FA << 2)
    ctx->pc = 0x3C3D10u;
    {
        const bool branch_taken_0x3c3d10 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D10u;
        // 0x3c3d14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d10) {
            ctx->pc = 0x3C44FCu;
            goto label_3c44fc;
        }
    }
    ctx->pc = 0x3C3D18u;
    // 0x3c3d18: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x3c3d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x3c3d1c: 0xa3b60010  sb          $s6, 0x10($sp)
    ctx->pc = 0x3c3d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 22));
    // 0x3c3d20: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3c3d20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3c3d24: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x3c3d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x3c3d28: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x3c3d28u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x3c3d2c: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x3c3d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c3d30: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x3c3d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
label_3c3d34:
    // 0x3c3d34: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x3c3d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3c3d38: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x3c3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3c3d3c: 0x83a30180  lb          $v1, 0x180($sp)
    ctx->pc = 0x3c3d3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3c3d40: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x3c3d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3c3d44: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x3c3d44u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x3c3d48: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3D48u;
    {
        const bool branch_taken_0x3c3d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D48u;
        // 0x3c3d4c: 0xafa4019c  sw          $a0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d48) {
            ctx->pc = 0x3C3D5Cu;
            goto label_3c3d5c;
        }
    }
    ctx->pc = 0x3C3D50u;
    // 0x3c3d50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c3d54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C3D54u;
    {
        const bool branch_taken_0x3c3d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D54u;
        // 0x3c3d58: 0xafa4019c  sw          $a0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d54) {
            ctx->pc = 0x3C3D6Cu;
            goto label_3c3d6c;
        }
    }
    ctx->pc = 0x3C3D5Cu;
label_3c3d5c:
    // 0x3c3d5c: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x3c3d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3c3d60: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x3c3d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x3c3d64: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3c3d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c3d68: 0xafa5019c  sw          $a1, 0x19C($sp)
    ctx->pc = 0x3c3d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
label_3c3d6c:
    // 0x3c3d6c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x3c3d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3c3d70: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x3c3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x3c3d74: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x3c3d74u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c3d78: 0x16e0005a  bnez        $s7, . + 4 + (0x5A << 2)
    ctx->pc = 0x3C3D78u;
    {
        const bool branch_taken_0x3c3d78 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D78u;
        // 0x3c3d7c: 0xafa601a4  sw          $a2, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d78) {
            ctx->pc = 0x3C3EE4u;
            goto label_3c3ee4;
        }
    }
    ctx->pc = 0x3C3D80u;
    // 0x3c3d80: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x3c3d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3c3d84: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x3c3d84u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c3d88: 0x1a000056  blez        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3C3D88u;
    {
        const bool branch_taken_0x3c3d88 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D88u;
        // 0x3c3d8c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d88) {
            ctx->pc = 0x3C3EE4u;
            goto label_3c3ee4;
        }
    }
    ctx->pc = 0x3C3D90u;
    // 0x3c3d90: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3C3D90u;
    {
        const bool branch_taken_0x3c3d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3D90u;
        // 0x3c3d94: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3d90) {
            ctx->pc = 0x3C3E54u;
            goto label_3c3e54;
        }
    }
    ctx->pc = 0x3C3D98u;
    // 0x3c3d98: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c3d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c3d9c: 0x0  nop
    ctx->pc = 0x3c3d9cu;
    // NOP
label_3c3da0:
    // 0x3c3da0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c3da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c3da4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C3DA4u;
    {
        const bool branch_taken_0x3c3da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3da4) {
            ctx->pc = 0x3C3DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3DA4u;
            // 0x3c3da8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3E20u;
            goto label_3c3e20;
        }
    }
    ctx->pc = 0x3C3DACu;
    // 0x3c3dac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c3dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3db0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3c3db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c3db4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C3DB4u;
    {
        const bool branch_taken_0x3c3db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3db4) {
            ctx->pc = 0x3C3DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3DB4u;
            // 0x3c3db8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3E00u;
            goto label_3c3e00;
        }
    }
    ctx->pc = 0x3C3DBCu;
    // 0x3c3dbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3dc0: 0x26431350  addiu       $v1, $s2, 0x1350
    ctx->pc = 0x3c3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    // 0x3c3dc4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3c3dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3c3dc8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3c3dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3c3dcc: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3c3dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3c3dd0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3c3dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3c3dd4: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3c3dd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c3dd8: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x3c3dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c3ddc: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x3c3ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c3de0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x3c3de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c3de4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3de8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3dec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c3decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c3df0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3c3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3c3df4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c3df8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C3DF8u;
    {
        const bool branch_taken_0x3c3df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3DF8u;
        // 0x3c3dfc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3df8) {
            ctx->pc = 0x3C3E44u;
            goto label_3c3e44;
        }
    }
    ctx->pc = 0x3C3E00u;
label_3c3e00:
    // 0x3c3e00: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C3E00u;
    SET_GPR_U32(ctx, 31, 0x3C3E08u);
    ctx->pc = 0x3C3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E00u;
    // 0x3c3e04: 0x26451350  addiu       $a1, $s2, 0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C3E00u, 0x3C3E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E08u;
label_3c3e08:
    // 0x3c3e08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3e0c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3e10: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c3e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c3e14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c3e18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C3E18u;
    {
        const bool branch_taken_0x3c3e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E18u;
        // 0x3c3e1c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e18) {
            ctx->pc = 0x3C3E44u;
            goto label_3c3e44;
        }
    }
    ctx->pc = 0x3C3E20u;
label_3c3e20:
    // 0x3c3e20: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3E20u;
    {
        const bool branch_taken_0x3c3e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3e20) {
            ctx->pc = 0x3C3E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3E20u;
            // 0x3c3e24: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3E34u;
            goto label_3c3e34;
        }
    }
    ctx->pc = 0x3C3E28u;
    // 0x3c3e28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c3e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3e2c: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x3c3e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c3e30: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c3e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c3e34:
    // 0x3c3e34: 0x26451350  addiu       $a1, $s2, 0x1350
    ctx->pc = 0x3c3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    // 0x3c3e38: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c3e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c3e3c: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C3E3Cu;
    SET_GPR_U32(ctx, 31, 0x3C3E44u);
    ctx->pc = 0x3C3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E3Cu;
    // 0x3c3e40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C3E3Cu, 0x3C3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E44u;
label_3c3e44:
    // 0x3c3e44: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3c3e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3c3e48: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3c3e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c3e4c: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x3C3E4Cu;
    {
        const bool branch_taken_0x3c3e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3e4c) {
            ctx->pc = 0x3C3E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3E4Cu;
            // 0x3c3e50: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3da0;
        }
    }
    ctx->pc = 0x3C3E54u;
label_3c3e54:
    // 0x3c3e54: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c3e54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c3e58: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c3e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c3e5c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C3E5Cu;
    {
        const bool branch_taken_0x3c3e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3e5c) {
            ctx->pc = 0x3C3E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3E5Cu;
            // 0x3c3e60: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3EC0u;
            goto label_3c3ec0;
        }
    }
    ctx->pc = 0x3C3E64u;
    // 0x3c3e64: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c3e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3e68: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3c3e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c3e6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C3E6Cu;
    {
        const bool branch_taken_0x3c3e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E6Cu;
        // 0x3c3e70: 0x26451350  addiu       $a1, $s2, 0x1350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e6c) {
            ctx->pc = 0x3C3E9Cu;
            goto label_3c3e9c;
        }
    }
    ctx->pc = 0x3C3E74u;
    // 0x3c3e74: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c3e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3e78: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C3E78u;
    SET_GPR_U32(ctx, 31, 0x3C3E80u);
    ctx->pc = 0x3C3E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3E78u;
    // 0x3c3e7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C3E78u, 0x3C3E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3E80u;
label_3c3e80:
    // 0x3c3e80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3e84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3e88: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c3e8c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c3e90: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c3e94: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C3E94u;
    {
        const bool branch_taken_0x3c3e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3E94u;
        // 0x3c3e98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3e94) {
            ctx->pc = 0x3C3EE4u;
            goto label_3c3ee4;
        }
    }
    ctx->pc = 0x3C3E9Cu;
label_3c3e9c:
    // 0x3c3e9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c3e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3ea0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C3EA0u;
    SET_GPR_U32(ctx, 31, 0x3C3EA8u);
    ctx->pc = 0x3C3EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3EA0u;
    // 0x3c3ea4: 0x26451350  addiu       $a1, $s2, 0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C3EA0u, 0x3C3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3EA8u;
label_3c3ea8:
    // 0x3c3ea8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c3ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3eac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3eb0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c3eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c3eb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c3eb8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C3EB8u;
    {
        const bool branch_taken_0x3c3eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EB8u;
        // 0x3c3ebc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3eb8) {
            ctx->pc = 0x3C3EE4u;
            goto label_3c3ee4;
        }
    }
    ctx->pc = 0x3C3EC0u;
label_3c3ec0:
    // 0x3c3ec0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3EC0u;
    {
        const bool branch_taken_0x3c3ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3ec0) {
            ctx->pc = 0x3C3EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3EC0u;
            // 0x3c3ec4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3ED4u;
            goto label_3c3ed4;
        }
    }
    ctx->pc = 0x3C3EC8u;
    // 0x3c3ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3ecc: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c3eccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c3ed0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c3ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c3ed4:
    // 0x3c3ed4: 0x26451350  addiu       $a1, $s2, 0x1350
    ctx->pc = 0x3c3ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    // 0x3c3ed8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c3ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c3edc: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C3EDCu;
    SET_GPR_U32(ctx, 31, 0x3C3EE4u);
    ctx->pc = 0x3C3EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3EDCu;
    // 0x3c3ee0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C3EDCu, 0x3C3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3EE4u;
label_3c3ee4:
    // 0x3c3ee4: 0x83a20180  lb          $v0, 0x180($sp)
    ctx->pc = 0x3c3ee4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3c3ee8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3C3EE8u;
    {
        const bool branch_taken_0x3c3ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3EE8u;
        // 0x3c3eec: 0x93a30180  lbu         $v1, 0x180($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3ee8) {
            ctx->pc = 0x3C3F60u;
            goto label_3c3f60;
        }
    }
    ctx->pc = 0x3C3EF0u;
    // 0x3c3ef0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c3ef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c3ef4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c3ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c3ef8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3C3EF8u;
    {
        const bool branch_taken_0x3c3ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3ef8) {
            ctx->pc = 0x3C3EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3EF8u;
            // 0x3c3efc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3F34u;
            goto label_3c3f34;
        }
    }
    ctx->pc = 0x3C3F00u;
    // 0x3c3f00: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c3f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3f04: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3c3f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c3f08: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C3F08u;
    {
        const bool branch_taken_0x3c3f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3f08) {
            ctx->pc = 0x3C3F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3F08u;
            // 0x3c3f0c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3F2Cu;
            goto label_3c3f2c;
        }
    }
    ctx->pc = 0x3C3F10u;
    // 0x3c3f10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3f14: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3c3f14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c3f18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3f1c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3f20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c3f24: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3C3F24u;
    {
        const bool branch_taken_0x3c3f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F24u;
        // 0x3c3f28: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f24) {
            ctx->pc = 0x3C3FB4u;
            goto label_3c3fb4;
        }
    }
    ctx->pc = 0x3C3F2Cu;
label_3c3f2c:
    // 0x3c3f2c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3C3F2Cu;
    {
        const bool branch_taken_0x3c3f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F2Cu;
        // 0x3c3f30: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f2c) {
            ctx->pc = 0x3C3FC4u;
            goto label_3c3fc4;
        }
    }
    ctx->pc = 0x3C3F34u;
label_3c3f34:
    // 0x3c3f34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3F34u;
    {
        const bool branch_taken_0x3c3f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3f34) {
            ctx->pc = 0x3C3F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3F34u;
            // 0x3c3f38: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3F48u;
            goto label_3c3f48;
        }
    }
    ctx->pc = 0x3C3F3Cu;
    // 0x3c3f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3f40: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c3f40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c3f44: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c3f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c3f48:
    // 0x3c3f48: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x3c3f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3c3f4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c3f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3f50: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C3F50u;
    SET_GPR_U32(ctx, 31, 0x3C3F58u);
    ctx->pc = 0x3C3F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C3F50u;
    // 0x3c3f54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C3F50u, 0x3C3F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3F58u;
label_3c3f58:
    // 0x3c3f58: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3C3F58u;
    {
        const bool branch_taken_0x3c3f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F58u;
        // 0x3c3f5c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f58) {
            ctx->pc = 0x3C4010u;
            goto label_3c4010;
        }
    }
    ctx->pc = 0x3C3F60u;
label_3c3f60:
    // 0x3c3f60: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x3c3f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x3c3f64: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3C3F64u;
    {
        const bool branch_taken_0x3c3f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F64u;
        // 0x3c3f68: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f64) {
            ctx->pc = 0x3C400Cu;
            goto label_3c400c;
        }
    }
    ctx->pc = 0x3C3F6Cu;
    // 0x3c3f6c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3c3f6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c3f70: 0xa3a20170  sb          $v0, 0x170($sp)
    ctx->pc = 0x3c3f70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c3f74: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x3c3f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3c3f78: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C3F78u;
    {
        const bool branch_taken_0x3c3f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3F78u;
        // 0x3c3f7c: 0xa3b60171  sb          $s6, 0x171($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 369), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3f78) {
            ctx->pc = 0x3C3FE4u;
            goto label_3c3fe4;
        }
    }
    ctx->pc = 0x3C3F80u;
    // 0x3c3f80: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c3f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3f84: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3c3f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c3f88: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3C3F88u;
    {
        const bool branch_taken_0x3c3f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3f88) {
            ctx->pc = 0x3C3F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3F88u;
            // 0x3c3f8c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3FC0u;
            goto label_3c3fc0;
        }
    }
    ctx->pc = 0x3C3F90u;
    // 0x3c3f90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3f94: 0x83a50170  lb          $a1, 0x170($sp)
    ctx->pc = 0x3c3f94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3c3f98: 0x83a60171  lb          $a2, 0x171($sp)
    ctx->pc = 0x3c3f98u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 369)));
    // 0x3c3f9c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x3c3f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3c3fa0: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3c3fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3c3fa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3fa8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3fac: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3c3facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3c3fb0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3c3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3c3fb4:
    // 0x3c3fb4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c3fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c3fb8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C3FB8u;
    {
        const bool branch_taken_0x3c3fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FB8u;
        // 0x3c3fbc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3fb8) {
            ctx->pc = 0x3C400Cu;
            goto label_3c400c;
        }
    }
    ctx->pc = 0x3C3FC0u;
label_3c3fc0:
    // 0x3c3fc0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x3c3fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_3c3fc4:
    // 0x3c3fc4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C3FC4u;
    SET_GPR_U32(ctx, 31, 0x3C3FCCu);
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C3FC4u, 0x3C3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C3FCCu;
label_3c3fcc:
    // 0x3c3fcc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c3fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c3fd0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c3fd4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c3fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c3fd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c3fdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C3FDCu;
    {
        const bool branch_taken_0x3c3fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C3FDCu;
        // 0x3c3fe0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3fdc) {
            ctx->pc = 0x3C400Cu;
            goto label_3c400c;
        }
    }
    ctx->pc = 0x3C3FE4u;
label_3c3fe4:
    // 0x3c3fe4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3c3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c3fe8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C3FE8u;
    {
        const bool branch_taken_0x3c3fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c3fe8) {
            ctx->pc = 0x3C3FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C3FE8u;
            // 0x3c3fec: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C3FFCu;
            goto label_3c3ffc;
        }
    }
    ctx->pc = 0x3C3FF0u;
    // 0x3c3ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3ff4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c3ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c3ff8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c3ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c3ffc:
    // 0x3c3ffc: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x3c3ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3c4000: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3c4000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c4004: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C4004u;
    SET_GPR_U32(ctx, 31, 0x3C400Cu);
    ctx->pc = 0x3C4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4004u;
    // 0x3c4008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C4004u, 0x3C400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C400Cu;
label_3c400c:
    // 0x3c400c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3c400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3c4010:
    // 0x3c4010: 0x16e2005b  bne         $s7, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3C4010u;
    {
        const bool branch_taken_0x3c4010 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C4014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4010u;
        // 0x3c4014: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4010) {
            ctx->pc = 0x3C4180u;
            goto label_3c4180;
        }
    }
    ctx->pc = 0x3C4018u;
    // 0x3c4018: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x3c4018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x3c401c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x3c401cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3c4020: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x3c4020u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3c4024: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3C4024u;
    {
        const bool branch_taken_0x3c4024 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4024u;
        // 0x3c4028: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4024) {
            ctx->pc = 0x3C417Cu;
            goto label_3c417c;
        }
    }
    ctx->pc = 0x3C402Cu;
    // 0x3c402c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3C402Cu;
    {
        const bool branch_taken_0x3c402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C402Cu;
        // 0x3c4030: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c402c) {
            ctx->pc = 0x3C40ECu;
            goto label_3c40ec;
        }
    }
    ctx->pc = 0x3C4034u;
    // 0x3c4034: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3c4034u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4038: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c4038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c403c: 0x0  nop
    ctx->pc = 0x3c403cu;
    // NOP
label_3c4040:
    // 0x3c4040: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c4040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c4044: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C4044u;
    {
        const bool branch_taken_0x3c4044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4044) {
            ctx->pc = 0x3C4048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4044u;
            // 0x3c4048: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C40C0u;
            goto label_3c40c0;
        }
    }
    ctx->pc = 0x3C404Cu;
    // 0x3c404c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c404cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4050: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3c4050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c4054: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C4054u;
    {
        const bool branch_taken_0x3c4054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4054) {
            ctx->pc = 0x3C4058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4054u;
            // 0x3c4058: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C40A0u;
            goto label_3c40a0;
        }
    }
    ctx->pc = 0x3C405Cu;
    // 0x3c405c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4060: 0x26461360  addiu       $a2, $s2, 0x1360
    ctx->pc = 0x3c4060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    // 0x3c4064: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3c4064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3c4068: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3c4068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3c406c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3c406cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3c4070: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3c4070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3c4074: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3c4074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c4078: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3c4078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c407c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3c407cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c4080: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3c4080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c4084: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4088: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c4088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c408c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c4090: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3c4090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3c4094: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c4094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c4098: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C4098u;
    {
        const bool branch_taken_0x3c4098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4098u;
        // 0x3c409c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4098) {
            ctx->pc = 0x3C40DCu;
            goto label_3c40dc;
        }
    }
    ctx->pc = 0x3C40A0u;
label_3c40a0:
    // 0x3c40a0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C40A0u;
    SET_GPR_U32(ctx, 31, 0x3C40A8u);
    ctx->pc = 0x3C40A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C40A0u;
    // 0x3c40a4: 0x26451360  addiu       $a1, $s2, 0x1360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C40A0u, 0x3C40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C40A8u;
label_3c40a8:
    // 0x3c40a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c40ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c40b0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c40b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c40b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C40B8u;
    {
        const bool branch_taken_0x3c40b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C40B8u;
        // 0x3c40bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c40b8) {
            ctx->pc = 0x3C40DCu;
            goto label_3c40dc;
        }
    }
    ctx->pc = 0x3C40C0u;
label_3c40c0:
    // 0x3c40c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C40C0u;
    {
        const bool branch_taken_0x3c40c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c40c0) {
            ctx->pc = 0x3C40C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C40C0u;
            // 0x3c40c4: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C40C8u;
            goto label_3c40c8;
        }
    }
    ctx->pc = 0x3C40C8u;
label_3c40c8:
    // 0x3c40c8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c40c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3c40cc: 0x26451360  addiu       $a1, $s2, 0x1360
    ctx->pc = 0x3c40ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    // 0x3c40d0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c40d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c40d4: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C40D4u;
    SET_GPR_U32(ctx, 31, 0x3C40DCu);
    ctx->pc = 0x3C40D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C40D4u;
    // 0x3c40d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C40D4u, 0x3C40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C40DCu;
label_3c40dc:
    // 0x3c40dc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3c40dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3c40e0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3c40e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c40e4: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3C40E4u;
    {
        const bool branch_taken_0x3c40e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c40e4) {
            ctx->pc = 0x3C40E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C40E4u;
            // 0x3c40e8: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4040;
        }
    }
    ctx->pc = 0x3C40ECu;
label_3c40ec:
    // 0x3c40ec: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c40ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c40f0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c40f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c40f4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C40F4u;
    {
        const bool branch_taken_0x3c40f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c40f4) {
            ctx->pc = 0x3C40F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C40F4u;
            // 0x3c40f8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4158u;
            goto label_3c4158;
        }
    }
    ctx->pc = 0x3C40FCu;
    // 0x3c40fc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c40fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4100: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3c4100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c4104: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C4104u;
    {
        const bool branch_taken_0x3c4104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4104u;
        // 0x3c4108: 0x26451360  addiu       $a1, $s2, 0x1360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4104) {
            ctx->pc = 0x3C4134u;
            goto label_3c4134;
        }
    }
    ctx->pc = 0x3C410Cu;
    // 0x3c410c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c410cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4110: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4110u;
    SET_GPR_U32(ctx, 31, 0x3C4118u);
    ctx->pc = 0x3C4114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4110u;
    // 0x3c4114: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4110u, 0x3C4118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4118u;
label_3c4118:
    // 0x3c4118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c411c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4120: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c4120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c4124: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c4124u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c4128: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c4128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c412c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C412Cu;
    {
        const bool branch_taken_0x3c412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C412Cu;
        // 0x3c4130: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c412c) {
            ctx->pc = 0x3C417Cu;
            goto label_3c417c;
        }
    }
    ctx->pc = 0x3C4134u;
label_3c4134:
    // 0x3c4134: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c4134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4138: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4138u;
    SET_GPR_U32(ctx, 31, 0x3C4140u);
    ctx->pc = 0x3C413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4138u;
    // 0x3c413c: 0x26451360  addiu       $a1, $s2, 0x1360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4138u, 0x3C4140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4140u;
label_3c4140:
    // 0x3c4140: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4144: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c4144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4148: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c4148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c414c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c4150: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C4150u;
    {
        const bool branch_taken_0x3c4150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4150u;
        // 0x3c4154: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4150) {
            ctx->pc = 0x3C417Cu;
            goto label_3c417c;
        }
    }
    ctx->pc = 0x3C4158u;
label_3c4158:
    // 0x3c4158: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4158u;
    {
        const bool branch_taken_0x3c4158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4158) {
            ctx->pc = 0x3C415Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4158u;
            // 0x3c415c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C416Cu;
            goto label_3c416c;
        }
    }
    ctx->pc = 0x3C4160u;
    // 0x3c4160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4164: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c4164u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c4168: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c4168u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c416c:
    // 0x3c416c: 0x26451360  addiu       $a1, $s2, 0x1360
    ctx->pc = 0x3c416cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    // 0x3c4170: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c4170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4174: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C4174u;
    SET_GPR_U32(ctx, 31, 0x3C417Cu);
    ctx->pc = 0x3C4178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4174u;
    // 0x3c4178: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C4174u, 0x3C417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C417Cu;
label_3c417c:
    // 0x3c417c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x3c417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_3c4180:
    // 0x3c4180: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x3c4180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x3c4184: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x3c4184u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c4188: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3C4188u;
    {
        const bool branch_taken_0x3c4188 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4188u;
        // 0x3c418c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4188) {
            ctx->pc = 0x3C42DCu;
            goto label_3c42dc;
        }
    }
    ctx->pc = 0x3C4190u;
    // 0x3c4190: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3C4190u;
    {
        const bool branch_taken_0x3c4190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4190u;
        // 0x3c4194: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4190) {
            ctx->pc = 0x3C424Cu;
            goto label_3c424c;
        }
    }
    ctx->pc = 0x3C4198u;
    // 0x3c4198: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3c4198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c419c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c419cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c41a0:
    // 0x3c41a0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c41a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c41a4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C41A4u;
    {
        const bool branch_taken_0x3c41a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c41a4) {
            ctx->pc = 0x3C41A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C41A4u;
            // 0x3c41a8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4220u;
            goto label_3c4220;
        }
    }
    ctx->pc = 0x3C41ACu;
    // 0x3c41ac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c41acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c41b0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3c41b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c41b4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C41B4u;
    {
        const bool branch_taken_0x3c41b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c41b4) {
            ctx->pc = 0x3C41B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C41B4u;
            // 0x3c41b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4200u;
            goto label_3c4200;
        }
    }
    ctx->pc = 0x3C41BCu;
    // 0x3c41bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c41c0: 0x26431360  addiu       $v1, $s2, 0x1360
    ctx->pc = 0x3c41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    // 0x3c41c4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3c41c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3c41c8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3c41c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3c41cc: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3c41ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3c41d0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3c41d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3c41d4: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3c41d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c41d8: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x3c41d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c41dc: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x3c41dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c41e0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x3c41e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c41e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c41e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c41ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c41f0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3c41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3c41f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c41f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c41f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C41F8u;
    {
        const bool branch_taken_0x3c41f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C41F8u;
        // 0x3c41fc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c41f8) {
            ctx->pc = 0x3C423Cu;
            goto label_3c423c;
        }
    }
    ctx->pc = 0x3C4200u;
label_3c4200:
    // 0x3c4200: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4200u;
    SET_GPR_U32(ctx, 31, 0x3C4208u);
    ctx->pc = 0x3C4204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4200u;
    // 0x3c4204: 0x26451360  addiu       $a1, $s2, 0x1360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4200u, 0x3C4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4208u;
label_3c4208:
    // 0x3c4208: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c420c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4210: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c4210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c4214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c4214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c4218: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C4218u;
    {
        const bool branch_taken_0x3c4218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4218u;
        // 0x3c421c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4218) {
            ctx->pc = 0x3C423Cu;
            goto label_3c423c;
        }
    }
    ctx->pc = 0x3C4220u;
label_3c4220:
    // 0x3c4220: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C4220u;
    {
        const bool branch_taken_0x3c4220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4220) {
            ctx->pc = 0x3C4224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4220u;
            // 0x3c4224: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4228u;
            goto label_3c4228;
        }
    }
    ctx->pc = 0x3C4228u;
label_3c4228:
    // 0x3c4228: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c4228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3c422c: 0x26451360  addiu       $a1, $s2, 0x1360
    ctx->pc = 0x3c422cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    // 0x3c4230: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c4230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c4234: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C4234u;
    SET_GPR_U32(ctx, 31, 0x3C423Cu);
    ctx->pc = 0x3C4238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4234u;
    // 0x3c4238: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C4234u, 0x3C423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C423Cu;
label_3c423c:
    // 0x3c423c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3c423cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3c4240: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3c4240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c4244: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3C4244u;
    {
        const bool branch_taken_0x3c4244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4244) {
            ctx->pc = 0x3C4248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4244u;
            // 0x3c4248: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C41A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c41a0;
        }
    }
    ctx->pc = 0x3C424Cu;
label_3c424c:
    // 0x3c424c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c424cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c4250: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c4250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c4254: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C4254u;
    {
        const bool branch_taken_0x3c4254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4254) {
            ctx->pc = 0x3C4258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4254u;
            // 0x3c4258: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C42B8u;
            goto label_3c42b8;
        }
    }
    ctx->pc = 0x3C425Cu;
    // 0x3c425c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c425cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4260: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3c4260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c4264: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C4264u;
    {
        const bool branch_taken_0x3c4264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4264u;
        // 0x3c4268: 0x26451360  addiu       $a1, $s2, 0x1360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4264) {
            ctx->pc = 0x3C4294u;
            goto label_3c4294;
        }
    }
    ctx->pc = 0x3C426Cu;
    // 0x3c426c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c426cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4270: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4270u;
    SET_GPR_U32(ctx, 31, 0x3C4278u);
    ctx->pc = 0x3C4274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4270u;
    // 0x3c4274: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4270u, 0x3C4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4278u;
label_3c4278:
    // 0x3c4278: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c427c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4280: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c4280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c4284: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c4284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c4288: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c4288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c428c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C428Cu;
    {
        const bool branch_taken_0x3c428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C428Cu;
        // 0x3c4290: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c428c) {
            ctx->pc = 0x3C42DCu;
            goto label_3c42dc;
        }
    }
    ctx->pc = 0x3C4294u;
label_3c4294:
    // 0x3c4294: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c4294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4298: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4298u;
    SET_GPR_U32(ctx, 31, 0x3C42A0u);
    ctx->pc = 0x3C429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4298u;
    // 0x3c429c: 0x26451360  addiu       $a1, $s2, 0x1360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4298u, 0x3C42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42A0u;
label_3c42a0:
    // 0x3c42a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c42a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c42a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c42a8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c42a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c42ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c42acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c42b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C42B0u;
    {
        const bool branch_taken_0x3c42b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42B0u;
        // 0x3c42b4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c42b0) {
            ctx->pc = 0x3C42DCu;
            goto label_3c42dc;
        }
    }
    ctx->pc = 0x3C42B8u;
label_3c42b8:
    // 0x3c42b8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C42B8u;
    {
        const bool branch_taken_0x3c42b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c42b8) {
            ctx->pc = 0x3C42BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C42B8u;
            // 0x3c42bc: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C42CCu;
            goto label_3c42cc;
        }
    }
    ctx->pc = 0x3C42C0u;
    // 0x3c42c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c42c4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c42c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c42c8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c42c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c42cc:
    // 0x3c42cc: 0x26451360  addiu       $a1, $s2, 0x1360
    ctx->pc = 0x3c42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4960));
    // 0x3c42d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c42d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c42d4: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C42D4u;
    SET_GPR_U32(ctx, 31, 0x3C42DCu);
    ctx->pc = 0x3C42D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C42D4u;
    // 0x3c42d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C42D4u, 0x3C42DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42DCu;
label_3c42dc:
    // 0x3c42dc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c42dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c42e0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c42e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c42e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C42E4u;
    {
        const bool branch_taken_0x3c42e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42E4u;
        // 0x3c42e8: 0x8fa6018c  lw          $a2, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c42e4) {
            ctx->pc = 0x3C4348u;
            goto label_3c4348;
        }
    }
    ctx->pc = 0x3C42ECu;
    // 0x3c42ec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3c42ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c42f0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x3c42f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c42f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C42F4u;
    {
        const bool branch_taken_0x3c42f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42F4u;
        // 0x3c42f8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c42f4) {
            ctx->pc = 0x3C4324u;
            goto label_3c4324;
        }
    }
    ctx->pc = 0x3C42FCu;
    // 0x3c42fc: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C42FCu;
    SET_GPR_U32(ctx, 31, 0x3C4304u);
    ctx->pc = 0x3C4300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C42FCu;
    // 0x3c4300: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C42FCu, 0x3C4304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4304u;
label_3c4304:
    // 0x3c4304: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x3c4304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3c4308: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c430c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c4310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c4314: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3c4314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c4318: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c4318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c431c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C431Cu;
    {
        const bool branch_taken_0x3c431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C431Cu;
        // 0x3c4320: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c431c) {
            ctx->pc = 0x3C4370u;
            goto label_3c4370;
        }
    }
    ctx->pc = 0x3C4324u;
label_3c4324:
    // 0x3c4324: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3c4324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4328: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4328u;
    SET_GPR_U32(ctx, 31, 0x3C4330u);
    ctx->pc = 0x3C432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4328u;
    // 0x3c432c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4328u, 0x3C4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4330u;
label_3c4330:
    // 0x3c4330: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4334: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c4334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4338: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c4338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c433c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c4340: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C4340u;
    {
        const bool branch_taken_0x3c4340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4340u;
        // 0x3c4344: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4340) {
            ctx->pc = 0x3C4370u;
            goto label_3c4370;
        }
    }
    ctx->pc = 0x3C4348u;
label_3c4348:
    // 0x3c4348: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3c4348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c434c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C434Cu;
    {
        const bool branch_taken_0x3c434c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c434c) {
            ctx->pc = 0x3C4350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C434Cu;
            // 0x3c4350: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4360u;
            goto label_3c4360;
        }
    }
    ctx->pc = 0x3C4354u;
    // 0x3c4354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c4354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4358: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c4358u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c435c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c435cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c4360:
    // 0x3c4360: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c4360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4364: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x3c4364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3c4368: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C4368u;
    SET_GPR_U32(ctx, 31, 0x3C4370u);
    ctx->pc = 0x3C436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4368u;
    // 0x3c436c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C4368u, 0x3C4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4370u;
label_3c4370:
    // 0x3c4370: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x3c4370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3c4374: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3C4374u;
    {
        const bool branch_taken_0x3c4374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4374u;
        // 0x3c4378: 0x8fa50194  lw          $a1, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4374) {
            ctx->pc = 0x3C44DCu;
            goto label_3c44dc;
        }
    }
    ctx->pc = 0x3C437Cu;
    // 0x3c437c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x3c437cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3c4380: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x3c4380u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3c4384: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3C4384u;
    {
        const bool branch_taken_0x3c4384 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3C4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4384u;
        // 0x3c4388: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4384) {
            ctx->pc = 0x3C44DCu;
            goto label_3c44dc;
        }
    }
    ctx->pc = 0x3C438Cu;
    // 0x3c438c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3C438Cu;
    {
        const bool branch_taken_0x3c438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C438Cu;
        // 0x3c4390: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c438c) {
            ctx->pc = 0x3C444Cu;
            goto label_3c444c;
        }
    }
    ctx->pc = 0x3C4394u;
    // 0x3c4394: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3c4394u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4398: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c4398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c439c: 0x0  nop
    ctx->pc = 0x3c439cu;
    // NOP
label_3c43a0:
    // 0x3c43a0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c43a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c43a4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3C43A4u;
    {
        const bool branch_taken_0x3c43a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c43a4) {
            ctx->pc = 0x3C43A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C43A4u;
            // 0x3c43a8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4420u;
            goto label_3c4420;
        }
    }
    ctx->pc = 0x3C43ACu;
    // 0x3c43ac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c43acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c43b0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3c43b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c43b4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C43B4u;
    {
        const bool branch_taken_0x3c43b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c43b4) {
            ctx->pc = 0x3C43B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C43B4u;
            // 0x3c43b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4400u;
            goto label_3c4400;
        }
    }
    ctx->pc = 0x3C43BCu;
    // 0x3c43bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c43c0: 0x26461350  addiu       $a2, $s2, 0x1350
    ctx->pc = 0x3c43c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    // 0x3c43c4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3c43c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3c43c8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3c43c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3c43cc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3c43ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3c43d0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3c43d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3c43d4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3c43d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c43d8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3c43d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c43dc: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3c43dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c43e0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3c43e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c43e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c43e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c43ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c43ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c43f0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3c43f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3c43f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c43f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C43F8u;
    {
        const bool branch_taken_0x3c43f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C43F8u;
        // 0x3c43fc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c43f8) {
            ctx->pc = 0x3C443Cu;
            goto label_3c443c;
        }
    }
    ctx->pc = 0x3C4400u;
label_3c4400:
    // 0x3c4400: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4400u;
    SET_GPR_U32(ctx, 31, 0x3C4408u);
    ctx->pc = 0x3C4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4400u;
    // 0x3c4404: 0x26451350  addiu       $a1, $s2, 0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4400u, 0x3C4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4408u;
label_3c4408:
    // 0x3c4408: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c440c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4410: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c4410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c4414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c4414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c4418: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C4418u;
    {
        const bool branch_taken_0x3c4418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4418u;
        // 0x3c441c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4418) {
            ctx->pc = 0x3C443Cu;
            goto label_3c443c;
        }
    }
    ctx->pc = 0x3C4420u;
label_3c4420:
    // 0x3c4420: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C4420u;
    {
        const bool branch_taken_0x3c4420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4420) {
            ctx->pc = 0x3C4424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4420u;
            // 0x3c4424: 0xa634000e  sh          $s4, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4428u;
            goto label_3c4428;
        }
    }
    ctx->pc = 0x3C4428u;
label_3c4428:
    // 0x3c4428: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c4428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3c442c: 0x26451350  addiu       $a1, $s2, 0x1350
    ctx->pc = 0x3c442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    // 0x3c4430: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c4430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c4434: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C4434u;
    SET_GPR_U32(ctx, 31, 0x3C443Cu);
    ctx->pc = 0x3C4438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4434u;
    // 0x3c4438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C4434u, 0x3C443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C443Cu;
label_3c443c:
    // 0x3c443c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3c443cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3c4440: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3c4440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3c4444: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3C4444u;
    {
        const bool branch_taken_0x3c4444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4444) {
            ctx->pc = 0x3C4448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4444u;
            // 0x3c4448: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C43A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c43a0;
        }
    }
    ctx->pc = 0x3C444Cu;
label_3c444c:
    // 0x3c444c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c444cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c4450: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c4450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c4454: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C4454u;
    {
        const bool branch_taken_0x3c4454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4454) {
            ctx->pc = 0x3C4458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4454u;
            // 0x3c4458: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C44B8u;
            goto label_3c44b8;
        }
    }
    ctx->pc = 0x3C445Cu;
    // 0x3c445c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3c445cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4460: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3c4460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3c4464: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C4464u;
    {
        const bool branch_taken_0x3c4464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4464u;
        // 0x3c4468: 0x26451350  addiu       $a1, $s2, 0x1350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4464) {
            ctx->pc = 0x3C4494u;
            goto label_3c4494;
        }
    }
    ctx->pc = 0x3C446Cu;
    // 0x3c446c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4470: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4470u;
    SET_GPR_U32(ctx, 31, 0x3C4478u);
    ctx->pc = 0x3C4474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4470u;
    // 0x3c4474: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4470u, 0x3C4478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4478u;
label_3c4478:
    // 0x3c4478: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c447c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c4480: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c4480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c4484: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3c4484u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3c4488: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3c4488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3c448c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C448Cu;
    {
        const bool branch_taken_0x3c448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C448Cu;
        // 0x3c4490: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c448c) {
            ctx->pc = 0x3C44DCu;
            goto label_3c44dc;
        }
    }
    ctx->pc = 0x3C4494u;
label_3c4494:
    // 0x3c4494: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c4494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c4498: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C4498u;
    SET_GPR_U32(ctx, 31, 0x3C44A0u);
    ctx->pc = 0x3C449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4498u;
    // 0x3c449c: 0x26451350  addiu       $a1, $s2, 0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C4498u, 0x3C44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C44A0u;
label_3c44a0:
    // 0x3c44a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c44a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c44a8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3c44ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c44acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c44b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3C44B0u;
    {
        const bool branch_taken_0x3c44b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44B0u;
        // 0x3c44b4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c44b0) {
            ctx->pc = 0x3C44DCu;
            goto label_3c44dc;
        }
    }
    ctx->pc = 0x3C44B8u;
label_3c44b8:
    // 0x3c44b8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C44B8u;
    {
        const bool branch_taken_0x3c44b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c44b8) {
            ctx->pc = 0x3C44BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C44B8u;
            // 0x3c44bc: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C44CCu;
            goto label_3c44cc;
        }
    }
    ctx->pc = 0x3C44C0u;
    // 0x3c44c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c44c4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c44c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c44c8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c44c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3c44cc:
    // 0x3c44cc: 0x26451350  addiu       $a1, $s2, 0x1350
    ctx->pc = 0x3c44ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4944));
    // 0x3c44d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c44d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c44d4: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C44D4u;
    SET_GPR_U32(ctx, 31, 0x3C44DCu);
    ctx->pc = 0x3C44D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C44D4u;
    // 0x3c44d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C44D4u, 0x3C44DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C44DCu;
label_3c44dc:
    // 0x3c44dc: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x3c44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x3c44e0: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x3c44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x3c44e4: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x3c44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x3c44e8: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x3c44e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3c44ec: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3c44ecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3c44f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3c44f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3c44f4: 0x1000fc1c  b           . + 4 + (-0x3E4 << 2)
    ctx->pc = 0x3C44F4u;
    {
        const bool branch_taken_0x3c44f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44F4u;
        // 0x3c44f8: 0xafa50190  sw          $a1, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c44f4) {
            ctx->pc = 0x3C3568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c3568;
        }
    }
    ctx->pc = 0x3C44FCu;
label_3c44fc:
    // 0x3c44fc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3c44fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c4500:
    // 0x3c4500: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3c4500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3c4504: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C4504u;
    {
        const bool branch_taken_0x3c4504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4504u;
        // 0x3c4508: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4504) {
            ctx->pc = 0x3C4524u;
            goto label_3c4524;
        }
    }
    ctx->pc = 0x3C450Cu;
    // 0x3c450c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3c450cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3c4510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c4510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4518: 0xc0f0cce  jal         func_3C3338
    ctx->pc = 0x3C4518u;
    SET_GPR_U32(ctx, 31, 0x3C4520u);
    ctx->pc = 0x3C451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4518u;
    // 0x3c451c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C3338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3338u, 0x3C4518u, 0x3C4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4520u;
label_3c4520:
    // 0x3c4520: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x3c4520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_3c4524:
    // 0x3c4524: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x3c4524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x3c4528: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x3c4528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x3c452c: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x3c452cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x3c4530: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x3c4530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x3c4534: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x3c4534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3c4538: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x3c4538u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3c453c: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x3c453cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x3c4540: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x3c4540u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x3c4544: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x3c4544u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x3c4548: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x3c4548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x3c454c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C454Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C454Cu;
        // 0x3c4550: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C454Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4554u;
    // 0x3c4554: 0x0  nop
    ctx->pc = 0x3c4554u;
    // NOP
    ctx->pc = 0x3c4558u;
}
