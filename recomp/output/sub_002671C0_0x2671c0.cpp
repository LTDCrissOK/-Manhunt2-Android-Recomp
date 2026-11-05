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

// Function: sub_002671C0
// Address: 0x2671c0 - 0x267710
void sub_002671C0_0x2671c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002671C0_0x2671c0");
#endif

    switch (ctx->pc) {
        case 0x2671f0u: goto label_2671f0;
        case 0x267208u: goto label_267208;
        case 0x267218u: goto label_267218;
        case 0x26722cu: goto label_26722c;
        case 0x267240u: goto label_267240;
        case 0x267254u: goto label_267254;
        case 0x267294u: goto label_267294;
        case 0x2672a8u: goto label_2672a8;
        case 0x2672e8u: goto label_2672e8;
        case 0x2672fcu: goto label_2672fc;
        case 0x267310u: goto label_267310;
        case 0x267324u: goto label_267324;
        case 0x267338u: goto label_267338;
        case 0x26734cu: goto label_26734c;
        case 0x267360u: goto label_267360;
        case 0x267374u: goto label_267374;
        case 0x267388u: goto label_267388;
        case 0x26739cu: goto label_26739c;
        case 0x2673b0u: goto label_2673b0;
        case 0x2673c4u: goto label_2673c4;
        case 0x2673dcu: goto label_2673dc;
        case 0x2673f8u: goto label_2673f8;
        case 0x26741cu: goto label_26741c;
        case 0x267430u: goto label_267430;
        case 0x267444u: goto label_267444;
        case 0x267458u: goto label_267458;
        case 0x26746cu: goto label_26746c;
        case 0x267480u: goto label_267480;
        case 0x26749cu: goto label_26749c;
        case 0x2674acu: goto label_2674ac;
        case 0x2674c0u: goto label_2674c0;
        case 0x267530u: goto label_267530;
        case 0x26758cu: goto label_26758c;
        case 0x2675a0u: goto label_2675a0;
        case 0x2675b4u: goto label_2675b4;
        case 0x2675c8u: goto label_2675c8;
        case 0x2675dcu: goto label_2675dc;
        case 0x2675f0u: goto label_2675f0;
        case 0x267604u: goto label_267604;
        case 0x267618u: goto label_267618;
        case 0x26762cu: goto label_26762c;
        case 0x267640u: goto label_267640;
        case 0x267654u: goto label_267654;
        case 0x267668u: goto label_267668;
        case 0x267680u: goto label_267680;
        default: break;
    }

    ctx->pc = 0x2671c0u;

    // 0x2671c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2671c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2671c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2671c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2671c8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2671c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2671cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2671ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2671d0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2671d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2671d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2671d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2671d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671dc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2671dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2671e0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2671e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2671e4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2671e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2671e8: 0xc0837d8  jal         func_20DF60
    ctx->pc = 0x2671E8u;
    SET_GPR_U32(ctx, 31, 0x2671F0u);
    ctx->pc = 0x2671ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2671E8u;
    // 0x2671ec: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF60u, 0x2671E8u, 0x2671F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671F0u;
label_2671f0:
    // 0x2671f0: 0x27b00014  addiu       $s0, $sp, 0x14
    ctx->pc = 0x2671f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2671f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2671f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2671f8: 0x24a578a8  addiu       $a1, $a1, 0x78A8
    ctx->pc = 0x2671f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30888));
    // 0x2671fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2671fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267200: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x267200u;
    SET_GPR_U32(ctx, 31, 0x267208u);
    ctx->pc = 0x267204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267200u;
    // 0x267204: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x267200u, 0x267208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267208u;
label_267208:
    // 0x267208: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x267208u;
    {
        const bool branch_taken_0x267208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267208u;
        // 0x26720c: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267208) {
            ctx->pc = 0x267488u;
            goto label_267488;
        }
    }
    ctx->pc = 0x267210u;
    // 0x267210: 0xc099c02  jal         func_267008
    ctx->pc = 0x267210u;
    SET_GPR_U32(ctx, 31, 0x267218u);
    ctx->pc = 0x267214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267210u;
    // 0x267214: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267008u, 0x267210u, 0x267218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267218u;
