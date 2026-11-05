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

// Function: sub_003BEFA0
// Address: 0x3befa0 - 0x3bf0b8
void sub_003BEFA0_0x3befa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEFA0_0x3befa0");
#endif

    switch (ctx->pc) {
        case 0x3bf024u: goto label_3bf024;
        case 0x3bf070u: goto label_3bf070;
        case 0x3bf098u: goto label_3bf098;
        default: break;
    }

    ctx->pc = 0x3befa0u;

    // 0x3befa0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3befa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3befa4: 0xa74025  or          $t0, $a1, $a3
    ctx->pc = 0x3befa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x3befa8: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x3befa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x3befac: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3BEFACu;
    {
        const bool branch_taken_0x3befac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEFACu;
        // 0x3befb0: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3befac) {
            ctx->pc = 0x3BF098u;
            goto label_3bf098;
        }
    }
    ctx->pc = 0x3BEFB4u;
    // 0x3befb4: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x3befb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x3befb8: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x3befb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3befbc: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3befbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3befc0: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3befc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3befc4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3befc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3befc8: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3befc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3befcc: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x3befccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3befd0: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x3befd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3befd4: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3befd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3befd8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3befd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3befdc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3befdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3befe0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3befe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3befe4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3befe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3befe8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3befe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3befec: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3befecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3beff0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BEFF0u;
    {
        const bool branch_taken_0x3beff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3beff0) {
            ctx->pc = 0x3BEFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BEFF0u;
            // 0x3beff4: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF058u;
            goto label_3bf058;
        }
    }
    ctx->pc = 0x3BEFF8u;
    // 0x3beff8: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x3beff8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x3beffc: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x3beffcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf000: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x3bf000u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3bf004: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x3bf004u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3bf008: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x3bf008u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x3bf00c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bf00cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bf010: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x3bf010u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3bf014: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x3bf014u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3bf018: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x3bf018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3bf01c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3BF01Cu;
    {
        const bool branch_taken_0x3bf01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF01Cu;
        // 0x3bf020: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf01c) {
            ctx->pc = 0x3BF094u;
            goto label_3bf094;
        }
    }
    ctx->pc = 0x3BF024u;
label_3bf024:
    // 0x3bf024: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x3bf024u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x3bf028: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3bf028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3bf02c: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x3bf02cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf030: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x3bf030u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3bf034: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x3bf034u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x3bf038: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bf038u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bf03c: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x3bf03cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3bf040: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x3bf040u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3bf044: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x3bf044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3bf048: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3BF048u;
    {
        const bool branch_taken_0x3bf048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF048u;
        // 0x3bf04c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf048) {
            ctx->pc = 0x3BF024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf024;
        }
    }
    ctx->pc = 0x3BF050u;
    // 0x3bf050: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3BF050u;
    {
        const bool branch_taken_0x3bf050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF050u;
        // 0x3bf054: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf050) {
            ctx->pc = 0x3BF098u;
            goto label_3bf098;
        }
    }
    ctx->pc = 0x3BF058u;
label_3bf058:
    // 0x3bf058: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x3bf058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x3bf05c: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x3bf05cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x3bf060: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bf060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bf064: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3bf064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3bf068: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BF068u;
    {
        const bool branch_taken_0x3bf068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF068u;
        // 0x3bf06c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf068) {
            ctx->pc = 0x3BF094u;
            goto label_3bf094;
        }
    }
    ctx->pc = 0x3BF070u;
label_3bf070:
    // 0x3bf070: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x3bf070u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x3bf074: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3bf074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3bf078: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x3bf078u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf07c: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x3bf07cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x3bf080: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x3bf080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x3bf084: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bf084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bf088: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3bf088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3bf08c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3BF08Cu;
    {
        const bool branch_taken_0x3bf08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF08Cu;
        // 0x3bf090: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf08c) {
            ctx->pc = 0x3BF070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf070;
        }
    }
    ctx->pc = 0x3BF094u;
label_3bf094:
    // 0x3bf094: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3bf094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bf098:
    // 0x3bf098: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bf098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf09c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bf09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bf0a0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3bf0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bf0a4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3bf0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3bf0a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BF0A8u;
    {
        const bool branch_taken_0x3bf0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0A8u;
        // 0x3bf0ac: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf0a8) {
            ctx->pc = 0x3BF098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf098;
        }
    }
    ctx->pc = 0x3BF0B0u;
    // 0x3bf0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0B0u;
        // 0x3bf0b4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF0B8u;
}
