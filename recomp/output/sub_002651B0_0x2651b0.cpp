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

// Function: sub_002651B0
// Address: 0x2651b0 - 0x2652e0
void sub_002651B0_0x2651b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002651B0_0x2651b0");
#endif

    switch (ctx->pc) {
        case 0x2651b0u: goto label_2651b0;
        case 0x2651b4u: goto label_2651b4;
        case 0x2651b8u: goto label_2651b8;
        case 0x2651bcu: goto label_2651bc;
        case 0x2651c0u: goto label_2651c0;
        case 0x2651c4u: goto label_2651c4;
        case 0x2651c8u: goto label_2651c8;
        case 0x2651ccu: goto label_2651cc;
        case 0x2651d0u: goto label_2651d0;
        case 0x2651d4u: goto label_2651d4;
        case 0x2651d8u: goto label_2651d8;
        case 0x2651dcu: goto label_2651dc;
        case 0x2651e0u: goto label_2651e0;
        case 0x2651e4u: goto label_2651e4;
        case 0x2651e8u: goto label_2651e8;
        case 0x2651ecu: goto label_2651ec;
        case 0x2651f0u: goto label_2651f0;
        case 0x2651f4u: goto label_2651f4;
        case 0x2651f8u: goto label_2651f8;
        case 0x2651fcu: goto label_2651fc;
        case 0x265200u: goto label_265200;
        case 0x265204u: goto label_265204;
        case 0x265208u: goto label_265208;
        case 0x26520cu: goto label_26520c;
        case 0x265210u: goto label_265210;
        case 0x265214u: goto label_265214;
        case 0x265218u: goto label_265218;
        case 0x26521cu: goto label_26521c;
        case 0x265220u: goto label_265220;
        case 0x265224u: goto label_265224;
        case 0x265228u: goto label_265228;
        case 0x26522cu: goto label_26522c;
        case 0x265230u: goto label_265230;
        case 0x265234u: goto label_265234;
        case 0x265238u: goto label_265238;
        case 0x26523cu: goto label_26523c;
        case 0x265240u: goto label_265240;
        case 0x265244u: goto label_265244;
        case 0x265248u: goto label_265248;
        case 0x26524cu: goto label_26524c;
        case 0x265250u: goto label_265250;
        case 0x265254u: goto label_265254;
        case 0x265258u: goto label_265258;
        case 0x26525cu: goto label_26525c;
        case 0x265260u: goto label_265260;
        case 0x265264u: goto label_265264;
        case 0x265268u: goto label_265268;
        case 0x26526cu: goto label_26526c;
        case 0x265270u: goto label_265270;
        case 0x265274u: goto label_265274;
        case 0x265278u: goto label_265278;
        case 0x26527cu: goto label_26527c;
        case 0x265280u: goto label_265280;
        case 0x265284u: goto label_265284;
        case 0x265288u: goto label_265288;
        case 0x26528cu: goto label_26528c;
        case 0x265290u: goto label_265290;
        case 0x265294u: goto label_265294;
        case 0x265298u: goto label_265298;
        case 0x26529cu: goto label_26529c;
        case 0x2652a0u: goto label_2652a0;
        case 0x2652a4u: goto label_2652a4;
        case 0x2652a8u: goto label_2652a8;
        case 0x2652acu: goto label_2652ac;
        case 0x2652b0u: goto label_2652b0;
        case 0x2652b4u: goto label_2652b4;
        case 0x2652b8u: goto label_2652b8;
        case 0x2652bcu: goto label_2652bc;
        case 0x2652c0u: goto label_2652c0;
        case 0x2652c4u: goto label_2652c4;
        case 0x2652c8u: goto label_2652c8;
        case 0x2652ccu: goto label_2652cc;
        case 0x2652d0u: goto label_2652d0;
        case 0x2652d4u: goto label_2652d4;
        case 0x2652d8u: goto label_2652d8;
        case 0x2652dcu: goto label_2652dc;
        default: break;
    }

    ctx->pc = 0x2651b0u;

label_2651b0:
    // 0x2651b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2651b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2651b4:
    // 0x2651b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2651b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2651b8:
    // 0x2651b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2651b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2651bc:
    // 0x2651bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2651bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2651c0:
    // 0x2651c0: 0xc084536  jal         func_2114D8
