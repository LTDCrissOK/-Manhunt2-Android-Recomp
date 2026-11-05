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

// Function: sub_001B22E0
// Address: 0x1b22e0 - 0x1b2428
void sub_001B22E0_0x1b22e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B22E0_0x1b22e0");
#endif

    switch (ctx->pc) {
        case 0x1b230cu: goto label_1b230c;
        case 0x1b2344u: goto label_1b2344;
        case 0x1b2374u: goto label_1b2374;
        case 0x1b238cu: goto label_1b238c;
        case 0x1b239cu: goto label_1b239c;
        case 0x1b23d4u: goto label_1b23d4;
        case 0x1b2408u: goto label_1b2408;
        default: break;
    }

    ctx->pc = 0x1b22e0u;

    // 0x1b22e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b22e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b22e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b22e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b22e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b22e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b22ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b22ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b22f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b22f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b22f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b22f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b22f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b22fc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b22fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b2300: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1b2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b2304: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B2304u;
    SET_GPR_U32(ctx, 31, 0x1B230Cu);
    ctx->pc = 0x1B2308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2304u;
    // 0x1b2308: 0x8c530110  lw          $s3, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B2304u, 0x1B230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B230Cu;
label_1b230c:
    // 0x1b230c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x1b230cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1b2310: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1B2310u;
    {
        const bool branch_taken_0x1b2310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2310u;
        // 0x1b2314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2310) {
            ctx->pc = 0x1B240Cu;
            goto label_1b240c;
        }
    }
    ctx->pc = 0x1B2318u;
    // 0x1b2318: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b2318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b231c: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1b231cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1b2320: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b2320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2324: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B2324u;
    {
        const bool branch_taken_0x1b2324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2324) {
            ctx->pc = 0x1B2328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2324u;
            // 0x1b2328: 0xc4810014  lwc1        $f1, 0x14($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B23A4u;
            goto label_1b23a4;
        }
    }
    ctx->pc = 0x1B232Cu;
    // 0x1b232c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b232cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b2330: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b2330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2334: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b2334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2338: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1b2338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b233c: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B233Cu;
    SET_GPR_U32(ctx, 31, 0x1B2344u);
    ctx->pc = 0x1B2340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B233Cu;
    // 0x1b2340: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B233Cu, 0x1B2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2344u;
label_1b2344:
    // 0x1b2344: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b2344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b2348: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1b2348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1b234c: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x1b234cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1b2350: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b2354: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1b2354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b2358: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b2358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b235c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b235cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2360: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b2360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b2364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2368: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b2368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b236c: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1B236Cu;
    SET_GPR_U32(ctx, 31, 0x1B2374u);
    ctx->pc = 0x1B2370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B236Cu;
    // 0x1b2370: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1B236Cu, 0x1B2374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2374u;
label_1b2374:
    // 0x1b2374: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b2374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b2378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b237c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1b237cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b2380: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1b2380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b2384: 0xc06c680  jal         func_1B1A00
    ctx->pc = 0x1B2384u;
    SET_GPR_U32(ctx, 31, 0x1B238Cu);
    ctx->pc = 0x1B2388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2384u;
    // 0x1b2388: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A00u, 0x1B2384u, 0x1B238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B238Cu;
label_1b238c:
    // 0x1b238c: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b238cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b2390: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b2390u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b2394: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B2394u;
    SET_GPR_U32(ctx, 31, 0x1B239Cu);
    ctx->pc = 0x1B2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2394u;
    // 0x1b2398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B2394u, 0x1B239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B239Cu;
label_1b239c:
    // 0x1b239c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B239Cu;
    {
        const bool branch_taken_0x1b239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B239Cu;
        // 0x1b23a0: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b239c) {
            ctx->pc = 0x1B23D8u;
            goto label_1b23d8;
        }
    }
    ctx->pc = 0x1B23A4u;
label_1b23a4:
    // 0x1b23a4: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1b23a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1b23a8: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b23a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1b23ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b23acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b23b0: 0x0  nop
    ctx->pc = 0x1b23b0u;
    // NOP
    // 0x1b23b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b23b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b23b8: 0x0  nop
    ctx->pc = 0x1b23b8u;
    // NOP
    // 0x1b23bc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1B23BCu;
    {
        const bool branch_taken_0x1b23bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b23bc) {
            ctx->pc = 0x1B23C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B23BCu;
            // 0x1b23c0: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B23D8u;
            goto label_1b23d8;
        }
    }
    ctx->pc = 0x1B23C4u;
    // 0x1b23c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b23c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b23c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b23c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b23cc: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B23CCu;
    SET_GPR_U32(ctx, 31, 0x1B23D4u);
    ctx->pc = 0x1B23D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23CCu;
    // 0x1b23d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B23CCu, 0x1B23D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23D4u;
label_1b23d4:
    // 0x1b23d4: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x1b23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1b23d8:
    // 0x1b23d8: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1b23d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b23dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b23dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b23e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B23E0u;
    {
        const bool branch_taken_0x1b23e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23E0u;
        // 0x1b23e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23e0) {
            ctx->pc = 0x1B240Cu;
            goto label_1b240c;
        }
    }
    ctx->pc = 0x1B23E8u;
    // 0x1b23e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b23ec: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x1b23ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1b23f0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1b23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b23f4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B23F4u;
    {
        const bool branch_taken_0x1b23f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23F4u;
        // 0x1b23f8: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b23f4) {
            ctx->pc = 0x1B240Cu;
            goto label_1b240c;
        }
    }
    ctx->pc = 0x1B23FCu;
    // 0x1b23fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b23fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2400: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1B2400u;
    SET_GPR_U32(ctx, 31, 0x1B2408u);
    ctx->pc = 0x1B2404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2400u;
    // 0x1b2404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1B2400u, 0x1B2408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2408u;
label_1b2408:
    // 0x1b2408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b240c:
    // 0x1b240c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b240cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2414: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b241c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2420: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2420u;
        // 0x1b2424: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2428u;
}
