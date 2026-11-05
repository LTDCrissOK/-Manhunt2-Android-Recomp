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

// Function: sub_001D3198
// Address: 0x1d3198 - 0x1d32a0
void sub_001D3198_0x1d3198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3198_0x1d3198");
#endif

    switch (ctx->pc) {
        case 0x1d3198u: goto label_1d3198;
        case 0x1d319cu: goto label_1d319c;
        case 0x1d31a0u: goto label_1d31a0;
        case 0x1d31a4u: goto label_1d31a4;
        case 0x1d31a8u: goto label_1d31a8;
        case 0x1d31acu: goto label_1d31ac;
        case 0x1d31b0u: goto label_1d31b0;
        case 0x1d31b4u: goto label_1d31b4;
        case 0x1d31b8u: goto label_1d31b8;
        case 0x1d31bcu: goto label_1d31bc;
        case 0x1d31c0u: goto label_1d31c0;
        case 0x1d31c4u: goto label_1d31c4;
        case 0x1d31c8u: goto label_1d31c8;
        case 0x1d31ccu: goto label_1d31cc;
        case 0x1d31d0u: goto label_1d31d0;
        case 0x1d31d4u: goto label_1d31d4;
        case 0x1d31d8u: goto label_1d31d8;
        case 0x1d31dcu: goto label_1d31dc;
        case 0x1d31e0u: goto label_1d31e0;
        case 0x1d31e4u: goto label_1d31e4;
        case 0x1d31e8u: goto label_1d31e8;
        case 0x1d31ecu: goto label_1d31ec;
        case 0x1d31f0u: goto label_1d31f0;
        case 0x1d31f4u: goto label_1d31f4;
        case 0x1d31f8u: goto label_1d31f8;
        case 0x1d31fcu: goto label_1d31fc;
        case 0x1d3200u: goto label_1d3200;
        case 0x1d3204u: goto label_1d3204;
        case 0x1d3208u: goto label_1d3208;
        case 0x1d320cu: goto label_1d320c;
        case 0x1d3210u: goto label_1d3210;
        case 0x1d3214u: goto label_1d3214;
        case 0x1d3218u: goto label_1d3218;
        case 0x1d321cu: goto label_1d321c;
        case 0x1d3220u: goto label_1d3220;
        case 0x1d3224u: goto label_1d3224;
        case 0x1d3228u: goto label_1d3228;
        case 0x1d322cu: goto label_1d322c;
        case 0x1d3230u: goto label_1d3230;
        case 0x1d3234u: goto label_1d3234;
        case 0x1d3238u: goto label_1d3238;
        case 0x1d323cu: goto label_1d323c;
        case 0x1d3240u: goto label_1d3240;
        case 0x1d3244u: goto label_1d3244;
        case 0x1d3248u: goto label_1d3248;
        case 0x1d324cu: goto label_1d324c;
        case 0x1d3250u: goto label_1d3250;
        case 0x1d3254u: goto label_1d3254;
        case 0x1d3258u: goto label_1d3258;
        case 0x1d325cu: goto label_1d325c;
        case 0x1d3260u: goto label_1d3260;
        case 0x1d3264u: goto label_1d3264;
        case 0x1d3268u: goto label_1d3268;
        case 0x1d326cu: goto label_1d326c;
        case 0x1d3270u: goto label_1d3270;
        case 0x1d3274u: goto label_1d3274;
        case 0x1d3278u: goto label_1d3278;
        case 0x1d327cu: goto label_1d327c;
        case 0x1d3280u: goto label_1d3280;
        case 0x1d3284u: goto label_1d3284;
        case 0x1d3288u: goto label_1d3288;
        case 0x1d328cu: goto label_1d328c;
        case 0x1d3290u: goto label_1d3290;
        case 0x1d3294u: goto label_1d3294;
        case 0x1d3298u: goto label_1d3298;
        case 0x1d329cu: goto label_1d329c;
        default: break;
    }

    ctx->pc = 0x1d3198u;