label_2651c4:
    if (ctx->pc == 0x2651C4u) {
        ctx->pc = 0x2651C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651C0u;
        // 0x2651c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2651C8u;
        goto label_2651c8;
    }
    ctx->pc = 0x2651C0u;
    SET_GPR_U32(ctx, 31, 0x2651C8u);
    ctx->pc = 0x2651C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2651C0u;
    // 0x2651c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2114D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2114D8u, 0x2651C0u, 0x2651C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2651C8u;
label_2651c8:
    // 0x2651c8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2651c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2651cc:
    // 0x2651cc: 0x8e2402d4  lw          $a0, 0x2D4($s1)
    ctx->pc = 0x2651ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 724)));
label_2651d0:
    // 0x2651d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2651d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2651d4:
    // 0x2651d4: 0xc0b1680  jal         func_2C5A00
label_2651d8:
    if (ctx->pc == 0x2651D8u) {
        ctx->pc = 0x2651D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651D4u;
        // 0x2651d8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2651DCu;
        goto label_2651dc;
    }
    ctx->pc = 0x2651D4u;
    SET_GPR_U32(ctx, 31, 0x2651DCu);
    ctx->pc = 0x2651D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2651D4u;
    // 0x2651d8: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x2651D4u, 0x2651DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2651DCu;
label_2651dc:
    // 0x2651dc: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2651dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2651e0:
    // 0x2651e0: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x2651e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2651e4:
    // 0x2651e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2651e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2651e8:
    // 0x2651e8: 0xc0b845e  jal         func_2E1178
label_2651ec:
    if (ctx->pc == 0x2651ECu) {
        ctx->pc = 0x2651ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651E8u;
        // 0x2651ec: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2651F0u;
        goto label_2651f0;
    }
    ctx->pc = 0x2651E8u;
    SET_GPR_U32(ctx, 31, 0x2651F0u);
    ctx->pc = 0x2651ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2651E8u;
    // 0x2651ec: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1178u, 0x2651E8u, 0x2651F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2651F0u;
label_2651f0:
    // 0x2651f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2651f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_2651f4:
    // 0x2651f4: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x2651f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2651f8:
    // 0x2651f8: 0xc0c2e94  jal         func_30BA50
label_2651fc:
    if (ctx->pc == 0x2651FCu) {
        ctx->pc = 0x2651FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2651F8u;
        // 0x2651fc: 0x24a57810  addiu       $a1, $a1, 0x7810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265200u;
        goto label_265200;
    }
    ctx->pc = 0x2651F8u;
    SET_GPR_U32(ctx, 31, 0x265200u);
    ctx->pc = 0x2651FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2651F8u;
    // 0x2651fc: 0x24a57810  addiu       $a1, $a1, 0x7810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x2651F8u, 0x265200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265200u;
label_265200:
    // 0x265200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265204:
    // 0x265204: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_265208:
    if (ctx->pc == 0x265208u) {
        ctx->pc = 0x265208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265204u;
        // 0x265208: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26520Cu;
        goto label_26520c;
    }
    ctx->pc = 0x265204u;
    {
        const bool branch_taken_0x265204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x265208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265204u;
        // 0x265208: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265204) {
            ctx->pc = 0x265234u;
            goto label_265234;
        }
    }
    ctx->pc = 0x26520Cu;
label_26520c:
    // 0x26520c: 0xc0f70ce  jal         func_3DC338
label_265210:
    if (ctx->pc == 0x265210u) {
        ctx->pc = 0x265210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26520Cu;
        // 0x265210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265214u;
        goto label_265214;
    }
    ctx->pc = 0x26520Cu;
    SET_GPR_U32(ctx, 31, 0x265214u);
    ctx->pc = 0x265210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26520Cu;
    // 0x265210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26520Cu, 0x265214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265214u;
label_265214:
    // 0x265214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_265218:
    if (ctx->pc == 0x265218u) {
        ctx->pc = 0x265218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265214u;
        // 0x265218: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26521Cu;
        goto label_26521c;
    }
    ctx->pc = 0x265214u;
    {
        const bool branch_taken_0x265214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265214u;
        // 0x265218: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265214) {
            ctx->pc = 0x265228u;
            goto label_265228;
        }
    }
    ctx->pc = 0x26521Cu;
