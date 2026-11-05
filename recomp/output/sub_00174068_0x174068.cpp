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

// Function: sub_00174068
// Address: 0x174068 - 0x174230
void sub_00174068_0x174068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174068_0x174068");
#endif

    switch (ctx->pc) {
        case 0x1740c8u: goto label_1740c8;
        case 0x174128u: goto label_174128;
        case 0x174188u: goto label_174188;
        default: break;
    }

    ctx->pc = 0x174068u;

    // 0x174068: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17406c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17406cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x174070: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x174070u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x174074: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x174074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174078: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17407c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x174080: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x174080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x174084: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x174084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x174088: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x174088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x17408c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x17408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x174090: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x174090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x174094: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x174094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x174098: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x174098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x17409c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x17409cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1740a0: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x1740a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x1740a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1740A4u;
    {
        const bool branch_taken_0x1740a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740A4u;
        // 0x1740a8: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740a4) {
            ctx->pc = 0x1740C8u;
            goto label_1740c8;
        }
    }
    ctx->pc = 0x1740ACu;
    // 0x1740ac: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1740acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1740b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1740b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1740b4: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1740b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1740b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1740b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1740bc: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x1740bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1740c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1740C0u;
    {
        const bool branch_taken_0x1740c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1740c0) {
            ctx->pc = 0x1740C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1740C0u;
            // 0x1740c4: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1740D0u;
            goto label_1740d0;
        }
    }
    ctx->pc = 0x1740C8u;
label_1740c8:
    // 0x1740c8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1740C8u;
    {
        const bool branch_taken_0x1740c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740C8u;
        // 0x1740cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740c8) {
            ctx->pc = 0x1741F8u;
            goto label_1741f8;
        }
    }
    ctx->pc = 0x1740D0u;
label_1740d0:
    // 0x1740d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1740d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1740d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1740d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1740d8: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1740d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1740dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1740DCu;
    {
        const bool branch_taken_0x1740dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1740dc) {
            ctx->pc = 0x1740E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1740DCu;
            // 0x1740e0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1740ECu;
            goto label_1740ec;
        }
    }
    ctx->pc = 0x1740E4u;
    // 0x1740e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1740E4u;
    {
        const bool branch_taken_0x1740e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740E4u;
        // 0x1740e8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740e4) {
            ctx->pc = 0x1740F4u;
            goto label_1740f4;
        }
    }
    ctx->pc = 0x1740ECu;
label_1740ec:
    // 0x1740ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1740ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1740f0: 0x24770070  addiu       $s7, $v1, 0x70
    ctx->pc = 0x1740f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1740f4:
    // 0x1740f4: 0x12e0fff4  beqz        $s7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1740F4u;
    {
        const bool branch_taken_0x1740f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1740F4u;
        // 0x1740f8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740f4) {
            ctx->pc = 0x1740C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1740c8;
        }
    }
    ctx->pc = 0x1740FCu;
    // 0x1740fc: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x1740fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x174100: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x174100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x174104: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x174104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x174108: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x174108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17410c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17410cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174110: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x174110u;
    {
        const bool branch_taken_0x174110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174110u;
        // 0x174114: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174110) {
            ctx->pc = 0x1741F4u;
            goto label_1741f4;
        }
    }
    ctx->pc = 0x174118u;
    // 0x174118: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x174118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x17411c: 0x24569c14  addiu       $s6, $v0, -0x63EC
    ctx->pc = 0x17411cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x174120: 0x26defefc  addiu       $fp, $s6, -0x104
    ctx->pc = 0x174120u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967036));
    // 0x174124: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x174124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_174128:
    // 0x174128: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x174128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17412c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17412cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174130: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x174130u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174134: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x174134u;
    {
        const bool branch_taken_0x174134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x174138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174134u;
        // 0x174138: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174134) {
            ctx->pc = 0x1741D4u;
            goto label_1741d4;
        }
    }
    ctx->pc = 0x17413Cu;
    // 0x17413c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x17413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x174140: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x174140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x174144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x174144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174148: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x174148u;
    {
        const bool branch_taken_0x174148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174148u;
        // 0x17414c: 0x307400ff  andi        $s4, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174148) {
            ctx->pc = 0x1741D4u;
            goto label_1741d4;
        }
    }
    ctx->pc = 0x174150u;
    // 0x174150: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x174150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x174154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x174154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x174158: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x174158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x17415c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174160: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x174160u;
    {
        const bool branch_taken_0x174160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174160) {
            ctx->pc = 0x174164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174160u;
            // 0x174164: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174170u;
            goto label_174170;
        }
    }
    ctx->pc = 0x174168u;
    // 0x174168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174168u;
    {
        const bool branch_taken_0x174168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174168u;
        // 0x17416c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174168) {
            ctx->pc = 0x174178u;
            goto label_174178;
        }
    }
    ctx->pc = 0x174170u;
label_174170:
    // 0x174170: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x174170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174174: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x174174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_174178:
    // 0x174178: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x174178u;
    {
        const bool branch_taken_0x174178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174178u;
        // 0x17417c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174178) {
            ctx->pc = 0x1741D8u;
            goto label_1741d8;
        }
    }
    ctx->pc = 0x174180u;
    // 0x174180: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x174180u;
    SET_GPR_U32(ctx, 31, 0x174188u);
    ctx->pc = 0x174184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174180u;
    // 0x174184: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x174180u, 0x174188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174188u;
label_174188:
    // 0x174188: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x174188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17418c: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x17418cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x174190: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x174190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x174194: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x174194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x174198: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x174198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17419c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1741a0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1741a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1741a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1741a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1741a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1741a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1741ac: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1741acu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1741b0: 0x46000004  c1          0x4
    ctx->pc = 0x1741b0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1741b4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1741b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1741b8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1741b8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1741bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1741bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1741c0: 0x0  nop
    ctx->pc = 0x1741c0u;
    // NOP
    // 0x1741c4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1741C4u;
    {
        const bool branch_taken_0x1741c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1741C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741C4u;
        // 0x1741c8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741c4) {
            ctx->pc = 0x1741D8u;
            goto label_1741d8;
        }
    }
    ctx->pc = 0x1741CCu;
    // 0x1741cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1741ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1741d0: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1741d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1741d4:
    // 0x1741d4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1741d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1741d8:
    // 0x1741d8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1741d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1741dc: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x1741dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1741e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1741E0u;
    {
        const bool branch_taken_0x1741e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1741E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1741E0u;
        // 0x1741e4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1741e0) {
            ctx->pc = 0x1741F8u;
            goto label_1741f8;
        }
    }
    ctx->pc = 0x1741E8u;
    // 0x1741e8: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x1741e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x1741ec: 0x5682ffce  bnel        $s4, $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1741ECu;
    {
        const bool branch_taken_0x1741ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1741ec) {
            ctx->pc = 0x1741F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1741ECu;
            // 0x1741f0: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174128;
        }
    }
    ctx->pc = 0x1741F4u;
label_1741f4:
    // 0x1741f4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1741f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1741f8:
    // 0x1741f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1741f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1741fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1741fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174200: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x174200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174204: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x174204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x174208: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x174208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17420c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x17420cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x174210: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x174210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174214: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x174214u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174218: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x174218u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17421c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x17421cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x174220: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x174220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x174224: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x174224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x174228: 0x3e00008  jr          $ra
    ctx->pc = 0x174228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174228u;
        // 0x17422c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174230u;
}