label_267218:
    // 0x267218: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26721c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267220: 0x24a578b8  addiu       $a1, $a1, 0x78B8
    ctx->pc = 0x267220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30904));
    // 0x267224: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267224u;
    SET_GPR_U32(ctx, 31, 0x26722Cu);
    ctx->pc = 0x267228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267224u;
    // 0x267228: 0x26460292  addiu       $a2, $s2, 0x292 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 658));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267224u, 0x26722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26722Cu;
label_26722c:
    // 0x26722c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26722cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267234: 0x24a578c8  addiu       $a1, $a1, 0x78C8
    ctx->pc = 0x267234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30920));
    // 0x267238: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267238u;
    SET_GPR_U32(ctx, 31, 0x267240u);
    ctx->pc = 0x26723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267238u;
    // 0x26723c: 0x26460296  addiu       $a2, $s2, 0x296 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 662));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267238u, 0x267240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267240u;
label_267240:
    // 0x267240: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267248: 0x24a578e0  addiu       $a1, $a1, 0x78E0
    ctx->pc = 0x267248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30944));
    // 0x26724c: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x26724Cu;
    SET_GPR_U32(ctx, 31, 0x267254u);
    ctx->pc = 0x267250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26724Cu;
    // 0x267250: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x26724Cu, 0x267254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267254u;
label_267254:
    // 0x267254: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x267254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x267258: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267258u;
    {
        const bool branch_taken_0x267258 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267258u;
        // 0x26725c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267258) {
            ctx->pc = 0x267274u;
            goto label_267274;
        }
    }
    ctx->pc = 0x267260u;
    // 0x267260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x267260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x267264: 0x0  nop
    ctx->pc = 0x267264u;
    // NOP
    // 0x267268: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x267268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x26726c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26726Cu;
    {
        const bool branch_taken_0x26726c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26726c) {
            ctx->pc = 0x26728Cu;
            goto label_26728c;
        }
    }
    ctx->pc = 0x267274u;
label_267274:
    // 0x267274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x267278: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x267278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26727c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26727cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x267280: 0x0  nop
    ctx->pc = 0x267280u;
    // NOP
    // 0x267284: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x267284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x267288: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x267288u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_26728c:
    // 0x26728c: 0xc099c64  jal         func_267190
    ctx->pc = 0x26728Cu;
    SET_GPR_U32(ctx, 31, 0x267294u);
    ctx->pc = 0x267290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26728Cu;
    // 0x267290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267190u, 0x26728Cu, 0x267294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267294u;
label_267294:
    // 0x267294: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26729c: 0x24a578f0  addiu       $a1, $a1, 0x78F0
    ctx->pc = 0x26729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30960));
    // 0x2672a0: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x2672A0u;
    SET_GPR_U32(ctx, 31, 0x2672A8u);
    ctx->pc = 0x2672A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2672A0u;
    // 0x2672a4: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x2672A0u, 0x2672A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2672A8u;
label_2672a8:
    // 0x2672a8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2672a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2672ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2672ACu;
    {
        const bool branch_taken_0x2672ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2672B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2672ACu;
        // 0x2672b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2672ac) {
            ctx->pc = 0x2672C8u;
            goto label_2672c8;
        }
    }
    ctx->pc = 0x2672B4u;
    // 0x2672b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2672b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2672b8: 0x0  nop
    ctx->pc = 0x2672b8u;
    // NOP
    // 0x2672bc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2672bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2672c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2672C0u;
    {
        const bool branch_taken_0x2672c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672c0) {
            ctx->pc = 0x2672E0u;
            goto label_2672e0;
        }
    }
    ctx->pc = 0x2672C8u;
