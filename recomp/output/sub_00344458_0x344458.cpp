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

// Function: sub_00344458
// Address: 0x344458 - 0x344830
void sub_00344458_0x344458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344458_0x344458");
#endif

    switch (ctx->pc) {
        case 0x3444a0u: goto label_3444a0;
        case 0x3444a8u: goto label_3444a8;
        case 0x3444b0u: goto label_3444b0;
        case 0x3444b8u: goto label_3444b8;
        case 0x34453cu: goto label_34453c;
        case 0x344544u: goto label_344544;
        case 0x344550u: goto label_344550;
        case 0x344558u: goto label_344558;
        case 0x344560u: goto label_344560;
        case 0x34456cu: goto label_34456c;
        case 0x34457cu: goto label_34457c;
        case 0x3447ecu: goto label_3447ec;
        case 0x344804u: goto label_344804;
        default: break;
    }

    ctx->pc = 0x344458u;

    // 0x344458: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x344458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x34445c: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x34445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    // 0x344460: 0xffb601e0  sd          $s6, 0x1E0($sp)
    ctx->pc = 0x344460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 22));
    // 0x344464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344468: 0xffb201c0  sd          $s2, 0x1C0($sp)
    ctx->pc = 0x344468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 18));
    // 0x34446c: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x34446cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x344470: 0xffb301c8  sd          $s3, 0x1C8($sp)
    ctx->pc = 0x344470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 19));
    // 0x344474: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x344474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344478: 0xffb401d0  sd          $s4, 0x1D0($sp)
    ctx->pc = 0x344478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 20));
    // 0x34447c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x34447cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344480: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x344480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x344484: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x344484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344488: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x344488u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x34448c: 0xffb101b8  sd          $s1, 0x1B8($sp)
    ctx->pc = 0x34448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 17));
    // 0x344490: 0xffb501d8  sd          $s5, 0x1D8($sp)
    ctx->pc = 0x344490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 21));
    // 0x344494: 0xffbf01e8  sd          $ra, 0x1E8($sp)
    ctx->pc = 0x344494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 31));
    // 0x344498: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344498u;
    SET_GPR_U32(ctx, 31, 0x3444A0u);
    ctx->pc = 0x34449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344498u;
    // 0x34449c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344498u, 0x3444A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444A0u;
label_3444a0:
    // 0x3444a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3444A0u;
    SET_GPR_U32(ctx, 31, 0x3444A8u);
    ctx->pc = 0x3444A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444A0u;
    // 0x3444a4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3444A0u, 0x3444A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444A8u;
label_3444a8:
    // 0x3444a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3444A8u;
    SET_GPR_U32(ctx, 31, 0x3444B0u);
    ctx->pc = 0x3444ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444A8u;
    // 0x3444ac: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3444A8u, 0x3444B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444B0u;
label_3444b0:
    // 0x3444b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3444B0u;
    SET_GPR_U32(ctx, 31, 0x3444B8u);
    ctx->pc = 0x3444B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444B0u;
    // 0x3444b4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3444B0u, 0x3444B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444B8u;
label_3444b8:
    // 0x3444b8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3444b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3444bc: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x3444bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x3444c0: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x3444c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3444c4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3444c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x3444c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3444c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3444cc: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x3444ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x3444d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3444d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3444d4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3444d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3444d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3444d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3444dc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x3444dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x3444e0: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x3444e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x3444e4: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x3444e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x3444e8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3444e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3444ec: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x3444ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3444f0: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x3444f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3444f4: 0xafbd00e4  sw          $sp, 0xE4($sp)
    ctx->pc = 0x3444f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 29));
    // 0x3444f8: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x3444f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3444fc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3444fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x344500: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x344500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x344504: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x344504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x344508: 0xafb400e0  sw          $s4, 0xE0($sp)
    ctx->pc = 0x344508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 20));
    // 0x34450c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34450cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x344510: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x344510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344514: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x344514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x344518: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x344518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x34451c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x34451cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x344520: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x344520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x344524: 0x128000b7  beqz        $s4, . + 4 + (0xB7 << 2)
    ctx->pc = 0x344524u;
    {
        const bool branch_taken_0x344524 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x344528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344524u;
        // 0x344528: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344524) {
            ctx->pc = 0x344804u;
            goto label_344804;
        }
    }
    ctx->pc = 0x34452Cu;
    // 0x34452c: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x34452cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x344530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x344530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344534: 0xc0d0fec  jal         func_343FB0
    ctx->pc = 0x344534u;
    SET_GPR_U32(ctx, 31, 0x34453Cu);
    ctx->pc = 0x344538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344534u;
    // 0x344538: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343FB0u, 0x344534u, 0x34453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34453Cu;
label_34453c:
    // 0x34453c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x34453Cu;
    SET_GPR_U32(ctx, 31, 0x344544u);
    ctx->pc = 0x344540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34453Cu;
    // 0x344540: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x34453Cu, 0x344544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344544u;
label_344544:
    // 0x344544: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x344544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x344548: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x344548u;
    SET_GPR_U32(ctx, 31, 0x344550u);
    ctx->pc = 0x34454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344548u;
    // 0x34454c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x344548u, 0x344550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344550u;
