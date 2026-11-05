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

// Function: sub_003BF200
// Address: 0x3bf200 - 0x3bf3b8
void sub_003BF200_0x3bf200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF200_0x3bf200");
#endif

    switch (ctx->pc) {
        case 0x3bf288u: goto label_3bf288;
        case 0x3bf308u: goto label_3bf308;
        case 0x3bf338u: goto label_3bf338;
        case 0x3bf380u: goto label_3bf380;
        default: break;
    }

    ctx->pc = 0x3bf200u;

    // 0x3bf200: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3bf200u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf204: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x3bf204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x3bf208: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x3BF208u;
    {
        const bool branch_taken_0x3bf208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf208) {
            ctx->pc = 0x3BF20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF208u;
            // 0x3bf20c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF32Cu;
            goto label_3bf32c;
        }
    }
    ctx->pc = 0x3BF210u;
    // 0x3bf210: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x3bf210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x3bf214: 0x54600027  bnel        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x3BF214u;
    {
        const bool branch_taken_0x3bf214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf214) {
            ctx->pc = 0x3BF218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF214u;
            // 0x3bf218: 0xdd020000  ld          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF2B4u;
            goto label_3bf2b4;
        }
    }
    ctx->pc = 0x3BF21Cu;
    // 0x3bf21c: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x3bf21cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf220: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3bf220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3bf224: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3bf224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3bf228: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3bf228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3bf22c: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3bf22cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3bf230: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x3bf230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x3bf234: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x3bf234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x3bf238: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x3bf238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3bf23c: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x3bf23cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3bf240: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3bf240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf244: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf248: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf24c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf250: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf254: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf258: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf25c: 0x70491a48  psubb       $v1, $v0, $t1
    ctx->pc = 0x3bf25cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3bf260: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x3bf260u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3bf264: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x3bf264u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3bf268: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x3bf268u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3bf26c: 0x706a1c89  pand        $v1, $v1, $t2
    ctx->pc = 0x3bf26cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x3bf270: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x3bf270u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3bf274: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3bf274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bf278: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3BF278u;
    {
        const bool branch_taken_0x3bf278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF278u;
        // 0x3bf27c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf278) {
            ctx->pc = 0x3BF324u;
            goto label_3bf324;
        }
    }
    ctx->pc = 0x3BF280u;
    // 0x3bf280: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3bf280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3bf284: 0x0  nop
    ctx->pc = 0x3bf284u;
    // NOP
label_3bf288:
    // 0x3bf288: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x3bf288u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3bf28c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3bf28cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3bf290: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x3bf290u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3bf294: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3bf294u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3bf298: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x3bf298u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3bf29c: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x3bf29cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3bf2a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3bf2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3bf2a4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3BF2A4u;
    {
        const bool branch_taken_0x3bf2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2A4u;
        // 0x3bf2a8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf2a4) {
            ctx->pc = 0x3BF288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf288;
        }
    }
    ctx->pc = 0x3BF2ACu;
    // 0x3bf2ac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3BF2ACu;
    {
        const bool branch_taken_0x3bf2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2ACu;
        // 0x3bf2b0: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf2ac) {
            ctx->pc = 0x3BF324u;
            goto label_3bf324;
        }
    }
    ctx->pc = 0x3BF2B4u;