label_26521c:
    // 0x26521c: 0xc0c4900  jal         func_312400
label_265220:
    if (ctx->pc == 0x265220u) {
        ctx->pc = 0x265220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26521Cu;
        // 0x265220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265224u;
        goto label_265224;
    }
    ctx->pc = 0x26521Cu;
    SET_GPR_U32(ctx, 31, 0x265224u);
    ctx->pc = 0x265220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26521Cu;
    // 0x265220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26521Cu, 0x265224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265224u;
label_265224:
    // 0x265224: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x265224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_265228:
    // 0x265228: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x265228u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26522c:
    // 0x26522c: 0xfa2102f0  sqc2        $vf1, 0x2F0($s1)
    ctx->pc = 0x26522cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 752), _mm_castps_si128(ctx->vu0_vf[1]));
label_265230:
    // 0x265230: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x265230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_265234:
    // 0x265234: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x265234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_265238:
    // 0x265238: 0xc0c2e94  jal         func_30BA50
label_26523c:
    if (ctx->pc == 0x26523Cu) {
        ctx->pc = 0x26523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265238u;
        // 0x26523c: 0x24a57818  addiu       $a1, $a1, 0x7818 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265240u;
        goto label_265240;
    }
    ctx->pc = 0x265238u;
    SET_GPR_U32(ctx, 31, 0x265240u);
    ctx->pc = 0x26523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265238u;
    // 0x26523c: 0x24a57818  addiu       $a1, $a1, 0x7818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x265238u, 0x265240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265240u;
label_265240:
    // 0x265240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x265240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_265244:
    // 0x265244: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_265248:
    if (ctx->pc == 0x265248u) {
        ctx->pc = 0x265248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265244u;
        // 0x265248: 0x922202bc  lbu         $v0, 0x2BC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26524Cu;
        goto label_26524c;
    }
    ctx->pc = 0x265244u;
    {
        const bool branch_taken_0x265244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x265244) {
            ctx->pc = 0x265248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x265244u;
            // 0x265248: 0x922202bc  lbu         $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265280u;
            goto label_265280;
        }
    }
    ctx->pc = 0x26524Cu;
label_26524c:
    // 0x26524c: 0xc0f70ce  jal         func_3DC338
label_265250:
    if (ctx->pc == 0x265250u) {
        ctx->pc = 0x265250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26524Cu;
        // 0x265250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265254u;
        goto label_265254;
    }
    ctx->pc = 0x26524Cu;
    SET_GPR_U32(ctx, 31, 0x265254u);
    ctx->pc = 0x265250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26524Cu;
    // 0x265250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26524Cu, 0x265254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265254u;
label_265254:
    // 0x265254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_265258:
    if (ctx->pc == 0x265258u) {
        ctx->pc = 0x265258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265254u;
        // 0x265258: 0x26230310  addiu       $v1, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26525Cu;
        goto label_26525c;
    }
    ctx->pc = 0x265254u;
    {
        const bool branch_taken_0x265254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265254u;
        // 0x265258: 0x26230310  addiu       $v1, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265254) {
            ctx->pc = 0x265268u;
            goto label_265268;
        }
    }
    ctx->pc = 0x26525Cu;
label_26525c:
    // 0x26525c: 0xc0c4900  jal         func_312400
label_265260:
    if (ctx->pc == 0x265260u) {
        ctx->pc = 0x265260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26525Cu;
        // 0x265260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265264u;
        goto label_265264;
    }
    ctx->pc = 0x26525Cu;
    SET_GPR_U32(ctx, 31, 0x265264u);
    ctx->pc = 0x265260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26525Cu;
    // 0x265260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26525Cu, 0x265264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265264u;
label_265264:
    // 0x265264: 0x26230310  addiu       $v1, $s1, 0x310
    ctx->pc = 0x265264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_265268:
    // 0x265268: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x265268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_26526c:
    // 0x26526c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26526cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265270:
    // 0x265270: 0xfa210310  sqc2        $vf1, 0x310($s1)
    ctx->pc = 0x265270u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 784), _mm_castps_si128(ctx->vu0_vf[1]));