label_2672c8:
    // 0x2672c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2672c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2672cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2672ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2672d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2672d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2672d4: 0x0  nop
    ctx->pc = 0x2672d4u;
    // NOP
    // 0x2672d8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2672d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2672dc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2672dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2672e0:
    // 0x2672e0: 0xc099c5c  jal         func_267170
    ctx->pc = 0x2672E0u;
    SET_GPR_U32(ctx, 31, 0x2672E8u);
    ctx->pc = 0x2672E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2672E0u;
    // 0x2672e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267170u, 0x2672E0u, 0x2672E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2672E8u;
label_2672e8:
    // 0x2672e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2672e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2672ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2672ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2672f0: 0x24a57908  addiu       $a1, $a1, 0x7908
    ctx->pc = 0x2672f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30984));
    // 0x2672f4: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x2672F4u;
    SET_GPR_U32(ctx, 31, 0x2672FCu);
    ctx->pc = 0x2672F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2672F4u;
    // 0x2672f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x2672F4u, 0x2672FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2672FCu;
label_2672fc:
    // 0x2672fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2672fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267300: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x267300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x267304: 0x24a57918  addiu       $a1, $a1, 0x7918
    ctx->pc = 0x267304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31000));
    // 0x267308: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x267308u;
    SET_GPR_U32(ctx, 31, 0x267310u);
    ctx->pc = 0x26730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267308u;
    // 0x26730c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x267308u, 0x267310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267310u;
label_267310:
    // 0x267310: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267314: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x267314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x267318: 0x24a57928  addiu       $a1, $a1, 0x7928
    ctx->pc = 0x267318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31016));
    // 0x26731c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x26731Cu;
    SET_GPR_U32(ctx, 31, 0x267324u);
    ctx->pc = 0x267320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26731Cu;
    // 0x267320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x26731Cu, 0x267324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267324u;
label_267324:
    // 0x267324: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267328: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x267328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26732c: 0x24a57938  addiu       $a1, $a1, 0x7938
    ctx->pc = 0x26732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31032));
    // 0x267330: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267330u;
    SET_GPR_U32(ctx, 31, 0x267338u);
    ctx->pc = 0x267334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267330u;
    // 0x267334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267330u, 0x267338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267338u;
label_267338:
    // 0x267338: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26733c: 0x27a60011  addiu       $a2, $sp, 0x11
    ctx->pc = 0x26733cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 17));
    // 0x267340: 0x24a57948  addiu       $a1, $a1, 0x7948
    ctx->pc = 0x267340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31048));
    // 0x267344: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267344u;
    SET_GPR_U32(ctx, 31, 0x26734Cu);
    ctx->pc = 0x267348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267344u;
    // 0x267348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267344u, 0x26734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26734Cu;
label_26734c:
    // 0x26734c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26734cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267354: 0x24a57958  addiu       $a1, $a1, 0x7958
    ctx->pc = 0x267354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31064));
    // 0x267358: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267358u;
    SET_GPR_U32(ctx, 31, 0x267360u);
    ctx->pc = 0x26735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267358u;
    // 0x26735c: 0x26460290  addiu       $a2, $s2, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267358u, 0x267360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267360u;
label_267360:
    // 0x267360: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267368: 0x24a57978  addiu       $a1, $a1, 0x7978
    ctx->pc = 0x267368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31096));
    // 0x26736c: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x26736Cu;
    SET_GPR_U32(ctx, 31, 0x267374u);
    ctx->pc = 0x267370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26736Cu;
    // 0x267370: 0x26460299  addiu       $a2, $s2, 0x299 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 665));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x26736Cu, 0x267374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267374u;
label_267374:
    // 0x267374: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26737c: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x26737cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
    // 0x267380: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267380u;
    SET_GPR_U32(ctx, 31, 0x267388u);
    ctx->pc = 0x267384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267380u;
    // 0x267384: 0x2646029a  addiu       $a2, $s2, 0x29A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 666));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267380u, 0x267388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267388u;