label_1d3198:
    // 0x1d3198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d3198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d319c:
    // 0x1d319c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d31a0:
    // 0x1d31a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d31a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1d31a4:
    // 0x1d31a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d31a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d31a8:
    // 0x1d31a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d31a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d31ac:
    // 0x1d31ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d31acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d31b0:
    // 0x1d31b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d31b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d31b4:
    // 0x1d31b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d31b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1d31b8:
    // 0x1d31b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d31b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1d31bc:
    // 0x1d31bc: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_1d31c0:
    if (ctx->pc == 0x1D31C0u) {
        ctx->pc = 0x1D31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31BCu;
        // 0x1d31c0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D31C4u;
        goto label_1d31c4;
    }
    ctx->pc = 0x1D31BCu;
    {
        const bool branch_taken_0x1d31bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31BCu;
        // 0x1d31c0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31bc) {
            ctx->pc = 0x1D31DCu;
            goto label_1d31dc;
        }
    }
    ctx->pc = 0x1D31C4u;
label_1d31c4:
    // 0x1d31c4: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x1d31c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
label_1d31c8:
    // 0x1d31c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d31c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d31cc:
    // 0x1d31cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d31d0:
    if (ctx->pc == 0x1D31D0u) {
        ctx->pc = 0x1D31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31CCu;
        // 0x1d31d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D31D4u;
        goto label_1d31d4;
    }
    ctx->pc = 0x1D31CCu;
    {
        const bool branch_taken_0x1d31cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31CCu;
        // 0x1d31d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31cc) {
            ctx->pc = 0x1D31ECu;
            goto label_1d31ec;
        }
    }
    ctx->pc = 0x1D31D4u;
label_1d31d4:
    // 0x1d31d4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1d31d8:
    if (ctx->pc == 0x1D31D8u) {
        ctx->pc = 0x1D31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31D4u;
        // 0x1d31d8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D31DCu;
        goto label_1d31dc;
    }
    ctx->pc = 0x1D31D4u;
    {
        const bool branch_taken_0x1d31d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31D4u;
        // 0x1d31d8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31d4) {
            ctx->pc = 0x1D3284u;
            goto label_1d3284;
        }
    }
    ctx->pc = 0x1D31DCu;
label_1d31dc:
    // 0x1d31dc: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x1d31dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
label_1d31e0:
    // 0x1d31e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d31e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d31e4:
    // 0x1d31e4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1d31e8:
    if (ctx->pc == 0x1D31E8u) {
        ctx->pc = 0x1D31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31E4u;
        // 0x1d31e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D31ECu;
        goto label_1d31ec;
    }
    ctx->pc = 0x1D31E4u;
    {
        const bool branch_taken_0x1d31e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31E4u;
        // 0x1d31e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31e4) {
            ctx->pc = 0x1D3280u;
            goto label_1d3280;
        }
    }
    ctx->pc = 0x1D31ECu;
label_1d31ec:
    // 0x1d31ec: 0x8e530094  lw          $s3, 0x94($s2)
    ctx->pc = 0x1d31ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1d31f0:
    // 0x1d31f0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1d31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1d31f4:
    // 0x1d31f4: 0x2454f290  addiu       $s4, $v0, -0xD70
    ctx->pc = 0x1d31f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963856));
label_1d31f8:
    // 0x1d31f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d31f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d31fc:
    // 0x1d31fc: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1d31fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d3200:
    // 0x1d3200: 0x24638e90  addiu       $v1, $v1, -0x7170
    ctx->pc = 0x1d3200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938256));
label_1d3204:
    // 0x1d3204: 0x86510074  lh          $s1, 0x74($s2)
    ctx->pc = 0x1d3204u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
label_1d3208:
    // 0x1d3208: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d3208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d320c:
    // 0x1d320c: 0x101742  srl         $v0, $s0, 29
    ctx->pc = 0x1d320cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 29));
label_1d3210:
    // 0x1d3210: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x1d3210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d3214:
    // 0x1d3214: 0x108382  srl         $s0, $s0, 14
    ctx->pc = 0x1d3214u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 14));
label_1d3218:
    // 0x1d3218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d3218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d321c:
    // 0x1d321c: 0x32107fff  andi        $s0, $s0, 0x7FFF
    ctx->pc = 0x1d321cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32767);