label_344550:
    // 0x344550: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344550u;
    SET_GPR_U32(ctx, 31, 0x344558u);
    ctx->pc = 0x344554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344550u;
    // 0x344554: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344550u, 0x344558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344558u;
label_344558:
    // 0x344558: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x344558u;
    SET_GPR_U32(ctx, 31, 0x344560u);
    ctx->pc = 0x34455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344558u;
    // 0x34455c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x344558u, 0x344560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344560u;
label_344560:
    // 0x344560: 0x8e500100  lw          $s0, 0x100($s2)
    ctx->pc = 0x344560u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x344564: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x344564u;
    SET_GPR_U32(ctx, 31, 0x34456Cu);
    ctx->pc = 0x344568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344564u;
    // 0x344568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x344564u, 0x34456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34456Cu;
label_34456c:
    // 0x34456c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34456Cu;
    {
        const bool branch_taken_0x34456c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34456Cu;
        // 0x344570: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34456c) {
            ctx->pc = 0x344580u;
            goto label_344580;
        }
    }
    ctx->pc = 0x344574u;
    // 0x344574: 0xc0c4900  jal         func_312400
    ctx->pc = 0x344574u;
    SET_GPR_U32(ctx, 31, 0x34457Cu);
    ctx->pc = 0x344578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344574u;
    // 0x344578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x344574u, 0x34457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34457Cu;
label_34457c:
    // 0x34457c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x34457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_344580:
    // 0x344580: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x344580u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344584: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x344584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344588: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x344588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x34458c: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x34458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x344590: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x344590u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344594: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x344594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344598: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x344598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x34459c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x34459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3445a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3445a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3445a4: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x3445a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3445a8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3445a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3445ac: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x3445acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x3445b0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3445b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3445b4: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x3445b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3445b8: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x3445b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3445bc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3445bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3445c0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3445c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3445c4: 0x0  nop
    ctx->pc = 0x3445c4u;
    // NOP
    // 0x3445c8: 0x460031c3  div.s       $f7, $f6, $f0
    ctx->pc = 0x3445c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x3445cc: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x3445ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3445d0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x3445d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3445d4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3445d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3445d8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3445d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3445dc: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x3445dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3445e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3445e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3445e4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3445e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3445e8: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x3445e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3445ec: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x3445ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3445f0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3445f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3445f4: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3445f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3445f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3445f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3445fc: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x3445fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344600: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x344600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x344604: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x344604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344608: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x344608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34460c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34460cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344610: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x344610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344614: 0xc7a301a0  lwc1        $f3, 0x1A0($sp)
    ctx->pc = 0x344614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344618: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x344618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x34461c: 0xc7a001a4  lwc1        $f0, 0x1A4($sp)
    ctx->pc = 0x34461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344620: 0xc7a101a8  lwc1        $f1, 0x1A8($sp)
    ctx->pc = 0x344620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344624: 0xc7a201ac  lwc1        $f2, 0x1AC($sp)
    ctx->pc = 0x344624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344628: 0xe7a30190  swc1        $f3, 0x190($sp)
    ctx->pc = 0x344628u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x34462c: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x34462cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x344630: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x344630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x344634: 0xe7a2019c  swc1        $f2, 0x19C($sp)
    ctx->pc = 0x344634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x344638: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x344638u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34463c: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x34463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344640: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x344640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344644: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x344644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344648: 0xc7a40178  lwc1        $f4, 0x178($sp)
    ctx->pc = 0x344648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34464c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x34464cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x344650: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x344650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x344654: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x344654u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x344658: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x344658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34465c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x34465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344660: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x344660u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x344664: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x344664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344668: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x344668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34466c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x34466cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x344670: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x344670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344674: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x344674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344678: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x344678u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x34467c: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x34467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344680: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x344680u;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
    // 0x344684: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x344684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x344688: 0x0  nop
    ctx->pc = 0x344688u;
    // NOP
    // 0x34468c: 0x0  nop
    ctx->pc = 0x34468cu;
    // NOP
    // 0x344690: 0x460131c3  div.s       $f7, $f6, $f1
    ctx->pc = 0x344690u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x344694: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x344694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x344698: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x344698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x34469c: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x34469cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3446a0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x3446a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3446a4: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3446a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3446a8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3446a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3446ac: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x3446acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3446b0: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x3446b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3446b4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3446b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3446b8: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x3446b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x3446bc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3446bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3446c0: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x3446c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3446c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3446c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3446c8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x3446c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3446cc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3446ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3446d0: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x3446d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3446d4: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x3446d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3446d8: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x3446d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3446dc: 0xc7a201a8  lwc1        $f2, 0x1A8($sp)
    ctx->pc = 0x3446dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3446e0: 0xc7a301ac  lwc1        $f3, 0x1AC($sp)
    ctx->pc = 0x3446e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3446e4: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x3446e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x3446e8: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x3446e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x3446ec: 0xe7a20198  swc1        $f2, 0x198($sp)
    ctx->pc = 0x3446ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x3446f0: 0xe7a3019c  swc1        $f3, 0x19C($sp)
    ctx->pc = 0x3446f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x3446f4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3446f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3446f8: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x3446f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3446fc: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x3446fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344700: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x344700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344704: 0xc7a40178  lwc1        $f4, 0x178($sp)
    ctx->pc = 0x344704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x344708: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x344708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x34470c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x34470cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x344710: 0xe7a40114  swc1        $f4, 0x114($sp)
    ctx->pc = 0x344710u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x344714: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x344714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344718: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x344718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34471c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x34471cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x344720: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x344720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344724: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x344724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344728: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x344728u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x34472c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x34472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344730: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x344730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344734: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x344734u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x344738: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x344738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x34473c: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x34473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344740: 0xc7a20154  lwc1        $f2, 0x154($sp)
    ctx->pc = 0x344740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344744: 0xc7a30158  lwc1        $f3, 0x158($sp)
    ctx->pc = 0x344744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344748: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x344748u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x34474c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x34474cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x344750: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x344750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x344754: 0xe7a30118  swc1        $f3, 0x118($sp)
    ctx->pc = 0x344754u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x344758: 0xe7a50124  swc1        $f5, 0x124($sp)
    ctx->pc = 0x344758u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x34475c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x34475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344760: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x344760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344764: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x344764u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x344768: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x344768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34476c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x34476cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x344770: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x344770u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x344774: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x344774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344778: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x344778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34477c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x34477cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x344780: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x344780u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x344784: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x344784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x344788: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x344788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x34478c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x34478cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x344790: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x344790u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344794: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x344794u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x344798: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x344798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x34479c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x34479cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3447a0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x3447a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3447a4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x3447a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3447a8: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x3447a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3447ac: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x3447acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3447b0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x3447b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3447b4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3447b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3447b8: 0xc64000f0  lwc1        $f0, 0xF0($s2)
    ctx->pc = 0x3447b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3447bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3447bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3447c0: 0x0  nop
    ctx->pc = 0x3447c0u;
    // NOP
    // 0x3447c4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x3447C4u;
    {
        const bool branch_taken_0x3447c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3447C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3447C4u;
        // 0x3447c8: 0xdfb001b0  ld          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3447c4) {
            ctx->pc = 0x344808u;
            goto label_344808;
        }
    }
    ctx->pc = 0x3447CCu;
    // 0x3447cc: 0xc64000f4  lwc1        $f0, 0xF4($s2)
    ctx->pc = 0x3447ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3447d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3447d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3447d4: 0x0  nop
    ctx->pc = 0x3447d4u;
    // NOP
    // 0x3447d8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3447D8u;
    {
        const bool branch_taken_0x3447d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3447DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3447D8u;
        // 0x3447dc: 0xdfb101b8  ld          $s1, 0x1B8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3447d8) {
            ctx->pc = 0x34480Cu;
            goto label_34480c;
        }
    }
    ctx->pc = 0x3447E0u;
    // 0x3447e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3447e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447e4: 0xc0d102a  jal         func_3440A8
    ctx->pc = 0x3447E4u;
    SET_GPR_U32(ctx, 31, 0x3447ECu);
    ctx->pc = 0x3447E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447E4u;
    // 0x3447e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3440A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3440A8u, 0x3447E4u, 0x3447ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447ECu;