label_267388:
    // 0x267388: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26738c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267390: 0x24a57998  addiu       $a1, $a1, 0x7998
    ctx->pc = 0x267390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31128));
    // 0x267394: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x267394u;
    SET_GPR_U32(ctx, 31, 0x26739Cu);
    ctx->pc = 0x267398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267394u;
    // 0x267398: 0x2646029c  addiu       $a2, $s2, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x267394u, 0x26739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26739Cu;
label_26739c:
    // 0x26739c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26739cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2673a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2673a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673a4: 0x24a579a8  addiu       $a1, $a1, 0x79A8
    ctx->pc = 0x2673a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31144));
    // 0x2673a8: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x2673A8u;
    SET_GPR_U32(ctx, 31, 0x2673B0u);
    ctx->pc = 0x2673ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2673A8u;
    // 0x2673ac: 0x264602a0  addiu       $a2, $s2, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x2673A8u, 0x2673B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2673B0u;
label_2673b0:
    // 0x2673b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2673b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2673b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2673b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673b8: 0x24a579c0  addiu       $a1, $a1, 0x79C0
    ctx->pc = 0x2673b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31168));
    // 0x2673bc: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x2673BCu;
    SET_GPR_U32(ctx, 31, 0x2673C4u);
    ctx->pc = 0x2673C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2673BCu;
    // 0x2673c0: 0x26460297  addiu       $a2, $s2, 0x297 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 663));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x2673BCu, 0x2673C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2673C4u;
label_2673c4:
    // 0x2673c4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2673c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2673c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2673c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2673cc: 0x24a579d8  addiu       $a1, $a1, 0x79D8
    ctx->pc = 0x2673ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31192));
    // 0x2673d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2673d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673d4: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x2673D4u;
    SET_GPR_U32(ctx, 31, 0x2673DCu);
    ctx->pc = 0x2673D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2673D4u;
    // 0x2673d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x2673D4u, 0x2673DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2673DCu;
label_2673dc:
    // 0x2673dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2673dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2673e0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2673e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2673e4: 0x24a579f0  addiu       $a1, $a1, 0x79F0
    ctx->pc = 0x2673e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31216));
    // 0x2673e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2673e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2673ec: 0xae430224  sw          $v1, 0x224($s2)
    ctx->pc = 0x2673ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 3));
    // 0x2673f0: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x2673F0u;
    SET_GPR_U32(ctx, 31, 0x2673F8u);
    ctx->pc = 0x2673F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2673F0u;
    // 0x2673f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x2673F0u, 0x2673F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2673F8u;
label_2673f8:
    // 0x2673f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2673f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2673fc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2673fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267400: 0xae400240  sw          $zero, 0x240($s2)
    ctx->pc = 0x267400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 0));
    // 0x267404: 0x24a57a00  addiu       $a1, $a1, 0x7A00
    ctx->pc = 0x267404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31232));
    // 0x267408: 0xae43022c  sw          $v1, 0x22C($s2)
    ctx->pc = 0x267408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 556), GPR_U32(ctx, 3));
    // 0x26740c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267410: 0xae430228  sw          $v1, 0x228($s2)
    ctx->pc = 0x267410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 3));
    // 0x267414: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267414u;
    SET_GPR_U32(ctx, 31, 0x26741Cu);
    ctx->pc = 0x267418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267414u;
    // 0x267418: 0x26460244  addiu       $a2, $s2, 0x244 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 580));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267414u, 0x26741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26741Cu;
label_26741c:
    // 0x26741c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26741cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267424: 0x24a57a20  addiu       $a1, $a1, 0x7A20
    ctx->pc = 0x267424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31264));
    // 0x267428: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x267428u;
    SET_GPR_U32(ctx, 31, 0x267430u);
    ctx->pc = 0x26742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267428u;
    // 0x26742c: 0x26460230  addiu       $a2, $s2, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x267428u, 0x267430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267430u;