label_1d3220:
    // 0x1d3220: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d3224:
    // 0x1d3224: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d3224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d3228:
    // 0x1d3228: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d3228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d322c:
    // 0x1d322c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1d322cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d3230:
    // 0x1d3230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3234:
    // 0x1d3234: 0xe0f809  jalr        $a3
label_1d3238:
    if (ctx->pc == 0x1D3238u) {
        ctx->pc = 0x1D3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3234u;
        // 0x1d3238: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D323Cu;
        goto label_1d323c;
    }
    ctx->pc = 0x1D3234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1D323Cu);
        ctx->pc = 0x1D3238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3234u;
        // 0x1d3238: 0x223280a  movz        $a1, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3234u, 0x1D323Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D323Cu;
label_1d323c:
    // 0x1d323c: 0x230882a  slt         $s1, $s1, $s0
    ctx->pc = 0x1d323cu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1d3240:
    // 0x1d3240: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
label_1d3244:
    if (ctx->pc == 0x1D3244u) {
        ctx->pc = 0x1D3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3240u;
        // 0x1d3244: 0xc6800020  lwc1        $f0, 0x20($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3248u;
        goto label_1d3248;
    }
    ctx->pc = 0x1D3240u;
    {
        const bool branch_taken_0x1d3240 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3240) {
            ctx->pc = 0x1D3244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3240u;
            // 0x1d3244: 0xc6800020  lwc1        $f0, 0x20($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3254u;
            goto label_1d3254;
        }
    }
    ctx->pc = 0x1D3248u;
label_1d3248:
    // 0x1d3248: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1d3248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d324c:
    // 0x1d324c: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x1d324cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_1d3250:
    // 0x1d3250: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1d3250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3254:
    // 0x1d3254: 0xc6410078  lwc1        $f1, 0x78($s2)
    ctx->pc = 0x1d3254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3258:
    // 0x1d3258: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d3258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d325c:
    // 0x1d325c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_1d3260:
    if (ctx->pc == 0x1D3260u) {
        ctx->pc = 0x1D3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D325Cu;
        // 0x1d3260: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3264u;
        goto label_1d3264;
    }
    ctx->pc = 0x1D325Cu;
    {
        const bool branch_taken_0x1d325c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D325Cu;
        // 0x1d3260: 0xe6400078  swc1        $f0, 0x78($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d325c) {
            ctx->pc = 0x1D3270u;
            goto label_1d3270;
        }
    }
    ctx->pc = 0x1D3264u;
label_1d3264:
    // 0x1d3264: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x1d3264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
label_1d3268:
    // 0x1d3268: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d326c:
    if (ctx->pc == 0x1D326Cu) {
        ctx->pc = 0x1D326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3268u;
        // 0x1d326c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3270u;
        goto label_1d3270;
    }
    ctx->pc = 0x1D3268u;
    {
        const bool branch_taken_0x1d3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3268u;
        // 0x1d326c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3268) {
            ctx->pc = 0x1D3278u;
            goto label_1d3278;
        }
    }
    ctx->pc = 0x1D3270u;
label_1d3270:
    // 0x1d3270: 0x92420090  lbu         $v0, 0x90($s2)
    ctx->pc = 0x1d3270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 144)));
label_1d3274:
    // 0x1d3274: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1d3274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_1d3278:
    // 0x1d3278: 0xa2420090  sb          $v0, 0x90($s2)
    ctx->pc = 0x1d3278u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 2));
label_1d327c:
    // 0x1d327c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d327cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3280:
    // 0x1d3280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d3284:
    // 0x1d3284: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3288:
    // 0x1d3288: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3288u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d328c:
    // 0x1d328c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d328cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3290:
    // 0x1d3290: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d3290u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d3294:
    // 0x1d3294: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d3294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d3298:
    // 0x1d3298: 0x3e00008  jr          $ra
label_1d329c:
    if (ctx->pc == 0x1D329Cu) {
        ctx->pc = 0x1D329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3298u;
        // 0x1d329c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D32A0u;
        goto label_fallthrough_0x1d3298;
    }
    ctx->pc = 0x1D3298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3298u;
        // 0x1d329c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d3298:
    ctx->pc = 0x1D32A0u;
}