label_3bf2b4:
    // 0x3bf2b4: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x3bf2b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf2b8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3bf2b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3bf2bc: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3bf2bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3bf2c0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3bf2c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3bf2c4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x3bf2c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x3bf2c8: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x3bf2c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x3bf2cc: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x3bf2ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x3bf2d0: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3bf2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3bf2d4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf2d8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf2dc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf2e0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf2e4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3bf2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3bf2e8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3bf2e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3bf2ec: 0x49182f  dsubu       $v1, $v0, $t1
    ctx->pc = 0x3bf2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3bf2f0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3bf2f0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3bf2f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bf2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bf2f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3bf2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3bf2fc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BF2FCu;
    {
        const bool branch_taken_0x3bf2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2FCu;
        // 0x3bf300: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf2fc) {
            ctx->pc = 0x3BF324u;
            goto label_3bf324;
        }
    }
    ctx->pc = 0x3BF304u;
    // 0x3bf304: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3bf304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3bf308:
    // 0x3bf308: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3bf308u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3bf30c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3bf30cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3bf310: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x3bf310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3bf314: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3bf314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3bf318: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3bf318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3bf31c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BF31Cu;
    {
        const bool branch_taken_0x3bf31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf31c) {
            ctx->pc = 0x3BF320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF31Cu;
            // 0x3bf320: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf308;
        }
    }
    ctx->pc = 0x3BF324u;
label_3bf324:
    // 0x3bf324: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3bf324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf328: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3bf328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3bf32c:
    // 0x3bf32c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BF32Cu;
    {
        const bool branch_taken_0x3bf32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF32Cu;
        // 0x3bf330: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf32c) {
            ctx->pc = 0x3BF350u;
            goto label_3bf350;
        }
    }
    ctx->pc = 0x3BF334u;
    // 0x3bf334: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3bf334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3bf338:
    // 0x3bf338: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3bf338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bf33c: 0x0  nop
    ctx->pc = 0x3bf33cu;
    // NOP
    // 0x3bf340: 0x0  nop
    ctx->pc = 0x3bf340u;
    // NOP
    // 0x3bf344: 0x0  nop
    ctx->pc = 0x3bf344u;
    // NOP
    // 0x3bf348: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3BF348u;
    {
        const bool branch_taken_0x3bf348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf348) {
            ctx->pc = 0x3BF34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF348u;
            // 0x3bf34c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf338;
        }
    }
    ctx->pc = 0x3BF350u;
label_3bf350:
    // 0x3bf350: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bf350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3bf354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bf354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3bf358: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3BF358u;
    {
        const bool branch_taken_0x3bf358 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bf358) {
            ctx->pc = 0x3BF3ACu;
            goto label_3bf3ac;
        }
    }
    ctx->pc = 0x3BF360u;
    // 0x3bf360: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bf360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf364: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bf364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bf368: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3bf368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bf36c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3bf36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3bf370: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3BF370u;
    {
        const bool branch_taken_0x3bf370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF370u;
        // 0x3bf374: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf370) {
            ctx->pc = 0x3BF3ACu;
            goto label_3bf3ac;
        }
    }
    ctx->pc = 0x3BF378u;
    // 0x3bf378: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3bf378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3bf37c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3bf37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3bf380:
    // 0x3bf380: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3BF380u;
    {
        const bool branch_taken_0x3bf380 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf380) {
            ctx->pc = 0x3BF384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF380u;
            // 0x3bf384: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF388u;
            goto label_3bf388;
        }
    }
    ctx->pc = 0x3BF388u;
label_3bf388:
    // 0x3bf388: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3bf388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3bf38c: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BF38Cu;
    {
        const bool branch_taken_0x3bf38c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bf38c) {
            ctx->pc = 0x3BF3ACu;
            goto label_3bf3ac;
        }
    }
    ctx->pc = 0x3BF394u;
    // 0x3bf394: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3bf394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3bf398: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3bf398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3bf39c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3bf39cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bf3a0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3bf3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3bf3a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3BF3A4u;
    {
        const bool branch_taken_0x3bf3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3A4u;
        // 0x3bf3a8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf3a4) {
            ctx->pc = 0x3BF380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bf380;
        }
    }
    ctx->pc = 0x3BF3ACu;
label_3bf3ac:
    // 0x3bf3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3ACu;
        // 0x3bf3b0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF3B4u;
    // 0x3bf3b4: 0x0  nop
    ctx->pc = 0x3bf3b4u;
    // NOP
    ctx->pc = 0x3bf3b8u;
}