label_267430:
    // 0x267430: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267438: 0x24a57a40  addiu       $a1, $a1, 0x7A40
    ctx->pc = 0x267438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31296));
    // 0x26743c: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x26743Cu;
    SET_GPR_U32(ctx, 31, 0x267444u);
    ctx->pc = 0x267440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26743Cu;
    // 0x267440: 0x26460238  addiu       $a2, $s2, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x26743Cu, 0x267444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267444u;
label_267444:
    // 0x267444: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26744c: 0x24a57a60  addiu       $a1, $a1, 0x7A60
    ctx->pc = 0x26744cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31328));
    // 0x267450: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x267450u;
    SET_GPR_U32(ctx, 31, 0x267458u);
    ctx->pc = 0x267454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267450u;
    // 0x267454: 0x26460248  addiu       $a2, $s2, 0x248 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x267450u, 0x267458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267458u;
label_267458:
    // 0x267458: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26745c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267460: 0x24a57a78  addiu       $a1, $a1, 0x7A78
    ctx->pc = 0x267460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31352));
    // 0x267464: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x267464u;
    SET_GPR_U32(ctx, 31, 0x26746Cu);
    ctx->pc = 0x267468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267464u;
    // 0x267468: 0x26460250  addiu       $a2, $s2, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x267464u, 0x26746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26746Cu;
label_26746c:
    // 0x26746c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26746cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267474: 0x24a57a88  addiu       $a1, $a1, 0x7A88
    ctx->pc = 0x267474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31368));
    // 0x267478: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267478u;
    SET_GPR_U32(ctx, 31, 0x267480u);
    ctx->pc = 0x26747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267478u;
    // 0x26747c: 0x26460247  addiu       $a2, $s2, 0x247 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 583));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267478u, 0x267480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267480u;
label_267480:
    // 0x267480: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x267480u;
    {
        const bool branch_taken_0x267480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267480) {
            ctx->pc = 0x267668u;
            goto label_267668;
        }
    }
    ctx->pc = 0x267488u;
label_267488:
    // 0x267488: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26748c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26748cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267490: 0x24a57aa0  addiu       $a1, $a1, 0x7AA0
    ctx->pc = 0x267490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31392));
    // 0x267494: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x267494u;
    SET_GPR_U32(ctx, 31, 0x26749Cu);
    ctx->pc = 0x267498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267494u;
    // 0x267498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x267494u, 0x26749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26749Cu;
label_26749c:
    // 0x26749c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x26749Cu;
    {
        const bool branch_taken_0x26749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2674A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26749Cu;
        // 0x2674a0: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26749c) {
            ctx->pc = 0x267668u;
            goto label_267668;
        }
    }
    ctx->pc = 0x2674A4u;
    // 0x2674a4: 0xc099c02  jal         func_267008
    ctx->pc = 0x2674A4u;
    SET_GPR_U32(ctx, 31, 0x2674ACu);
    ctx->pc = 0x2674A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2674A4u;
    // 0x2674a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267008u, 0x2674A4u, 0x2674ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2674ACu;
label_2674ac:
    // 0x2674ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2674acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2674b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2674b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2674b4: 0x24a578e0  addiu       $a1, $a1, 0x78E0
    ctx->pc = 0x2674b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30944));
    // 0x2674b8: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x2674B8u;
    SET_GPR_U32(ctx, 31, 0x2674C0u);
    ctx->pc = 0x2674BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2674B8u;
    // 0x2674bc: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x2674B8u, 0x2674C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2674C0u;
label_2674c0:
    // 0x2674c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2674c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2674c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2674C4u;
    {
        const bool branch_taken_0x2674c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2674C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2674C4u;
        // 0x2674c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2674c4) {
            ctx->pc = 0x2674E0u;
            goto label_2674e0;
        }
    }
    ctx->pc = 0x2674CCu;
    // 0x2674cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2674ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2674d0: 0x0  nop
    ctx->pc = 0x2674d0u;
    // NOP
    // 0x2674d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2674d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2674d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2674D8u;
    {
        const bool branch_taken_0x2674d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674d8) {
            ctx->pc = 0x2674F8u;
            goto label_2674f8;
        }
    }
    ctx->pc = 0x2674E0u;