label_265274:
    // 0x265274: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x265274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_265278:
    // 0x265278: 0xfa210330  sqc2        $vf1, 0x330($s1)
    ctx->pc = 0x265278u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 816), _mm_castps_si128(ctx->vu0_vf[1]));
label_26527c:
    // 0x26527c: 0x922202bc  lbu         $v0, 0x2BC($s1)
    ctx->pc = 0x26527cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 700)));
label_265280:
    // 0x265280: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_265284:
    if (ctx->pc == 0x265284u) {
        ctx->pc = 0x265284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265280u;
        // 0x265284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265288u;
        goto label_265288;
    }
    ctx->pc = 0x265280u;
    {
        const bool branch_taken_0x265280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265280u;
        // 0x265284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265280) {
            ctx->pc = 0x2652C4u;
            goto label_2652c4;
        }
    }
    ctx->pc = 0x265288u;
label_265288:
    // 0x265288: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x265288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_26528c:
    // 0x26528c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x26528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_265290:
    // 0x265290: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_265294:
    if (ctx->pc == 0x265294u) {
        ctx->pc = 0x265294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265290u;
        // 0x265294: 0x34620008  ori         $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x265298u;
        goto label_265298;
    }
    ctx->pc = 0x265290u;
    {
        const bool branch_taken_0x265290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265290u;
        // 0x265294: 0x34620008  ori         $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x265290) {
            ctx->pc = 0x2652C4u;
            goto label_2652c4;
        }
    }
    ctx->pc = 0x265298u;
label_265298:
    // 0x265298: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x265298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_26529c:
    // 0x26529c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2652a0:
    if (ctx->pc == 0x2652A0u) {
        ctx->pc = 0x2652A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26529Cu;
        // 0x2652a0: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2652A4u;
        goto label_2652a4;
    }
    ctx->pc = 0x26529Cu;
    {
        const bool branch_taken_0x26529c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2652A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26529Cu;
        // 0x2652a0: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26529c) {
            ctx->pc = 0x2652ACu;
            goto label_2652ac;
        }
    }
    ctx->pc = 0x2652A4u;
label_2652a4:
    // 0x2652a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2652a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2652a8:
    // 0x2652a8: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x2652a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_2652ac:
    // 0x2652ac: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2652acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2652b0:
    // 0x2652b0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2652b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2652b4:
    // 0x2652b4: 0x40f809  jalr        $v0
label_2652b8:
    if (ctx->pc == 0x2652B8u) {
        ctx->pc = 0x2652B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652B4u;
        // 0x2652b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2652BCu;
        goto label_2652bc;
    }
    ctx->pc = 0x2652B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2652BCu);
        ctx->pc = 0x2652B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652B4u;
        // 0x2652b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2652B4u, 0x2652BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2652BCu;
label_2652bc:
    // 0x2652bc: 0xa22002bc  sb          $zero, 0x2BC($s1)
    ctx->pc = 0x2652bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 700), (uint8_t)GPR_U32(ctx, 0));
label_2652c0:
    // 0x2652c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2652c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2652c4:
    // 0x2652c4: 0xc09967c  jal         func_2659F0
label_2652c8:
    if (ctx->pc == 0x2652C8u) {
        ctx->pc = 0x2652C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652C4u;
        // 0x2652c8: 0x8c8502d4  lw          $a1, 0x2D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2652CCu;
        goto label_2652cc;
    }
    ctx->pc = 0x2652C4u;
    SET_GPR_U32(ctx, 31, 0x2652CCu);
    ctx->pc = 0x2652C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2652C4u;
    // 0x2652c8: 0x8c8502d4  lw          $a1, 0x2D4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2659F0u, 0x2652C4u, 0x2652CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2652CCu;
label_2652cc:
    // 0x2652cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2652ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2652d0:
    // 0x2652d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2652d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2652d4:
    // 0x2652d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2652d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2652d8:
    // 0x2652d8: 0x3e00008  jr          $ra
label_2652dc:
    if (ctx->pc == 0x2652DCu) {
        ctx->pc = 0x2652DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652D8u;
        // 0x2652dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2652E0u;
        goto label_fallthrough_0x2652d8;
    }
    ctx->pc = 0x2652D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2652DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2652D8u;
        // 0x2652dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2652D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2652d8:
    ctx->pc = 0x2652E0u;
}