label_3447ec:
    // 0x3447ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3447ECu;
    {
        const bool branch_taken_0x3447ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3447F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3447ECu;
        // 0x3447f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3447ec) {
            ctx->pc = 0x344804u;
            goto label_344804;
        }
    }
    ctx->pc = 0x3447F4u;
    // 0x3447f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3447f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447f8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3447f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447fc: 0xc0d10ea  jal         func_3443A8
    ctx->pc = 0x3447FCu;
    SET_GPR_U32(ctx, 31, 0x344804u);
    ctx->pc = 0x344800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447FCu;
    // 0x344800: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3443A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3443A8u, 0x3447FCu, 0x344804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344804u;
label_344804:
    // 0x344804: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x344804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_344808:
    // 0x344808: 0xdfb101b8  ld          $s1, 0x1B8($sp)
    ctx->pc = 0x344808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_34480c:
    // 0x34480c: 0xdfb201c0  ld          $s2, 0x1C0($sp)
    ctx->pc = 0x34480cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x344810: 0xdfb301c8  ld          $s3, 0x1C8($sp)
    ctx->pc = 0x344810u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x344814: 0xdfb401d0  ld          $s4, 0x1D0($sp)
    ctx->pc = 0x344814u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x344818: 0xdfb501d8  ld          $s5, 0x1D8($sp)
    ctx->pc = 0x344818u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x34481c: 0xdfb601e0  ld          $s6, 0x1E0($sp)
    ctx->pc = 0x34481cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x344820: 0xdfbf01e8  ld          $ra, 0x1E8($sp)
    ctx->pc = 0x344820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x344824: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x344824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x344828: 0x3e00008  jr          $ra
    ctx->pc = 0x344828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344828u;
        // 0x34482c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344830u;
}