label_2674e0:
    // 0x2674e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2674e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2674e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2674e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2674e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2674e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2674ec: 0x0  nop
    ctx->pc = 0x2674ecu;
    // NOP
    // 0x2674f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2674f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2674f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2674f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2674f8:
    // 0x2674f8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2674f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2674fc: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2674fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x267500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x267500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267508: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x267508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x26750c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x26750cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x267510: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x267510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267514: 0xae02bce4  sw          $v0, -0x431C($s0)
    ctx->pc = 0x267514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x267518: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26751c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26751cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267520: 0x24a57aa8  addiu       $a1, $a1, 0x7AA8
    ctx->pc = 0x267520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31400));
    // 0x267524: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x267524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x267528: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x267528u;
    SET_GPR_U32(ctx, 31, 0x267530u);
    ctx->pc = 0x26752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267528u;
    // 0x26752c: 0xe4600020  swc1        $f0, 0x20($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x267528u, 0x267530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267530u;
label_267530:
    // 0x267530: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x267530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x267534: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267534u;
    {
        const bool branch_taken_0x267534 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267534u;
        // 0x267538: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267534) {
            ctx->pc = 0x267550u;
            goto label_267550;
        }
    }
    ctx->pc = 0x26753Cu;
    // 0x26753c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26753cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267540: 0x0  nop
    ctx->pc = 0x267540u;
    // NOP
    // 0x267544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x267544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x267548: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267548u;
    {
        const bool branch_taken_0x267548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267548u;
        // 0x26754c: 0x8e430220  lw          $v1, 0x220($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267548) {
            ctx->pc = 0x26756Cu;
            goto label_26756c;
        }
    }
    ctx->pc = 0x267550u;
label_267550:
    // 0x267550: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x267554: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x267554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x267558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26755c: 0x0  nop
    ctx->pc = 0x26755cu;
    // NOP
    // 0x267560: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x267560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x267564: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x267564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x267568: 0x8e430220  lw          $v1, 0x220($s2)
    ctx->pc = 0x267568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_26756c:
    // 0x26756c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26756cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267570: 0xae02bce4  sw          $v0, -0x431C($s0)
    ctx->pc = 0x267570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950116), GPR_U32(ctx, 2));
    // 0x267574: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267578: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x267578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26757c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x26757cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x267580: 0x24a57908  addiu       $a1, $a1, 0x7908
    ctx->pc = 0x267580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30984));
    // 0x267584: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x267584u;
    SET_GPR_U32(ctx, 31, 0x26758Cu);
    ctx->pc = 0x267588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267584u;
    // 0x267588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x267584u, 0x26758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26758Cu;
label_26758c:
    // 0x26758c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26758cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267590: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x267590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x267594: 0x24a57918  addiu       $a1, $a1, 0x7918
    ctx->pc = 0x267594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31000));
    // 0x267598: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x267598u;
    SET_GPR_U32(ctx, 31, 0x2675A0u);
    ctx->pc = 0x26759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267598u;
    // 0x26759c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x267598u, 0x2675A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675A0u;
label_2675a0:
    // 0x2675a0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2675a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2675a4: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2675a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2675a8: 0x24a57928  addiu       $a1, $a1, 0x7928
    ctx->pc = 0x2675a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31016));
    // 0x2675ac: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x2675ACu;
    SET_GPR_U32(ctx, 31, 0x2675B4u);
    ctx->pc = 0x2675B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675ACu;
    // 0x2675b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x2675ACu, 0x2675B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675B4u;
label_2675b4:
    // 0x2675b4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2675b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2675b8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2675b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2675bc: 0x24a57ab0  addiu       $a1, $a1, 0x7AB0
    ctx->pc = 0x2675bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31408));
    // 0x2675c0: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x2675C0u;
    SET_GPR_U32(ctx, 31, 0x2675C8u);
    ctx->pc = 0x2675C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675C0u;
    // 0x2675c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x2675C0u, 0x2675C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675C8u;
