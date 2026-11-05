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

// Function: sub_003BF0B8
// Address: 0x3bf0b8 - 0x3bf200
void sub_003BF0B8_0x3bf0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF0B8_0x3bf0b8");
#endif

    switch (ctx->pc) {
        case 0x3bf138u: goto label_3bf138;
        case 0x3bf1bcu: goto label_3bf1bc;
        case 0x3bf1dcu: goto label_3bf1dc;
        default: break;
    }

    ctx->pc = 0x3bf0b8u;

    // 0x3bf0b8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x3bf0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x3bf0bc: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3BF0BCu;
    {
        const bool branch_taken_0x3bf0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0BCu;
        // 0x3bf0c0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf0bc) {
            ctx->pc = 0x3BF1DCu;
            goto label_3bf1dc;
        }
    }
    ctx->pc = 0x3BF0C4u;
    // 0x3bf0c4: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x3bf0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3bf0c8: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x3bf0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf0cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3bf0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3bf0d0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3bf0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3bf0d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3bf0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3bf0d8: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3bf0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3bf0dc: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x3bf0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x3bf0e0: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x3bf0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x3bf0e4: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3BF0E4u;
    {
        const bool branch_taken_0x3bf0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF0E4u;
        // 0x3bf0e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf0e4) {
            ctx->pc = 0x3BF164u;
            goto label_3bf164;
        }
    }
    ctx->pc = 0x3BF0ECu;
    // 0x3bf0ec: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3bf0ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf0f0: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x3bf0f0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x3bf0f4: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3bf0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf0f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf0fc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf100: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf104: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf108: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf10c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf10cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf110: 0x70681248  psubb       $v0, $v1, $t0
    ctx->pc = 0x3bf110u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x3bf114: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x3bf114u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x3bf118: 0x70844b89  pcpyld      $t1, $a0, $a0
    ctx->pc = 0x3bf118u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3bf11c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bf11cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bf120: 0x70491489  pand        $v0, $v0, $t1
    ctx->pc = 0x3bf120u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3bf124: 0x70481ba9  pcpyud      $v1, $v0, $t0
    ctx->pc = 0x3bf124u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3bf128: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3bf128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bf12c: 0x54c0002b  bnel        $a2, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3BF12Cu;
    {
        const bool branch_taken_0x3bf12c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf12c) {
            ctx->pc = 0x3BF130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF12Cu;
            // 0x3bf130: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF1DCu;
            goto label_3bf1dc;
        }
    }
    ctx->pc = 0x3BF134u;
    // 0x3bf134: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3bf134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3bf138:
    // 0x3bf138: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3bf138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf13c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3bf13cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3bf140: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x3bf140u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3bf144: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bf144u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bf148: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x3bf148u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3bf14c: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x3bf14cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x3bf150: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3bf150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3bf154: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3BF154u;
    {
        const bool branch_taken_0x3bf154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf154) {
            ctx->pc = 0x3BF158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF154u;
            // 0x3bf158: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf138;
        }
    }
    ctx->pc = 0x3BF15Cu;
    // 0x3bf15c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3BF15Cu;
    {
        const bool branch_taken_0x3bf15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF15Cu;
        // 0x3bf160: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf15c) {
            ctx->pc = 0x3BF1DCu;
            goto label_3bf1dc;
        }
    }
    ctx->pc = 0x3BF164u;
label_3bf164:
    // 0x3bf164: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3bf164u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf168: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3bf168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf16c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf170: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf174: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf178: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf17c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf17cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf180: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf184: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x3bf184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x3bf188: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x3bf188u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x3bf18c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bf18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bf190: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3bf190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3bf194: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3BF194u;
    {
        const bool branch_taken_0x3bf194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf194) {
            ctx->pc = 0x3BF198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF194u;
            // 0x3bf198: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF1DCu;
            goto label_3bf1dc;
        }
    }
    ctx->pc = 0x3BF19Cu;
    // 0x3bf19c: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3bf19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf1a0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3bf1a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3bf1a4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3bf1a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3bf1a8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3bf1a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3bf1ac: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3bf1acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3bf1b0: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x3bf1b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x3bf1b4: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x3bf1b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x3bf1b8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3bf1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3bf1bc:
    // 0x3bf1bc: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3bf1bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf1c0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3bf1c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3bf1c4: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x3bf1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x3bf1c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bf1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bf1cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3bf1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3bf1d0: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BF1D0u;
    {
        const bool branch_taken_0x3bf1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf1d0) {
            ctx->pc = 0x3BF1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF1D0u;
            // 0x3bf1d4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF1BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf1bc;
        }
    }
    ctx->pc = 0x3BF1D8u;
    // 0x3bf1d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3bf1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf1dc:
    // 0x3bf1dc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3bf1dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf1e0: 0x0  nop
    ctx->pc = 0x3bf1e0u;
    // NOP
    // 0x3bf1e4: 0x0  nop
    ctx->pc = 0x3bf1e4u;
    // NOP
    // 0x3bf1e8: 0x0  nop
    ctx->pc = 0x3bf1e8u;
    // NOP
    // 0x3bf1ec: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BF1ECu;
    {
        const bool branch_taken_0x3bf1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf1ec) {
            ctx->pc = 0x3BF1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF1ECu;
            // 0x3bf1f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF1DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf1dc;
        }
    }
    ctx->pc = 0x3BF1F4u;
    // 0x3bf1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1F4u;
        // 0x3bf1f8: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF1FCu;
    // 0x3bf1fc: 0x0  nop
    ctx->pc = 0x3bf1fcu;
    // NOP
    ctx->pc = 0x3bf200u;
}