label_2675c8:
    // 0x2675c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2675c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2675cc: 0x27a60011  addiu       $a2, $sp, 0x11
    ctx->pc = 0x2675ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 17));
    // 0x2675d0: 0x24a57ac0  addiu       $a1, $a1, 0x7AC0
    ctx->pc = 0x2675d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31424));
    // 0x2675d4: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x2675D4u;
    SET_GPR_U32(ctx, 31, 0x2675DCu);
    ctx->pc = 0x2675D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675D4u;
    // 0x2675d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x2675D4u, 0x2675DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675DCu;
label_2675dc:
    // 0x2675dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2675dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2675e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2675e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2675e4: 0x24a57ad0  addiu       $a1, $a1, 0x7AD0
    ctx->pc = 0x2675e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31440));
    // 0x2675e8: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x2675E8u;
    SET_GPR_U32(ctx, 31, 0x2675F0u);
    ctx->pc = 0x2675ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675E8u;
    // 0x2675ec: 0x26460290  addiu       $a2, $s2, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x2675E8u, 0x2675F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675F0u;
label_2675f0:
    // 0x2675f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2675f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2675f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2675f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2675f8: 0x24a57ad8  addiu       $a1, $a1, 0x7AD8
    ctx->pc = 0x2675f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31448));
    // 0x2675fc: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x2675FCu;
    SET_GPR_U32(ctx, 31, 0x267604u);
    ctx->pc = 0x267600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2675FCu;
    // 0x267600: 0x26460291  addiu       $a2, $s2, 0x291 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 657));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x2675FCu, 0x267604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267604u;
label_267604:
    // 0x267604: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26760c: 0x24a57ae0  addiu       $a1, $a1, 0x7AE0
    ctx->pc = 0x26760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31456));
    // 0x267610: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267610u;
    SET_GPR_U32(ctx, 31, 0x267618u);
    ctx->pc = 0x267614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267610u;
    // 0x267614: 0x26460298  addiu       $a2, $s2, 0x298 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267610u, 0x267618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267618u;
label_267618:
    // 0x267618: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26761c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267620: 0x24a57af0  addiu       $a1, $a1, 0x7AF0
    ctx->pc = 0x267620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31472));
    // 0x267624: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267624u;
    SET_GPR_U32(ctx, 31, 0x26762Cu);
    ctx->pc = 0x267628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267624u;
    // 0x267628: 0x26460299  addiu       $a2, $s2, 0x299 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 665));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267624u, 0x26762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26762Cu;
label_26762c:
    // 0x26762c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26762cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267634: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x267634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
    // 0x267638: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x267638u;
    SET_GPR_U32(ctx, 31, 0x267640u);
    ctx->pc = 0x26763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267638u;
    // 0x26763c: 0x2646029a  addiu       $a2, $s2, 0x29A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 666));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x267638u, 0x267640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267640u;
label_267640:
    // 0x267640: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267648: 0x24a57b00  addiu       $a1, $a1, 0x7B00
    ctx->pc = 0x267648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31488));
    // 0x26764c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x26764Cu;
    SET_GPR_U32(ctx, 31, 0x267654u);
    ctx->pc = 0x267650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26764Cu;
    // 0x267650: 0x2646029c  addiu       $a2, $s2, 0x29C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 668));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x26764Cu, 0x267654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267654u;
label_267654:
    // 0x267654: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x267654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x267658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26765c: 0x24a57b08  addiu       $a1, $a1, 0x7B08
    ctx->pc = 0x26765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31496));
    // 0x267660: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x267660u;
    SET_GPR_U32(ctx, 31, 0x267668u);
    ctx->pc = 0x267664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267660u;
    // 0x267664: 0x264602a0  addiu       $a2, $s2, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x267660u, 0x267668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267668u;
label_267668:
    // 0x267668: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x267668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26766c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26766cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x267670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267674: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x267674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267678: 0xc099c44  jal         func_267110
    ctx->pc = 0x267678u;
    SET_GPR_U32(ctx, 31, 0x267680u);
    ctx->pc = 0x26767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267678u;
    // 0x26767c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x267110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267110u, 0x267678u, 0x267680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267680u;
label_267680:
    // 0x267680: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x267680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267684: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267684u;
    {
        const bool branch_taken_0x267684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267684u;
        // 0x267688: 0xae4002a4  sw          $zero, 0x2A4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267684) {
            ctx->pc = 0x267694u;
            goto label_267694;
        }
    }
    ctx->pc = 0x26768Cu;
    // 0x26768c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267690: 0xae4202a4  sw          $v0, 0x2A4($s2)
    ctx->pc = 0x267690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 2));
label_267694:
    // 0x267694: 0x93a20011  lbu         $v0, 0x11($sp)
    ctx->pc = 0x267694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x267698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267698u;
    {
        const bool branch_taken_0x267698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267698u;
        // 0x26769c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267698) {
            ctx->pc = 0x2676B0u;
            goto label_2676b0;
        }
    }
    ctx->pc = 0x2676A0u;
    // 0x2676a0: 0x8e4202a4  lw          $v0, 0x2A4($s2)
    ctx->pc = 0x2676a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 676)));
    // 0x2676a4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2676a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2676a8: 0xae4202a4  sw          $v0, 0x2A4($s2)
    ctx->pc = 0x2676a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 2));
    // 0x2676ac: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2676acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2676b0:
    // 0x2676b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2676B0u;
    {
        const bool branch_taken_0x2676b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2676b0) {
            ctx->pc = 0x2676B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2676B0u;
            // 0x2676b4: 0xae4002a4  sw          $zero, 0x2A4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2676B8u;
            goto label_2676b8;
        }
    }
    ctx->pc = 0x2676B8u;
label_2676b8:
    // 0x2676b8: 0xc640029c  lwc1        $f0, 0x29C($s2)
    ctx->pc = 0x2676b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2676bc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2676bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2676c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2676c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2676c4: 0x8e4202a4  lw          $v0, 0x2A4($s2)
    ctx->pc = 0x2676c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 676)));
    // 0x2676c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2676c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2676cc: 0x0  nop
    ctx->pc = 0x2676ccu;
    // NOP
    // 0x2676d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2676D0u;
    {
        const bool branch_taken_0x2676d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2676D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676D0u;
        // 0x2676d4: 0xae4202a8  sw          $v0, 0x2A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676d0) {
            ctx->pc = 0x2676DCu;
            goto label_2676dc;
        }
    }
    ctx->pc = 0x2676D8u;
    // 0x2676d8: 0xe654029c  swc1        $f20, 0x29C($s2)
    ctx->pc = 0x2676d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 668), bits); }
label_2676dc:
    // 0x2676dc: 0x8e4202a0  lw          $v0, 0x2A0($s2)
    ctx->pc = 0x2676dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
    // 0x2676e0: 0x2c420101  sltiu       $v0, $v0, 0x101
    ctx->pc = 0x2676e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x2676e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2676E4u;
    {
        const bool branch_taken_0x2676e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2676E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2676E4u;
        // 0x2676e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2676e4) {
            ctx->pc = 0x2676F4u;
            goto label_2676f4;
        }
    }
    ctx->pc = 0x2676ECu;
    // 0x2676ec: 0x240200c4  addiu       $v0, $zero, 0xC4
    ctx->pc = 0x2676ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x2676f0: 0xae4202a0  sw          $v0, 0x2A0($s2)
    ctx->pc = 0x2676f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 672), GPR_U32(ctx, 2));
label_2676f4:
    // 0x2676f4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2676f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2676f8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2676f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2676fc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2676fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x267700: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x267700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x267704: 0x3e00008  jr          $ra
    ctx->pc = 0x267704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267704u;
        // 0x267708: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26770Cu;
    // 0x26770c: 0x0  nop
    ctx->pc = 0x26770cu;
    // NOP
    ctx->pc = 0x267710u;
}
